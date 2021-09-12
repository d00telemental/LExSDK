/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_Inventory_classes.h
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

// Class SFXGameContent_Inventory.SFXDamageType_SniperRifle
// 0x0000 (0x0114 - 0x0114)
class USFXDamageType_SniperRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Inventory.SFXWeapon_SniperRifle
// 0x0010 (0x0984 - 0x0974)
class ASFXWeapon_SniperRifle : public ASFXWeapon_SniperRifle_Base
{
public:
	class UWwiseEvent*                                 ActivateSniperZoomWwiseEvent;                     		// 0x0974 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 DeActivateSniperZoomWwiseEvent;                   		// 0x097C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetZoomed ( unsigned long bState );
	class UWwiseEvent* GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds );
	class UParticleSystem* GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects );
	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif