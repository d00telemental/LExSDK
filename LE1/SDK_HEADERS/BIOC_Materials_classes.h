/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BIOC_Materials_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class BIOC_Materials.BioGlobalResources
// 0x01F0 (0x0250 - 0x0060)
class UBioGlobalResources : public UObject
{
public:
	struct TArray<class UMaterialInterface*>           lst;                                              		// 0x0060 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UMaterialInterface*>           lstb;                                             		// 0x0070 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UAnimSet*>                     lst2;                                             		// 0x0080 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioActorType*>                lst3;                                             		// 0x0090 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class USkeletalMesh*>                lst4;                                             		// 0x00A0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioAppearanceItem*>           lst5;                                             		// 0x00B0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioVISGrenade*>               lst6;                                             		// 0x00C0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UPhysicsAsset*>                lst7;                                             		// 0x00D0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioVFXTemplate*>              lst8;                                             		// 0x00E0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UPostProcessChain*>            lst9;                                             		// 0x00F0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UUISkin*>                      lst10;                                            		// 0x0100 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class USoundCue*>                    lst11;                                            		// 0x0110 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioTlkFile*>                  lst12;                                            		// 0x0120 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioStateEventMap*>            lst13;                                            		// 0x0130 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioOutcomeMap*>               lst14;                                            		// 0x0140 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioQuestMap*>                 lst15;                                            		// 0x0150 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioCodexMap*>                 lst16;                                            		// 0x0160 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UPhysicalMaterial*>            lst17;                                            		// 0x0170 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UObject*>                      lst18;                                            		// 0x0180 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioSWF*>                      lst19;                                            		// 0x0190 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UMaterialInstanceConstant*>    lst20;                                            		// 0x01A0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UFont*>                        lst21;                                            		// 0x01B0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UTexture2D*>                   lst22;                                            		// 0x01C0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioForceFeedbackPlayer*>      lst23;                                            		// 0x01D0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UFaceFXAsset*>                 lst24;                                            		// 0x01E0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioShieldView*>               lst25;                                            		// 0x01F0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioPowerVFXAppearance*>       lst26;                                            		// 0x0200 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioDeathVFX*>                 lst27;                                            		// 0x0210 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioDamageType*>               lst28;                                            		// 0x0220 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UBioVISFootstep*>              lst29;                                            		// 0x0230 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<class UAnimTree*>                    lst30;                                            		// 0x0240 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82727 ];

		return pClassPointer;
	};

};

UClass* UBioGlobalResources::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif