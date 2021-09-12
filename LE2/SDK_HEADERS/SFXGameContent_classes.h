/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXGameContent.SFXSeqAct_SetMaterialParameter.ESetMaterialParameterType
/*enum ESetMaterialParameterType
{
	SetVectorParameter                                 = 0,
	SetScalarParameter                                 = 1,
	SetTextureParameter                                = 2,
	StartVectorParameter                               = 3,
	StartScalarParameter                               = 4,
	ESetMaterialParameterType_MAX                      = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContent.BioSeqAct_ShowCredits
// 0x000C (0x011C - 0x0110)
class UBioSeqAct_ShowCredits : public UBioSequenceLatentAction
{
public:
	class UGFxMovieInfo*                               m_oCreditsReferenced;                             		// 0x0110 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIsFinished : 1;                                		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventDeactivated ( );
	bool UpdateOp ( float fDeltaT );
	void onScreenClosed ( );
	void Activated ( );
};

// Class SFXGameContent.BioSeqAct_ShowMainMenu
// 0x0010 (0x0108 - 0x00F8)
class UBioSeqAct_ShowMainMenu : public USequenceAction
{
public:
	struct TArray<class UGFxMovieInfo*>                m_GuiResources;                                   		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.BioSeqAct_ShowSplash
// 0x000C (0x0104 - 0x00F8)
class UBioSeqAct_ShowSplash : public USequenceAction
{
public:
	class UGFxMovieInfo*                               m_oGuiReferenced;                                 		// 0x00F8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bShowLegal : 1;                                   		// 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_SetMaterialParameter
// 0x0035 (0x012D - 0x00F8)
class USFXSeqAct_SetMaterialParameter : public USequenceAction
{
public:
	struct FSeqAct_SetVectorParameters                 VectorParameterData;                              		// 0x00F8 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MaterialParameter;                                		// 0x010C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           MaterialInstance;                                 		// 0x0114 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FSeqAct_SetScalarParameters                 ScalarParameterData;                              		// 0x011C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FSeqAct_SetTextureParameters                TextureParameterData;                             		// 0x0124 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SetMaterialType;                                  		// 0x012C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_SetAreaMap
// 0x0049 (0x0141 - 0x00F8)
class USFXSeqAct_SetAreaMap : public USequenceAction
{
public:
	struct FString                                     m_sAreaMapGuiResource;                            		// 0x00F8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FVector                                     RefPoint1_Image_Px;                               		// 0x0108 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RefPoint2_Image_Px;                               		// 0x0114 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MapAsset;                                         		// 0x0120 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Ref1;                                             		// 0x0128 (0x0008) [0x0000000000000000]              
	class AActor*                                      Ref2;                                             		// 0x0130 (0x0008) [0x0000000000000000]              
	class UGFxMovieInfo*                               m_oAreaMapReference;                              		// 0x0138 (0x0008) [0x0000000000000000]              
	unsigned char                                      MapLayout;                                        		// 0x0140 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif