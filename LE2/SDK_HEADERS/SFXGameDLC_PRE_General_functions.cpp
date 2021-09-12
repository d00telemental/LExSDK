/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameDLC_PRE_General_functions.cpp
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



class UClass* USFXGameEffect_Gear_InfernoNegotiationBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_InfernoNegotiationBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameDLC_PRE_General.SFXGameEffect_Gear_InfernoNegotiationBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_InfernoPowerDamage::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_InfernoPowerDamage::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameDLC_PRE_General.SFXGameEffect_Gear_InfernoPowerDamage" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_InfernoStormSpeed::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_InfernoStormSpeed::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameDLC_PRE_General.SFXGameEffect_Gear_InfernoStormSpeed" );

		return pClassPointer;
	};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif