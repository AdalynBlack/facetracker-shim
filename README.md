# Facetracker Shim
A simple shim to insert `--use-dshowcapture 0` into the launch arguments of OpenSeeFace. Useful for allowing OpenSeeFace to run in wine for VTubing in apps like Warudo and VSeeFace

## Usage
1. Find `facetracker.exe` in the program of choice
    - Warudo: `Warudo/Warudo_Data/StreamingAssets/Binaries/OpenSeeFace/Binary/`
    - VSeeFace: `VSeeFace/VSeeFace_Data/StreamingAssets/Binary/`
    - For other apps, try using `find -name facetracker.exe` to locate the OpenSeeFace exe
2. Rename `facetracker.exe` to `facetracker.exe.real`
    - Some apps may pass different arguments that will change what this file needs to be renamed to
    - For VSeeFace, rename to `facetracker.real` instead
3. Copy `facetracker-shim.exe` and rename it to `facetracker.exe`
    - `facetracker-shim.exe` can be found in the [Releases](https://github.com/AdalynBlack/facetracker-shim/releases) section

## Known Issues
- Does not work with VTubeStudio
- May not shut down correctly when the app attempts to close it
