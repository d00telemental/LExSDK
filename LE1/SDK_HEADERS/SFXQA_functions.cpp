/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXQA_functions.cpp
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



class UClass* UBioSeqAct_IsAutomated::pClassPointer = NULL;

class UClass* UBioSeqAct_IsAutomated::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXQA.BioSeqAct_IsAutomated" );

		return pClassPointer;
	};

// Function SFXQA.BioSeqAct_IsAutomated.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_IsAutomated::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXQA.BioSeqAct_IsAutomated.Activated" );

	UBioSeqAct_IsAutomated_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_IsSplinePilot::pClassPointer = NULL;

class UClass* UBioSeqAct_IsSplinePilot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXQA.BioSeqAct_IsSplinePilot" );

		return pClassPointer;
	};

// Function SFXQA.BioSeqAct_IsSplinePilot.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_IsSplinePilot::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXQA.BioSeqAct_IsSplinePilot.Activated" );

	UBioSeqAct_IsSplinePilot_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_ReadSplinePilotConsoleCommand::pClassPointer = NULL;

class UClass* UBioSeqAct_ReadSplinePilotConsoleCommand::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXQA.BioSeqAct_ReadSplinePilotConsoleCommand" );

		return pClassPointer;
	};

// Function SFXQA.BioSeqAct_ReadSplinePilotConsoleCommand.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_ReadSplinePilotConsoleCommand::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXQA.BioSeqAct_ReadSplinePilotConsoleCommand.Activated" );

	UBioSeqAct_ReadSplinePilotConsoleCommand_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif