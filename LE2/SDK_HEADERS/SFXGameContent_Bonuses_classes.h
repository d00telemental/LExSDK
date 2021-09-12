/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_Bonuses_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "../SdkInitializer.h"



#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus
// 0x0008 (0x009C - 0x0094)
class USFXGameEffect_AchievementPartyDamageBonus : public USFXGameEffect_DamageBonus
{
public:
	class USFXGameEffect*                              PassiveWeaponDmg;                                 		// 0x0094 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyHealthBonus
// 0x0000 (0x0098 - 0x0098)
class USFXGameEffect_AchievementPartyHealthBonus : public USFXGameEffect_PassiveHealthBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower
// 0x0003 (0x0094 - 0x0091)
class USFXGameEffect_UnlockPower : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Garrus
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Garrus : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Grunt
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Grunt : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Jack
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Jack : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Jacob
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Jacob : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Legion
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Legion : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Miranda
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Miranda : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Mordin
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Mordin : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Samara
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Samara : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Tali
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Tali : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Thane
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_UnlockPower_Thane : public USFXGameEffect_UnlockPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif