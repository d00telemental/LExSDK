/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_Inventory_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed
// [0x00020102] 
struct ASFXWeapon_SniperRifle_execSetZoomed_Parms
{
	unsigned long                                      bState;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound
// [0x00020102] 
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms
{
	class USFXPhysicalMaterialImpactSounds*            ImpactSounds;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms
{
	class USFXPhysicalMaterialImpactEffects*           ImpactEffects;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif