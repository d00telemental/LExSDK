/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UPD_Patch03_f_structs.h
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

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_LegacyDataCallbackPatch03_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.ApplyCanonPlotStates
// [0x00020003] ( FUNC_Final )
struct USFXSeqAct_LegacyDataCallbackPatch03_execApplyCanonPlotStates_Parms
{
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  DHME1String;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.ME2ImportPlotState
// [0x00020003] ( FUNC_Final )
struct USFXSeqAct_LegacyDataCallbackPatch03_execME2ImportPlotState_Parms
{
	// class ULocalPlayer*                             LocPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.UpdateOp
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_LegacyDataCallbackPatch03_eventUpdateOp_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ULocalPlayer*                             LocPlayer;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03.Activated
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_LegacyDataCallbackPatch03_eventActivated_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif