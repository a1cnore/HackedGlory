param(
    [string]$NdkPath,
    [string]$ApiLevel = "21",
    [string]$Source = "vg_unlock_android.c",
    [string]$Output = "libvg_unlock.so",
    [string]$LoaderSource = "vg_gamekindred_loader.c",
    [string]$LoaderAsmSource = "vg_gamekindred_loader_trampolines.S",
    [string]$LoaderOutput = "libvg_loader.so",
    [switch]$ExperimentalHooks,
    [switch]$ParserPatches,
    [switch]$ProfileRedirects,
    [switch]$GuestBypass,
    [switch]$NoVisualToast,
    [switch]$Clean
)

$ErrorActionPreference = "Stop"

function Get-LatestDirectory {
    param([string]$Path)

    if (-not (Test-Path $Path)) {
        return $null
    }

    return Get-ChildItem -Path $Path -Directory |
        Sort-Object Name -Descending |
        Select-Object -First 1
}

function Resolve-NdkPath {
    param([string]$Override)

    if ($Override) {
        return $Override
    }

    $envCandidates = @(
        $env:ANDROID_NDK_HOME,
        $env:NDK_HOME
    ) | Where-Object { $_ }

    foreach ($candidate in $envCandidates) {
        if (Test-Path $candidate) {
            return $candidate
        }
    }

    $sdkRoots = @(
        $env:ANDROID_SDK_ROOT,
        $env:ANDROID_HOME,
        (Join-Path $env:LOCALAPPDATA 'Android\Sdk')
    ) | Where-Object { $_ }

    foreach ($sdkRoot in $sdkRoots) {
        $latest = Get-LatestDirectory (Join-Path $sdkRoot 'ndk')
        if ($latest) {
            return $latest.FullName
        }
    }

    throw 'Android NDK not found. Set -NdkPath, ANDROID_NDK_HOME, or NDK_HOME.'
}

$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$outputPath = Join-Path $scriptDir $Output
$loaderOutputPath = Join-Path $scriptDir $LoaderOutput

if ($Clean) {
    if (Test-Path $outputPath) {
        Remove-Item $outputPath -Force
    }
    if (Test-Path $loaderOutputPath) {
        Remove-Item $loaderOutputPath -Force
    }
    Write-Host 'Cleaned.'
    exit 0
}

$resolvedNdk = Resolve-NdkPath $NdkPath
$toolchain = Join-Path $resolvedNdk 'toolchains\llvm\prebuilt\windows-x86_64\bin'

$compiler = Join-Path $toolchain ("aarch64-linux-android{0}-clang.cmd" -f $ApiLevel)
if (-not (Test-Path $compiler)) {
    $compiler = Join-Path $toolchain ("aarch64-linux-android{0}-clang.exe" -f $ApiLevel)
}

$strip = Join-Path $toolchain 'llvm-strip.exe'

if (-not (Test-Path $compiler)) {
    throw "NDK compiler not found at $compiler"
}

function Build-SharedLibrary {
    param(
        [string]$Compiler,
        [string]$StripTool,
        [string]$WorkingDirectory,
        [string]$OutputFile,
        [string]$Soname,
        [string[]]$SourceFiles,
        [string[]]$ExtraArgs
    )

    $args = @(
        '-shared',
        '-fPIC',
        '-O2',
        '-Wall'
    ) + $ExtraArgs + @(
        '-o', $OutputFile
    ) + $SourceFiles + @(
        '-llog',
        '-ldl',
        "-Wl,-soname,$Soname"
    )

    & $Compiler @args
    if ($LASTEXITCODE -ne 0) {
        throw "Compile failed with exit code $LASTEXITCODE"
    }

    if (Test-Path $StripTool) {
        & $StripTool $OutputFile
        if ($LASTEXITCODE -ne 0) {
            throw "Strip failed with exit code $LASTEXITCODE"
        }
    }
}

$compileArgs = @(
)

if ($ExperimentalHooks) {
    $compileArgs += '-DVG_ENABLE_EXPERIMENTAL_HOOKS=1'
}

if ($ParserPatches) {
    $compileArgs += '-DVG_ENABLE_PARSER_PATCHES=1'
}

if ($ProfileRedirects) {
    $compileArgs += '-DVG_ENABLE_PROFILE_REDIRECTS=1'
}

if ($GuestBypass) {
    $compileArgs += '-DVG_ENABLE_GUEST_BYPASS=1'
}

$compileArgs += @(
)

$loaderCompileArgs = @()

if ($NoVisualToast) {
    $loaderCompileArgs += '-DVG_ENABLE_VISUAL_TOAST=0'
}

Push-Location $scriptDir
try {
    Write-Host "Building $Output for arm64-v8a..."
    Build-SharedLibrary -Compiler $compiler -StripTool $strip -WorkingDirectory $scriptDir -OutputFile $Output -Soname 'libvg_unlock.so' -SourceFiles @($Source) -ExtraArgs $compileArgs

    Write-Host "Building $LoaderOutput for arm64-v8a..."
    # Deliberately give the loader shim a distinct DT_SONAME so bionic's
    # soname-based dlopen() dedup doesn't return the shim's own handle when
    # it later dlopen()s libGameKindred_real.so (which still ships with
    # DT_SONAME "libGameKindred.so"). Without a distinct shim SONAME, the
    # real lib's dlsym("JNI_OnLoad") resolves back to the shim's JNI_OnLoad
    # and the process blows its stack via unbounded recursion.
    Build-SharedLibrary -Compiler $compiler -StripTool $strip -WorkingDirectory $scriptDir -OutputFile $LoaderOutput -Soname 'libvgshim_GameKindred.so' -SourceFiles @($LoaderSource, $LoaderAsmSource) -ExtraArgs $loaderCompileArgs
}
finally {
    Pop-Location
}

$size = (Get-Item $outputPath).Length
$loaderSize = (Get-Item $loaderOutputPath).Length
Write-Host "Built: $Output ($size bytes)"
Write-Host "Built: $LoaderOutput ($loaderSize bytes)"
Write-Host ''
Write-Host 'Next steps:'
Write-Host '  1. The default Android build leaves all patch groups off; enable them explicitly only for targeted testing.'
Write-Host '  2. The loader shim now shows a toast on launch by default so you can visually confirm injection; pass -NoVisualToast to suppress it.'
Write-Host '  3. Run patch_xapk.py to inject via the loader shim path; the legacy DT_NEEDED path is blocked unless you explicitly pass --allow-unsafe-dt-needed for comparison testing.'
Write-Host '  4. Use --sign-debug in patch_xapk.py if you want a debug-signed APK/XAPK.'