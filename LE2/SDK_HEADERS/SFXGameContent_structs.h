/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct SFXGameContent.SFXSeqAct_SetMaterialParameter.SeqAct_SetVectorParameters
// 0x0014
struct FSeqAct_SetVectorParameters
{
	struct FLinearColor                                ColorValue;                                       		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              VectorStartDelta;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGameContent.SFXSeqAct_SetMaterialParameter.SeqAct_SetScalarParameters
// 0x0008
struct FSeqAct_SetScalarParameters
{
	float                                              ScalarValue;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalarStartDelta;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGameContent.SFXSeqAct_SetMaterialParameter.SeqAct_SetTextureParameters
// 0x0008
struct FSeqAct_SetTextureParameters
{
	class UTexture*                                    TextureValue;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif