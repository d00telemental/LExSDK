/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_CER_02_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "../SdkHeaders.h"



#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* USFXDamageType_IncisorSniperRifle_CER_02::pClassPointer = NULL;

class UClass* USFXDamageType_IncisorSniperRifle_CER_02::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXDamageType_IncisorSniperRifle_CER_02" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_ArmMeleeBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_ArmMeleeBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_ArmMeleeBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_ArmShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_ArmShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_ArmShieldBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_ArmWeaponDmgBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_ArmWeaponDmgBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_ArmWeaponDmgBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_HealthBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_HealthBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_HealthBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_HelmetHeadShotBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_HelmetHeadShotBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_HelmetHeadShotBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_HelmetShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_HelmetShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_HelmetShieldBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_HelmetWeaponDmgBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_HelmetWeaponDmgBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_HelmetWeaponDmgBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_LegHvyAmmoBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_LegHvyAmmoBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_LegHvyAmmoBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_LegShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_LegShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_LegShieldBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_ShoulderMeleeBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_ShoulderMeleeBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_ShoulderMeleeBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_ShoulderShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_ShoulderShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_ShoulderShieldBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_TorsoMeleeBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_TorsoMeleeBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_TorsoMeleeBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_TorsoShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_TorsoShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_TorsoShieldBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_CER02_TorsoWeaponDmgBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_CER02_TorsoWeaponDmgBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXGameEffect_Gear_CER02_TorsoWeaponDmgBonus" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_IncisorSniperRifle_CER_02::pClassPointer = NULL;

class UClass* ASFXWeapon_IncisorSniperRifle_CER_02::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_CER_02.SFXWeapon_IncisorSniperRifle_CER_02" );

		return pClassPointer;
	};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif