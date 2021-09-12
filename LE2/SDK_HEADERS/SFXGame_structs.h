/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
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

// ScriptStruct SFXGame.Bio2DA.Bio2DACellData
// 0x000C
struct FBio2DACellData
{
	unsigned char                                      nDataType_NATIVE_MIRROR;                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FPointer                                    nData_NATIVE_MIRROR;                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.Bio2DA.Bio2daMasterRowIndexRec
// 0x000C
struct FBio2daMasterRowIndexRec
{
	class UBio2DA*                                     pTable;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nRowIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioBaseAppearance.MorphFeatureModelType
// 0x0018
struct FMorphFeatureModelType
{
	struct FName                                       sFeatureName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkeletalMeshComponent*                      MinModel;                                         		// 0x0008 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      MaxModel;                                         		// 0x0010 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SFXGame.BioBaseAppearance.MorphFeatureType
// 0x0008
struct FMorphFeatureType
{
	struct FName                                       sFeatureName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.BioVersionedNativeObject
// 0x0004
struct FBioVersionedNativeObject
{
	int                                                nInstanceVersion;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioStateEventElement
// 0x0008(0x000C - 0x0004)
struct FBioStateEventElement : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
};

// ScriptStruct SFXGame.BioDefine.BioStateEvent
// 0x0018(0x001C - 0x0004)
struct FBioStateEvent : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	struct TArray<struct FPointer>                     lstEventElements;                                 		// 0x000C (0x0010) [0x0000000000101000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioDefine.BioSEEBool
// 0x0010(0x001C - 0x000C)
struct FBioSEEBool : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x000C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nGlobalBool;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNewState : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseParam : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioDefine.BioSEEConsequence
// 0x000C(0x0018 - 0x000C)
struct FBioSEEConsequence : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x000C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nConsequence;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEEFloat
// 0x0014(0x0020 - 0x000C)
struct FBioSEEFloat : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x000C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	unsigned long                                      bUseParam : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIncrement : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                nGlobalFloat;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fNewValue;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEEFunction
// 0x0024(0x0030 - 0x000C)
struct FBioSEEFunction : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x000C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	struct FName                                       FunctionPackage;                                  		// 0x0014 (0x0008) [0x0000000000100000]              
	struct FName                                       FunctionClass;                                    		// 0x001C (0x0008) [0x0000000000100000]              
	struct FName                                       FunctionName;                                     		// 0x0024 (0x0008) [0x0000000000100000]              
	int                                                nParameter;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEEInt
// 0x0014(0x0020 - 0x000C)
struct FBioSEEInt : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x000C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nGlobalInt;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nNewValue;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseParam : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIncrement : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioDefine.BioSEELocal
// 0x0020(0x002C - 0x000C)
struct FBioSEELocal : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x000C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	unsigned long                                      bUseParam : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nObjectType;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FName                                       ObjectTag;                                        		// 0x001C (0x0008) [0x0000000000100000]              
	struct FName                                       FunctionName;                                     		// 0x0024 (0x0008) [0x0000000000100000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEELocalBool
// 0x000C(0x0038 - 0x002C)
struct FBioSEELocalBool : FBioSEELocal
{
	struct FPointer                                    VfTable;                                          		// 0x002C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	unsigned long                                      bNewValue : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioSEELocalFloat
// 0x000C(0x0038 - 0x002C)
struct FBioSEELocalFloat : FBioSEELocal
{
	struct FPointer                                    VfTable;                                          		// 0x002C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	float                                              fNewValue;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEELocalInt
// 0x000C(0x0038 - 0x002C)
struct FBioSEELocalInt : FBioSEELocal
{
	struct FPointer                                    VfTable;                                          		// 0x002C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nNewValue;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEESubstate
// 0x0024(0x0030 - 0x000C)
struct FBioSEESubstate : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x000C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nGlobalBool;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNewState : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseParam : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bParentTypeOr : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                nParentIndex;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	struct TArray<int>                                 lstSiblingIndices;                                		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.BioQuestProgress
// 0x0020(0x0024 - 0x0004)
struct FBioQuestProgress : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nQuestAdded;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bQuestUpdated : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct TArray<int>                                 lstTaskHistory;                                   		// 0x0014 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.BioQuestGoal
// 0x0018(0x001C - 0x0004)
struct FBioQuestGoal : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                srName;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                srDescription;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nState;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioQuestTask
// 0x003C(0x0040 - 0x0004)
struct FBioQuestTask : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	unsigned long                                      bQuestCompleteTask : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                srName;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                srDescription;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	struct TArray<int>                                 lstPlotItemIndices;                               		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sWaypointTag;                                     		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmPlanet;                                         		// 0x0038 (0x0008) [0x0000000000100000]              
};

// ScriptStruct SFXGame.BioDefine.BioPlotItem
// 0x001C(0x0020 - 0x0004)
struct FBioPlotItem : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                srName;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nState;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nTargetItems;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioQuest
// 0x003C(0x0040 - 0x0004)
struct FBioQuest : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	struct TArray<struct FBioQuestGoal>                lstGoals;                                         		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FBioQuestTask>                lstTasks;                                         		// 0x001C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FBioPlotItem>                 lstPlotItems;                                     		// 0x002C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bMission : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioTaskEval
// 0x0018(0x001C - 0x0004)
struct FBioTaskEval : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nQuest;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nTask;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nState;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioStateTaskList
// 0x0018(0x001C - 0x0004)
struct FBioStateTaskList : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	struct TArray<struct FBioTaskEval>                 lstTaskEvals;                                     		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.BioCodexEntry
// 0x0018(0x001C - 0x0004)
struct FBioCodexEntry : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                srTitle;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                srDescription;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nTextureIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioCodexPage
// 0x000C(0x0028 - 0x001C)
struct FBioCodexPage : FBioCodexEntry
{
	struct FPointer                                    VfTable;                                          		// 0x001C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nSection;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioCodexSection
// 0x000C(0x0028 - 0x001C)
struct FBioCodexSection : FBioCodexEntry
{
	struct FPointer                                    VfTable;                                          		// 0x001C (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	unsigned long                                      bPrimary : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioDiscoveredCodexPage
// 0x0010(0x0014 - 0x0004)
struct FBioDiscoveredCodexPage : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nPage;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNew : 1;                                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioDiscoveredCodex
// 0x0018(0x001C - 0x0004)
struct FBioDiscoveredCodex : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0008) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	struct TArray<struct FBioDiscoveredCodexPage>      lstDiscoveredPages;                               		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.VisualEffect
// 0x0010
struct FVisualEffect
{
	class UBioVFXTemplate*                             Template;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class ABioVisualEffect*                            Effect;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.HenchmanInfoStruct
// 0x0038
struct FHenchmanInfoStruct
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                PrettyName;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AlternatePrettyName;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       AlternateHenchNamePlotFlag;                       		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                HenchAcquiredPlotID;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HenchInSquadPlotID;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     HenchmanImage;                                    		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.PlayerMeshInfo
// 0x0084
struct FPlayerMeshInfo
{
	struct FString                                     Male;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleVisor;                                        		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleFaceplate;                                    		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleMaterialOverride;                             		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Female;                                           		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleVisor;                                      		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleFaceplate;                                  		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleMaterialOverride;                           		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bHasBreather : 1;                                 		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHideHead : 1;                                    		// 0x0080 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHideHair : 1;                                    		// 0x0080 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerPatternInfo
// 0x0078
struct FPlayerPatternInfo
{
	struct FVectorParameterValue                       Stripe1Param;                                     		// 0x0000 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       Stripe2Param;                                     		// 0x0028 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       Stripe3Param;                                     		// 0x0050 (0x0028) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerTintInfo
// 0x0050
struct FPlayerTintInfo
{
	struct FVectorParameterValue                       TintParam;                                        		// 0x0000 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       PhongParam;                                       		// 0x0028 (0x0028) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerSpecInfo
// 0x0038
struct FPlayerSpecInfo
{
	struct FScalarParameterValue                       SpecParam;                                        		// 0x0000 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FScalarParameterValue                       SpecPwrParam;                                     		// 0x001C (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.CustomizableElement
// 0x01A9
struct FCustomizableElement
{
	struct FPlayerMeshInfo                             Mesh;                                             		// 0x0000 (0x0084) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FString>                      GameEffects;                                      		// 0x0084 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPlayerPatternInfo                          Pattern;                                          		// 0x0094 (0x0078) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerTintInfo                             Tint;                                             		// 0x010C (0x0050) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerSpecInfo                             Spec;                                             		// 0x015C (0x0038) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0194 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Name;                                             		// 0x0198 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Description;                                      		// 0x019C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotFlag;                                         		// 0x01A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCustomizable : 1;                                		// 0x01A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x01A8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor3Value
// 0x001C
struct FPlayerCustomColor3Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorName;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor2Value
// 0x001C
struct FPlayerCustomColor2Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorName;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
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
	unsigned char                                      ArmorType;                                        		// 0x0028 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.WeaponAnimSpec
// 0x0028
struct FWeaponAnimSpec
{
	struct FString                                     AnimType;                                         		// 0x0000 (0x0010) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct TArray<class UAnimSet*>                     m_animSets;                                       		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    m_drawAnimSet;                                    		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.Bio_Appr_Character_Body.OverrideAnimTreeTemplate
// 0x0009
struct FOverrideAnimTreeTemplate
{
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eClassification;                                  		// 0x0008 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
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

// ScriptStruct SFXGame.BioAiController.EnemyInfo
// 0x0040
struct FEnemyInfo
{
	struct FVector                                     KnownLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     InterpLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FCoverInfo                                  Cover;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
	class APawn*                                       Pawn;                                             		// 0x0024 (0x0008) [0x0000000000000000]              
	float                                              InterpTime;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              InitialSeenTime;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              LastSeenTime;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              LastFailedPathTime;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAiController.DelayUpdateInfo
// 0x0015
struct FDelayUpdateInfo
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       EventName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
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

// ScriptStruct SFXGame.BioAnimMovementSync.BioAnimMovementSyncNode
// 0x0010
struct FBioAnimMovementSyncNode
{
	class UAnimNode*                                   Node;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAnimNode*                                   NodeWeight;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlend_TurnInPlace.RotTransitionInfo
// 0x0008
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChildIndex;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAction.BlendTime
// 0x0005
struct FBlendTime
{
	float                                              m_fTime;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eAnimNode;                                      		// 0x0004 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAim.BioAnimNodeBlendByAimLimits
// 0x0010
struct FBioAnimNodeBlendByAimLimits
{
	float                                              DegreesLeft;                                      		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesRight;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesUp;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesDown;                                      		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
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
// 0x0010
struct FBioAnimStateNodeBehaviorDef
{
	struct TArray<struct FBioAnimStateNodeChildDef>    Children;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x001C
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSequence*                               AnimSeq;                                          		// 0x0014 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SFXGame.BioAppearanceItemWeapon.BioAppearanceItemWeaponVFXSpec
// 0x0005
struct FBioAppearanceItemWeaponVFXSpec
{
	int                                                m_type;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_Damage;                                         		// 0x0004 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct SFXGame.BioAppearanceItemWeapon.BioAppearanceItemSophisticatedVariant
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

// ScriptStruct SFXGame.BioAttributes.BioComplexIntStructAttribute
// 0x0014
struct FBioComplexIntStructAttribute
{
	int                                                m_Base;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Current;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Max;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_Min;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_Dirty : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAttributes.BioComplexFloatStructAttribute
// 0x0014
struct FBioComplexFloatStructAttribute
{
	float                                              m_Base;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_Current;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_Max;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_Min;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_Dirty : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioBaseActivity.ActivityProp
// 0x0010
struct FActivityProp
{
	class UStaticMesh*                                 m_oStaticMesh;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nAttachlocation;                                		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioBaseSquad.MemberData
// 0x003C
struct FMemberData
{
	struct FVector                                     vTarget;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vHoldPosition;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	class APawn*                                       SquadMember;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	class ABioTacticalMoveToIndicator*                 oDestinationIndicator;                            		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	class AActor*                                      oOrderedAttackTarget;                             		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bMoveOrderAssigned : 1;                           		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
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
// 0x006D
struct FScreenShakeStruct
{
	struct FVector                                     RotAmplitude;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocAmplitude;                                     		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	struct FName                                       ShakeName;                                        		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeToGo;                                         		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeDuration;                                     		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FShakeParams                                RotParam;                                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FShakeParams                                LocParam;                                         		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVAmplitude;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVFrequency;                                     		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVSinOffset;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned char                                      FOVParam;                                         		// 0x006C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioCameraBehaviorGalaxy.SFXGalaxyMapSelector
// 0x0030
struct FSFXGalaxyMapSelector
{
	struct TArray<int>                                 m_PlotNames;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXGalaxyMapObject*                         m_GalaxyMapObject;                                		// 0x0010 (0x0008) [0x0000000000000000]              
	class AActor*                                      m_actor;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                m_Name;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_Visited;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_State;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_Visible : 1;                                    		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
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

// ScriptStruct SFXGame.BioCameraZoom.BioZoomFocusConfig
// 0x002C
struct FBioZoomFocusConfig
{
	float                                              m_fMaxFocusDistance;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fNearClipFactor;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fNearClipMax;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fMinRate;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fInnerRadiusFactor;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fFalloffExponent;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fBlurKernelSize;                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fMaxNearBlurAmount;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxFarBlurAmount;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FColor                                      m_clrModulateBlur;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCameraZoom.BioZoomMagnificationConfig
// 0x0010
struct FBioZoomMagnificationConfig
{
	float                                              m_fCamSpeedFactor;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fFOVFactor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nLevelCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fTransitionDuration;                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProfileSettings.GrinderAchievement
// 0x0015
struct FGrinderAchievement
{
	int                                                ProfileSettingId;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Goal;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                interval;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Title;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Description;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      AchievementId;                                    		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProfileSettings.AchievementReward
// 0x0019
struct FAchievementReward
{
	struct FString                                     Effect;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AchievementId;                                    		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXProfileSettings.AchievementData
// 0x0029
struct FAchievementData
{
	struct FString                                     Icon;                                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Title;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Incomplete;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Complete;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotID;                                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AchievementId;                                    		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_MessageBox.BioMessageBoxOptionalParams
// 0x0013
struct FBioMessageBoxOptionalParams
{
	int                                                srAText;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                srBText;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoFade : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModal : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForcePlayersOnly : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      nIconSet;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_SkinType;                                       		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_TextAlign;                                      		// 0x0012 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.DependentDLCRecord
// 0x000C
struct FDependentDLCRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000100001]              ( CPF_Edit )
	int                                                ModuleID;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.LevelSaveRecord
// 0x000C
struct FLevelSaveRecord
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.StreamingStateSaveRecord
// 0x000C
struct FStreamingStateSaveRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.KismetBoolSaveRecord
// 0x0014
struct FKismetBoolSaveRecord
{
	struct FGuid                                       BoolGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bValue : 1;                                       		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.DoorSaveRecord
// 0x0012
struct FDoorSaveRecord
{
	struct FGuid                                       DoorGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CurrentState;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      OldState;                                         		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PowerSaveRecord
// 0x0018
struct FPowerSaveRecord
{
	struct FName                                       PowerName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PowerClassName;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentRank;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WheelDisplayIndex;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_SimpleTalentSaveRecord
// 0x0008
struct FME1_SimpleTalentSaveRecord
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

// ScriptStruct SFXGame.SFXSaveGame.ME1_ItemModSaveRecord
// 0x000D
struct FME1_ItemModSaveRecord
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Manufacturer;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotConditionalID;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      sophistication;                                   		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_ItemSaveRecord
// 0x0021
struct FME1_ItemSaveRecord
{
	struct TArray<struct FME1_ItemModSaveRecord>       XMods;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ItemId;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Manufacturer;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotConditionalID;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNewItem : 1;                                     		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bJunkItem : 1;                                    		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      sophistication;                                   		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.HenchmanSaveRecord
// 0x00DE
struct FHenchmanSaveRecord
{
	struct TArray<struct FPowerSaveRecord>             Powers;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_SimpleTalentSaveRecord>  simpleTalents;                                    		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FComplexTalentSaveRecord>     complexTalents;                                   		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ItemSaveRecord>          Equipment;                                        		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ItemSaveRecord>          Weapons;                                          		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       LoadoutWeapons[ 0x6 ];                            		// 0x0050 (0x0030) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0080 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower;                                      		// 0x0088 (0x0008) [0x0000000000000000]              
	int                                                CharacterLevel;                                   		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoolPoints;                                 		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AutoLevelUpTemplateID;                            		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastName;                                         		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClassName;                                        		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPerLevel;                                   		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              StabilityCurrent;                                 		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              ToxicCurrent;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                Stamina;                                          		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                Focus;                                            		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                Precision;                                        		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                Coordination;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              HealthCurrent;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              ShieldCurrent;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              HealthMax;                                        		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                XPLevel;                                          		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      HelmetShown : 1;                                  		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ClassBase;                                        		// 0x00D8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      gender;                                           		// 0x00D9 (0x0001) [0x0000000000000000]              
	unsigned char                                      Race;                                             		// 0x00DA (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributePrimary;                                 		// 0x00DB (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributeSecondary;                               		// 0x00DC (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentQuickSlot;                                 		// 0x00DD (0x0001) [0x0000000000000001]              ( CPF_Edit )
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
// 0x00E1
struct FAppearanceSaveRecord
{
	struct FMorphHeadSaveRecord                        MorphHead;                                        		// 0x0000 (0x00A8) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CasualID;                                         		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FullBodyID;                                       		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TorsoID;                                          		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoulderID;                                       		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArmID;                                            		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LegID;                                            		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpecID;                                           		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint1ID;                                          		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint2ID;                                          		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint3ID;                                          		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternID;                                        		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternColorID;                                   		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HelmetID;                                         		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHasMorphHead : 1;                                		// 0x00DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CombatAppearance;                                 		// 0x00E0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.WeaponSaveRecord
// 0x0041
struct FWeaponSaveRecord
{
	struct FME1_ItemSaveRecord                         Item;                                             		// 0x0000 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       WeaponClassName;                                  		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AmmoPowerName;                                    		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AmmoUsedCount;                                    		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TotalAmmo;                                        		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLastWeapon : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCurrentWeapon : 1;                               		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsActive : 1;                                    		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      Slot;                                             		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.HotKeySaveRecord
// 0x000C
struct FHotKeySaveRecord
{
	struct FName                                       PawnName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                PowerID;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_HotKeySaveRecord
// 0x0008
struct FME1_HotKeySaveRecord
{
	int                                                HotKeyPawn;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HotKeyEvent;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_GameOptionsSaveRecord
// 0x0010
struct FME1_GameOptionsSaveRecord
{
	struct TArray<int>                                 GameOptions;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1ImportBonusSaveRecord
// 0x001C
struct FME1ImportBonusSaveRecord
{
	int                                                ImportedME1Level;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartingME2Level;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BonusXP;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BonusCredits;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BonusResources;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BonusParagon;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BonusRenegade;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerSaveRecord
// 0x02DC
struct FPlayerSaveRecord
{
	struct FAppearanceSaveRecord                       Appearance;                                       		// 0x0000 (0x00E4) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FirstName;                                        		// 0x00E4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ItemSaveRecord>          Items;                                            		// 0x00F4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ItemSaveRecord>          BuybackItems;                                     		// 0x0104 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_SimpleTalentSaveRecord>  simpleTalents;                                    		// 0x0114 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FComplexTalentSaveRecord>     complexTalents;                                   		// 0x0124 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FPowerSaveRecord>             Powers;                                           		// 0x0134 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ItemSaveRecord>          Equipment;                                        		// 0x0144 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ItemSaveRecord>          IWeapons;                                         		// 0x0154 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FWeaponSaveRecord>            Weapons;                                          		// 0x0164 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FHotKeySaveRecord>            HotKeys;                                          		// 0x0174 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_HotKeySaveRecord>        legacyHotKeys;                                    		// 0x0184 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FaceCode;                                         		// 0x0194 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FME1_GameOptionsSaveRecord                  GameOptions;                                      		// 0x01A4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      PlayerClass;                                      		// 0x01B4 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FName                                       LoadoutWeapons[ 0x6 ];                            		// 0x01BC (0x0030) [0x0000000000000000]              
	struct FME1ImportBonusSaveRecord                   ME1ImportBonuses;                                 		// 0x01EC (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PlayerClassName;                                  		// 0x0208 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedTalent;                                     		// 0x0210 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower1;                                     		// 0x0218 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower2;                                     		// 0x0220 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower3;                                     		// 0x0228 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PrimaryWeapon;                                    		// 0x0230 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SecondaryWeapon;                                  		// 0x0238 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LastPower;                                        		// 0x0240 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                LegacyPlayerClassName;                            		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                srClassFriendlyName;                              		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentXP;                                        		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                XPLevel;                                          		// 0x0258 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastName;                                         		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoolPoints;                                 		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Credits;                                          		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Medigel;                                          		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Grenades;                                         		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OmniGel;                                          		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Eezo;                                             		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Iridium;                                          		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Palladium;                                        		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Platinum;                                         		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Probes;                                           		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentFuel;                                      		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpecializationBonusID;                            		// 0x0290 (0x0004) [0x0000000000000000]              
	int                                                AutoLevelUpTemplateID;                            		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthPerLevel;                                   		// 0x0298 (0x0004) [0x0000000000000000]              
	float                                              StabilityCurrent;                                 		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              ToxicCurrent;                                     		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                Stamina;                                          		// 0x02A4 (0x0004) [0x0000000000000000]              
	int                                                Focus;                                            		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                Precision;                                        		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                Coordination;                                     		// 0x02B0 (0x0004) [0x0000000000000000]              
	float                                              SkillCharm;                                       		// 0x02B4 (0x0004) [0x0000000000000000]              
	float                                              SkillIntimidate;                                  		// 0x02B8 (0x0004) [0x0000000000000000]              
	float                                              SkillHaggle;                                      		// 0x02BC (0x0004) [0x0000000000000000]              
	float                                              HealthCurrent;                                    		// 0x02C0 (0x0004) [0x0000000000000000]              
	float                                              ShieldCurrent;                                    		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              HealthMax;                                        		// 0x02C8 (0x0004) [0x0000000000000000]              
	int                                                LastQuickSlot;                                    		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsFemale : 1;                                    		// 0x02D0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      isDriving : 1;                                    		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      ArmorOverridden : 1;                              		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      HelmetShown : 1;                                  		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      LegacyPlayerClass;                                		// 0x02D4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Origin;                                           		// 0x02D5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Notoriety;                                        		// 0x02D6 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SpectreRank;                                      		// 0x02D7 (0x0001) [0x0000000000000000]              
	unsigned char                                      Race;                                             		// 0x02D8 (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributePrimary;                                 		// 0x02D9 (0x0001) [0x0000000000000000]              
	unsigned char                                      AttributeSecondary;                               		// 0x02DA (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentQuickSlot;                                 		// 0x02DB (0x0001) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.SFXSaveGame.SaveTimeStamp
// 0x0010
struct FSaveTimeStamp
{
	int                                                SecondsSinceMidnight;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Day;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Month;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Year;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ProfileBOOLSaveRecord
// 0x0008
struct FProfileBOOLSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_ProfileINTSaveRecord
// 0x0008
struct FME1_ProfileINTSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_ProfileFLOATSaveRecord
// 0x0008
struct FME1_ProfileFLOATSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_PlotManagerAchievementSaveRecord
// 0x000C
struct FME1_PlotManagerAchievementSaveRecord
{
	int                                                PMIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UnlockedAt;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_BonusTalentSaveRecord
// 0x0008
struct FME1_BonusTalentSaveRecord
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BonusTalentID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_ProfileRewardSaveRecord
// 0x0024
struct FME1_ProfileRewardSaveRecord
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                UnlockedAt;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AchievementId;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TalenTreeID;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsAchievementUnlocked : 1;                        		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_ProfilePlaythroughSaveRecord
// 0x0008
struct FME1_ProfilePlaythroughSaveRecord
{
	int                                                PlaythroughID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DifficultySetting;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_CharacterStatisticsSaveRecord
// 0x0010
struct FME1_CharacterStatisticsSaveRecord
{
	int                                                Stamina;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Focus;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Precision;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Coordination;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_CharacterProfileSaveRecord
// 0x0067
struct FME1_CharacterProfileSaveRecord
{
	struct FString                                     characterID;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FullName;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FME1_CharacterStatisticsSaveRecord          CharacterStatistics;                              		// 0x0020 (0x0010) [0x0000000000000000]              
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
	struct TArray<struct FME1_ProfileINTSaveRecord>    IntVariables;                                     		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ProfileFLOATSaveRecord>  FloatVariables;                                   		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_PlotManagerAchievementSaveRecord> PlotManagerAchievementMaps;                       		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ProfilePlaythroughSaveRecord> lstPlaythroughs;                                  		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_ProfileRewardSaveRecord> RewardStats;                                      		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 AchievementStates;                                		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_BonusTalentSaveRecord>   UnlockedBonusTalents;                             		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_BonusTalentSaveRecord>   PassiveBonusTalents;                              		// 0x0080 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 IntStats;                                         		// 0x0090 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<float>                               FloatStats;                                       		// 0x00A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FME1_CharacterProfileSaveRecord> lstCharacterProfiles;                             		// 0x00B0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FME1_GameOptionsSaveRecord                  GameOptions;                                      		// 0x00C0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LastPlayedCharacterID;                            		// 0x00D0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LastSaveGame;                                     		// 0x00E0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                LastUsedPlaythroughID;                            		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LowestPlaythroughDamageTaken;                     		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MostMoneyAccumulated;                             		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MostPlaythroughPlayerKills;                       		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LowestPlaythroughPlayerDeaths;                    		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FastestPlaythroughTime;                           		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_EquipmentSaveRecord
// 0x0025
struct FME1_EquipmentSaveRecord
{
	struct FME1_ItemSaveRecord                         Item;                                             		// 0x0000 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Slot;                                             		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ME1_VehicleSaveRecord
// 0x001C
struct FME1_VehicleSaveRecord
{
	struct FString                                     FirstName;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                LastName;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthCurrent;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ShieldCurrent;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
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

// ScriptStruct SFXGame.BioMaterialOverride.ScalarParameter
// 0x000C
struct FScalarParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              sValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.ColorParameter
// 0x0018
struct FColorParameter
{
	struct FLinearColor                                cValue;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       nName;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.TextureParameter
// 0x0010
struct FTextureParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    m_pTexture;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPowerManager.PowerSaveInfo
// 0x0018
struct FPowerSaveInfo
{
	struct FName                                       PowerName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       PowerClassName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              CurrentRank;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WheelDisplayIndex;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.SFXHotKeyDefinition
// 0x000C
struct FSFXHotKeyDefinition
{
	struct FName                                       nmPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nPowerID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerInfoEx
// 0x003E
struct FPlayerInfoEx
{
	struct FString                                     FirstName;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FaceCode;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      CharacterClass;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	class UBioMorphFace*                               MorphHead;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       BonusTalentClass;                                 		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsFemale : 1;                                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Origin;                                           		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      Notoriety;                                        		// 0x003D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1PlotTableRecord
// 0x0030
struct FME1PlotTableRecord
{
	struct TArray<int>                                 BoolVariables;                                    		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 IntVariables;                                     		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<float>                               FloatVariables;                                   		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
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

// ScriptStruct SFXGame.SFXSaveGame.ME1_PlotPseudoItemSaveRecord
// 0x0018
struct FME1_PlotPseudoItemSaveRecord
{
	int                                                LocalizedName;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LocalizedDesc;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExportID;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                basePrice;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShopGUIImageID;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotConditional;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.BioSFResources.BioSFSoundAssetResource
// 0x0018
struct FBioSFSoundAssetResource
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 StartEvent;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 StopEvent;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFResources.BioSFScreenTipEntry
// 0x0014
struct FBioSFScreenTipEntry
{
	struct FString                                     StringContent;                                    		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                StringData;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXCareerCacheEntry
// 0x002B
struct FSFXCareerCacheEntry
{
	struct FString                                     Career;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     FirstName;                                        		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ClassName;                                        		// 0x0020 (0x0004) [0x0000000000100000]              
	int                                                SaveTypes;                                        		// 0x0024 (0x0004) [0x0000000000100000]              
	unsigned char                                      Origin;                                           		// 0x0028 (0x0001) [0x0000000000100000]              
	unsigned char                                      Notoriety;                                        		// 0x0029 (0x0001) [0x0000000000100000]              
	unsigned char                                      EndGameState;                                     		// 0x002A (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXSaveDescriptor
// 0x0025
struct FSFXSaveDescriptor
{
	struct FString                                     Career;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     SaveName;                                         		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0020 (0x0004) [0x0000000000100000]              
	unsigned char                                      Type;                                             		// 0x0024 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXSavePair
// 0x0030
struct FSFXSavePair
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x0028) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class USFXSaveGame*                                Save;                                             		// 0x0028 (0x0008) [0x0000000000100000]              
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
// 0x0059
struct FSFXSaveGameCommandEventArgs
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x0028) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXCareerDescriptor>         Careers;                                          		// 0x0028 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FString>                      CorruptedCareers;                                 		// 0x0038 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AdditionalFreeBytesNeeded;                        		// 0x0048 (0x0004) [0x0000000000100000]              
	int                                                TotalFreeBytes;                                   		// 0x004C (0x0004) [0x0000000000100000]              
	int                                                PreparedSaveSize;                                 		// 0x0050 (0x0004) [0x0000000000100000]              
	unsigned long                                      bSuccess : 1;                                     		// 0x0054 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bRetry : 1;                                       		// 0x0054 (0x0004) [0x0000000000100000] [0x00000002] 
	unsigned long                                      bPause : 1;                                       		// 0x0054 (0x0004) [0x0000000000100000] [0x00000004] 
	unsigned long                                      bNeedsFreeSpace : 1;                              		// 0x0054 (0x0004) [0x0000000000100000] [0x00000008] 
	unsigned long                                      bTotalFreeBytesSet : 1;                           		// 0x0054 (0x0004) [0x0000000000100000] [0x00000010] 
	unsigned long                                      bPreparedSaveSizeSet : 1;                         		// 0x0054 (0x0004) [0x0000000000100000] [0x00000020] 
	unsigned char                                      Action;                                           		// 0x0058 (0x0001) [0x0000000000100000]              
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

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalizationEventProperties
// 0x0028
struct FSFXVocalizationEventProperties
{
	struct TArray<unsigned char>                       Roles;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ChanceToPlay;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTimeBetweenSec;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeLastPlayed;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Delay;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              MaxWitnessDistSq;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bQueueIfBlocked : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanInterrupt : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanPlayIfDead : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanPlayIfRagdolled : 1;                          		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalizationEvent
// 0x001C
struct FSFXVocalizationEvent
{
	class ABioPawn*                                    Instigator;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    Recipient;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DelayTimeRemainingSec;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                DebugIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalization
// 0x0029
struct FSFXVocalization
{
	struct FSFXVocalizationEvent                       Event;                                            		// 0x0000 (0x001C) [0x0000000000000000]              
	class ABioPawn*                                    Speaker;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                Specific;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      Role;                                             		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationLine
// 0x0028
struct FSFXVocalizationLine
{
	struct TArray<unsigned char>                       SpecificType;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 SpecificValue;                                    		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UWwiseEvent*                                 Sound;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationManager.VocEventLog
// 0x0015
struct FVocEventLog
{
	class APawn*                                       Speaker;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class APawn*                                       ReferredTo;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManager.ProfileData
// 0x004C
struct FProfileData
{
	struct FString                                     Header;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             Func;                                             		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             Utility;                                          		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Keyword;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	unsigned long                                      bNoTarget : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationVariation
// 0x0010
struct FSFXVocalizationVariation
{
	struct TArray<struct FSFXVocalizationLine>         Variations;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationRole
// 0x0010
struct FSFXVocalizationRole
{
	struct TArray<struct FSFXVocalizationVariation>    Roles;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGame.ScaledFloat
// 0x0028
struct FScaledFloat
{
	struct TArray<class USFXGameEffect*>               Bonuses;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              X;                                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLevel;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              StaticBonus;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.STech
// 0x0048
struct FSTech
{
	struct FString                                     sImage;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLargeImage;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmTech;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmResearch;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	int                                                srTitle;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                srName;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                srMessage;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                srDescription;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nLevels;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                UnlockId;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.STreasure
// 0x0035
struct FSTreasure
{
	struct FName                                       nmLevel;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTreasure;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTech;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmRequiredTech;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                nTreasureId;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ResourcePrice;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                RequiredTechLevel;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                DiscoverTechLevel;                                		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoAnimation : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMultiLevel : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      Resource;                                         		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXModule_Damage.DamagePart
// 0x0008
struct FDamagePart
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDetached : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGameConfig.TreasureBudget
// 0x0018
struct FTreasureBudget
{
	int                                                LevelId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Credits;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Eezo;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Palladium;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Platinum;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Iridium;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.SResourceBudget
// 0x0020
struct FSResourceBudget
{
	struct FName                                       nmLevel;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nCredits;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nEezo;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nIridium;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nPlatinum;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPalladium;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPRI.DamageCalculationAlgorithm
// 0x0038
struct FDamageCalculationAlgorithm
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RangeMultiplier;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              PassiveGEMultiplier;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              GEMultiplier;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              StealthMultiplier;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LastBulletMultiplier;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DifficultyMultiplier;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              PartBasedDamageMultiplier;                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DamageScale;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              CoverLeanMultiplier;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              CoverMultiplier;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              StormMultiplier;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              RagdollMultiplier;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              AchievementBonusDamage;                           		// 0x0034 (0x0004) [0x0000000000000000]              
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
	class UWwiseBaseSoundObject*                       pCue;                                             		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
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

// ScriptStruct SFXGame.BioConversation.BioSavedActorPos
// 0x0020
struct FBioSavedActorPos
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRot;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversation.BioInterruptReplyInfo
// 0x0011
struct FBioInterruptReplyInfo
{
	int                                                nReplyListIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fWindowStartTimeRemaining;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fWindowTimeRemaining;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActivated : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eInterruptType;                                   		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversation.BioConvLightingData
// 0x004A
struct FBioConvLightingData
{
	struct FName                                       TargetBoneName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Red;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Green;                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Blue;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Red;                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Green;                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Blue;                             		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      RimLightColor;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightScale;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightYaw;                                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightPitch;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BouncedLightingIntensity;                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BouncedKeyLightingFactor;                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BouncedKeyLightingDesaturation;                   		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WrapLightingDirectMultiplier;                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WrapLightingIndirectMultiplier;                   		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLockEnvironment : 1;                             		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTriggerFullUpdate : 1;                           		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseForNextCamera : 1;                            		// 0x0044 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      RimLightControl;                                  		// 0x0048 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LightingType;                                     		// 0x0049 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioNextLightingData
// 0x0058
struct FBioNextLightingData
{
	struct FBioConvLightingData                        tData;                                            		// 0x0000 (0x004C) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      pActor;                                           		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseThis : 1;                                     		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioFoundWeaponData
// 0x000C
struct FBioFoundWeaponData
{
	class UObject*                                     pWeapon;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSpawned : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioConversation.BioUsedMeshPropData
// 0x0018
struct FBioUsedMeshPropData
{
	struct TArray<class UParticleSystemComponent*>     aEffects;                                         		// 0x0000 (0x0010) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UMeshComponent*                              pPropCmp;                                         		// 0x0010 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SFXGame.BioConversation.BioConvPawnPropData
// 0x0090
struct FBioConvPawnPropData
{
	struct FMap_Mirror                                 mapMeshPropData;                                  		// 0x0000 (0x0048) [0x0000000000001000]              ( CPF_Native )
	struct FMap_Mirror                                 mapWeaponPropData;                                		// 0x0048 (0x0048) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioPawn.ReactionPart
// 0x0018
struct FReactionPart
{
	struct TArray<struct FName>                        BoneNames;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       BodyPart;                                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPawn.RootMotionOverrideEntry
// 0x000A
struct FRootMotionOverrideEntry
{
	class UAnimNode*                                   Node;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      RMMode;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      RMRMode;                                          		// 0x0009 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.BodyStance
// 0x0009
struct FBodyStance
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StanceID;                                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXDamageType.HitReaction
// 0x0012
struct FHitReaction
{
	struct FName                                       BodyPart;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReactionChance;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDeathReaction : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTriggerOnMove : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bTriggerOnIdle : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFrontArc : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bRearArc : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bFromCrouch : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIgnoreShields : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned char                                      AnimatedReaction;                                 		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaxRange;                                         		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXDamageType.ResistanceInfo
// 0x000C
struct FResistanceInfo
{
	float                                              Shield;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Armour;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Biotic;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXLoadoutData.ShieldLoadout
// 0x0018
struct FShieldLoadout
{
	class UClass*                                      Shields;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ShieldLevelRange;                                 		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   MaxShields;                                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXLoadoutData.PowerLevelUp
// 0x0014
struct FPowerLevelUp
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      EvolvedPowerClass;                                		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rank;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.LoadoutWeaponInfo
// 0x0018
struct FLoadoutWeaponInfo
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnlockPlotId;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rating;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNotRegularWeaponGUI : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.PlotWeapon
// 0x0020
struct FPlotWeapon
{
	struct FString                                     WeaponClassName;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       UnlockPlotId;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       EquippedPlotId;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.UnlockableWeaponClass
// 0x0009
struct FUnlockableWeaponClass
{
	struct FName                                       UnlockPlotId;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WeaponType;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.LoadoutInfo
// 0x0018
struct FLoadoutInfo
{
	struct TArray<unsigned char>                       WeaponClasses;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ClassName;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.BonusWeaponInfo
// 0x0009
struct FBonusWeaponInfo
{
	struct FName                                       UnlockPlotName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      WeaponClass;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.SpecialWeaponInfo
// 0x0018
struct FSpecialWeaponInfo
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       HenchmanClassName;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       UnlockPlotName;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.PlotWeaponEditor
// 0x0018
struct FPlotWeaponEditor
{
	class UClass*                                      WeaponClass;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnlockPlotId;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EquippedPlotId;                                   		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGestureAnimSetMgr.SFXGestureData
// 0x0060
struct FSFXGestureData
{
	struct TArray<int>                                 aChainedGestures;                                 		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmPoseSet;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureSet;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureAnim;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartOffset;                                     		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndOffset;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartBlendDuration;                              		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndBlendDuration;                                		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWeight;                                          		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTransBlendTime;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInvalidData : 1;                                 		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bChainToPrevious : 1;                             		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x005C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bSnapToPose : 1;                                  		// 0x005C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGestureAnimSetMgr.BioGestDataKey
// 0x006C
struct FBioGestDataKey
{
	struct FSFXGestureData                             tRawData;                                         		// 0x0000 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioGestChainTree*                           pChainTree;                                       		// 0x0060 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseDynamicAnimSets : 1;                          		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGame.HenchPackageMap
// 0x0010
struct FHenchPackageMap
{
	struct FName                                       HenchTag;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PackageName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGame.TimeDilationStruct
// 0x0024
struct FTimeDilationStruct
{
	struct FInterpCurveFloat                           Curve;                                            		// 0x0000 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Identifier;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              TotalTime;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEpicPawnBehavior.EpicPawnVisualEffect
// 0x0018
struct FEpicPawnVisualEffect
{
	struct FName                                       m_nmLabel;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UBioVFXTemplate*                             m_oVFXTemplate;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmTagOfActorAtVFXLocation;                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.BioPawn.AttackReservation
// 0x0010
struct FAttackReservation
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTicketCost;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fTimeUntilExpiry;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsingTicket : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioPawn.RigidBodyCallback
// 0x0014
struct FRigidBodyCallback
{
	struct FScriptDelegate                             RBCallback;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nPriority;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.AimAssistBox
// 0x000D
struct FAimAssistBox
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoftMargin;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      NodeType;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
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
// 0x001C
struct FBioTalentNotice
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ABioPawn*                                    oCharacter;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                nIcon;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
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

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureData
// 0x0064
struct FBioGestureData
{
	struct TArray<int>                                 aChainedGestures;                                 		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmPoseSet;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureSet;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureAnim;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0038 (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartOffset;                                     		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndOffset;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartBlendDuration;                              		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndBlendDuration;                                		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWeight;                                          		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTransBlendTime;                                  		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInvalidData : 1;                                 		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bChainToPrevious : 1;                             		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x005C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bSnapToPose : 1;                                  		// 0x005C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned char                                      ePoseFilter;                                      		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ePose;                                            		// 0x0061 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eGestureFilter;                                   		// 0x0062 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eGesture;                                         		// 0x0063 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGesturePinScrubData
// 0x0018
struct FBioGesturePinScrubData
{
	struct FName                                       nmAnimSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              fTime;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fWeight;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureScrubData
// 0x0038(0x009C - 0x0064)
struct FBioGestureScrubData : FBioGestureData
{
	struct TArray<struct FBioGesturePinScrubData>      aGestPins;                                        		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmNextPoseSet;                                    		// 0x0074 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNextPoseAnim;                                   		// 0x007C (0x0008) [0x0000000000000000]              
	float                                              fCurPoseTime;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              fNextPoseTime;                                    		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              fTransitionTime;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              fCurPoseWeight;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              fTransitionWeight;                                		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              fNextPoseWeight;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackInterrupt.BioInterruptTrackData
// 0x0004
struct FBioInterruptTrackData
{
	unsigned long                                      bShowInterrupt : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackLookAt.BioLookAtTrackData
// 0x0011
struct FBioLookAtTrackData
{
	struct FName                                       nmFindActor;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      eFindActorMode;                                   		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackProp.BioPropTrackData
// 0x002C
struct FBioPropTrackData
{
	class UClass*                                      pWeaponClass;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmProp;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAction;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	class UObject*                                     pPropMesh;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             pActionPartSys;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	unsigned long                                      bEquip : 1;                                       		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackProp.BioWeaponPropActionData
// 0x0010
struct FBioWeaponPropActionData
{
	class UFunction*                                   pfnExecute;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UFunction*                                   pfnGetTiming;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioActionPreviewResource
// 0x0024
struct FBioActionPreviewResource
{
	struct FName                                       nmAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    pPartSysCmp;                                      		// 0x0008 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimSet*                                    pAnimSet;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimation;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bEquipped : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioPropPreviewResource
// 0x005C
struct FBioPropPreviewResource
{
	struct FMap_Mirror                                 mapActions;                                       		// 0x0000 (0x0048) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmProp;                                           		// 0x0048 (0x0008) [0x0000000000000000]              
	class UMeshComponent*                              pPropCmp;                                         		// 0x0050 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bEquipped : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioEvtSysTrackSetFacing.BioSetFacingData
// 0x0011
struct FBioSetFacingData
{
	struct FName                                       nmStageNode;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fOrientation;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyOrientation : 1;                            		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      eCurrentStageNode;                                		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackSubtitles.BioSubtitleTrackData
// 0x000C
struct FBioSubtitleTrackData
{
	int                                                nStrRefID;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fLength;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShowAtTop : 1;                                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
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
	unsigned char                                      eStageSpecificCamera;                             		// 0x0019 (0x0001) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.BioGestureRulesData.BioGestPose
// 0x0030
struct FBioGestPose
{
	struct FName                                       nmPose;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSet;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FIntPoint                                   tPosition;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGroup;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmFemaleNodeName;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestTransition
// 0x0010(0x0040 - 0x0030)
struct FBioGestTransition : FBioGestPose
{
	struct FName                                       nmDestPose;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	float                                              fTransBlendTime;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoTransAnim : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestGesture
// 0x000C(0x003C - 0x0030)
struct FBioGestGesture : FBioGestPose
{
	struct FName                                       nmGesture;                                        		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
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

// ScriptStruct SFXGame.BioGestureRuntimeData.BioMeshPropActionData
// 0x0048
struct FBioMeshPropActionData
{
	struct FString                                     sEffect;                                          		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector                                     vOffsetLocation;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOffsetRotation;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     vOffsetScale;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FName                                       nmActionName;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAttachTo;                                       		// 0x003C (0x0008) [0x0000000000000000]              
	unsigned long                                      bActivate : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioMeshPropData
// 0x008C
struct FBioMeshPropData
{
	struct FMap_Mirror                                 mapActions;                                       		// 0x0000 (0x0048) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     sMesh;                                            		// 0x0048 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector                                     vOffsetLocation;                                  		// 0x0058 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOffsetRotation;                                  		// 0x0064 (0x000C) [0x0000000000000000]              
	struct FVector                                     vOffsetScale;                                     		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FName                                       nmPropName;                                       		// 0x007C (0x0008) [0x0000000000000000]              
	struct FName                                       nmAttachTo;                                       		// 0x0084 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioWeaponPropData
// 0x0028
struct FBioWeaponPropData
{
	struct TArray<struct FString>                      aWeaponClassPrefixes;                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FString>                      aWeaponPackages;                                  		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       nmWeaponBaseClassName;                            		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGlobalVariableTable.TimedPlotUnlock_t
// 0x0008
struct FTimedPlotUnlock_t
{
	int                                                PlotBool;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UnlockDay;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHardLinks.BioHardLinkReference
// 0x0008
struct FBioHardLinkReference
{
	class UObject*                                     Object;                                           		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioHintSystemBase.HintDefinition
// 0x003D
struct FHintDefinition
{
	struct FName                                       HintName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ClearEvent;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       ClearContext;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                DefaultText;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PS3Text;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                PCText;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DisplayDuration;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              CooldownTime;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxDifficulty;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      Enabled : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      HintPosition;                                     		// 0x003C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHintSystemBase.SFXNotification
// 0x006C
struct FSFXNotification
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sSubtitle;                                        		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBody;                                            		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmType;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	class UTexture*                                    oImage;                                           		// 0x0038 (0x0008) [0x0000000000000000]              
	struct FName                                       nRemoteEvent;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FName                                       nmSound;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
	struct FName                                       nmStopSound;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              CreationTime;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                nFlourishID;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Data1;                                            		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHintSystemBase.SFXNotificationData
// 0x0050
struct FSFXNotificationData
{
	struct FString                                     sImageResource;                                   		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmType;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nRemoteEvent;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmSound;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                srTitle;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                srSubTitle;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                srBody;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                srAltTitle;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                srAltBody;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                srAltSubtitle;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              DisplayTime;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nFlourishID;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanBeMerged : 1;                                 		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioHintSystemBase.HintTrackingData
// 0x0038
struct FHintTrackingData
{
	float                                              Times[ 0xA ];                                     		// 0x0000 (0x0028) [0x0000000000000000]              
	int                                                Num;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              FirstTime;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                QueueHead;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.LocalEnemy
// 0x000C
struct FLocalEnemy
{
	class APawn*                                       Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSeen : 1;                                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasLOS : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.BioInterpTrackRotationMode.RotationModeTrackKey
// 0x000C
struct FRotationModeTrackKey
{
	struct FName                                       FindActorTag;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InterpTime;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioLookAtDefinition.LookAtBoneDefinition
// 0x0042
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
	float                                              m_fMaxDeceleration;                               		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fConversationStrength;                          		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bSeparateUpDownLimit : 1;                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseUpAxis : 1;                                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInLocalSpace : 1;                        		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bLookAtInverted : 1;                            		// 0x003C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInverted : 1;                            		// 0x003C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_bUseAcceleration : 1;                           		// 0x003C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      m_bUseMasterBone : 1;                             		// 0x003C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned char                                      m_nLookAxis;                                      		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nUpAxis;                                        		// 0x0041 (0x0001) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.BioParticleModuleLocationAttachedMesh.EmissionAreaWeight
// 0x000C
struct FEmissionAreaWeight
{
	struct FName                                       AreaTag;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioParticleModuleLocationAttachedMesh.LocalEmissionAreaWeight
// 0x000C
struct FLocalEmissionAreaWeight
{
	int                                                EmissionAreaIndex;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SpawnMeshIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioParticleModuleLocationAttachedMesh.EmissionModuleData
// 0x006C
struct FEmissionModuleData
{
	struct TArray<struct FLocalEmissionAreaWeight>     m_LocalEmissionAreas;                             		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<struct FMatrix>                      m_EmissionAreaPreviousWorldToLocal;               		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<unsigned long>                       m_EmissionAreaPreviousWorldToLocalValid;          		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 m_NextEmissionAreas;                              		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UMeshComponent*                              m_CachedSpawnMeshes[ 0x4 ];                       		// 0x0040 (0x0020) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UBioParticleModuleLocationAttachedMesh*      m_pOwningModule;                                  		// 0x0060 (0x0008) [0x0000000000000000]              
	int                                                m_CachedNumSpawnMeshes;                           		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlanet.PlanetSun
// 0x0014
struct FPlanetSun
{
	struct FLinearColor                                SunColor;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.CovGoal_Enemies.ValidEnemyCacheDatum
// 0x0014
struct FValidEnemyCacheDatum
{
	struct FCoverInfo                                  EnemyCover;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	class ABioPawn*                                    EnemyPawn;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAI_Henchman.HenchmanOrder
// 0x0029
struct FHenchmanOrder
{
	struct FVector                                     vTargetLocation;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      oTargetActor;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  oWeapon;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	unsigned long                                      bInstantOrder : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExecutingOrder : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPowerUseIsInstant : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      eOrderType;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioRadarData
// 0x0021
struct FBioRadarData
{
	struct FVector                                     vPosition;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fPassTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSize;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nRelativeZ;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerLockedOn : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eRadarType;                                       		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioDamageIndicatorData
// 0x0004
struct FBioDamageIndicatorData
{
	float                                              fCoolDownTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
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

// ScriptStruct SFXGame.BioPlayerController.PlayerOrder
// 0x003C
struct FPlayerOrder
{
	struct FVector                                     vTarget;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vOriginalCameraLocation;                          		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOriginalCameraRotation;                          		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	class AActor*                                      oTarget;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	class ASFXWeapon_NativeBase*                       oSwitchWeapon;                                    		// 0x0034 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioPPSettingsCallbackData
// 0x0010
struct FBioPPSettingsCallbackData
{
	struct FPointer                                    fpCallback;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    pData;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.CameraRotationLog
// 0x0068
struct FCameraRotationLog
{
	struct FName                                       Trace[ 0xA ];                                     		// 0x0000 (0x0050) [0x0000000000000000]              
	struct FRotator                                    PrevRot;                                          		// 0x0050 (0x000C) [0x0000000000000000]              
	struct FRotator                                    PostRot;                                          		// 0x005C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeapon.ZoomSnapInfo
// 0x000D
struct FZoomSnapInfo
{
	float                                              OuterSnapAngle;                                   		// 0x0000 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InnerSnapAngle;                                   		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SnapOffsetMag;                                    		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      AimNode;                                          		// 0x000C (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
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

// ScriptStruct SFXGame.SFXWeapon.TracerSpec
// 0x0028
struct FTracerSpec
{
	struct FVector                                     Scale3D;                                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 StaticMesh;                                       		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PSTemplate;                                       		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              AccelRate;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Speed;                                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXWeapon.ChangeOverLifeKey
// 0x000C
struct FChangeOverLifeKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Brightness;                                       		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Color;                                            		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
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

// ScriptStruct SFXGame.BioPlayerInput.DebugMenuEntry
// 0x0020
struct FDebugMenuEntry
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
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

// ScriptStruct SFXGame.BioPowerManager.PowerReservation
// 0x0008
struct FPowerReservation
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTimeUntilExpiry;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPowerVFXAppearance.PowerVFXData
// 0x000C
struct FPowerVFXData
{
	class UBioVFXTemplate*                             m_EffectTemplate;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUsePowerTime : 1;                                		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
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

// ScriptStruct SFXGame.BioUIWorld.AppliedVFXPair
// 0x0010
struct FAppliedVFXPair
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ABioVisualEffect*                            Effect;                                           		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.PlotStreamingElement
// 0x0010
struct FPlotStreamingElement
{
	struct FName                                       ChunkName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Conditional;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFallback : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.PlotStreamingSet
// 0x0018
struct FPlotStreamingSet
{
	struct TArray<struct FPlotStreamingElement>        Elements;                                         		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       VirtualChunkName;                                 		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.WorldStreamingState
// 0x000C
struct FWorldStreamingState
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Enabled : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.VFXTemplatePoolSizeSpec
// 0x0010
struct FVFXTemplatePoolSizeSpec
{
	class UBioVFXTemplate*                             Template;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxPoolSize;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinPoolSize;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.BioWorldInfo.VFXListNode
// 0x0014
struct FVFXListNode
{
	class ABioVisualEffect*                            Effect;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NextNode;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PrevNode;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      ValidNode : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioWorldInfo.SubPageState
// 0x0006
struct FSubPageState
{
	int                                                nPadding;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Page;                                             		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.BoughtVFXListEnds
// 0x0008
struct FBoughtVFXListEnds
{
	int                                                HeadIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TailIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWorldInfo.EffectsMaterialPriority
// 0x000C
struct FEffectsMaterialPriority
{
	struct FName                                       EffectsMaterial;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry
// 0x008A
struct FSFXChoiceEntry
{
	struct TArray<struct FSFXTokenMapping>             m_mapTokenIDToActual;                             		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceName;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceTitle;                                     		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceImageTitle;                                		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceDescription;                               		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sActionText;                                      		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0060 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                srChoiceName;                                     		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                srChoiceTitle;                                    		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                srChoiceImageTitle;                               		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                srChoiceDescription;                              		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nOptionalPaneItemValue;                           		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChoiceID;                                        		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                srActionText;                                     		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDefaultSelection : 1;                            		// 0x0084 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisabled : 1;                                    		// 0x0084 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNested : 1;                                      		// 0x0084 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOptionalPaneHideCost : 1;                        		// 0x0084 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      ChoiceColor;                                      		// 0x0088 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eResource;                                        		// 0x0089 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_AdditionalContent.DLCInfo_t
// 0x0038
struct FDLCInfo_t
{
	struct FString                                     sImageResource;                                   		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sImageResourceFrame;                              		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCreditsSection;                                  		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                sDisplayName;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                sDescription;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPowerLevelUpHelper.NewPowerInfo
// 0x0010
struct FNewPowerInfo
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              CurrentRank;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WheelDisplayIndex;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPower.RankInfo
// 0x0010
struct FRankInfo
{
	int                                                Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Name;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Description;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                UnlockBlurb;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPower.UnlockRequirement
// 0x0010
struct FUnlockRequirement
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Rank;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CustomUnlockText;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_BrowserWheel.BWPageStruct
// 0x0015
struct FBWPageStruct
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	class UBioSFHandler*                               oHandler;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                srLabel;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
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

// ScriptStruct SFXGame.BioSFHandler_DataCodex.CodexImageDetails
// 0x001C
struct FCodexImageDetails
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  oTexture;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
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
// 0x0044
struct FBioMessageBoxData
{
	struct FString                                     m_sMessage;                                       		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FBioMessageBoxOptionalParams                m_stParams;                                       		// 0x0010 (0x0014) [0x0000000000000000]              
	struct FName                                       m_nmName;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
	class UObject*                                     m_pCallbackObject;                                		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       m_nmCallbackFunction;                             		// 0x0034 (0x0008) [0x0000000000000000]              
	int                                                m_nPriority;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_nContext;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_Save.SaveGUIAreaInfo
// 0x001C
struct FSaveGUIAreaInfo
{
	struct FString                                     ImageName;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       AreaName;                                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AreaStrRef;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Save.SaveGUIRecord
// 0x0070
struct FSaveGUIRecord
{
	struct FSFXSaveDescriptor                          SaveDescriptor;                                   		// 0x0000 (0x0028) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FriendlyName;                                     		// 0x0028 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ImagePath;                                        		// 0x0038 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USFXSaveGame*                                SaveGame;                                         		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  AreaImage;                                        		// 0x0050 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_sec;                                            		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_Min;                                            		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_hr;                                             		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_day;                                            		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_mo;                                             		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_year;                                           		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Load.SaveGUICareerRecord
// 0x004A
struct FSaveGUICareerRecord
{
	struct FString                                     CareerName;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FirstName;                                        		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ClassName;                                        		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSaveTimeStamp                              CreationDate;                                     		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                DeviceID;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bActiveCareer : 1;                                		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Origin;                                           		// 0x0048 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Notoriety;                                        		// 0x0049 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData_PRCShop.SFXChoiceEntryNoStrRef
// 0x0076
struct FSFXChoiceEntryNoStrRef
{
	struct FString                                     sChoiceName;                                      		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceTitle;                                     		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceImageTitle;                                		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceDescription;                               		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sActionText;                                      		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FSFXTokenMapping>             m_mapTokenIDToActual;                             		// 0x0050 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0060 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                nOptionalPaneItemValue;                           		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChoiceID;                                        		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDefaultSelection : 1;                            		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisabled : 1;                                    		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNested : 1;                                      		// 0x0070 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      ChoiceColor;                                      		// 0x0074 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eResource;                                        		// 0x0075 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_NewCharacter.BonusTalentData
// 0x0021
struct FBonusTalentData
{
	struct FName                                       PowerClassName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                srChoiceName;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                srChoiceTitle;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                srChoiceDescription;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMorinthSpecialCase : 1;                          		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      AchievementId;                                    		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.OptionTelemetryInfo
// 0x000C
struct FOptionTelemetryInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value_Initial;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Value_ToSend;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PartySelection.PartySelectMemberInfo
// 0x0058
struct FPartySelectMemberInfo
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       LoadoutTag;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       DiscoveredLabel;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       AvailableLabel;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       InPartyLabel;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       IsLoyalLabel;                                     		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       OldLoyaltyLabel;                                  		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       AppearanceLabel;                                  		// 0x0038 (0x0008) [0x0000000000000000]              
	int                                                StrName;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ImageIndex;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                KismetIndex;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                DeadIndex;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                StrDossierText;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                StrSpecialty;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PartySelection.AdditionalAppearanceInfo
// 0x0010
struct FAdditionalAppearanceInfo
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                AddAppearance;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PlotFlag;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PartySelection.PartySelectDynamicInfo
// 0x0034
struct FPartySelectDynamicInfo
{
	int                                                Abilities[ 0x5 ];                                 		// 0x0000 (0x0014) [0x0000000000000000]              
	int                                                Ranks[ 0x5 ];                                     		// 0x0014 (0x0014) [0x0000000000000000]              
	int                                                Weapons[ 0x3 ];                                   		// 0x0028 (0x000C) [0x0000000000000000]              
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

// ScriptStruct SFXGame.BioSFHandler_PCOptions.ModeAliasPair
// 0x0011
struct FModeAliasPair
{
	struct FString                                     Alias;                                            		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      GameMode;                                         		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.SubordinateDesc
// 0x0007(0x0018 - 0x0011)
struct FSubordinateDesc : FModeAliasPair
{
	unsigned long                                      bAllGameModes : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.GuiBind
// 0x0073(0x0084 - 0x0011)
struct FGuiBind : FModeAliasPair
{
	struct FKeyBind                                    Keys[ 0x2 ];                                      		// 0x0014 (0x0038) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     KeysLocName[ 0x2 ];                               		// 0x004C (0x0020) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FSubordinateDesc>             Subordinates;                                     		// 0x006C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Name;                                             		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCategory : 1;                                    		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.NonBindableKeyDefinition
// 0x001C
struct FNonBindableKeyDefinition
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Control : 1;                                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Shift : 1;                                        		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Alt : 1;                                          		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      ModifierIndependent : 1;                          		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YawConstraint;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RollConstraint;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioStage.BioStageCameraCustom
// 0x0030
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
	unsigned long                                      m_bDisableHeightAdjust : 1;                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
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

// ScriptStruct SFXGame.BioTierManager.TierDetails_t
// 0x0014
struct FTierDetails_t
{
	struct FName                                       TierName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsEnabled : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsGlobal : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsFloor : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
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

// ScriptStruct SFXGame.BioTriggerStream.BioStreamingState
// 0x005C
struct FBioStreamingState
{
	struct FString                                     StateDescription;                                 		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FName>                        VisibleChunkNames;                                		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FName>                        VisibleSoonChunkNames;                            		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FName>                        LoadChunkNames;                                   		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       StateName;                                        		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InChunkName;                                      		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DesignFudget;                                     		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArtFudget;                                        		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ColorChunks : 1;                                  		// 0x0058 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct SFXGame.BioVisualEffectTrack.BioVisualEffectTrackKey
// 0x0010
struct FBioVisualEffectTrackKey
{
	class ABioVisualEffect*                            m_Effect;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.CovGoal_AvoidEnemies.EnemyData
// 0x0018
struct FEnemyData
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class APawn*                                       Enemy;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXConvAuditionHelperInterface.BioAudPropagationData
// 0x0040
struct FBioAudPropagationData
{
	struct TArray<class UBioEvtSysTrackSetFacing*>     aFacingData;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<class UBioEvtSysTrackGesture*>       aGestureData;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<class UBioEvtSysTrackProp*>          aPropData;                                        		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<class UBioEvtSysTrackLighting*>      aLightingData;                                    		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXConvAuditionHelperInterface.BioScrubbingCamData
// 0x002C
struct FBioScrubbingCamData
{
	struct FVector                                     vCamPos;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rCamRot;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       nmStageCam;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              fFov;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fNearPlane;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fAspectRatio;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData_Research.TechData
// 0x0130
struct FTechData
{
	struct FSFXChoiceEntry                             ChoiceEntry;                                      		// 0x0000 (0x008C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSTech                                      stTech;                                           		// 0x008C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSTreasure                                  stTreasure;                                       		// 0x00D4 (0x0038) [0x0000000000000000]              
	struct FName                                       PlotName;                                         		// 0x010C (0x0008) [0x0000000000000000]              
	int                                                TechId;                                           		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                PlotID;                                           		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                TreasureId;                                       		// 0x011C (0x0004) [0x0000000000000000]              
	int                                                UnlockId;                                         		// 0x0120 (0x0004) [0x0000000000000000]              
	int                                                nContextId;                                       		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                RMode;                                            		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                DisableId;                                        		// 0x012C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameInterpTrackWwiseMicLock.BioMicLockData
// 0x000D
struct FBioMicLockData
{
	struct FName                                       m_nmFindActor;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bLock : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      m_eFindActorMode;                                 		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.SFXWeapon.CoverLeanPosition
// 0x001E
struct FCoverLeanPosition
{
	struct TArray<unsigned char>                       WeaponTypes;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Offset;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned char                                      Direction;                                        		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x001D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXInterpTrackAttachCrustEffect.SFXAttachCrustEffectTrackData
// 0x0008
struct FSFXAttachCrustEffectTrackData
{
	float                                              m_fLifeTime;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bAttach : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackBlackScreen.SFXBlackScreenTrackData
// 0x0005
struct FSFXBlackScreenTrackData
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      BlackScreenState;                                 		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackLightEnvQuality.SFXLightEnvTrackData
// 0x0005
struct FSFXLightEnvTrackData
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Quality;                                          		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackMovieBase.SFXMoviePlayStateData
// 0x0005
struct FSFXMoviePlayStateData
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eState;                                         		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackPlayFaceOnlyVO.BioFOVOTrackData
// 0x0018
struct FBioFOVOTrackData
{
	class UBioConversation*                            pConversation;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                nLineStrRef;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPadLineLength;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                srActorNameOverride;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceHideSubtitles : 1;                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlaySoundOnly : 1;                               		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisableDelayUntilPreload : 1;                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAllowInConversation : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetEnvEffectIntensity.SFXEnvEffectIntensityTrackData
// 0x0008
struct FSFXEnvEffectIntensityTrackData
{
	float                                              m_fIntensity;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fBlendTime;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetPlayerNearClipPlane.SFXNearClipTrackData
// 0x0008
struct FSFXNearClipTrackData
{
	float                                              m_fValue;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bUseDefaultValue : 1;                           		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetWeaponInstant.SFXWeaponClassData
// 0x0008
struct FSFXWeaponClassData
{
	class UClass*                                      cWeapon;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackToggleBase.SFXToggleTrackData
// 0x0004
struct FSFXToggleTrackData
{
	unsigned long                                      m_bToggle : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bEnable : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolTracers
// 0x008C
struct FSFXObjectPoolTracers
{
	class AProjectile*                                 Tracers[ 0xF ];                                   		// 0x0000 (0x0078) [0x0000000000000000]              
	class UStaticMesh*                                 Mesh;                                             		// 0x0078 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             Template;                                         		// 0x0080 (0x0008) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0088 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolProjectiles
// 0x001C
struct FSFXObjectPoolProjectiles
{
	struct TArray<class AProjectile*>                  Projectiles;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ProjectileClass;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolDroppedAmmos
// 0x001C
struct FSFXObjectPoolDroppedAmmos
{
	struct TArray<class ADroppedPickup*>               DroppedAmmos;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DroppedAmmoClass;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolImpactPSCs
// 0x0084
struct FSFXObjectPoolImpactPSCs
{
	class UParticleSystemComponent*                    PSysComponents[ 0xF ];                            		// 0x0000 (0x0078) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             Template;                                         		// 0x0078 (0x0008) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolPSCs
// 0x001C
struct FSFXObjectPoolPSCs
{
	struct TArray<class UParticleSystemComponent*>     PSysComponents;                                   		// 0x0000 (0x0010) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             Template;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolEmitters
// 0x001C
struct FSFXObjectPoolEmitters
{
	struct TArray<class AEmitter*>                     Emitters;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             Template;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolPathConstraintCaches
// 0x001C
struct FSFXObjectPoolPathConstraintCaches
{
	class UPathConstraint*                             List[ 0x3 ];                                      		// 0x0000 (0x0018) [0x0000000000000000]              
	int                                                ListIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPath_AvoidFireFromCover.EnemyCoverInfo
// 0x0014
struct FEnemyCoverInfo
{
	struct FCoverInfo                                  Cover;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	class ABioPawn*                                    Enemy;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn_Player.ScarInfo
// 0x0078
struct FScarInfo
{
	struct FString                                     Emissive;                                         		// 0x0000 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Normal;                                           		// 0x0010 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     EyeEmissive;                                      		// 0x0020 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FemaleEmissive;                                   		// 0x0030 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FemaleNormal;                                     		// 0x0040 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FemaleEyeEmissive;                                		// 0x0050 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FLinearColor                                Color;                                            		// 0x0060 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector2D                                   Threshold;                                        		// 0x0070 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIcon
// 0x0024
struct FSFXPowerWheelIcon
{
	struct FString                                     sPath;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sID;                                              		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fBoundary;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelButtonIcon
// 0x0011
struct FSFXPowerWheelButtonIcon
{
	struct FString                                     sPath;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      eIcon;                                            		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIconPower
// 0x006E(0x0092 - 0x0024)
struct FSFXPowerWheelIconPower : FSFXPowerWheelIcon
{
	struct FSFXPowerWheelButtonIcon                    oMappedIcon;                                      		// 0x0024 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMappedBGPath;                                    		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXPower*                                   pPower;                                           		// 0x0068 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    pPawn;                                            		// 0x0070 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPowerName;                                      		// 0x0078 (0x0008) [0x0000000000000000]              
	int                                                nIcon;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                nCooldownValue;                                   		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                nPowerID;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelected : 1;                                    		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bVisible : 1;                                     		// 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDelayedFlash : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bMapped : 1;                                      		// 0x008C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDragHover : 1;                                   		// 0x008C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bQuickSlotIcon : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned char                                      eState;                                           		// 0x0090 (0x0001) [0x0000000000000000]              
	unsigned char                                      eDesiredState;                                    		// 0x0091 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPRI.KillScore
// 0x001D
struct FKillScore
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       DamageClassName;                                  		// 0x0010 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                Points;                                           		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      GrinderAchievementId;                             		// 0x001C (0x0001) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFXGame.SFXPRI.DamageRecordStruct
// 0x000C
struct FDamageRecordStruct
{
	class AController*                                 DamageCauser;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DamageDone;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPRI.ScoreEvent
// 0x0014
struct FScoreEvent
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ExpiryTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_LegacyDataBasicInfo.NotorietyMap
// 0x0005
struct FNotorietyMap
{
	int                                                Ref;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_LegacyDataBasicInfo.OriginMap
// 0x0005
struct FOriginMap
{
	int                                                Ref;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_ResearchChoiceGUI.ResearchMenu
// 0x0034
struct FResearchMenu
{
	struct FString                                     sImagePath;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FTechData>                    m_ResearchChoices;                                		// 0x0010 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                srTitle;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                srSubTitle;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                srAboutLabel;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                srAboutText;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHudDmgIndicatorPaths
// 0x0020
struct FSFXHudDmgIndicatorPaths
{
	struct FString                                     _alpha;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     _visible;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDResistances
// 0x0014
struct FSFXHUDResistances
{
	float                                              fHealthPct;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fArmourPct;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fBioticPct;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fShieldPct;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasShield : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasArmour : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasBiotic : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasHealth : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDSquadMemberInfo
// 0x00B4
struct FSFXHUDSquadMemberInfo
{
	struct FString                                     sPath;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconImagePath;                                   		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sShieldPath;                                      		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sBioticPath;                                      		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sArmourPath;                                      		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sHealthPath;                                      		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPowerPath;                                       		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXHUDResistances                          Resistances;                                      		// 0x0070 (0x0014) [0x0000000000000000]              
	struct FSFXHUDResistances                          DisplayedResistances;                             		// 0x0084 (0x0014) [0x0000000000000000]              
	class ABioPawn*                                    pPawn;                                            		// 0x0098 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  pIcon;                                            		// 0x00A0 (0x0008) [0x0000000000000000]              
	float                                              fCooldown;                                        		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              fElapsedFullResistTime;                           		// 0x00AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bCooldownVisible : 1;                             		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShieldVisible : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBioticVisible : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bArmourVisible : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHealthVisible : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bShieldDamage : 1;                                		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBioticDamage : 1;                                		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bArmourDamage : 1;                                		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bHealthDamage : 1;                                		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bInvalidated : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bVisible : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bUpdateResistance : 1;                            		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bUpdateHealth : 1;                                		// 0x00B0 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bUpdatePower : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bUpdateIcon : 1;                                  		// 0x00B0 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bDisplayVisible : 1;                              		// 0x00B0 (0x0004) [0x0000000000000000] [0x00008000] 
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDTargetInfo
// 0x003C
struct FSFXHUDTargetInfo
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatus;                                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXHUDResistances                          Resistances;                                      		// 0x0020 (0x0014) [0x0000000000000000]              
	int                                                nStatusFlags;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInteractive : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHostile : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInRange : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIconWeapon
// 0x0045(0x0069 - 0x0024)
struct FSFXPowerWheelIconWeapon : FSFXPowerWheelIcon
{
	struct FString                                     sName;                                            		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconResource;                                    		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      oWeaponClass;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
	int                                                nWeaponIcon;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                nAmmo;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEquipped : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHenchIcon : 1;                                   		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eWeaponState;                                     		// 0x0068 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXRadarElementData
// 0x0029
struct FSFXRadarElementData
{
	struct FVector                                     vActorLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vPosition;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                nSize;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nRelativeZ;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocked : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdate : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUpdateLock : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      eRadarType;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelPawnIndices
// 0x0030
struct FSFXPowerWheelPawnIndices
{
	struct TArray<int>                                 aPlayer;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 aHench1;                                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 aHench2;                                          		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_Slideshow.SFXSlideshowEntry
// 0x0030
struct FSFXSlideshowEntry
{
	struct FString                                     ImagePath;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  Image;                                            		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisplayTime;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDisplayTime;                                   		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NextText;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PrevText;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExitText;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CanExit : 1;                                      		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Slideshow.SFXSlideshowParams
// 0x0020
struct FSFXSlideshowParams
{
	struct TArray<struct FSFXSlideshowEntry>           Slides;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Music;                                            		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlideFadeScalar;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AutoAdvance : 1;                                  		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      AllowRewind : 1;                                  		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      AllowAdvancePastEnd : 1;                          		// 0x001C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      SlidesFadeIn : 1;                                 		// 0x001C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      SlidesFadeOut : 1;                                		// 0x001C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      BlackBackground : 1;                              		// 0x001C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
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
	float                                              decimals;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
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

// ScriptStruct SFXGame.SFXSFHandler_PRCShop.PRCInfo_t
// 0x001C
struct FPRCInfo_t
{
	struct FString                                     sCreditsSection;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fFadeTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fHoldTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fScrollTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMAVectorParameter
// 0x0020
struct FSMAVectorParameter
{
	struct FLinearColor                                Parameter;                                        		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x0018 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMAScalarParameter
// 0x0014
struct FSMAScalarParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x0008 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              Parameter;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMATextureParameter
// 0x0018
struct FSMATextureParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    Parameter;                                        		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x0010 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
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

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationParam
// 0x0020
struct FSFXVocalizationParam
{
	struct TArray<unsigned char>                       SpecificType;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<int>                                 SpecificValue;                                    		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationLineV2
// 0x0078
struct FSFXVocalizationLineV2
{
	struct FSFXVocalizationParam                       Instigator;                                       		// 0x0000 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXVocalizationParam                       Recipient;                                        		// 0x0020 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXVocalizationParam                       ThirdParam;                                       		// 0x0040 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DebugText;                                        		// 0x0060 (0x0010) [0x0200000000400000]              ( CPF_NeedCtorLink )
	class UWwiseEvent*                                 Sound;                                            		// 0x0070 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationEventV2
// 0x0010
struct FSFXVocalizationEventV2
{
	struct TArray<struct FSFXVocalizationLineV2>       Lines;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif