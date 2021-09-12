/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UNC_01_AreaMap_f_structs.h
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

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSeqAct_SetAreaMapEx.Activated
// [0x00020002] 
struct USFXSeqAct_SetAreaMapEx_execActivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMassEffectGuiManager*                    Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXAreaMapData*                          MapData;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx.SetMap
// [0x00020002] 
struct USFXSFHandler_AreaMapEx_execSetMap_Parms
{
	class USFXAreaMapData*                             oMapData;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct TArray<struct FASParams>                 lstParams;                                        		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXAreaMapDataEx*                        oMapDataEx;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx.ProcessPlayer
// [0x00020002] 
struct USFXSFHandler_AreaMapEx_execProcessPlayer_Parms
{
	class USFXAreaMapData*                             oMapData;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    pPlayer;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct TArray<struct FASParams>                 lstParams;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           PxX;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           PxY;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_PCAreaMapEx.OnPanelAdded
// [0x00020002] 
struct USFXSFHandler_PCAreaMapEx_execOnPanelAdded_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif