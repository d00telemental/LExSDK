/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameDLC_PRE_Terminus_functions.cpp
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



class UClass* USFXGameEffect_Gear_TerminusShieldBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_TerminusShieldBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameDLC_PRE_Terminus.SFXGameEffect_Gear_TerminusShieldBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_TerminusStormSpeed::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_TerminusStormSpeed::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameDLC_PRE_Terminus.SFXGameEffect_Gear_TerminusStormSpeed" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_Gear_TerminusWpnMagazines::pClassPointer = NULL;

class UClass* USFXGameEffect_Gear_TerminusWpnMagazines::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameDLC_PRE_Terminus.SFXGameEffect_Gear_TerminusWpnMagazines" );

		return pClassPointer;
	};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif