from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
import tempfile
import zipfile
from dataclasses import dataclass
from pathlib import Path

try:
    import lief
except ImportError:
    lief = None


ARM64_GAME_LIB = "lib/arm64-v8a/libGameKindred.so"
ARM64_REAL_GAME_LIB = "lib/arm64-v8a/libGameKindred_real.so"
ARM64_HOOK_LIB = "lib/arm64-v8a/libvg_unlock.so"
UNSAFE_DT_NEEDED_FLAG = "--allow-unsafe-dt-needed"
DEBUG_ALIAS = "androiddebugkey"
DEBUG_PASS = "android"
DEBUG_DNAME = "CN=Android Debug,O=Android,C=US"


@dataclass
class ToolPaths:
    zipalign: Path | None
    apksigner: Path | None
    keytool: Path | None


def fail(message: str) -> int:
    print(f"ERROR: {message}", file=sys.stderr)
    return 1


def parse_args() -> argparse.Namespace:
    script_dir = Path(__file__).resolve().parent
    parser = argparse.ArgumentParser(
        description=(
            "Patch a Vainglory APK or XAPK so libvg_unlock.so loads through either "
            "a loader shim or a legacy DT_NEEDED rewrite, without editing smali. "
            "The loader shim is the supported Android path."
        )
    )
    parser.add_argument("input", type=Path, help="Path to the source .apk or .xapk")
    parser.add_argument(
        "--lib",
        dest="hook_lib",
        type=Path,
        default=script_dir / "libvg_unlock.so",
        help="Path to the built libvg_unlock.so",
    )
    parser.add_argument(
        "--loader-lib",
        dest="loader_lib",
        type=Path,
        default=script_dir / "libvg_loader.so",
        help="Path to the built loader shim used for loader-shim injection",
    )
    parser.add_argument(
        "--injection-mode",
        choices=("loader-shim", "dt-needed"),
        default="loader-shim",
        help=(
            "How to inject libvg_unlock.so into the game startup path. "
            "Use loader-shim for supported Android builds; dt-needed is legacy/unsafe."
        ),
    )
    parser.add_argument(
        UNSAFE_DT_NEEDED_FLAG,
        action="store_true",
        help=(
            "Allow the legacy DT_NEEDED injection path for comparison testing only. "
            "This path is blocked by default because it is known to crash around launch "
            "on some Android devices."
        ),
    )
    parser.add_argument(
        "--out-dir",
        type=Path,
        default=script_dir / "out",
        help="Directory for patched artifacts",
    )
    parser.add_argument(
        "--apk-entry",
        help="Explicit embedded APK entry name when patching an XAPK",
    )
    parser.add_argument(
        "--sdk-root",
        type=Path,
        help="Android SDK root used to auto-detect zipalign and apksigner",
    )
    parser.add_argument(
        "--no-zipalign",
        action="store_true",
        help="Skip zipalign even if the tool is available",
    )
    parser.add_argument(
        "--sign-debug",
        action="store_true",
        help="Debug-sign the patched APK with ~/.android/debug.keystore semantics",
    )
    parser.add_argument(
        "--keep-work",
        action="store_true",
        help="Keep the temporary working directory for inspection",
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="Inspect the package layout and exit without writing output",
    )
    return parser.parse_args()


def find_sdk_root(explicit: Path | None) -> Path | None:
    candidates = []
    if explicit:
        candidates.append(explicit)

    for env_name in ("ANDROID_SDK_ROOT", "ANDROID_HOME"):
        value = os.environ.get(env_name)
        if value:
            candidates.append(Path(value))

    local_app_data = os.environ.get("LOCALAPPDATA")
    if local_app_data:
        candidates.append(Path(local_app_data) / "Android" / "Sdk")

    candidates.append(Path.home() / "Library" / "Android" / "sdk")

    for candidate in candidates:
        if candidate and candidate.exists():
            return candidate
    return None


def find_sdk_tool(sdk_root: Path | None, tool_names: tuple[str, ...]) -> Path | None:
    for tool_name in tool_names:
        resolved = shutil.which(tool_name)
        if resolved:
            return Path(resolved)

    if sdk_root is None:
        return None

    build_tools_root = sdk_root / "build-tools"
    if not build_tools_root.exists():
        return None

    for version_dir in sorted(build_tools_root.iterdir(), key=lambda path: path.name, reverse=True):
        for tool_name in tool_names:
            candidate = version_dir / tool_name
            if candidate.exists():
                return candidate

    return None


def detect_tools(sdk_root: Path | None) -> ToolPaths:
    keytool_path = shutil.which("keytool")
    return ToolPaths(
        zipalign=find_sdk_tool(sdk_root, ("zipalign", "zipalign.exe")),
        apksigner=find_sdk_tool(sdk_root, ("apksigner", "apksigner.bat", "apksigner.cmd")),
        keytool=Path(keytool_path) if keytool_path else None,
    )


def run_checked(command: list[str]) -> None:
    subprocess.run(command, check=True)


def clone_zip_info(info: zipfile.ZipInfo) -> zipfile.ZipInfo:
    clone = zipfile.ZipInfo(info.filename, date_time=info.date_time)
    clone.comment = info.comment
    clone.extra = info.extra
    clone.internal_attr = info.internal_attr
    clone.external_attr = info.external_attr
    clone.create_system = info.create_system
    clone.create_version = info.create_version
    clone.extract_version = info.extract_version
    clone.flag_bits = info.flag_bits
    clone.compress_type = info.compress_type
    return clone


def write_zip_member(
    zf: zipfile.ZipFile,
    info: zipfile.ZipInfo,
    data: bytes,
    compress_type: int | None = None,
) -> None:
    zf.writestr(clone_zip_info(info), data, compress_type=info.compress_type if compress_type is None else compress_type)


def locate_apk_entry(xapk_path: Path, requested_entry: str | None) -> str:
    with zipfile.ZipFile(xapk_path) as zf:
        apk_entries = [info.filename for info in zf.infolist() if info.filename.lower().endswith(".apk")]

    if requested_entry:
        if requested_entry not in apk_entries:
            raise ValueError(f"APK entry {requested_entry!r} not found in XAPK")
        return requested_entry

    if len(apk_entries) != 1:
        raise ValueError(f"Expected exactly one APK entry in {xapk_path}, found {len(apk_entries)}")

    return apk_entries[0]


def extract_embedded_apk(xapk_path: Path, apk_entry: str, out_path: Path) -> None:
    with zipfile.ZipFile(xapk_path) as zf:
        out_path.write_bytes(zf.read(apk_entry))


def patch_game_library(src_path: Path, dst_path: Path, dependency_name: str) -> None:
    if lief is None:
        raise RuntimeError("Missing dependency 'lief'. Install it with: pip install lief")

    binary = lief.parse(str(src_path))
    if binary is None:
        raise RuntimeError(f"Failed to parse {src_path}")

    libraries = {str(name) for name in binary.libraries}
    if dependency_name not in libraries:
        binary.add_library(dependency_name)

    binary.write(str(dst_path))


def ensure_zip_entry(
    dst: zipfile.ZipFile,
    entry_name: str,
    data: bytes,
    compress_type: int = zipfile.ZIP_STORED,
) -> None:
    info = zipfile.ZipInfo(entry_name)
    info.compress_type = compress_type
    info.external_attr = 0o100644 << 16
    info.create_system = 3
    dst.writestr(info, data, compress_type=compress_type)


def rewrite_apk_dt_needed(src_apk: Path, dst_apk: Path, patched_game_lib: Path, hook_lib: Path) -> None:
    with zipfile.ZipFile(src_apk) as src, zipfile.ZipFile(dst_apk, "w") as dst:
        seen_hook_lib = False
        for info in src.infolist():
            if info.filename == ARM64_GAME_LIB:
                write_zip_member(dst, info, patched_game_lib.read_bytes())
                continue

            if info.filename == ARM64_HOOK_LIB:
                seen_hook_lib = True
                write_zip_member(dst, info, hook_lib.read_bytes(), compress_type=zipfile.ZIP_STORED)
                continue

            write_zip_member(dst, info, src.read(info.filename))

        if not seen_hook_lib:
            ensure_zip_entry(dst, ARM64_HOOK_LIB, hook_lib.read_bytes())


def rewrite_apk_loader_shim(src_apk: Path, dst_apk: Path, loader_lib: Path, hook_lib: Path) -> None:
    with zipfile.ZipFile(src_apk) as src, zipfile.ZipFile(dst_apk, "w") as dst:
        seen_hook_lib = False
        saw_game_lib = False
        loader_bytes = loader_lib.read_bytes()
        hook_bytes = hook_lib.read_bytes()

        for info in src.infolist():
            if info.filename == ARM64_REAL_GAME_LIB:
                continue

            if info.filename == ARM64_GAME_LIB:
                original_bytes = src.read(info.filename)
                original_info = clone_zip_info(info)
                original_info.filename = ARM64_REAL_GAME_LIB
                dst.writestr(original_info, original_bytes, compress_type=original_info.compress_type)

                loader_info = clone_zip_info(info)
                loader_info.filename = ARM64_GAME_LIB
                dst.writestr(loader_info, loader_bytes, compress_type=loader_info.compress_type)
                saw_game_lib = True
                continue

            if info.filename == ARM64_HOOK_LIB:
                seen_hook_lib = True
                write_zip_member(dst, info, hook_bytes, compress_type=zipfile.ZIP_STORED)
                continue

            write_zip_member(dst, info, src.read(info.filename))

        if not saw_game_lib:
            raise RuntimeError(f"{ARM64_GAME_LIB} not found in {src_apk}")

        if not seen_hook_lib:
            ensure_zip_entry(dst, ARM64_HOOK_LIB, hook_bytes)


def zipalign_apk(zipalign_path: Path, src_apk: Path, dst_apk: Path) -> None:
    run_checked([str(zipalign_path), "-p", "-f", "4", str(src_apk), str(dst_apk)])


def ensure_debug_keystore(tools: ToolPaths, keystore_path: Path) -> Path:
    if keystore_path.exists():
        return keystore_path

    if tools.keytool is None:
        raise RuntimeError("keytool not found; cannot create a debug keystore")

    keystore_path.parent.mkdir(parents=True, exist_ok=True)
    run_checked([
        str(tools.keytool),
        "-genkeypair",
        "-keystore", str(keystore_path),
        "-storepass", DEBUG_PASS,
        "-alias", DEBUG_ALIAS,
        "-keypass", DEBUG_PASS,
        "-keyalg", "RSA",
        "-keysize", "2048",
        "-validity", "10000",
        "-dname", DEBUG_DNAME,
    ])
    return keystore_path


def sign_apk_debug(tools: ToolPaths, src_apk: Path, dst_apk: Path) -> None:
    if tools.apksigner is None:
        raise RuntimeError("apksigner not found; cannot debug-sign the patched APK")

    debug_keystore = ensure_debug_keystore(tools, Path.home() / ".android" / "debug.keystore")
    run_checked([
        str(tools.apksigner),
        "sign",
        "--ks", str(debug_keystore),
        "--ks-key-alias", DEBUG_ALIAS,
        "--ks-pass", f"pass:{DEBUG_PASS}",
        "--key-pass", f"pass:{DEBUG_PASS}",
        "--out", str(dst_apk),
        str(src_apk),
    ])
    run_checked([str(tools.apksigner), "verify", "--verbose", str(dst_apk)])


def patch_manifest_json(raw_manifest: bytes, original_apk_size: int, patched_apk_size: int) -> bytes:
    manifest = json.loads(raw_manifest.decode("utf-8"))
    if "total_size" in manifest:
        manifest["total_size"] = int(manifest["total_size"]) - original_apk_size + patched_apk_size
    return json.dumps(manifest, separators=(",", ":")).encode("utf-8")


def rebuild_xapk(src_xapk: Path, dst_xapk: Path, apk_entry: str, patched_apk: Path) -> None:
    patched_apk_bytes = patched_apk.read_bytes()

    with zipfile.ZipFile(src_xapk) as src, zipfile.ZipFile(dst_xapk, "w") as dst:
        apk_info = src.getinfo(apk_entry)
        for info in src.infolist():
            if info.filename == apk_entry:
                write_zip_member(dst, info, patched_apk_bytes)
                continue

            if info.filename == "manifest.json":
                manifest_bytes = patch_manifest_json(src.read(info.filename), apk_info.file_size, len(patched_apk_bytes))
                write_zip_member(dst, info, manifest_bytes)
                continue

            write_zip_member(dst, info, src.read(info.filename))


def inspect_apk(apk_path: Path) -> None:
    with zipfile.ZipFile(apk_path) as zf:
        names = {info.filename for info in zf.infolist()}
        if ARM64_GAME_LIB in names and ARM64_REAL_GAME_LIB in names and ARM64_HOOK_LIB in names:
            detected_mode = "loader-shim"
        elif ARM64_GAME_LIB in names and ARM64_HOOK_LIB in names and ARM64_REAL_GAME_LIB not in names:
            detected_mode = "dt-needed-style or partial arm64 patch"
        elif ARM64_GAME_LIB in names and ARM64_REAL_GAME_LIB not in names and ARM64_HOOK_LIB not in names:
            detected_mode = "stock or unpatched"
        else:
            detected_mode = "custom or unknown"

        print(f"APK: {apk_path}")
        print(f"  detected arm64 mode: {detected_mode}")
        print(f"  contains {ARM64_GAME_LIB}: {ARM64_GAME_LIB in names}")
        print(f"  contains {ARM64_REAL_GAME_LIB}: {ARM64_REAL_GAME_LIB in names}")
        print(f"  contains {ARM64_HOOK_LIB}: {ARM64_HOOK_LIB in names}")


def main() -> int:
    args = parse_args()
    input_path = args.input.resolve()
    hook_lib = args.hook_lib.resolve()
    loader_lib = args.loader_lib.resolve()
    out_dir = args.out_dir.resolve()
    sdk_root = find_sdk_root(args.sdk_root.resolve() if args.sdk_root else None)
    tools = detect_tools(sdk_root)

    if not input_path.exists():
        return fail(f"input package does not exist: {input_path}")
    if not hook_lib.exists() and not args.dry_run:
        return fail(f"hook library does not exist: {hook_lib}")
    if args.injection_mode == "loader-shim" and not loader_lib.exists() and not args.dry_run:
        return fail(f"loader shim does not exist: {loader_lib}")
    if args.injection_mode == "dt-needed" and not args.allow_unsafe_dt_needed:
        return fail(
            "dt-needed injection is blocked by default on Android because the ELF rewrite is "
            "known to crash around launch on some devices. Re-run with "
            f"{UNSAFE_DT_NEEDED_FLAG} only if you are intentionally doing comparison testing."
        )
    if input_path.suffix.lower() not in {".apk", ".xapk"}:
        return fail("input must be an .apk or .xapk")

    work_root = Path(tempfile.mkdtemp(prefix="vg_unlock_android_"))

    try:
        apk_entry = None
        source_apk = input_path

        if input_path.suffix.lower() == ".xapk":
            apk_entry = locate_apk_entry(input_path, args.apk_entry)
            source_apk = work_root / Path(apk_entry).name
            extract_embedded_apk(input_path, apk_entry, source_apk)

        inspect_apk(source_apk)
        print(f"zipalign: {tools.zipalign or 'not found'}")
        print(f"apksigner: {tools.apksigner or 'not found'}")
        print(f"keytool: {tools.keytool or 'not found'}")

        if args.dry_run:
            return 0

        out_dir.mkdir(parents=True, exist_ok=True)

        rewritten_apk = work_root / f"{source_apk.stem}.rewritten.apk"
        if args.injection_mode == "dt-needed":
            with zipfile.ZipFile(source_apk) as zf:
                if ARM64_GAME_LIB not in {info.filename for info in zf.infolist()}:
                    return fail(f"{ARM64_GAME_LIB} not found in {source_apk}")
                zf.extract(ARM64_GAME_LIB, work_root)

            game_lib_path = work_root / ARM64_GAME_LIB
            patched_game_lib_path = work_root / "libGameKindred.patched.so"
            patch_game_library(game_lib_path, patched_game_lib_path, Path(ARM64_HOOK_LIB).name)
            rewrite_apk_dt_needed(source_apk, rewritten_apk, patched_game_lib_path, hook_lib)
        else:
            rewrite_apk_loader_shim(source_apk, rewritten_apk, loader_lib, hook_lib)

        final_apk = out_dir / f"{source_apk.stem}.patched.apk"
        current_apk = rewritten_apk

        if tools.zipalign is not None and not args.no_zipalign:
            aligned_apk = work_root / f"{source_apk.stem}.aligned.apk"
            zipalign_apk(tools.zipalign, current_apk, aligned_apk)
            current_apk = aligned_apk

        if args.sign_debug:
            sign_apk_debug(tools, current_apk, final_apk)
        else:
            shutil.copy2(current_apk, final_apk)

        print(f"Patched APK: {final_apk}")
        if args.injection_mode == "loader-shim":
            print("arm64 note: the stock libGameKindred.so is renamed to libGameKindred_real.so and a loader shim is installed in its place.")
        else:
            print(
                "arm64 note: using the legacy DT_NEEDED rewrite path for comparison testing. "
                "This path is known to crash around launch on some Android devices. Only the "
                "arm64-v8a libGameKindred.so is patched; 32-bit devices will still run the stock library."
            )

        if input_path.suffix.lower() == ".xapk" and apk_entry is not None:
            final_xapk = out_dir / f"{input_path.stem}.patched.xapk"
            rebuild_xapk(input_path, final_xapk, apk_entry, final_apk)
            print(f"Patched XAPK: {final_xapk}")

        return 0
    except subprocess.CalledProcessError as exc:
        return fail(f"command failed with exit code {exc.returncode}: {' '.join(exc.cmd)}")
    except Exception as exc:
        return fail(str(exc))
    finally:
        if args.keep_work:
            print(f"Kept work directory: {work_root}")
        else:
            shutil.rmtree(work_root, ignore_errors=True)


if __name__ == "__main__":
    raise SystemExit(main())