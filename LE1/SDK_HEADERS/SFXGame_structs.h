/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGame_structs.h
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

// ScriptStruct SFXGame.BioDeathVFXCore.BioDeathVFXSpec
// 0x0030
struct FBioDeathVFXSpec
{
	struct FVector                                     m_vImpulseOriginOffset;                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmLabel;                                        		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             m_pExplosionVFXTemplate;                          		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             m_pCrustVFXTemplate;                              		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fImpulseRadius;                                 		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fImpulseMagnitude;                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsTargetDeletedOnCrustEffectCompletion : 1;    		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bIsImpulseEnabled : 1;                          		// 0x002C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear_Settings.BioHeadGearComponentSettings
// 0x000C
struct FBioHeadGearComponentSettings
{
	int                                                m_nMeshIndex;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nMaterialIndex;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bUseBodyMaterialConfig : 1;                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bIsHidden : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bIsLoaded : 1;                                  		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAttributes.BioComplexIntStructAttribute
// 0x0088
struct FBioComplexIntStructAttribute
{
	struct TArray<struct FPointer>                     m_Children;                                       		// 0x0000 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<struct FPointer>                     m_FloatChildren;                                  		// 0x0010 (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct TArray<int>                                 m_baseOverrides;                                  		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<unsigned long>                       m_isBaseOverrideValid;                            		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_Parent;                                         		// 0x0040 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                m_modifiers[ 0x4 ];                               		// 0x0048 (0x0010) [0x0000000000000000]              
	int                                                m_isModifierEnabled[ 0x4 ];                       		// 0x0058 (0x0010) [0x0000000000000000]              
	class UBio2DA*                                     m_LookupTable;                                    		// 0x0068 (0x0008) [0x0000000000000000]              
	int                                                m_Base;                                           		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                m_Current;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                m_Max;                                            		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                m_Min;                                            		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                m_TableColumn;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isBaseOverrideInEffect : 1;                     		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_Dirty : 1;                                      		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioAttributes.BioComplexFloatStructAttribute
// 0x0068
struct FBioComplexFloatStructAttribute
{
	struct TArray<int>                                 m_baseOverrides;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<unsigned long>                       m_isBaseOverrideValid;                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_Parent;                                         		// 0x0020 (0x0008) [0x0000000000001000]              ( CPF_Native )
	float                                              m_modifiers[ 0x4 ];                               		// 0x0028 (0x0010) [0x0000000000000000]              
	int                                                m_isModifierEnabled[ 0x4 ];                       		// 0x0038 (0x0010) [0x0000000000000000]              
	class UBio2DA*                                     m_LookupTable;                                    		// 0x0048 (0x0008) [0x0000000000000000]              
	float                                              m_Base;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              m_Current;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              m_Max;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_Min;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                m_TableColumn;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isBaseOverrideInEffect : 1;                     		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_Dirty : 1;                                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.Bio_Appr_Character.FootStepAttachment
// 0x000C
struct FFootStepAttachment
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinPeriodTime;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character.LookAtBoneDef
// 0x0022
struct FLookAtBoneDef
{
	struct FName                                       m_nBoneName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fLimit;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fUpDownLimit;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fDelay;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fSpeedFactor;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fConversationStrength;                          		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bSeparateUpDownLimit : 1;                       		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseUpAxis : 1;                                 		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bLookAtInverted : 1;                            		// 0x001C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInverted : 1;                            		// 0x001C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      m_nLookAxis;                                      		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nUpAxis;                                        		// 0x0021 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomPatternValue
// 0x004C
struct FPlayerCustomPatternValue
{
	struct FLinearColor                                Stripe1ParameterValue;                            		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe2ParameterValue;                            		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe3ParameterValue;                            		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe1ParameterName;                             		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe2ParameterName;                             		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe3ParameterName;                             		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternName;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomPatternColorValue
// 0x004C
struct FPlayerCustomPatternColorValue
{
	struct FLinearColor                                Stripe1ColorValue;                                		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe2ColorValue;                                		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe3ColorValue;                                		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe1ColorName;                                 		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe2ColorName;                                 		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe3ColorName;                                 		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorName;                                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor1Value
// 0x0034
struct FPlayerCustomColor1Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                PhongParameterValue;                              		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhongParameterName;                               		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorName;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor2Value
// 0x001C
struct FPlayerCustomColor2Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorName;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor3Value
// 0x001C
struct FPlayerCustomColor3Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorName;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.ModelVariation
// 0x000C
struct FModelVariation
{
	int                                                NumVariations;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialsPerVariation;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bHasHeadGear : 1;                               		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.ArmorTypes
// 0x0029
struct FArmorTypes
{
	struct TArray<struct FModelVariation>              Variations;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_meshPackageName;                                		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_materialPackageName;                            		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               ArmorPhysicsAsset;                                		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ArmorType;                                        		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.OverrideAnimTreeTemplate
// 0x0009
struct FOverrideAnimTreeTemplate
{
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eClassification;                                  		// 0x0008 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.WeaponAnimSpec
// 0x0019
struct FWeaponAnimSpec
{
	struct TArray<class UAnimSet*>                     m_animSets;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    m_drawAnimSet;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_weaponType;                                     		// 0x0018 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Head.BioCharacterHeadAppearanceMaterialConfig
// 0x0010
struct FBioCharacterHeadAppearanceMaterialConfig
{
	struct TArray<class UMaterialInterface*>           m_aMaterials;                                     		// 0x0000 (0x0010) [0x0000000000400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Head.BioWrinkleConfig
// 0x0018
struct FBioWrinkleConfig
{
	struct FString                                     WrinkleParameterName;                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  WrinkleTexture;                                   		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear.BioFacePlateMeshSpec
// 0x000C
struct FBioFacePlateMeshSpec
{
	class USkeletalMesh*                               m_pMesh;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bHidesVisor : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear.BioHeadGearAppearanceModelSpec
// 0x000C
struct FBioHeadGearAppearanceModelSpec
{
	int                                                m_nMaterialConfigCount;                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nMaterialCountPerConfig;                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsHairHidden : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bIsHeadHidden : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bSuppressFacePlate : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bSuppressVisor : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_HeadGear.BioHeadGearAppearanceArmorSpec
// 0x0019
struct FBioHeadGearAppearanceArmorSpec
{
	struct TArray<struct FBioHeadGearAppearanceModelSpec> m_aModelSpec;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_nmPackage;                                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eArmorType;                                     		// 0x0018 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioVisualEffect.InterpPropertyInfo
// 0x000C
struct FInterpPropertyInfo
{
	class UObject*                                     Outer;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Offset;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioVisualEffect.CachedInstanceParameter
// 0x0020
struct FCachedInstanceParameter
{
	struct TArray<struct FInterpPropertyInfo>          OffsetInfo;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              fCurrentValue;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInited : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.AudioAPLStatePair
// 0x0010
struct FAudioAPLStatePair
{
	struct FName                                       m_nmAPLState;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   m_SoundCue;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.VFXAPLStatePair
// 0x0009
struct FVFXAPLStatePair
{
	struct FName                                       m_nmAPLState;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_VFXState;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.VisualEffectAttachment
// 0x0020
struct FVisualEffectAttachment
{
	struct TArray<struct FVFXAPLStatePair>             m_States;                                         		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UBioVFXTemplate*                             m_oEffectTemplate;                                		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmSocket;                                       		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseAppearancePlaceable.StaticAttachments
// 0x0010
struct FStaticAttachments
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPawn.BioGestDataCopy
// 0x004C
struct FBioGestDataCopy
{
	struct FName                                       nmPoseSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureSet;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureAnim;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fStartOffset;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fEndOffset;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              fStartBlendDuration;                              		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              fWeight;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioPawn.BioGestDataKey
// 0x006C
struct FBioGestDataKey
{
	struct FBioGestureData                             tRawData;                                         		// 0x0000 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioGestChainTree*                           pChainTree;                                       		// 0x0060 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseDynamicAnimSets : 1;                          		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioPawn.PawnFootStepData
// 0x0014
struct FPawnFootStepData
{
	class UBioVISFootstep*                             FootStepVIS;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeOutRemaining;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      FootStepRequested : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioActorBehavior.BioVOSettings
// 0x0009
struct FBioVOSettings
{
	struct FColor                                      cSubtitleColour;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuppressSubtitlesIfVO : 1;                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAlert : 1;                                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      nSubtitleMode;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioActorBehavior.BioDamageReporter
// 0x001C
struct FBioDamageReporter
{
	float                                              fShieldDamage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fShieldDamageCapacity;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fHealthDamage;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fToxicDamage;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fStabilityDamage;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fDamageResistance;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fToxicResistance;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioActorBehavior.BioActorBehaviorWeaponLOSCache
// 0x0038
struct FBioActorBehaviorWeaponLOSCache
{
	struct FVector                                     m_vHitTarget_Location;                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vHitLocation_Location;                          		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      m_oHitTarget_Actor;                               		// 0x0018 (0x0008) [0x0000000000000000]              
	class AActor*                                      m_oHitLocation_Actor;                             		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                m_flags;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fHitTarget_Time;                                		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fHitLocation_Time;                              		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHitTarget_Result : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHitLocation_Result : 1;                        		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioActorBehavior.BioActorPawnBehaviorLOSCache
// 0x0010
struct FBioActorPawnBehaviorLOSCache
{
	struct TArray<struct FBioActorBehaviorWeaponLOSCache> m_WeaponLOSCaches;                                		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioInventory.BioPlotPseudoItem
// 0x0018
struct FBioPlotPseudoItem
{
	int                                                m_LocalizedName;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_LocalizedDesc;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_exportID;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_basePrice;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_shopGUIImageID;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_plotConditional;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamePropertyTimer.BioGPTimingData
// 0x0011
struct FBioGPTimingData
{
	class UBioGameProperty*                            oGP;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fTime;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFrameTicked : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eTimingType;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamePropertyManager.BioGamePropertyManagerTimedOutTicked
// 0x000C
struct FBioGamePropertyManagerTimedOutTicked
{
	class UBioGameProperty*                            m_pGP;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fTimeRemaining;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSquadAPI.SLocation
// 0x0010
struct FSLocation
{
	struct FVector                                     vPoint;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nNode;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioBaseSquad.MemberData
// 0x0073
struct FMemberData
{
	struct FCoverRecord                                stCoverToUse;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	struct FSLocation                                  EscapeLocation;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FVector                                     vMoveLocation;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     vTarget;                                          		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     vHoldPosition;                                    		// 0x003C (0x000C) [0x0000000000000000]              
	class APawn*                                       SquadMember;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	class ABioTacticalMoveToIndicator*                 oDestinationIndicator;                            		// 0x0050 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x0058 (0x0008) [0x0000000000000000]              
	class APawn*                                       oOrderedAttackTarget;                             		// 0x0060 (0x0008) [0x0000000000000000]              
	float                                              fMoveDelayTime;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMoveOrderAssigned : 1;                           		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCurrentlyMoving : 1;                             		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCoverAssigned : 1;                               		// 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bActionOrderAssigned : 1;                         		// 0x006C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      eAction;                                          		// 0x0070 (0x0001) [0x0000000000000000]              
	unsigned char                                      eSwitchWeapon;                                    		// 0x0071 (0x0001) [0x0000000000000000]              
	unsigned char                                      eFormation;                                       		// 0x0072 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioBaseSquad.PathNodeData
// 0x002D
struct FPathNodeData
{
	struct FVector                                     vPathNode;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRotation;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rDirectionOfTravel;                               		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FName                                       NodeActionOn;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	unsigned char                                      NodeAction;                                       		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioBaseSquad.StrategyChoice
// 0x0010
struct FStrategyChoice
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              MaxLikelihood;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentLikelihood;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioBaseSquad.CapacityFilteringRecord
// 0x0009
struct FCapacityFilteringRecord
{
	struct FName                                       nmTechnique;                                      		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      nCapMode;                                         		// 0x0008 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SFXGame.BioEpicPawnBehavior.EpicPawnVisualEffect
// 0x0018
struct FEpicPawnVisualEffect
{
	struct FName                                       m_nmLabel;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             m_oVFXTemplate;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmTagOfActorAtVFXLocation;                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEpicPawnBehavior.BioEpicPawnBehaviorWeaponCache
// 0x0060
struct FBioEpicPawnBehaviorWeaponCache
{
	struct FVector                                     m_targetPoint;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_muzzleLocation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_muzzleToTargetDisplacement;                     		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_muzzleToTargetDirection;                        		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_traceHitLocation;                               		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_traceHitNormal;                                 		// 0x003C (0x000C) [0x0000000000000000]              
	class ABioWeaponRanged*                            m_weapon;                                         		// 0x0048 (0x0008) [0x0000000000000000]              
	class AActor*                                      m_traceHitActor;                                  		// 0x0050 (0x0008) [0x0000000000000000]              
	int                                                m_flags;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_traceHitDistance;                               		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEpicPawnBehavior.BioEpicPawnBehaviorCache
// 0x0010
struct FBioEpicPawnBehaviorCache
{
	struct TArray<struct FBioEpicPawnBehaviorWeaponCache> m_weaponCaches;                                   		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioPawnType.SoundSpec
// 0x0009
struct FSoundSpec
{
	class USoundCue*                                   m_oSoundCue;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_ePawnSound;                                     		// 0x0008 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioPawnType.ParticleSystemSpec
// 0x0019
struct FParticleSystemSpec
{
	struct TArray<struct FName>                        m_aBoneName;                                      		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             m_oParticleSystem;                                		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_ePawnParticleSystem;                            		// 0x0018 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentSpecification
// 0x004C
struct FBioTalentSpecification
{
	struct TArray<int>                                 m_PrereqTalentIDArray;                            		// 0x0000 (0x0010) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct TArray<int>                                 m_PrereqTalentRankArray;                          		// 0x0010 (0x0010) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UBioTalent*                                  m_Talent;                                         		// 0x0020 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                m_MaxRank;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_LevelOffset;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_LevelsPerRank;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_OriginalRank;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_VisualOrder;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_LocalizedName;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_LocalizedDesc;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_StringForUnlockReferences;                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_BlurbForUnlockReferences;                       		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentStaticData
// 0x001C
struct FBioTalentStaticData
{
	struct FString                                     m_sUnlockDetails;                                 		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_TalentName;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_TalentDesc;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_MaxRank;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentDynamicData
// 0x0050
struct FBioTalentDynamicData
{
	struct TArray<int>                                 m_RankIconArray;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 m_RankNameArray;                                  		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 m_RankDescArray;                                  		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 m_RankUnlockBlurbArray;                           		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_CurrentRank;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_AvailableRank;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_MaxRank;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_IsUnlocked : 1;                                 		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioTalentContainer.BioTalentDebugData
// 0x000C
struct FBioTalentDebugData
{
	int                                                m_ID;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Rank;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Name;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTalentContainer.BioSimpleTalentSave
// 0x0008
struct FBioSimpleTalentSave
{
	int                                                m_TalentID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Ranks;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTalentContainer.BioComplexTalentSave
// 0x0038
struct FBioComplexTalentSave
{
	struct TArray<int>                                 m_PrereqTalentIDArray;                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 m_PrereqTalentRankArray;                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_TalentID;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_Ranks;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_MaxRank;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_LevelOffset;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_LevelsPerRank;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_VisualOrder;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.TextureParameter
// 0x0010
struct FTextureParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    m_pTexture;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.ColorParameter
// 0x0018
struct FColorParameter
{
	struct FLinearColor                                cValue;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       nName;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.ScalarParameter
// 0x000C
struct FScalarParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              sValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInterface_Appearance_Pawn.CreatureSpeeds
// 0x0060
struct FCreatureSpeeds
{
	float                                              fGroundSpeed;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAirSpeed;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWaterSpeed;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fClimbSpeed;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWalkSpeed;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSprintSpeed;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fExploreSprintSpeed;                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacticalSpeed;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacWalkSpeed;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacCrouchSpeed;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTacCrouchWalkSpeed;                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedHigh;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedLow;                                    		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedCombat;                                 		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedCombatCrouch;                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTurnSpeedCombatSprint;                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStandardFriction;                                		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAccelRate;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSAccel;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSDecel;                                      		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSAccelTac;                                   		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSDecelTac;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSAccelTacCrouch;                             		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxDSDecelTacCrouch;                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioInterface_Appearance_Pawn.BioPawnLabelledHeadGearBool
// 0x0005
struct FBioPawnLabelledHeadGearBool
{
	unsigned long                                      m_bIsVisible : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      m_eComponent;                                     		// 0x0004 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioInterface_Appearance_Pawn.BioPawnHeadGearVisibility
// 0x001C
struct FBioPawnHeadGearVisibility
{
	struct FBioPawnLabelledHeadGearBool                m_a[ 0x3 ];                                       		// 0x0000 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bOverride : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPawnBehavior.ParticleSystemComponentSpec
// 0x0010
struct FParticleSystemComponentSpec
{
	struct TArray<class UParticleSystemComponent*>     m_aParticleSystemComponent;                       		// 0x0000 (0x0010) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct SFXGame.BioPawnBehavior.BioPawnBehaviorCache
// 0x000C
struct FBioPawnBehaviorCache
{
	int                                                m_flags;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_driftAngle;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_driftZoneRadius;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioChatterSystem.ChatterLineData
// 0x0005
struct FChatterLineData
{
	float                                              TimeLastPlayed;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      SoundSet;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioGestCharOverride
// 0x0048
struct FBioGestCharOverride
{
	struct FName                                       nmFemale;                                         		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmAsari;                                          		// 0x0008 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmTurian;                                         		// 0x0010 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmSalarian;                                       		// 0x0018 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmQuarian;                                        		// 0x0020 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmOther;                                          		// 0x0028 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmKrogan;                                         		// 0x0030 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmGeth;                                           		// 0x0038 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmOtherArtificial;                                		// 0x0040 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioWeaponPropData
// 0x0028
struct FBioWeaponPropData
{
	struct TArray<struct FString>                      aWeaponClassPrefixes;                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FString>                      aWeaponPackages;                                  		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       nmWeaponBaseClassName;                            		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXModule_AimAssistTarget.AimAssistBox
// 0x000D
struct FAimAssistBox
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoftMargin;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      NodeType;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPower.BioPowerParam
// 0x0070
struct FBioPowerParam
{
	struct FBioComplexFloatStructAttribute             m_value;                                          		// 0x0000 (0x0068) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmParamName;                                      		// 0x0068 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.GameOptions
// 0x00B0
struct FGameOptions
{
	int                                                m_GammaPostProcessTemplate;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCombatDifficulty;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nDialogMode;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nAutoLevelUp;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nLegacyLevelUpMode;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nAutoEquip;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nTutorialFlag;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nSubTitles;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nAutoPauseEnemySighted;                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nAutoPauseSquadMemberDown;                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nMusicVolume;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nFXVolume;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nDialogVolume;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nSouthpawFlag;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_nTargetingAssistMode;                           		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_nTargetingAssistModifier;                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_nHorizontalCombatSensitivity;                   		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_nVerticalCombatSensitivity;                     		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_nHorizontalExplorationSensitivity;              		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                m_nVerticalExplorationSensitivity;                		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                m_nRumbleFlag;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                m_nAutoPauseBleedOut;                             		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                m_nMotionBlur;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                m_nFilmGrain;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                m_nSquadPowerUse;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                m_nAutoSave;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                m_nAntiAliasing;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                m_nStickConfiguration;                            		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                m_nTriggerConfiguration;                          		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                m_nMouseSensitivity;                              		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                m_nAnalogSensePerc;                               		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                m_nUncappedFramerate;                             		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                m_bWindowModeState;                               		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                m_nEffectsState;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                m_nTextureDetailLevel;                            		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                m_nShaderDetailLevel;                             		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                m_nFilterLevel;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                m_nDynamicResolution;                             		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                m_nBrightness;                                    		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                m_nHDRBrightness;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                m_nHDRContrast;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                m_nAmbientOcclusion;                              		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                m_nMonitorIndex;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bYAxisInverted : 1;                               		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHardwareMouseState : 1;                        		// 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bVSync : 1;                                     		// 0x00AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_nShadowDetailLevel : 1;                         		// 0x00AC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_nHardwareSound : 1;                             		// 0x00AC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bCameraRelativeSteering : 1;                    		// 0x00AC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bHDREnable : 1;                                 		// 0x00AC (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct SFXGame.BioAnimCheckBlendOut.BioAnimCheckBlendOutNode
// 0x000C
struct FBioAnimCheckBlendOutNode
{
	class UAnimNodeBlendList*                          Node;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimCheckBlendOut.BioAnimCheckBlendOutPath
// 0x0018
struct FBioAnimCheckBlendOutPath
{
	struct TArray<struct FBioAnimCheckBlendOutNode>    Nodes;                                            		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    Next;                                             		// 0x0010 (0x0008) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAction.BlendTime
// 0x0005
struct FBlendTime
{
	float                                              m_fTime;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eAnimNode;                                      		// 0x0004 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAnimationStateTracking.BioAnimationNode
// 0x0014
struct FBioAnimationNode
{
	struct FName                                       nmState;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmToState;                                        		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBlendTime;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendMultiAdditive.BioChildActivateData
// 0x0010
struct FBioChildActivateData
{
	float                                              fFinalWeight;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fRemainingTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fTotalBlendTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bApplyData : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAnimNodeBlendPoseAndGestures.BioChildPinData
// 0x0020
struct FBioChildPinData
{
	struct TArray<class UBioGestChainTree*>            aChainedTrees;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fEndBlendStartTime;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fEndTime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioAnimNodeBlendPoseAndGestures.BioEndBlendData
// 0x0008
struct FBioEndBlendData
{
	float                                              fEndBlendStartTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalar.BioScalarBlendParams
// 0x000C
struct FBioScalarBlendParams
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Peak;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalar.BioScalarPrecomputedValues
// 0x0008
struct FBioScalarPrecomputedValues
{
	float                                              fRangeLowerRatio;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fRangeUpperRatio;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeChildDef
// 0x0014
struct FBioAnimScalarNodeChildDef
{
	struct FBioScalarBlendParams                       BlendParams;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeBehaviorDef
// 0x002C
struct FBioAnimScalarNodeBehaviorDef
{
	struct TArray<struct FBioAnimScalarNodeChildDef>   Children;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BlendPctPerSecond;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DefaultScalar;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      BlendInstant : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAnimNodeBlendState.BioAnimBlendParams
// 0x0011
struct FBioAnimBlendParams
{
	struct TArray<float>                               BlendToChildTimes;                                		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      PlayMode;                                         		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendStateBehavior.BioAnimStateNodeChildDef
// 0x0020
struct FBioAnimStateNodeChildDef
{
	struct FBioAnimBlendParams                         BlendParams;                                      		// 0x0000 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              DefaultWeight;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendStateBehavior.BioAnimStateNodeBehaviorDef
// 0x0020
struct FBioAnimStateNodeBehaviorDef
{
	struct TArray<struct FBioAnimStateNodeChildDef>    Children;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceItemSophisticated.BioAppearanceItemSophisticatedVariant
// 0x0034
struct FBioAppearanceItemSophisticatedVariant
{
	struct TArray<class UMaterialInterface*>           m_aMaterials;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    m_oWeaponAnimSet;                                 		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   m_oWeaponAnimTree;                                		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               m_oPhysicsAsset;                                  		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               m_oModelMesh;                                     		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_Label;                                          		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceItemSophisticated.WeaponEffects
// 0x0030
struct FWeaponEffects
{
	class UBioVISWeapon*                               VisualImpactSet;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxMuzzleFlash;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxMuzzleFlash2;                                  		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxTracer;                                        		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxCoolDown;                                      		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             vfxSabotage;                                      		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceItemWeapon.BioAppearanceItemWeaponVFXSpec
// 0x000D
struct FBioAppearanceItemWeaponVFXSpec
{
	class UBioWeaponVFXAppearance*                     m_appearance;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_type;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_Damage;                                         		// 0x000C (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleAttachmentInfo
// 0x0020
struct FBioVehicleAttachmentInfo
{
	struct TArray<class UMaterialInterface*>           aMeshMaterials;                                   		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UActorComponent*                             oComponentToAttach;                               		// 0x0010 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       nmAttachSocket;                                   		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleTurretInfo
// 0x0028
struct FBioVehicleTurretInfo
{
	struct FName                                       nmAttachSocket;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmTurretYawBone;                                  		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmTurretPitchBone;                                		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmYawController;                                  		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmPitchController;                                		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleThrusterInfo
// 0x0008
struct FBioVehicleThrusterInfo
{
	struct FName                                       nmThrusterSocket;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAppearanceVehicle.BioVehicleSoundEntityStateInfo
// 0x0020
struct FBioVehicleSoundEntityStateInfo
{
	struct FString                                     sStateName;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sStateValue;                                      		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioGamerProfile.PlotManagerAchievement
// 0x000C
struct FPlotManagerAchievement
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nAchievementID;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UnlockedAt;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.ProfileBOOL
// 0x0008
struct FProfileBOOL
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.ProfileINT
// 0x0008
struct FProfileINT
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.ProfileFLOAT
// 0x0008
struct FProfileFLOAT
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.ProfilePlaythrough
// 0x0008
struct FProfilePlaythrough
{
	int                                                nPlaythroughID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nDifficultySetting;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.ProfileRewardStat
// 0x0024
struct FProfileRewardStat
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                UnlockedAt;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AchievementId;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TalenTreeID;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsAchievementUnlocked : 1;                        		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGamerProfile.BonusTalent
// 0x0005
struct FBonusTalent
{
	int                                                nBonusTalentID;                                   		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      nAchievementID;                                   		// 0x0004 (0x0001) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFXGame.BioGamerProfile.ItemAppearanceData
// 0x000D
struct FItemAppearanceData
{
	int                                                nItemID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nManufacturer;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEquipped : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eSophistication;                                  		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.CharacterAppearanceData
// 0x0054
struct FCharacterAppearanceData
{
	struct FItemAppearanceData                         lstWeapons[ 0x4 ];                                		// 0x0000 (0x0040) [0x0000000000000000]              
	struct FItemAppearanceData                         stArmor;                                          		// 0x0040 (0x0010) [0x0000000000000000]              
	unsigned long                                      bHelmetVisible : 1;                               		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGamerProfile.CharacterStatisticsData
// 0x0010
struct FCharacterStatisticsData
{
	int                                                m_Stamina;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Focus;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Precision;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_Coordination;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.CharacterProfile
// 0x00BB
struct FCharacterProfile
{
	struct FString                                     sCharacterID;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sFullName;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCharacterAppearanceData                    stCharacterAppearance;                            		// 0x0020 (0x0054) [0x0000000000000000]              
	struct FCharacterStatisticsData                    stCharacterStatistics;                            		// 0x0074 (0x0010) [0x0000000000000000]              
	int                                                nLastPlayedSlot;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                m_CharacterLevel;                                 		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                m_CreationYear;                                   		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                m_CreationMonth;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                m_CreationDayOfWeek;                              		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                m_CreationDay;                                    		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                m_CreationHour;                                   		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                m_CreationMin;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                m_CreationSec;                                    		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                m_CreationMSec;                                   		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                m_PlayedHours;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                m_PlayedMin;                                      		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                m_PlayedSec;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_ClassBase;                                      		// 0x00B8 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_origin;                                         		// 0x00B9 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_Reputation;                                     		// 0x00BA (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamerProfile.AchievementInfo
// 0x0028
struct FAchievementInfo
{
	struct FString                                     sIcon;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nAchievementID;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                srTitle;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                srIncomplete;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                srComplete;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nIconRef;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEarned : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGamerProfile.UnlockedBonusTalentInfo
// 0x000C
struct FUnlockedBonusTalentInfo
{
	int                                                nBonusTalentID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                srTitle;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                srDesc;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSkillGame.SkillGameInfo
// 0x0025
struct FSkillGameInfo
{
	struct TArray<int>                                 NumButtons;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<float>                               TimeOut;                                          		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              StartDelay;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Difficulty;                                       		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSkillGame.SkillGameSalvage
// 0x0011
struct FSkillGameSalvage
{
	struct TArray<int>                                 Salvage;                                          		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      GameDifficulty;                                   		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioArtPlaceableRoles.ArtPlaceableProperty
// 0x0020
struct FArtPlaceableProperty
{
	struct FString                                     sPropertyName;                                    		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sPropertyValue;                                   		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioArtPlaceableRoles.ArtPlaceableRole
// 0x0020
struct FArtPlaceableRole
{
	struct FString                                     sRoleName;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FArtPlaceableProperty>        aProperties;                                      		// 0x0010 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct SFXGame.BioArtPlaceableType.CoverInformation
// 0x0026
struct FCoverInformation
{
	struct FVector                                     vOverridenPosition;                               		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rOverridenRotation;                               		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStepLeftDistance;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStepRightDistance;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverridePosition : 1;                            		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverrideRotation : 1;                            		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDisableWhenOnTop : 1;                            		// 0x0020 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      CoverType;                                        		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverDirection;                                   		// 0x0025 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioArtPlaceable.CoverLinkRecord
// 0x000C
struct FCoverLinkRecord
{
	class AActor*                                      oCover;                                           		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                nSlotIndex;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEquipmentBase.BioEquipmentBaseSlotType
// 0x0028
struct FBioEquipmentBaseSlotType
{
	struct FScriptDelegate                             EquipAction;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             UnEquipAction;                                    		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioItem*                                    oEquippedItem;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioBaseActivity.ActivityProp
// 0x0010
struct FActivityProp
{
	class UStaticMesh*                                 m_oStaticMesh;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nAttachlocation;                                		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioProceduralCameraBasic.ActorInfo
// 0x0054
struct FActorInfo
{
	struct FVector                                     myPosition;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    myRotation;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     headBaseBonePosition;                             		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     headBonePosition;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     vCameraFocusPoint;                                		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     vProceduralCameraPosition;                        		// 0x003C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rProceduralCameraRotation;                        		// 0x0048 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioProceduralCameraBasic.CameraInfo
// 0x0020
struct FCameraInfo
{
	struct FVector                                     vPosition;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRotation;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              fFov;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fNearPlane;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCameraBehaviorGalaxy.BioMassRelayLine
// 0x0080
struct FBioMassRelayLine
{
	struct FString                                     m_sStartClusterLabel;                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sEndClusterLabel;                               		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     m_vLeftEndPosition;                               		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vRightEndPosition;                              		// 0x002C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vMiddlePosition;                                		// 0x0038 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vDrawScale;                                     		// 0x0044 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_rOrientation;                                   		// 0x0050 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pLeftEndActor;                                  		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pRighEndActor;                                  		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pMiddleActor;                                   		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nStartClusterIdx;                               		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nEndClusterIdx;                                 		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsGlowing : 1;                                 		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioCharacterImporter.BioIntArray
// 0x0010
struct FBioIntArray
{
	struct TArray<int>                                 m_a;                                              		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioCharacterImporter.PlayerInfo
// 0x003F
struct FPlayerInfo
{
	struct FString                                     m_Label;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_FirstName;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_FaceCode;                                       		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioMorphFace*                               m_oMorph;                                         		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                nBonusTalentID;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_Gender;                                         		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_origin;                                         		// 0x003D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_notoriety;                                      		// 0x003E (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCharacterImporter.BioClassGuiInfo
// 0x0020
struct FBioClassGuiInfo
{
	struct FString                                     sLabel;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                srClassName;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                srDescription;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                srPrimaryAbilityDescription;                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                srSecondaryAbilityDescription;                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCharacterImporter.BioSpecializationData
// 0x0010
struct FBioSpecializationData
{
	int                                                m_bonusID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_replaceTalentID;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_LocalizedName;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_LocalizedDesc;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.MorphFeatureSaveRecord
// 0x000C
struct FMorphFeatureSaveRecord
{
	struct FName                                       Feature;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.OffsetBoneSaveRecord
// 0x0014
struct FOffsetBoneSaveRecord
{
	struct FVector                                     Offset;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.ScalarParameterSaveRecord
// 0x000C
struct FScalarParameterSaveRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.VectorParameterSaveRecord
// 0x0018
struct FVectorParameterSaveRecord
{
	struct FLinearColor                                Value;                                            		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.TextureParameterSaveRecord
// 0x0010
struct FTextureParameterSaveRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Texture;                                          		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord
// 0x00A8
struct FMorphHeadSaveRecord
{
	struct TArray<struct FName>                        AccessoryMeshes;                                  		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FMorphFeatureSaveRecord>      MorphFeatures;                                    		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FOffsetBoneSaveRecord>        OffsetBones;                                      		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FVector>                      LOD0Vertices;                                     		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FVector>                      LOD1Vertices;                                     		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FVector>                      LOD2Vertices;                                     		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FVector>                      LOD3Vertices;                                     		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FScalarParameterSaveRecord>   ScalarParameters;                                 		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FVectorParameterSaveRecord>   VectorParameters;                                 		// 0x0080 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FTextureParameterSaveRecord>  TextureParameters;                                		// 0x0090 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       HairMesh;                                         		// 0x00A0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.AppearanceSaveRecord
// 0x00AC
struct FAppearanceSaveRecord
{
	struct FMorphHeadSaveRecord                        MorphHead;                                        		// 0x0000 (0x00A8) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bHasMorphHead : 1;                                		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ItemModSaveRecord
// 0x000D
struct FItemModSaveRecord
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Manufacturer;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotConditionalID;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      sophistication;                                   		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ItemSaveRecord
// 0x0021
struct FItemSaveRecord
{
	struct TArray<struct FItemModSaveRecord>           XMods;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Manufacturer;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotConditionalID;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNewItem : 1;                                     		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bJunkItem : 1;                                    		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      sophistication;                                   		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.SimpleTalentSaveRecord
// 0x0008
struct FSimpleTalentSaveRecord
{
	int                                                TalentID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentRank;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ComplexTalentSaveRecord
// 0x0038
struct FComplexTalentSaveRecord
{
	struct TArray<int>                                 PrereqTalentIDArray;                              		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 PrereqTalentRankArray;                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TalentID;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                CurrentRank;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaxRank;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                LevelOffset;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                LevelsPerRank;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                VisualOrder;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.GameOptionsSaveRecord
// 0x0010
struct FGameOptionsSaveRecord
{
	struct TArray<int>                                 GameOptions;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.HotKeySaveRecord
// 0x0008
struct FHotKeySaveRecord
{
	int                                                HotKeyPawn;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HotKeyEvent;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerSaveRecord
// 0x01E4
struct FPlayerSaveRecord
{
	struct FAppearanceSaveRecord                       Appearance;                                       		// 0x0000 (0x00AC) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FirstName;                                        		// 0x00AC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FItemSaveRecord>              Items;                                            		// 0x00BC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FItemSaveRecord>              BuybackItems;                                     		// 0x00CC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FSimpleTalentSaveRecord>      simpleTalents;                                    		// 0x00DC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FComplexTalentSaveRecord>     complexTalents;                                   		// 0x00EC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FItemSaveRecord>              Equipment;                                        		// 0x00FC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FItemSaveRecord>              Weapons;                                          		// 0x010C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FaceCode;                                         		// 0x011C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGameOptionsSaveRecord                      GameOptions;                                      		// 0x012C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FHotKeySaveRecord>            HotKeys;                                          		// 0x013C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       MappedTalent;                                     		// 0x014C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PrimaryWeapon;                                    		// 0x0154 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SecondaryWeapon;                                  		// 0x015C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LastPower;                                        		// 0x0164 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlayerClassName;                                  		// 0x016C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              currentXP;                                        		// 0x0174 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                XPLevel;                                          		// 0x0178 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastName;                                         		// 0x017C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x0180 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoolPoints;                                 		// 0x0184 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Credits;                                          		// 0x0188 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MediGel;                                          		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Grenades;                                         		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OmniGel;                                          		// 0x0194 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpecializationBonusID;                            		// 0x0198 (0x0004) [0x0000000000000000]              
	int                                                AutoLevelUpTemplateID;                            		// 0x019C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPerLevel;                                   		// 0x01A0 (0x0004) [0x0000000000000000]              
	float                                              StabilityCurrent;                                 		// 0x01A4 (0x0004) [0x0000000000000000]              
	float                                              ToxicCurrent;                                     		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                Stamina;                                          		// 0x01AC (0x0004) [0x0000000000000000]              
	int                                                Focus;                                            		// 0x01B0 (0x0004) [0x0000000000000000]              
	int                                                Precision;                                        		// 0x01B4 (0x0004) [0x0000000000000000]              
	int                                                Coordination;                                     		// 0x01B8 (0x0004) [0x0000000000000000]              
	float                                              SkillCharm;                                       		// 0x01BC (0x0004) [0x0000000000000000]              
	float                                              SkillIntimidate;                                  		// 0x01C0 (0x0004) [0x0000000000000000]              
	float                                              SkillHaggle;                                      		// 0x01C4 (0x0004) [0x0000000000000000]              
	float                                              HealthCurrent;                                    		// 0x01C8 (0x0004) [0x0000000000000000]              
	float                                              ShieldCurrent;                                    		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              HealthMax;                                        		// 0x01D0 (0x0004) [0x0000000000000000]              
	int                                                LastQuickSlot;                                    		// 0x01D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFemale : 1;                                    		// 0x01D8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      isDriving : 1;                                    		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      ArmorOverridden : 1;                              		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      HelmetShown : 1;                                  		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      PlayerClass;                                      		// 0x01DC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Origin;                                           		// 0x01DD (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Notoriety;                                        		// 0x01DE (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SpectreRank;                                      		// 0x01DF (0x0001) [0x0000000000000000]              
	unsigned char                                      Race;                                             		// 0x01E0 (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributePrimary;                                 		// 0x01E1 (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributeSecondary;                               		// 0x01E2 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentQuickSlot;                                 		// 0x01E3 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInventoryGuiInterface.BioInventoryGuiInterfaceItemStat
// 0x0009
struct FBioInventoryGuiInterfaceItemStat
{
	float                                              Current;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nAbsolute;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWeaponRanged.StatsClassBinding
// 0x000C
struct FStatsClassBinding
{
	class UClass*                                      StatsClass;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ManufacturerID;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWeaponRanged.HeadshotTalentBinding
// 0x0005
struct FHeadshotTalentBinding
{
	int                                                TalentID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PowerMode;                                        		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWeaponRanged.BioWeaponTraceInfo
// 0x0055
struct FBioWeaponTraceInfo
{
	struct FTraceHitInfo                               m_hitInfo;                                        		// 0x0000 (0x0028) [0x0000000000080000]              ( CPF_Component )
	struct FVector                                     m_vHitPoint;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vHitNormal;                                     		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vTrace;                                         		// 0x0040 (0x000C) [0x0000000000000000]              
	class AActor*                                      m_pHitActor;                                      		// 0x004C (0x0008) [0x0000000000000000]              
	unsigned char                                      m_eHit;                                           		// 0x0054 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWeaponRanged.ImpactDelayInfo
// 0x0014
struct FImpactDelayInfo
{
	struct TArray<struct FBioWeaponTraceInfo>          aImpactTraceInfo;                                 		// 0x0000 (0x0010) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	float                                              fTimeRemaining;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponStatsBase.WeaponAimMode
// 0x0014
struct FWeaponAimMode
{
	float                                              ZoomFOV;                                          		// 0x0000 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              CameraSensitivityMultiplier;                      		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              FrictionMultiplier;                               		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              AdhesionMultiplier;                               		// 0x000C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bScoped : 1;                                      		// 0x0010 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.BioItemSophisticated.BioManufacturerDetails
// 0x000C
struct FBioManufacturerDetails
{
	int                                                srName;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                srDescription;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nIcon;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInventoryGuiInterface.GuiEquipSlotDetails
// 0x0018
struct FGuiEquipSlotDetails
{
	struct TArray<int>                                 lstStatLabels;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                srSlotName;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nEmptyIcon;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioItem.BioItemPropertyInfo
// 0x000C
struct FBioItemPropertyInfo
{
	int                                                srName;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                srDescription;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInventoryGuiInterface.BioInventoryGuiInterfaceItemStats
// 0x0034
struct FBioInventoryGuiInterfaceItemStats
{
	struct TArray<struct FBioItemPropertyInfo>         lstModifiers;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBioInventoryGuiInterfaceItemStat           lstStats[ 0x3 ];                                  		// 0x0010 (0x0024) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInventoryGuiInterface.XModInfo
// 0x0020
struct FXModInfo
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioItemXMod*                                m_oXMod;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                m_nType;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                sophistication;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInventoryGuiInterface.ItemInfo
// 0x009E
struct FItemInfo
{
	struct FBioInventoryGuiInterfaceItemStats          m_rawStats;                                       		// 0x0000 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FXModInfo>                    m_lstXMods;                                       		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioItem*                                    itemRef;                                          		// 0x0054 (0x0008) [0x0000000000000000]              
	int                                                ItemCategoryDescription;                          		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                ItemCategoryName;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nItemCategoryGuiIcon;                             		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                ItemSubcategoryRacialLabel;                       		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                ManufacturerName;                                 		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                ManufacturerDescription;                          		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                nManufacturerIcon;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                nManufacturerID;                                  		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                BonusesDescription;                               		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                sophistication;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_price;                                          		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                m_plotConditional;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                InvIndex;                                         		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                FilteredIndexOverride;                            		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                m_nmShopGUIImageID;                               		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsEquippable : 1;                              		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsNew : 1;                                     		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      ItemSubcategoryRace;                              		// 0x009C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eSlot;                                          		// 0x009D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInventoryGuiInterface.ResourceInfo
// 0x0005
struct FResourceInfo
{
	float                                              fQty;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioItemXModdable.BioItemXModdableSlotSpec
// 0x0014
struct FBioItemXModdableSlotSpec
{
	struct TArray<class UBioItemXMod*>                 m_xMods;                                          		// 0x0000 (0x0010) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                m_type;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioItemXModdable.BioItemXModVirtualSlot
// 0x000C
struct FBioItemXModVirtualSlot
{
	int                                                m_type;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UBioItemXMod*                                m_oXMod;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManager.BioDebugMessage
// 0x0018
struct FBioDebugMessage
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fStartTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManager.PowerAimingInfo
// 0x0030
struct FPowerAimingInfo
{
	struct FVector                                     m_vStartLocation1;                                		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vEndLocation1;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vStartLocation2;                                		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vEndLocation2;                                  		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversation.BioDialogReplyListDetails
// 0x0019
struct FBioDialogReplyListDetails
{
	struct FString                                     sParaphrase;                                      		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                srParaphrase;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Category;                                         		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogNode
// 0x003D
struct FBioDialogNode
{
	struct FString                                     sText;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   pCue;                                             		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                srText;                                           		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nConditionalFunc;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nConditionalParam;                                		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nStateTransition;                                 		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nStateTransitionParam;                            		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nExportID;                                        		// 0x002C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                nScriptIndex;                                     		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nCameraIntimacy;                                  		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFireConditional : 1;                             		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAmbient : 1;                                     		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNonTextLine : 1;                                 		// 0x0038 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSoundLoaded : 1;                                 		// 0x0038 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bIgnoreBodyGestures : 1;                          		// 0x0038 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      eGUIStyle;                                        		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogEntryNode
// 0x002F(0x006C - 0x003D)
struct FBioDialogEntryNode : FBioDialogNode
{
	struct TArray<struct FBioDialogReplyListDetails>   ReplyListNew;                                     		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 aSpeakerList;                                     		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nSpeakerIndex;                                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nListenerIndex;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkippable : 1;                                   		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogReplyNode
// 0x001C(0x0059 - 0x003D)
struct FBioDialogReplyNode : FBioDialogNode
{
	struct TArray<int>                                 EntryList;                                        		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nListenerIndex;                                   		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUnskippable : 1;                                 		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIllegal : 1;                                     		// 0x0054 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned char                                      ReplyType;                                        		// 0x0058 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogSpeaker
// 0x0010
struct FBioDialogSpeaker
{
	struct FName                                       sSpeakerTag;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      aSpeaker;                                         		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.BioConversation.BioDialogLookat
// 0x0014
struct FBioDialogLookat
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      pLookAtTarget;                                    		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              fLookAtDelay;                                     		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.BioConversation.BioDialogScript
// 0x0008
struct FBioDialogScript
{
	struct FName                                       sScriptTag;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioSavedActorPos
// 0x0020
struct FBioSavedActorPos
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRot;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversation.BioNextCamData
// 0x0038
struct FBioNextCamData
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rRot;                                             		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FBioStageDOFData                            tDOFData;                                         		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       sCameraName;                                      		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFov;                                             		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fNearPlane;                                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseThis : 1;                                     		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDEBUGMarkerComponent.LineData
// 0x001B
struct FLineData
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      R;                                                		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      G;                                                		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned char                                      B;                                                		// 0x001A (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDEBUGMarkerComponent.MarkerData
// 0x0013
struct FMarkerData
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                Size;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      R;                                                		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      G;                                                		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      B;                                                		// 0x0012 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEffectsMaterialsPriorityMap.EffectMaterialPriority
// 0x0005
struct FEffectMaterialPriority
{
	int                                                nPriority;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eType;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEmissionAreaListBoneList.BoneAndWeight
// 0x000C
struct FBoneAndWeight
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneWeight;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEmissionAreaListBoneList.BoneListEmissionArea
// 0x001C
struct FBoneListEmissionArea
{
	struct TArray<struct FBoneAndWeight>               Bones;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       AreaTag;                                          		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseNumVertsAsWeights : 1;                         		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEventNotifier.BioDisplayNotice
// 0x0030
struct FBioDisplayNotice
{
	struct FString                                     strTitle;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nEventType;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nTimeToLive;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nContext;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                srTitle;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nQuantMin;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nQuantMax;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEventNotifier.BioTalentNotice
// 0x0010
struct FBioTalentNotice
{
	class ABioPawn*                                    oCharacter;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nIcon;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                srName;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackDOF.BioDOFTrackData
// 0x0034
struct FBioDOFTrackData
{
	struct FVector                                     vFocusPosition;                                   		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFalloffExponent;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFStop;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBlurKernelSize;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxNearBlurAmount;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxFarBlurAmount;                                		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      cModulateBlurColor;                               		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFocusInnerRadius;                                		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFocusDistance;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fInterpolateSeconds;                              		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableDOF : 1;                                   		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackFuncShot.BioFuncShotData
// 0x0041
struct FBioFuncShotData
{
	struct FString                                     sActor1;                                          		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sActor2;                                          		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sStage;                                           		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       nmShotName;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                nActor1PosNode;                                   		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseCamera : 1;                                   		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      eShotType;                                        		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestTrackPriority
// 0x0008
struct FBioGestTrackPriority
{
	int                                                nTrackIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureRenameData
// 0x0018
struct FBioGestureRenameData
{
	struct FName                                       nmOldAnim;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNewSet;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNewAnim;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackLookAt.BioLookAtTrackData
// 0x001C
struct FBioLookAtTrackData
{
	struct FName                                       nmTargetTag;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEyeWeight;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fHeadWeight;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTorsoWeight;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableEyes : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableHead : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEnableTorso : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioStage.BioStageCameraCustom
// 0x002C
struct FBioStageCameraCustom
{
	struct FString                                     m_sCameraName;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fCameraHeightDelta;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraPitchDelta;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraYawDelta;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraFOVDelta;                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fCameraNearPlaneDelta;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraFocusInnerRadiusDelta;                   		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraFocusDistanceDelta;                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackSetFacing.BioSetFacingData
// 0x0009
struct FBioSetFacingData
{
	float                                              fOrientation;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyOrientation : 1;                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      eStageNode;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackSubtitles.BioSubtitleTrackData
// 0x0008
struct FBioSubtitleTrackData
{
	int                                                nStrRefID;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fLength;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackSwitchCamera.BioCameraSwitchData
// 0x001A
struct FBioCameraSwitchData
{
	struct FName                                       nmExplicitCamera;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmStageSpecificCam;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                nIntimacy;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceCrossingLineOfAction : 1;                   		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseForNextCamera : 1;                            		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      eStandardCamera;                                  		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eStageSpecificCam;                                		// 0x0019 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackVOElements.FaceFXInfo
// 0x0030
struct FFaceFXInfo
{
	struct FString                                     AnimName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ABioPawn*                                    Pawn;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	class UFaceFXAsset*                                Asset;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	class UFaceFXAnimSet*                              AnimSet;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              AnimPos;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      Dirty : 1;                                        		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioEvtSysTrackVOElementsInst.BioVOActorType
// 0x0020
struct FBioVOActorType
{
	struct FString                                     sTag;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sActorType;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioEvtSysTrackVOElementsInst.BioVOActorData
// 0x002C
struct FBioVOActorData
{
	struct FVector                                     vLastPos;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rLastRot;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmStageNode;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSpawned : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioForceFeedbackPlayer.BioForceFeedbackPlayerSpec
// 0x0009
struct FBioForceFeedbackPlayerSpec
{
	class UForceFeedbackWaveform*                      m_pWaveform;                                      		// 0x0000 (0x0008) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned char                                      m_eLabel;                                         		// 0x0008 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioForceFeedbackPlayer.BioForceFeedbackPlayerWeaponSpec
// 0x0009
struct FBioForceFeedbackPlayerWeaponSpec
{
	class UForceFeedbackWaveform*                      m_pWaveform;                                      		// 0x0000 (0x0008) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned char                                      m_eLabel;                                         		// 0x0008 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioFormations.FormationPosition
// 0x0034
struct FFormationPosition
{
	struct FVector                                     Formation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    facing;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     InvFormation;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    InvFacing;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	int                                                EscapeDistance;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGameProperty.BioGamePropertyApplication
// 0x0010
struct FBioGamePropertyApplication
{
	class UObject*                                     m_pActualTarget;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class UBioGameEffect*                              m_pGE;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamePropertyEffectLevelIterator.BioEffectLevelIteratorPair
// 0x0014
struct FBioEffectLevelIteratorPair
{
	struct TArray<int>                                 m_aGPEffectRows;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nGameProperty;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGamePropertyImporter.BioGPLoadData
// 0x0034
struct FBioGPLoadData
{
	struct TArray<int>                                 aEffectLevelRows;                                 		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     oOwner;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	class UBioGamePropertyContainer*                   oContainer;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	class UBio2DA*                                     oFXLevelTable;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                nGamePropId;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nPowerLevel;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nMaxRanks;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureLangOverride.BioGestLangOverride
// 0x0018
struct FBioGestLangOverride
{
	struct FName                                       nmAnimToOverride;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmOverrideSet;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmOverrideSeq;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestRuleItem
// 0x0028
struct FBioGestRuleItem
{
	struct FName                                       nmPose1;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPose2;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGesture;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSet;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioARPUBodyConfig
// 0x0024
struct FBioARPUBodyConfig
{
	struct FName                                       nmCurveName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSet;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              fStartBlendDuration;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsesSingleKeyframe : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioProjectile.BioProjectilePhysicsCollisionContext
// 0x0020
struct FBioProjectilePhysicsCollisionContext
{
	struct FVector                                     m_vHitLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vHitNormal;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      m_oActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGUIBox.CanvasProperties
// 0x0024
struct FCanvasProperties
{
	class UFont*                                       m_font;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nCurX;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nCurY;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nOrgX;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nOrgY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nClipX;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nClipY;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioInterfaceAppearanceVehicle.BioVehicleTurretRunTimeInfo
// 0x000C
struct FBioVehicleTurretRunTimeInfo
{
	float                                              m_fCurrentTurretRelativeYaw;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCurrentTurretRelativePitch;                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bTurretAutoTrackYaw : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTurretAutoTrackPitch : 1;                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioItem.BioItemPropertyStatus
// 0x0008
struct FBioItemPropertyStatus
{
	int                                                m_nID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioItemXModdableSaveObject.BioItemXModdableSaveObjectSlotSpec
// 0x0014
struct FBioItemXModdableSaveObjectSlotSpec
{
	struct TArray<class UBioItemXModSaveObject*>       m_aXMod;                                          		// 0x0000 (0x0010) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                m_nType;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioVISSimple.BioVISSData
// 0x0018
struct FBioVISSData
{
	class UPhysicalMaterial*                           oPhysMat;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             oVFXTemplate;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             oImpactOverrideVFXTemplate;                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioLevelSaveObject.SavedLootBag
// 0x001C
struct FSavedLootBag
{
	struct FString                                     m_sActorType;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_vPosition;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioLookAtDefinition.LookAtBoneDefinition
// 0x003E
struct FLookAtBoneDefinition
{
	struct TArray<struct FName>                        m_anTargetBones;                                  		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_nBoneName;                                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmMasterBoneName;                               		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fLimit;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fUpDownLimit;                                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fDelay;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fSpeedFactor;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fMaxAcceleration;                               		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fConversationStrength;                          		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bSeparateUpDownLimit : 1;                       		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseUpAxis : 1;                                 		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInLocalSpace : 1;                        		// 0x0038 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bLookAtInverted : 1;                            		// 0x0038 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInverted : 1;                            		// 0x0038 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_bUseAcceleration : 1;                           		// 0x0038 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      m_bUseMasterBone : 1;                             		// 0x0038 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned char                                      m_nLookAxis;                                      		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nUpAxis;                                        		// 0x003D (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioMorphFace.MorphFeature
// 0x000C
struct FMorphFeature
{
	struct FName                                       sFeatureName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Offset;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFace.OffsetBonePos
// 0x0014
struct FOffsetBonePos
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       nName;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFace.BioDummyRenderCommandFence
// 0x0004
struct FBioDummyRenderCommandFence
{
	int                                                nDummy;                                           		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SFXGame.BioMorphUtility.TextureData
// 0x0010
struct FTextureData
{
	struct FName                                       m_nParamName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    m_oTexture;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.ScalarData
// 0x000C
struct FScalarData
{
	struct FName                                       m_nParamName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fScalarValue;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.HairComponent
// 0x005D
struct FHairComponent
{
	struct FString                                     StyleName;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MeshName;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ScalpMorphName;                                   		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FTextureData>                 m_aHairTextures;                                  		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScalarData>                  m_aHairScalars;                                   		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               HairMesh;                                         		// 0x0050 (0x0008) [0x0000000000000000]              
	float                                              ScalpMorphWeight;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned char                                      HairType;                                         		// 0x005C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.HairData
// 0x0030
struct FHairData
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HairMorphSpecMaskName;                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FHairComponent>               HairComponents;                                   		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialComponent
// 0x0051
struct FMaterialComponent
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Panel;                                            		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ParameterName;                                    		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FString>                      Params;                                           		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x0050 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialGroup
// 0x0020
struct FMaterialGroup
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FMaterialComponent>           Components;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialPanel
// 0x0020
struct FMaterialPanel
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FMaterialGroup>               Groups;                                           		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialData
// 0x0010
struct FMaterialData
{
	struct TArray<struct FMaterialPanel>               Panels;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.AdditionalData
// 0x0030
struct FAdditionalData
{
	struct FHairData                                   Hair;                                             		// 0x0000 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.BaseSliders
// 0x0014
struct FBaseSliders
{
	struct FString                                     m_sSliderName;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fValue;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.BaseHeads
// 0x0010
struct FBaseHeads
{
	struct TArray<struct FBaseSliders>                 m_fBaseHeadSettings;                              		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.SliderModifierSliderData
// 0x0024
struct FSliderModifierSliderData
{
	struct TArray<class UBioMorphFaceFESliderBase*>    m_aoSliderData;                                   		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<float>                               m_fRandWeights;                                   		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fRandWeightsTotal;                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.SliderModifier
// 0x0040
struct FSliderModifier
{
	struct FString                                     m_sName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<float>                               m_aRandMin;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<float>                               m_aRandMax;                                       		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSliderModifierSliderData>    m_aSliders;                                       		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.Slider
// 0x0064
struct FSlider
{
	struct FString                                     m_sName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<class UBioMorphFaceFESliderBase*>    m_aoSliderData;                                   		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<float>                               m_fRandWeights;                                   		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSliderModifier>              m_aSliderModifiers;                               		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iIndex;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_iValue;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_iSteps;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                m_iStringRef;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                m_iDescriptionStringRef;                          		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              m_fRandWeightsTotal;                              		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              m_fRandMin;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_fRandMax;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bNotched : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.Category
// 0x002C
struct FCategory
{
	struct FString                                     m_sCatName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSlider>                      m_aoSliders;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iCatIndex;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_iStringRef;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_iDescriptionStringRef;                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.FaceData
// 0x0040
struct FFaceData
{
	struct FAdditionalData                             m_pAdditionalParams;                              		// 0x0000 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FCategory>                    m_oCategories;                                    		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceSaveObject.VertexBuffer
// 0x0010
struct FVertexBuffer
{
	struct TArray<struct FVector>                      m_vPosition;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioParticleModuleLocationAttachedMesh.EmissionAreaWeight
// 0x000C
struct FEmissionAreaWeight
{
	struct FName                                       AreaTag;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXTrilogyProfileSettings.TrilogyGrinderAchievementData
// 0x0012
struct FTrilogyGrinderAchievementData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Threshold;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AchievementId;                                    		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Stat;                                             		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPlayerSelection.BioSelection
// 0x0010
struct FBioSelection
{
	class AActor*                                      m_pTarget;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fAngle;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fRange;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXCameraNativeBase.SFXCameraNativeBaseTraceInfo
// 0x0028
struct FSFXCameraNativeBaseTraceInfo
{
	struct FVector                                     m_vCollVectorLocation;                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vCollVectorNormal;                              		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      m_oCollVectorActor;                               		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FColor                                      m_clrDebugDraw;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCollDetected : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCollisionDirty : 1;                            		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDebugDraw : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXWeaponStatsBase.ZoomSnapInfo
// 0x000D
struct FZoomSnapInfo
{
	float                                              OuterSnapAngle;                                   		// 0x0000 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InnerSnapAngle;                                   		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SnapOffsetMag;                                    		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      AimNode;                                          		// 0x000C (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.BioPlayerController.BioPlayerControllerTwistThresholdSpec
// 0x0005
struct FBioPlayerControllerTwistThresholdSpec
{
	float                                              m_fTwistThreshold;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eActionState;                                   		// 0x0004 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioPlayerController.PostProcessInfo
// 0x0011
struct FPostProcessInfo
{
	float                                              Shadows;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MidTones;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              HighLights;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Desaturation;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Preset;                                           		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioDamageIndicatorData
// 0x0004
struct FBioDamageIndicatorData
{
	float                                              fCoolDownTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioPPSettingsCallbackData
// 0x0010
struct FBioPPSettingsCallbackData
{
	struct FPointer                                    fpCallback;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    pData;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioActionMapping
// 0x0011
struct FBioActionMapping
{
	struct FName                                       nmPower;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class APawn*                                       oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_MessageBox.BioMessageBoxOptionalParams
// 0x0015
struct FBioMessageBoxOptionalParams
{
	int                                                srAText;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                srBText;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                srYText;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoFade : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModal : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      nIconSet;                                         		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioVehicleBehaviorBase.BioVehicleWeaponInfo
// 0x0018
struct FBioVehicleWeaponInfo
{
	class ABioWeapon*                                  oVehicleWeaponPtr;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nTurretIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fTurretYawHalfAngleInDeg;                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fTurretPitchHalfAngleInDeg;                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bClampToTurret : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioPlayerController.BioRadarCacheUpdateData
// 0x0010
struct FBioRadarCacheUpdateData
{
	struct FVector                                     vPosition;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioRadarData
// 0x0032
struct FBioRadarData
{
	struct FVector                                     vPosition;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLast_Position;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fPassTime;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nSize;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nLast_Index;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nLast_Size;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerLockedOn : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLast_PlayerLockedOn : 1;                         		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eRadarType;                                       		// 0x0030 (0x0001) [0x0000000000000000]              
	unsigned char                                      eLast_RadarType;                                  		// 0x0031 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPhysicsSounds.BioPhysicsSoundsInfo
// 0x0010
struct FBioPhysicsSoundsInfo
{
	class UAudioComponent*                             oAudioComp;                                       		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                nPriority;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fLastTimePlayed;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerInput.StaticKeyBind
// 0x001C
struct FStaticKeyBind
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      Control : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Shift : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Alt : 1;                                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDebug : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIgnoreCtrl : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIgnoreShift : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIgnoreAlt : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct SFXGame.BioPlayerSquad.SquadTargetData
// 0x0024
struct FSquadTargetData
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      oTarget;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                nActionIcon;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSquadIcon;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fTimeOut;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActive : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioPowerVFXAppearance.PowerVFXData
// 0x000C
struct FPowerVFXData
{
	class UBioVFXTemplate*                             m_EffectTemplate;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsePowerTime : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerInfoEx
// 0x0036
struct FPlayerInfoEx
{
	struct FString                                     FirstName;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FaceCode;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioMorphFace*                               MorphHead;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       BonusTalentClass;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsFemale : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Origin;                                           		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      Notoriety;                                        		// 0x0035 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXEngine.BlazeDataStore
// 0x0028
struct FBlazeDataStore
{
	struct TArray<unsigned char>                       LoginInfo;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<unsigned char>                       PersonaID;                                        		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                DaysSinceRegistration;                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNucleusRefused : 1;                              		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNucleusSuccessful : 1;                           		// 0x0024 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCerberusRefused : 1;                             		// 0x0024 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAutoLogin : 1;                                   		// 0x0024 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bDirty : 1;                                       		// 0x0024 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bPS3_RedeemedProductCode : 1;                     		// 0x0024 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXEngine.SFXCareerCacheEntry
// 0x0026
struct FSFXCareerCacheEntry
{
	struct FString                                     Career;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FirstName;                                        		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ClassName;                                        		// 0x0020 (0x0004) [0x0000000000100000]              
	unsigned char                                      Origin;                                           		// 0x0024 (0x0001) [0x0000000000100000]              
	unsigned char                                      Notoriety;                                        		// 0x0025 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXSaveDescriptor
// 0x0029
struct FSFXSaveDescriptor
{
	struct FString                                     Career;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     SaveName;                                         		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0020 (0x0004) [0x0000000000100000]              
	unsigned long                                      IsOwned : 1;                                      		// 0x0024 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned char                                      Type;                                             		// 0x0028 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXSaveGame.SaveTimeStamp
// 0x0010
struct FSaveTimeStamp
{
	int                                                SecondsSinceMidnight;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Day;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Month;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Year;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXEngine.SFXSaveRecord
// 0x00A7
struct FSFXSaveRecord
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x002C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sMapName;                                         		// 0x002C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sParentMapName;                                   		// 0x003C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sDisplayName;                                     		// 0x004C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Filename;                                         		// 0x005C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FirstName;                                        		// 0x006C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FSaveTimeStamp                              TimeStamp;                                        		// 0x007C (0x0010) [0x0000000000100000]              
	struct FSaveTimeStamp                              CreatedDate;                                      		// 0x008C (0x0010) [0x0000000000100000]              
	int                                                SecondsPlayed;                                    		// 0x009C (0x0004) [0x0000000000100000]              
	int                                                Level;                                            		// 0x00A0 (0x0004) [0x0000000000100000]              
	unsigned char                                      ClassBase;                                        		// 0x00A4 (0x0001) [0x0000000000100000]              
	unsigned char                                      Origin;                                           		// 0x00A5 (0x0001) [0x0000000000100000]              
	unsigned char                                      Reputation;                                       		// 0x00A6 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXSavePair
// 0x0034
struct FSFXSavePair
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x002C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class USFXSaveGame*                                Save;                                             		// 0x002C (0x0008) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotQuest
// 0x0018
struct FPlotQuest
{
	struct TArray<int>                                 History;                                          		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                QuestCounter;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bQuestUpdated : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotCodex.PlotCodexPage
// 0x0008
struct FPlotCodexPage
{
	int                                                Page;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNew : 1;                                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotCodex
// 0x0010
struct FPlotCodex
{
	struct TArray<struct FPlotCodexPage>               Pages;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord
// 0x0074
struct FPlotTableSaveRecord
{
	struct TArray<int>                                 BoolVariables;                                    		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 IntVariables;                                     		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<float>                               FloatVariables;                                   		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FPlotQuest>                   QuestProgress;                                    		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 QuestIDs;                                         		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FPlotCodex>                   CodexEntries;                                     		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 CodexIDs;                                         		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                QuestProgressCounter;                             		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.KismetBoolSaveRecord
// 0x0014
struct FKismetBoolSaveRecord
{
	struct FGuid                                       BoolGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bValue : 1;                                       		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.HenchmanSaveRecord
// 0x0092
struct FHenchmanSaveRecord
{
	struct TArray<struct FSimpleTalentSaveRecord>      simpleTalents;                                    		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FComplexTalentSaveRecord>     complexTalents;                                   		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FItemSaveRecord>              Equipment;                                        		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FItemSaveRecord>              Weapons;                                          		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Tag;                                              		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoolPoints;                                 		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AutoLevelUpTemplateID;                            		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastName;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClassName;                                        		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPerLevel;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              StabilityCurrent;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              ToxicCurrent;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Stamina;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                Focus;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                Precision;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Coordination;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              HealthCurrent;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              ShieldCurrent;                                    		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              HealthMax;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                XPLevel;                                          		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      HelmetShown : 1;                                  		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ClassBase;                                        		// 0x008C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      gender;                                           		// 0x008D (0x0001) [0x0000000000000000]              
	unsigned char                                      Race;                                             		// 0x008E (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributePrimary;                                 		// 0x008F (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributeSecondary;                               		// 0x0090 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentQuickSlot;                                 		// 0x0091 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.VehicleSaveRecord
// 0x001C
struct FVehicleSaveRecord
{
	struct FString                                     FirstName;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                LastName;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthCurrent;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ShieldCurrent;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.DoorSaveRecord
// 0x0012
struct FDoorSaveRecord
{
	struct FGuid                                       DoorGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CurrentState;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      OldState;                                         		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.StreamingStateSaveRecord
// 0x000C
struct FStreamingStateSaveRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXEngine.SFXCareerDescriptor
// 0x0030
struct FSFXCareerDescriptor
{
	struct FString                                     Career;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXSavePair>                 Saves;                                            		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXSaveDescriptor>           CorruptedSaves;                                   		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXEngine.SFXSaveGameCommandEventArgs
// 0x005D
struct FSFXSaveGameCommandEventArgs
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x002C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXCareerDescriptor>         Careers;                                          		// 0x002C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXSaveDescriptor>           CorruptedCareers;                                 		// 0x003C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AdditionalFreeBytesNeeded;                        		// 0x004C (0x0004) [0x0000000000100000]              
	int                                                TotalFreeBytes;                                   		// 0x0050 (0x0004) [0x0000000000100000]              
	int                                                PreparedSaveSize;                                 		// 0x0054 (0x0004) [0x0000000000100000]              
	unsigned long                                      bSuccess : 1;                                     		// 0x0058 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bRetry : 1;                                       		// 0x0058 (0x0004) [0x0000000000100000] [0x00000002] 
	unsigned long                                      bPause : 1;                                       		// 0x0058 (0x0004) [0x0000000000100000] [0x00000004] 
	unsigned long                                      bNeedsFreeSpace : 1;                              		// 0x0058 (0x0004) [0x0000000000100000] [0x00000008] 
	unsigned long                                      bTotalFreeBytesSet : 1;                           		// 0x0058 (0x0004) [0x0000000000100000] [0x00000010] 
	unsigned long                                      bPreparedSaveSizeSet : 1;                         		// 0x0058 (0x0004) [0x0000000000100000] [0x00000020] 
	unsigned char                                      Action;                                           		// 0x005C (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.DynamicLoadInfo
// 0x0028
struct FDynamicLoadInfo
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SeekFreePackageName;                              		// 0x0010 (0x0008) [0x0000000000000000]              
	class UObject*                                     CachedObjectHandle;                               		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     LoadedLinkerRoot;                                 		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.SFXEngine.PackageRemapInfo
// 0x0010
struct FPackageRemapInfo
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SeekFreePackageName;                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXEngine.SaveGUIRecord
// 0x005C
struct FSaveGUIRecord
{
	struct FSFXSaveDescriptor                          SaveDescriptor;                                   		// 0x0000 (0x002C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FriendlyName;                                     		// 0x002C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ImagePath;                                        		// 0x003C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USFXSaveGame*                                SaveGame;                                         		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  AreaImage;                                        		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotPseudoItemSaveRecord
// 0x0018
struct FPlotPseudoItemSaveRecord
{
	int                                                LocalizedName;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LocalizedDesc;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExportID;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                basePrice;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShopGUIImageID;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotConditional;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ProfileBOOLSaveRecord
// 0x0008
struct FProfileBOOLSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ProfileINTSaveRecord
// 0x0008
struct FProfileINTSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ProfileFLOATSaveRecord
// 0x0008
struct FProfileFLOATSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.PlotManagerAchievementSaveRecord
// 0x000C
struct FPlotManagerAchievementSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UnlockedAt;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ProfilePlaythroughSaveRecord
// 0x0008
struct FProfilePlaythroughSaveRecord
{
	int                                                PlaythroughID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DifficultySetting;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ProfileRewardSaveRecord
// 0x0024
struct FProfileRewardSaveRecord
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                UnlockedAt;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AchievementId;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TalenTreeID;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsAchievementUnlocked : 1;                        		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXSaveGame.BonusTalentSaveRecord
// 0x0008
struct FBonusTalentSaveRecord
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BonusTalentID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.CharacterStatisticsSaveRecord
// 0x0010
struct FCharacterStatisticsSaveRecord
{
	int                                                Stamina;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Focus;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Precision;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Coordination;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.CharacterProfileSaveRecord
// 0x0067
struct FCharacterProfileSaveRecord
{
	struct FString                                     characterID;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FullName;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCharacterStatisticsSaveRecord              CharacterStatistics;                              		// 0x0020 (0x0010) [0x0000000000000000]              
	int                                                LastPlayedSlot;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                CharacterLevel;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                CreationYear;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                CreationMonth;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                CreationDayOfWeek;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                CreationDay;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                CreationHour;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                CreationMin;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                CreationSec;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                CreationMSec;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                PlayedHours;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                PlayedMin;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                PlayedSec;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      ClassBase;                                        		// 0x0064 (0x0001) [0x0000000000000000]              
	unsigned char                                      Origin;                                           		// 0x0065 (0x0001) [0x0000000000000000]              
	unsigned char                                      Reputation;                                       		// 0x0066 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.GamerProfileSaveRecord
// 0x0108
struct FGamerProfileSaveRecord
{
	struct TArray<struct FProfileBOOLSaveRecord>       BoolVariables;                                    		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FProfileINTSaveRecord>        IntVariables;                                     		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FProfileFLOATSaveRecord>      FloatVariables;                                   		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FPlotManagerAchievementSaveRecord> PlotManagerAchievementMaps;                       		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FProfilePlaythroughSaveRecord> lstPlaythroughs;                                  		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FProfileRewardSaveRecord>     RewardStats;                                      		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 AchievementStates;                                		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FBonusTalentSaveRecord>       UnlockedBonusTalents;                             		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FBonusTalentSaveRecord>       PassiveBonusTalents;                              		// 0x0080 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 IntStats;                                         		// 0x0090 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<float>                               FloatStats;                                       		// 0x00A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FCharacterProfileSaveRecord>  lstCharacterProfiles;                             		// 0x00B0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGameOptionsSaveRecord                      GameOptions;                                      		// 0x00C0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LastPlayedCharacterID;                            		// 0x00D0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LastSaveGame;                                     		// 0x00E0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                LastUsedPlaythroughID;                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LowestPlaythroughDamageTaken;                     		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MostMoneyAccumulated;                             		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MostPlaythroughPlayerKills;                       		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LowestPlaythroughPlayerDeaths;                    		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FastestPlaythroughTime;                           		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.DependentDLCRecord
// 0x000C
struct FDependentDLCRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000100001]              ( CPF_Edit )
	int                                                ModuleID;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.GalaxyMapSaveRecord.PlanetSaveRecord
// 0x0018
struct FPlanetSaveRecord
{
	struct TArray<struct FVector2D>                    Probes;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlanetID;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bVisited : 1;                                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.GalaxyMapSaveRecord
// 0x0010
struct FGalaxyMapSaveRecord
{
	struct TArray<struct FPlanetSaveRecord>            Planets;                                          		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.LevelSaveRecord
// 0x000C
struct FLevelSaveRecord
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PartySelection.PartySelectMemberInfo
// 0x0024
struct FPartySelectMemberInfo
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       DiscoveredLabel;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       AvailableLabel;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       InPartyLabel;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                ImageIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.WeaponSaverecord
// 0x0029
struct FWeaponSaverecord
{
	struct FItemSaveRecord                             Item;                                             		// 0x0000 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsActive : 1;                                    		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Slot;                                             		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.EquipmentSaveRecord
// 0x0025
struct FEquipmentSaveRecord
{
	struct FItemSaveRecord                             Item;                                             		// 0x0000 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Slot;                                             		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSaveGame.SaveGameAreaInfo
// 0x0038
struct FSaveGameAreaInfo
{
	struct FString                                     m_sMap;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sImageResource;                                 		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSWFStopPoint;                                  		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nAreaId;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nMapNameRef;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSaveGame.SaveGameRecord
// 0x00E8
struct FSaveGameRecord
{
	struct FSaveGameAreaInfo                           m_SaveAreaInfo;                                   		// 0x0000 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSaveGameAreaInfo                           m_ParentSaveAreaInfo;                             		// 0x0038 (0x0038) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_filename;                                       		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_saveName;                                       		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_saveNameShort;                                  		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_charId;                                         		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_sec;                                            		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                m_Min;                                            		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                m_hr;                                             		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                m_day;                                            		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                m_mo;                                             		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                m_year;                                           		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                m_secPlayed;                                      		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                m_minPlayed;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                m_hrPlayed;                                       		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                m_ClassId;                                        		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                m_CharcterLevel;                                  		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                m_DeviceId;                                       		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                m_SaveGameNumber;                                 		// 0x00E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCanDelete : 1;                                 		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsAutoSave : 1;                                		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIsQuickSave : 1;                               		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.BioSaveGame.HenchmanLookup
// 0x0018
struct FHenchmanLookup
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	class UBioBaseSaveObject*                          Save;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmMappedPower;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqAct_ActionStation.BioActionStationGestureData
// 0x0028
struct FBioActionStationGestureData
{
	struct FName                                       nmPoseSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmEnumName;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqAct_ActionStation.ActionStationOffsetData
// 0x0020
struct FActionStationOffsetData
{
	struct FVector                                     vOffset;                                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rRotation;                                        		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmAnimSet;                                        		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUIPulseDetails
// 0x000D
struct FBioDUIPulseDetails
{
	float                                              fHalfCycleTime;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fMinAlpha;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fCurCycle;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      nElement;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUITimerDetails
// 0x0014
struct FBioDUITimerDetails
{
	float                                              fCurTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fEndTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fIntervalTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fNextInterval;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIncrementing : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIntervalTriggered : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCompleted : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRunning : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bActive : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFirstUpdate : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUIElementStatus
// 0x0004
struct FBioDUIElementStatus
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFading : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioSeqAct_InteractProperty.BioPropertyMap
// 0x0010
struct FBioPropertyMap
{
	struct FName                                       sDisplayName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       sFuncPropName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqAct_InteractProperty.BioPropertyInfo
// 0x0015
struct FBioPropertyInfo
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FName                                       ActualPropertyName;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bDisplayProperty : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOldDisplayProperty : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      ePropertyType;                                    		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWorldInfo.SlowMotionRequestType
// 0x0014
struct FSlowMotionRequestType
{
	int                                                nReqID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fSpeed;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fLifeTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIndefinite : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioWorldInfo.WorldStreamingState
// 0x000C
struct FWorldStreamingState
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Enabled : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.AvoidanceLocations
// 0x002C
struct FAvoidanceLocations
{
	struct FVector                                     vLoc;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vVel;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRot;                                             		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              fCollision;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fExtendedCollision;                               		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.AvoidanceLocationsArray
// 0x0038
struct FAvoidanceLocationsArray
{
	struct TArray<struct FAvoidanceLocations>          aoObsticals;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     vPawnLoc;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     vStearing;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     vAdjustPoint;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              fSearchDist;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.LastCompletionRecords
// 0x0014
struct FLastCompletionRecords
{
	struct FName                                       nmAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTech;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                nReason;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSeqData_DEBUGInfo.LOSLinesRecord
// 0x001C
struct FLOSLinesRecord
{
	struct FVector                                     vStart;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vEnd;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bSaw : 1;                                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnemy : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioSFHandler_BrowserWheel.BWPageStruct
// 0x0014
struct FBWPageStruct
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	class UBioSFHandler*                               oHandler;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                srLabel;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Credits.BioCreditsDetails
// 0x000C
struct FBioCreditsDetails
{
	int                                                srHeading;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                srTitle;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                srNames;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_DataCodex.DataCodexEntryDetails
// 0x0020
struct FDataCodexEntryDetails
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pEntry;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                nSectionID;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUpdated : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioSFHandler_HUD.BioHUDCachedInvoke
// 0x0015
struct FBioHUDCachedInvoke
{
	struct TArray<struct FASParams>                    lstParams;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nFramesTheSame;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      eLabel;                                           		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_HUD.CustomMappingDisplayInfo
// 0x0025
struct FCustomMappingDisplayInfo
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nActivatable;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nIconRef;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nBarBehaviorType;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nBarPercentage;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nQtyConsumable;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      eMapSlot;                                         		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Journal.GuiQuestInfo
// 0x001C
struct FGuiQuestInfo
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nID;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nAdded;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bComplete : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdated : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.MassEffectGuiManager.BioMessageBoxData
// 0x0014
struct FBioMessageBoxData
{
	class UObject*                                     m_pCallbackObject;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       m_nmCallbackFunction;                             		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                m_srTutorial;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.MassEffectGuiManager.BioTutorialParams
// 0x003D
struct FBioTutorialParams
{
	struct FString                                     sTutorial;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmTutorial;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmHilightElement;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
	class UObject*                                     oCallbackObject;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmCallbackFunction;                               		// 0x0028 (0x0008) [0x0000000000000000]              
	int                                                srTutorial;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fTime;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoNotCacheInputMode : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      nPosition;                                        		// 0x003C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameModeManager.LocalizedKeyName
// 0x000C
struct FLocalizedKeyName
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Name;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameModeManager.TutorialCommandsDetails
// 0x0021
struct FTutorialCommandsDetails
{
	struct FString                                     srParseString;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Action;                                           		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Mode;                                             		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.BioScreenResolution
// 0x000C
struct FBioScreenResolution
{
	int                                                Width;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SizeID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.GameModeBinding
// 0x0011
struct FGameModeBinding
{
	struct FString                                     Alias;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      GameMode;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.GuiBinding
// 0x0049
struct FGuiBinding
{
	struct FString                                     Alias;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FGameModeBinding>             GameModeBindings;                                 		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FKeyBind>                     Keys;                                             		// 0x0020 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct TArray<struct FString>                      KeysLocName;                                      		// 0x0030 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Name;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsCategory : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      GameMode;                                         		// 0x0048 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.OptionTelemetryInfo
// 0x000C
struct FOptionTelemetryInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value_Initial;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Value_ToSend;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Reticule.LOSIndicatorInfo
// 0x0015
struct FLOSIndicatorInfo
{
	struct FVector                                     m_vPosition;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                m_nScale;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bLOS : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eObjectType;                                    		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Reticule.ReticuleInfo
// 0x0025
struct FReticuleInfo
{
	struct FVector                                     m_vPosition;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              m_fRadius;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fModeTotalTime;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fModeTimeRemaining;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fDistanceToTarget;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fMagnificationLevel;                            		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDisplayCrosshair : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsMagneticLocked : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eMode;                                          		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Reticule.SelectionIndicatorInfo
// 0x001D
struct FSelectionIndicatorInfo
{
	struct FVector                                     m_vPosition;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                m_nScale;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fTimeSinceSelectionChanged;                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeOnPreviousSelection;                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bVisible : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bActivatable : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHostile : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bResetTargeting : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      m_eObjectType;                                    		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioShop.ResourceShopInfo
// 0x0014
struct FResourceShopInfo
{
	int                                                m_Name;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Description;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_lotSize;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_unitPrice;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_iconIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioShieldView.BioShieldViewParticleSystemSpec
// 0x0021
struct FBioShieldViewParticleSystemSpec
{
	struct FVector                                     m_vSize;                                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class ABioVisualEffect*                            m_pEffect;                                        		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioVFXTemplate*                             m_oEffect;                                        		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_aScale[ 0x3 ];                                  		// 0x001C (0x0003) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_ePosition;                                      		// 0x001F (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eOrientation;                                   		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioShieldView.BioShieldViewEventSpec
// 0x0011
struct FBioShieldViewEventSpec
{
	struct TArray<struct FBioShieldViewParticleSystemSpec> m_aVisualEffects;                                 		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      m_eEvent;                                         		// 0x0010 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFXGame.BioSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YawConstraint;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RollConstraint;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSoundNodeAPActivity.APActivityEntry
// 0x000C
struct FAPActivityEntry
{
	struct FName                                       nmActivity;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOneShot : 1;                                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSoundNodeAPTransition.TransitionData
// 0x0018
struct FTransitionData
{
	struct FName                                       FromState;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ToState;                                          		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransName;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSoundNodeFootsteps.FootstepData
// 0x000D
struct FFootstepData
{
	int                                                nFoot;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nNodeIdx;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      nHeel_Toe;                                        		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioStageType.BioStageCamera
// 0x001C
struct FBioStageCamera
{
	struct FBioStageDOFData                            tDOFData;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       sCameraTag;                                       		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFov;                                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fNearPlane;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioTimedActivity.TwitchRec
// 0x0008
struct FTwitchRec
{
	int                                                nTwitchAnim;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDelay;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioTimerList.BioTimer
// 0x002C
struct FBioTimer
{
	struct FScriptDelegate                             OnTimer;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTimerName;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     Params;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              fTickTime;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTlkFile.TlkHashEntry
// 0x000C
struct FTlkHashEntry
{
	int                                                srID_NATIVE_MIRROR;                               		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                nFlags_NATIVE_MIRROR;                             		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                nStringIndex_NATIVE_MIRROR;                       		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SFXGame.BioTlkFile.BioHuffmanDecodeNode
// 0x0005
struct FBioHuffmanDecodeNode
{
	int                                                nData_NATIVE_MIRROR;                              		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned char                                      bLeaf_NATIVE_MIRROR;                              		// 0x0004 (0x0001) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SFXGame.BioTlkFile.BioHuffmanEntry
// 0x0014
struct FBioHuffmanEntry
{
	int                                                nLength_NATIVE_MIRROR;                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct TArray<unsigned char>                       aBitStream_NATIVE_MIRROR;                         		// 0x0004 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SFXGame.BioTriggerStream.BioStreamingState
// 0x0030
struct FBioStreamingState
{
	struct TArray<struct FName>                        VisibleChunkNames;                                		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FName>                        LoadChunkNames;                                   		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       StateName;                                        		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InChunkName;                                      		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioVehicleTrackSet.TrackParticleSystem
// 0x0010
struct FTrackParticleSystem
{
	class UPhysicalMaterial*                           oPhysMat;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             oParticleSystem;                                  		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXCameraModifier_ScreenShake.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SFXGame.SFXCameraModifier_ScreenShake.ScreenShakeStruct
// 0x0075
struct FScreenShakeStruct
{
	struct FVector                                     RotAmplitude;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocAmplitude;                                     		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShakeName;                                        		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeToGo;                                         		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeDuration;                                     		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FShakeParams                                RotParam;                                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FShakeParams                                LocParam;                                         		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVAmplitude;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVFrequency;                                     		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVSinOffset;                                     		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetingDampening;                               		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideTargetingDampening : 1;                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      FOVParam;                                         		// 0x0074 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioVISFootstep.BioVISFootstepData
// 0x0014
struct FBioVISFootstepData
{
	class UPhysicalMaterial*                           oPhysMat;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDirtValue;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fGrimeValue;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fCombatValue;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioVisualEffectTrack.BioVisualEffectTrackKey
// 0x0010
struct FBioVisualEffectTrackKey
{
	class ABioVisualEffect*                            m_Effect;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioVISXModSet.BioVISXData
// 0x0014
struct FBioVISXData
{
	class UPhysicalMaterial*                           oPhysMat;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UBioVFXTemplate*                             oVFXTemplate;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bOverrideWeapon : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioWeaponSoundsSet.BioSoundSet
// 0x0024
struct FBioSoundSet
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<class USoundCue*>                    m_aSounds;                                        		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_bRandomize : 1;                                 		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.VFXTemplatePoolSizeSpec
// 0x0010
struct FVFXTemplatePoolSizeSpec
{
	class UBioVFXTemplate*                             Template;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxPoolSize;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinPoolSize;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.VFXListNode
// 0x0014
struct FVFXListNode
{
	class ABioVisualEffect*                            Effect;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NextNode;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PrevNode;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      ValidNode : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioWorldInfo.WorldEnvironmentEffect
// 0x0030
struct FWorldEnvironmentEffect
{
	struct FVector                                     m_vOffset;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class ABioVisualEffect*                            m_Effect;                                         		// 0x000C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class AController*                                 m_TargetController;                               		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              m_fBlendDuration;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fBlendTime;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fDesiredIntensity;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fCurrentIntensity;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAttachToCamera : 1;                            		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioWorldInfo.BoughtVFXListEnds
// 0x0008
struct FBoughtVFXListEnds
{
	int                                                HeadIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TailIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWorldInteractionType.ActivityRecord
// 0x0040
struct FActivityRecord
{
	struct TArray<class UAnimSet*>                     m_oMaleAnimations;                                		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<class UAnimSet*>                     m_oFemaleAnimations;                              		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<float>                               m_faActivityTwitchWeighting;                      		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_nmActivityName;                                 		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   m_oActivitySoundCue;                              		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldSaveObject.LevelLookup
// 0x0018
struct FLevelLookup
{
	struct FString                                     m_Name;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioLevelSaveObject*                         m_Save;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXDifficultyHandler.AbilityDifficultyData
// 0x0014
struct FAbilityDifficultyData
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   StatRange;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bStatActive : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXDifficultyHandler.DifficultySettings
// 0x0018
struct FDifficultySettings
{
	struct TArray<struct FAbilityDifficultyData>       CategoryData;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Category;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameModePhoto.CachedActorState
// 0x000C
struct FCachedActorState
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bWasHidden : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXSFControlToken
// 0x005C
struct FSFXSFControlToken
{
	struct FString                                     TexturePath;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resource;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Align;                                            		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VAlign;                                           		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Token;                                            		// 0x0040 (0x0008) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Width;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                FontVScale;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                VSpace;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      Cook : 1;                                         		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXControlTokenAlias
// 0x0010
struct FSFXControlTokenAlias
{
	struct FName                                       From;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       To;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXStringMap
// 0x0008
struct FSFXStringMap
{
	int                                                From;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                To;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXModule_Cover.CachedDebugInfo
// 0x0038
struct FCachedDebugInfo
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     Extent;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FColor                                      NormalColor;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXModule_Cover.CoverSearchCache
// 0x0024
struct FCoverSearchCache
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PhotoMode.PhotoModeOptionPage
// 0x0024
struct FPhotoModeOptionPage
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<unsigned char>                       Options;                                          		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Label;                                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_PhotoMode.PhotoModeSliderOption
// 0x0025
struct FPhotoModeSliderOption
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Label;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultValue;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StepSize;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHidden : 1;                                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Id;                                               		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_PhotoMode.PhotoModeRangeSliderOption
// 0x002D
struct FPhotoModeRangeSliderOption
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector2D                                   Range;                                            		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Label;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultValue;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StepSize;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Decimals;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHidden : 1;                                      		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Id;                                               		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_PhotoMode.PhotoModeOptionText
// 0x0018
struct FPhotoModeOptionText
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Label;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_PhotoMode.PhotoModeTextSliderOption
// 0x002D
struct FPhotoModeTextSliderOption
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FPhotoModeOptionText>         Values;                                           		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Label;                                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DefaultValue;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHidden : 1;                                      		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Id;                                               		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXTelemetry.TelemetryHookConfig
// 0x0040
struct FTelemetryHookConfig
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Event;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AutoFillParameters;                               		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Channel;                                          		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXTelemetry.TelemetryPlotPoint_Milestone
// 0x0024
struct FTelemetryPlotPoint_Milestone
{
	struct FString                                     Moment;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Milestone;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlotPointId;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXTelemetry.TelemetryHook
// 0x001D
struct FTelemetryHook
{
	struct FString                                     Event;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                AutoFillParameterBits;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Channel;                                          		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponStatsBase.HeadshotDamageBonus
// 0x0008
struct FHeadshotDamageBonus
{
	int                                                Rank;                                             		// 0x0000 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Bonus;                                            		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.SFXWeaponStatsBase.ManufacturerModifier
// 0x0009
struct FManufacturerModifier
{
	int                                                GameEffectID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Modifier;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      modType;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif