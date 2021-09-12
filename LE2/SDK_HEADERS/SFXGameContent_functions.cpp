/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_functions.cpp
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



class UClass* UBioSeqAct_ShowCredits::pClassPointer = NULL;

class UClass* UBioSeqAct_ShowCredits::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent.BioSeqAct_ShowCredits" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_ShowCredits.Deactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBioSeqAct_ShowCredits::eventDeactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = UObject::FindObject< UFunction > ( "Function SFXGameContent.BioSeqAct_ShowCredits.Deactivated" );

	UBioSeqAct_ShowCredits_eventDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_ShowCredits.UpdateOp
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaT                        ( CPF_Parm )

bool UBioSeqAct_ShowCredits::UpdateOp ( float fDeltaT )
{
	static UFunction* pFnUpdateOp = NULL;

	if ( ! pFnUpdateOp )
		pFnUpdateOp = UObject::FindObject< UFunction > ( "Function SFXGameContent.BioSeqAct_ShowCredits.UpdateOp" );

	UBioSeqAct_ShowCredits_execUpdateOp_Parms UpdateOp_Parms;
	UpdateOp_Parms.fDeltaT = fDeltaT;

	this->ProcessEvent ( pFnUpdateOp, &UpdateOp_Parms, NULL );

	return UpdateOp_Parms.ReturnValue;
};

// Function SFXGameContent.BioSeqAct_ShowCredits.onScreenClosed
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_ShowCredits::onScreenClosed ( )
{
	static UFunction* pFnonScreenClosed = NULL;

	if ( ! pFnonScreenClosed )
		pFnonScreenClosed = UObject::FindObject< UFunction > ( "Function SFXGameContent.BioSeqAct_ShowCredits.onScreenClosed" );

	UBioSeqAct_ShowCredits_execonScreenClosed_Parms onScreenClosed_Parms;

	this->ProcessEvent ( pFnonScreenClosed, &onScreenClosed_Parms, NULL );
};

// Function SFXGameContent.BioSeqAct_ShowCredits.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_ShowCredits::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXGameContent.BioSeqAct_ShowCredits.Activated" );

	UBioSeqAct_ShowCredits_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_ShowMainMenu::pClassPointer = NULL;

class UClass* UBioSeqAct_ShowMainMenu::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent.BioSeqAct_ShowMainMenu" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_ShowMainMenu.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_ShowMainMenu::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXGameContent.BioSeqAct_ShowMainMenu.Activated" );

	UBioSeqAct_ShowMainMenu_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* UBioSeqAct_ShowSplash::pClassPointer = NULL;

class UClass* UBioSeqAct_ShowSplash::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent.BioSeqAct_ShowSplash" );

		return pClassPointer;
	};

// Function SFXGameContent.BioSeqAct_ShowSplash.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_ShowSplash::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXGameContent.BioSeqAct_ShowSplash.Activated" );

	UBioSeqAct_ShowSplash_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_SetMaterialParameter::pClassPointer = NULL;

class UClass* USFXSeqAct_SetMaterialParameter::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent.SFXSeqAct_SetMaterialParameter" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_SetMaterialParameter.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SetMaterialParameter::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXGameContent.SFXSeqAct_SetMaterialParameter.Activated" );

	USFXSeqAct_SetMaterialParameter_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};



class UClass* USFXSeqAct_SetAreaMap::pClassPointer = NULL;

class UClass* USFXSeqAct_SetAreaMap::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContent.SFXSeqAct_SetAreaMap" );

		return pClassPointer;
	};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_SetAreaMap::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( "Function SFXGameContent.SFXSeqAct_SetAreaMap.GetObjClassVersion" );

	USFXSeqAct_SetAreaMap_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.Activated
// [0x00020002] 
// Parameters infos:

void USFXSeqAct_SetAreaMap::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXGameContent.SFXSeqAct_SetAreaMap.Activated" );

	USFXSeqAct_SetAreaMap_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif