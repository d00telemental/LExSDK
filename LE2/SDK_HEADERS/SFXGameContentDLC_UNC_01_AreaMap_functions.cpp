/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UNC_01_AreaMap_functions.cpp
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



class UClass* USFXAreaMapDataEx::pClassPointer = NULL;

class UClass* USFXAreaMapDataEx::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_UNC_01_AreaMap.SFXAreaMapDataEx" );

		return pClassPointer;
	};



class UClass* USFXSeqAct_SetAreaMapEx::pClassPointer = NULL;

class UClass* USFXSeqAct_SetAreaMapEx::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_UNC_01_AreaMap.SFXSeqAct_SetAreaMapEx" );

		return pClassPointer;
	};

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSeqAct_SetAreaMapEx.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SetAreaMapEx::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UNC_01_AreaMap.SFXSeqAct_SetAreaMapEx.Activated" );

	USFXSeqAct_SetAreaMapEx_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSFHandler_AreaMapEx::pClassPointer = NULL;

class UClass* USFXSFHandler_AreaMapEx::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx" );

		return pClassPointer;
	};

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx.SetMap
// [0x00020002] 
// Parameters infos:
// class USFXAreaMapData*         oMapData                       ( CPF_Parm )

void USFXSFHandler_AreaMapEx::SetMap ( class USFXAreaMapData* oMapData )
{
	static UFunction* pFnSetMap = NULL;

	if ( ! pFnSetMap )
		pFnSetMap = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx.SetMap" );

	USFXSFHandler_AreaMapEx_execSetMap_Parms SetMap_Parms;
	SetMap_Parms.oMapData = oMapData;

	this->ProcessEvent ( pFnSetMap, &SetMap_Parms, NULL );
};

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx.ProcessPlayer
// [0x00020002] 
// Parameters infos:
// class USFXAreaMapData*         oMapData                       ( CPF_Parm )

void USFXSFHandler_AreaMapEx::ProcessPlayer ( class USFXAreaMapData* oMapData )
{
	static UFunction* pFnProcessPlayer = NULL;

	if ( ! pFnProcessPlayer )
		pFnProcessPlayer = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx.ProcessPlayer" );

	USFXSFHandler_AreaMapEx_execProcessPlayer_Parms ProcessPlayer_Parms;
	ProcessPlayer_Parms.oMapData = oMapData;

	this->ProcessEvent ( pFnProcessPlayer, &ProcessPlayer_Parms, NULL );
};



class UClass* USFXSFHandler_PCAreaMapEx::pClassPointer = NULL;

class UClass* USFXSFHandler_PCAreaMapEx::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_PCAreaMapEx" );

		return pClassPointer;
	};

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_PCAreaMapEx.OnPanelAdded
// [0x00020002] 
// Parameters infos:

void USFXSFHandler_PCAreaMapEx::OnPanelAdded ( )
{
	static UFunction* pFnOnPanelAdded = NULL;

	if ( ! pFnOnPanelAdded )
		pFnOnPanelAdded = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_PCAreaMapEx.OnPanelAdded" );

	USFXSFHandler_PCAreaMapEx_execOnPanelAdded_Parms OnPanelAdded_Parms;

	this->ProcessEvent ( pFnOnPanelAdded, &OnPanelAdded_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif