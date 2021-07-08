# LE1 SDK

A projection of a part of the game's codebase accessible to UnrealScript for **Mass Effect 1 (Legendary Edition)**. Built with an adapted version of UE3 SDK generator by TheFeckless.

Built for game executable ver. `2.0.0.48602` - needs to be rebuilt if the game updates again.

## Usage

- Put the directory somewhere in your code's directory.
- Include `SdkHeaders.h` in your one and only translation unit.
- Before using any part of the SDK, run `SDKInitializer::Instance()` and make sure that the pointers returned by that object's `GetBioNamePools()` and `GetObjects()` are valid and make sense.
