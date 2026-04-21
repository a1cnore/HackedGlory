# vg_unlock_android

Android arm64 port of the Vainglory unlock library.

## What is safe today

The only verified-safe Android default today is the injected no-op control build through the loader-shim path:

- `libGameKindred.so` is replaced with a shim that loads `libGameKindred_real.so` and then `libvg_unlock.so`
- exported `Java_*` JNI entrypoints are forwarded through the shim so Java name-based native resolution still works
- constructor logging runs
- no runtime patch groups are enabled unless you opt in explicitly

Device-specific caveat discovered later:

- on Xaomi Pad 6 8GB / Xiaomi 23043RP34G, the old `DT_NEEDED` rewrite still segfaults a couple of seconds after launch even when `libvg_unlock.so` is a true no-op control build that returns immediately from its constructor
- the same tablet stays alive on the untouched stock APK + OBB, so that crash is attributed to the patched `libGameKindred.so` binary rewrite itself rather than to the `libvg_unlock.so` constructor or any hook family
- the loader-shim path avoids that native crash on the same tablet and now also preserves the app's exported `Java_*` JNI methods
- on Honor Magic 6 Pro / BVL-N49, the current loader-shim control build cold-launches cleanly, `vg_unlock` reports the control-build path, and the app advances to resumed `NuoActivityGame`

On the tested Android 16 Honor device, each currently implemented non-experimental patch family exits back to the launcher on its own:

- Layer 1 parser replacements
- Layer 5 profile opener redirection
- Layer 7 guest gate bypass

Those failures do not currently produce a native tombstone or `Fatal signal`, so they are treated as Android-unsafe until re-verified.

Everything that still writes `self+0xXXXX` fields remains compiled out by default because the Android CE layout differs from iOS and several of those offsets are confirmed wrong.

## Build

Windows PowerShell:

```powershell
cd mitm/vg_unlock_android
./build.ps1
```

Enable individual patch groups only when you are actively testing them:

```powershell
./build.ps1 -ParserPatches
./build.ps1 -ProfileRedirects
./build.ps1 -GuestBypass
```

macOS or Linux:

```sh
cd mitm/vg_unlock_android
./build.sh
```

Enable individual patch groups only when you are actively testing them:

```sh
./build.sh --parser-patches
./build.sh --profile-redirects
./build.sh --guest-bypass
```

If you want to experiment with the unverified Android hooks anyway:

```powershell
./build.ps1 -ExperimentalHooks -ParserPatches -ProfileRedirects -GuestBypass
```

```sh
./build.sh --experimental-hooks --parser-patches --profile-redirects --guest-bypass
```

## Patch the package

Install the one Python dependency in the repo venv:

```powershell
d:/HackedGlory/.venv/Scripts/python.exe -m pip install -r mitm/vg_unlock_android/requirements.txt
```

Patch the provided XAPK:

```powershell
d:/HackedGlory/.venv/Scripts/python.exe mitm/vg_unlock_android/patch_xapk.py "C:\Users\nilas\Downloads\Vainglory_4.13.4 (147219)_APKPure.xapk" --sign-debug
```

That command uses the supported Android loader-shim path.

What the patcher does by default:

- extracts the embedded APK from the XAPK
- renames the stock `lib/arm64-v8a/libGameKindred.so` to `libGameKindred_real.so`
- installs a small shim as `lib/arm64-v8a/libGameKindred.so`
- has the shim load both `libGameKindred_real.so` and `libvg_unlock.so`
- shows a short Android toast when the shim activates so you can visually confirm the injected build is running
- forwards the real library's exported `Java_*` JNI symbols through the shim
- adds `lib/arm64-v8a/libvg_unlock.so` to the APK
- optionally runs `zipalign`
- optionally debug-signs the APK with `apksigner`
- rebuilds a patched XAPK alongside the patched APK

This avoids smali edits entirely. The app still loads `GameKindred` from Java as usual, but the shim now controls the native load order safely on devices where the ELF `DT_NEEDED` rewrite crashes.

If you do not want the visual confirmation toast during launch, build the loader shim with `-NoVisualToast` on PowerShell or `--no-visual-toast` on `build.sh`.

If you explicitly want the older injection mode for comparison testing, pass both `--injection-mode dt-needed` and `--allow-unsafe-dt-needed` to `patch_xapk.py`.

That legacy ELF rewrite path is blocked by default because it is known to crash around launch on some Android devices.

## Suppress the Google Play Games sign-in prompt

On devices signed into Google Play Games, Vainglory (stock and patched) opens a "Select a Play Games profile" dialog on every cold launch. The trigger is `NuoGooglePlayApiImpl.onCreate` → `GoogleApiClient(Games.API).connect()`; GmsCore then shows `SignInActivity` in the game's task.

Pass `--disable-gpgs-prompt` to `patch_xapk.py` to skip that flow. The patcher rewrites one smali instruction so `onCreate` returns immediately; `mEnabled` stays false, which makes every public method on the class (`connect`, `disconnect`, `forceRequestLogin`, `onActivityResult`, …) no-op cleanly. Achievements and leaderboards stop working — the sign-in prompt stops with them.

```powershell
d:/HackedGlory/.venv/Scripts/python.exe mitm/vg_unlock_android/patch_xapk.py `
  "C:\Users\nilas\Downloads\Vainglory_4.13.4 (147219)_APKPure.xapk" `
  --sign-debug --disable-gpgs-prompt --apktool mitm/vg_unlock_android/apktool.jar
```

The flag requires `apktool.jar` (tested with 2.9.3) and a JDK on `PATH`. Download from https://github.com/iBotPeaches/Apktool/releases and drop it next to `patch_xapk.py`, or pass `--apktool <path>`. If you do not set the flag, the patcher never touches smali and the stock behavior is preserved.

Known-good on `com.superevilmegacorp.game` 4.13.4 (147219). If Super Evil ever reshipped the APK the patcher will abort with a clear error instead of producing a broken build.

## Remaining Android RE blockers

These still need Ghidra verification before the experimental hook set is safe:

- `FPTR_NAV_REFRESH`
- `FPTR_SET_TAB_VISIBLE`
- `FPTR_TROPHY_PANEL`
- `FPTR_PROFILE_LAYOUT`
- `FPTR_PROFILE_BODY`
- `FPTR_PROFILE_LOADER`
- `FPTR_SEASON_HANDLER`
- `FPTR_DATA_FETCH`
- `FPTR_MARKET_TABS`
- Android replacements for the iOS field offsets used in profile, trophy, and sidebar hooks

Known confirmed layout differences already found:

- guest account string `+0x2bd0 -> +0x2ba0`
- academy alloc `0x9ca0 -> 0x9cc0`
- full profile alloc `0x28848 -> 0x288f0`
- trophy flags `+0x18f20/+0x18f21` are not valid Android matches
- `setTabVisible` field `+0x2c2c` is not a valid Android match