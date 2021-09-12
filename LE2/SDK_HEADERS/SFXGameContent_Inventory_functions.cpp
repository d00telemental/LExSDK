/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_Inventory_functions.cpp
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



class UClass* USFXDamageType_SniperRifle::pClassPointer = NULL;

class UClass* USFXDamageType_SniperRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Inventory.SFXDamageType_SniperRifle" );

		return pClassPointer;
	};



class UClass* ASFXWeapon_SniperRifle::pClassPointer = NULL;

class UClass* ASFXWeapon_SniperRifle::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Inventory.SFXWeapon_SniperRifle" );

		return pClassPointer;
	};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed
// [0x00020102] 
// Parameters infos:
// unsigned long                  bState                         ( CPF_Parm )

void ASFXWeapon_SniperRifle::SetZoomed ( unsigned long bState )
{
	static UFunction* pFnSetZoomed = NULL;

	if ( ! pFnSetZoomed )
		pFnSetZoomed = UObject::FindObject< UFunction > ( "Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.SetZoomed" );

	ASFXWeapon_SniperRifle_execSetZoomed_Parms SetZoomed_Parms;
	SetZoomed_Parms.bState = bState;

	this->ProcessEvent ( pFnSetZoomed, &SetZoomed_Parms, NULL );
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UWwiseEvent*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactSounds* ImpactSounds                   ( CPF_Parm )

class UWwiseEvent* ASFXWeapon_SniperRifle::GetWeaponSpecificImpactSound ( class USFXPhysicalMaterialImpactSounds* ImpactSounds )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = UObject::FindObject< UFunction > ( "Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactSound" );

	ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactSounds = ImpactSounds;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USFXPhysicalMaterialImpactEffects* ImpactEffects                  ( CPF_Parm )

class UParticleSystem* ASFXWeapon_SniperRifle::GetWeaponSpecificImpactEffect ( class USFXPhysicalMaterialImpactEffects* ImpactEffects )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = UObject::FindObject< UFunction > ( "Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificImpactEffect" );

	ASFXWeapon_SniperRifle_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactEffects = ImpactEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData
// [0x00420102] 
// Parameters infos:
// class UDecalComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USFXPhysicalMaterialDecals* DecalEffects                   ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm | CPF_OutParm )

class UDecalComponent* ASFXWeapon_SniperRifle::GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = UObject::FindObject< UFunction > ( "Function SFXGameContent_Inventory.SFXWeapon_SniperRifle.GetWeaponSpecificDecalData" );

	ASFXWeapon_SniperRifle_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.DecalEffects = DecalEffects;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	if ( FadeTime )
		*FadeTime = GetWeaponSpecificDecalData_Parms.FadeTime;

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif