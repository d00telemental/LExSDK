/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UPD_Patch03_functions.cpp
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



class UClass* USFXSeqAct_LegacyDataCallbackPatch03::pClassPointer = NULL;

class UClass* USFXSeqAct_LegacyDataCallbackPatch03::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03" );

		return pClassPointer;
	};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USFXSeqAct_LegacyDataCallbackPatch03::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.GetObjClassVersion" );

	USFXSeqAct_LegacyDataCallbackPatch03_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.ApplyCanonPlotStates
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXSeqAct_LegacyDataCallbackPatch03::ApplyCanonPlotStates ( )
{
	static UFunction* pFnApplyCanonPlotStates = NULL;

	if ( ! pFnApplyCanonPlotStates )
		pFnApplyCanonPlotStates = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.ApplyCanonPlotStates" );

	USFXSeqAct_LegacyDataCallbackPatch03_execApplyCanonPlotStates_Parms ApplyCanonPlotStates_Parms;

	this->ProcessEvent ( pFnApplyCanonPlotStates, &ApplyCanonPlotStates_Parms, NULL );
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.ME2ImportPlotState
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void USFXSeqAct_LegacyDataCallbackPatch03::ME2ImportPlotState ( )
{
	static UFunction* pFnME2ImportPlotState = NULL;

	if ( ! pFnME2ImportPlotState )
		pFnME2ImportPlotState = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.ME2ImportPlotState" );

	USFXSeqAct_LegacyDataCallbackPatch03_execME2ImportPlotState_Parms ME2ImportPlotState_Parms;

	this->ProcessEvent ( pFnME2ImportPlotState, &ME2ImportPlotState_Parms, NULL );
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.UpdateOp
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool USFXSeqAct_LegacyDataCallbackPatch03::eventUpdateOp ( float DeltaTime )
{
	static UFunction* pFnUpdateOp = NULL;

	if ( ! pFnUpdateOp )
		pFnUpdateOp = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.UpdateOp" );

	USFXSeqAct_LegacyDataCallbackPatch03_eventUpdateOp_Parms UpdateOp_Parms;
	UpdateOp_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateOp, &UpdateOp_Parms, NULL );

	return UpdateOp_Parms.ReturnValue;
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USFXSeqAct_LegacyDataCallbackPatch03::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = UObject::FindObject< UFunction > ( "Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.Activated" );

	USFXSeqAct_LegacyDataCallbackPatch03_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif