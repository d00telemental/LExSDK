/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_PRE_DA_classes.h
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

// Class SFXGameContentDLC_PRE_DA.SFXGameEffect_Gear_DA_PowerBonus
// 0x0000 (0x0098 - 0x0098)
class USFXGameEffect_Gear_DA_PowerBonus : public USFXGameEffect_PowerDamageBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContentDLC_PRE_DA.SFXGameEffect_Gear_DA_ShieldBonus
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_Gear_DA_ShieldBonus : public USFXGameEffect_PassiveShieldBonus
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