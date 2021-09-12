/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_Bonuses_functions.cpp
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



class UClass* USFXGameEffect_AchievementPartyDamageBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_AchievementPartyDamageBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus" );

		return pClassPointer;
	};

// Function SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus.OnRemoved
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AchievementPartyDamageBonus::OnRemoved ( )
{
	static UFunction* pFnOnRemoved = NULL;

	if ( ! pFnOnRemoved )
		pFnOnRemoved = UObject::FindObject< UFunction > ( "Function SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus.OnRemoved" );

	USFXGameEffect_AchievementPartyDamageBonus_execOnRemoved_Parms OnRemoved_Parms;

	this->ProcessEvent ( pFnOnRemoved, &OnRemoved_Parms, NULL );
};

// Function SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus.OnApplied
// [0x00020002] 
// Parameters infos:

void USFXGameEffect_AchievementPartyDamageBonus::OnApplied ( )
{
	static UFunction* pFnOnApplied = NULL;

	if ( ! pFnOnApplied )
		pFnOnApplied = UObject::FindObject< UFunction > ( "Function SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyDamageBonus.OnApplied" );

	USFXGameEffect_AchievementPartyDamageBonus_execOnApplied_Parms OnApplied_Parms;

	this->ProcessEvent ( pFnOnApplied, &OnApplied_Parms, NULL );
};



class UClass* USFXGameEffect_AchievementPartyHealthBonus::pClassPointer = NULL;

class UClass* USFXGameEffect_AchievementPartyHealthBonus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_AchievementPartyHealthBonus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Garrus::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Garrus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Garrus" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Grunt::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Grunt::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Grunt" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Jack::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Jack::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Jack" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Jacob::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Jacob::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Jacob" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Legion::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Legion::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Legion" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Miranda::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Miranda::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Miranda" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Mordin::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Mordin::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Mordin" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Samara::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Samara::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Samara" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Tali::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Tali::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Tali" );

		return pClassPointer;
	};



class UClass* USFXGameEffect_UnlockPower_Thane::pClassPointer = NULL;

class UClass* USFXGameEffect_UnlockPower_Thane::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent_Bonuses.SFXGameEffect_UnlockPower_Thane" );

		return pClassPointer;
	};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif