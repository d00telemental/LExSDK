# LE 1/2 SDK

A collection of SDK-like projections of the Legendary Edition's codebase accessible to UnrealScript for **Mass Effect 1 and 2**. Built with a version of UE3 SDK generator by TheFeckless, adapted by me to support 64-bit executables, multiple translation units, and BioWare's in-house SFXName system which replaces/extends the FName system.

## Game versions

Executable versions the SDKs were built for - they need to be updated when the next patch drops.

- **LE1** - `2.0.0.48602`
- **LE2** - `2.0.0.48602`

## How to use

- Put the directory somewhere in your code's directory.
- Include `SdkHeaders.h` in your one and only translation unit.
- Before using any part of the SDK, run `SDKInitializer::Instance()` and make sure that the pointers returned by that object's `GetBioNamePools()` and `GetObjects()` are valid and make sense.

## Credits

```
UE3 SDK Generator: TheFeckless
```

Their original credits are:

```
Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
Thanks: HOOAH07, lowHertz
```
