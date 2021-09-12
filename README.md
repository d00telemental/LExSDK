# Legendary Edition SDK

A collection of SDK-like projections of the Legendary Edition's codebase accessible to UnrealScript for **Mass Effect 1, 2 and 3**. Built with a version of UE3 SDK generator by TheFeckless, adapted by me to support 64-bit executables, multiple translation units, and BioWare's in-house SFXName system which replaces/extends the FName system.

## Game versions

Executable versions the SDKs were built for - they need to be updated when the next patch drops.

- **LE1** - `2.0.0.48602`
- **LE2** - `2.0.0.48602`
- **LE3** - `2.0.0.48602`

## How to use

- Create a buildable SDK library.
  - Create a VS C++ project for the SDK and ensure the following settings:
    - General / Configuration Type = **Static Library (.lib)**.
    - General / C++ Language Standard = **ISO C++17 Standard (/std:c++17)**.
    - C/C++ / General / Multi-processor Compilation = **Yes (/MP)**.
    - C/C++ / Language / Conformance mode = **No (/permissive)**.
    - Command Line / Additional Options = **/bigobj**.
  - Add `.cpp` SDK files into Sources so that VS compiles them, and `.h` SDK files into Headers.
    - Don't add any of `PlotManagerDLC_*.*` files, as they duplicate/override existing classes, which is impossible in C++.
- Create an ASI project.
  - Create another VS C++ project, for your ASI, with the same settings except for:
    - General / Configuration Type = **Dynamic Library (.dll)**.
    - *(recommended)* Advanced / Target File Extension = **.asi**.
  - Right click on the new project, add reference to the library project above.
  - Add your plugin files, starting with an entry .cpp file which will either use SPI plugin system, or will have a DllMain() global function.
  - One way or another, your .cpp (and probably .h) files must include `SdkHeaders.h` from whichever SDK you are using.
- Before using any part of the SDK in code, run `SDKInitializer::Instance()` and make sure that the pointers returned by that object's `GetBioNamePools()` and `GetObjects()` are valid and make sense.

## Credits

```
UE3 SDK Generator: TheFeckless
```

Their original credits are:

```
Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
Thanks: HOOAH07, lowHertz
```
