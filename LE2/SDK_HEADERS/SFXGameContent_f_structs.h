/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_f_structs.h
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

// Function SFXGameContent.BioSeqAct_ShowCredits.Deactivated
// [0x00020802] ( FUNC_Event )
struct UBioSeqAct_ShowCredits_eventDeactivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     oController;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMassEffectGuiManager*                    oMgr;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UBioSFPanel*                              oPanel;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.BioSeqAct_ShowCredits.UpdateOp
// [0x00020002] 
struct UBioSeqAct_ShowCredits_execUpdateOp_Parms
{
	float                                              fDeltaT;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.BioSeqAct_ShowCredits.onScreenClosed
// [0x00020002] 
struct UBioSeqAct_ShowCredits_execonScreenClosed_Parms
{
};

// Function SFXGameContent.BioSeqAct_ShowCredits.Activated
// [0x00020002] 
struct UBioSeqAct_ShowCredits_execActivated_Parms
{
	// class UBioSFHandler_Credits*                    oCreditsHandler;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.BioSeqAct_ShowMainMenu.Activated
// [0x00020002] 
struct UBioSeqAct_ShowMainMenu_execActivated_Parms
{
	// class UMassEffectGuiManager*                    oGuiMgr;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            oBWorldInfo;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.BioSeqAct_ShowSplash.Activated
// [0x00020002] 
struct UBioSeqAct_ShowSplash_execActivated_Parms
{
	// class UBioSFHandler_Splash*                     oHandler;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UBioSFPanel*                              oPanel;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UBioSFManager*                            oGuiMgr;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     oPC;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_SetMaterialParameter.Activated
// [0x00020002] 
struct USFXSeqAct_SetMaterialParameter_execActivated_Parms
{
	// class UObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   ChkActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UActorComponent*                          Component;                                        		// 0x0010 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class UMeshComponent*                           MeshCmpt;                                         		// 0x0018 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class UMaterialInterface*                       Mat;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SetAreaMap_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_SetAreaMap.Activated
// [0x00020002] 
struct USFXSeqAct_SetAreaMap_execActivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMassEffectGuiManager*                    Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXAreaMapData*                          MapData;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif