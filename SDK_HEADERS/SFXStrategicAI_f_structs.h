/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXStrategicAI_f_structs.h
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

// Function SFXStrategicAI.BioAI_SarenHopper.OnDamaged
// [0x00020802] ( FUNC_Event )
struct ABioAI_SarenHopper_eventOnDamaged_Parms
{
	class AController*                                 oInstigator;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamage;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnProximityAlarm
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnProximityAlarm_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oTarget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRelationship;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnSquadSeen
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnSquadSeen_Parms
{
	class ABioBaseSquad*                               oSquad;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnDamaged
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnDamaged_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 oInstigator;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamage;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnCastAt
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnCastAt_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oAttacker;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmPower;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnAttacked
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnAttacked_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oAttacker;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmWeapon;                                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnDeath
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnDeath_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 oKiller;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetHackedSquad
// [0x00020002] 
struct ABioBaseSquadDesign_execSetHackedSquad_Parms
{
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ABioBaseSquadDesign_eventSetInitialState_Parms
{
	// class ABioAiController*                         oMember;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnActionComplete_Movement
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnActionComplete_Movement_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmAction;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReason;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oTarget;                                          		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vLocation;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nRouteIndex;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.MemberAdded
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventMemberAdded_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    oMemberPawn;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oMember;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.MemberRemoved
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventMemberRemoved_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.RemovePerceptionMultipliers
// [0x00020002] 
struct ABioBaseSquadDesign_execRemovePerceptionMultipliers_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSightMult;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHearingMult;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.ApplyPerceptionMultipliers
// [0x00020002] 
struct ABioBaseSquadDesign_execApplyPerceptionMultipliers_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSightMult;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHearingMult;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.ResetAttackedRecently
// [0x00020002] 
struct ABioBaseSquadDesign_execResetAttackedRecently_Parms
{
};

// Function SFXStrategicAI.BioBaseSquadDesign.NoLongerSeePlayer
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventNoLongerSeePlayer_Parms
{
	class APawn*                                       Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Seen;                                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.SeePlayer
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventSeePlayer_Parms
{
	class APawn*                                       Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Seen;                                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnFactionChanged
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventOnFactionChanged_Parms
{
	class UClass*                                      oOldFaction;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      oNewFaction;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetOrientationType
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventGetOrientationType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetRestFormation
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesign_eventGetRestFormation_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadWalkWaypoints
// [0x00020002] 
struct ABioBaseSquadDesign_execSquadWalkWaypoints_Parms
{
	// class ABioAiController*                         oMember;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             nCurrMemberIndex;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadMemberWalkWaypoints
// [0x00020002] 
struct ABioBaseSquadDesign_execSquadMemberWalkWaypoints_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nRouteIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fBestRouteDistSq;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fCurrRouteDistSq;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             nBestRoute;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             nNearestPointIndex;                               		// 0x001C (0x0004) [0x0000000000000000]              
	// class AActor*                                   oNearestPoint;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oMemberPawn;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetNavPointInPlaypen
// [0x00024002] 
struct ABioBaseSquadDesign_execGetNavPointInPlaypen_Parms
{
	struct FVector                                     vNear;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vLateralOffset;                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSearchRadius;                                    		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fVerticalOffset;                                  		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCanFly : 1;                                      		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCanHop : 1;                                      		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bSniper : 1;                                      		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAggressive : 1;                                  		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDefensive : 1;                                   		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      oLOSTarget;                                       		// 0x0034 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ABioPawn*                                    oIgnoreIfLockedBy;                                		// 0x003C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0044 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct TArray<class ANavigationPoint*>          aoIgnorePathNodes;                                		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANavigationPoint*                         oMovePoint;                                       		// 0x005C (0x0008) [0x0000000000000000]              
	// struct FVector                                  vVerticalOffset;                                  		// 0x0064 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bFlipLateral : 1;                                 		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             nRand;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRequireLoS : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetFlockingOffset
// [0x00020002] 
struct ABioBaseSquadDesign_execGetFlockingOffset_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct TArray<class ABioAiController*>          aoMember;                                         		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APawn*                                    oMemberPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oNearestMember;                                   		// 0x002C (0x0008) [0x0000000000000000]              
	// class APawn*                                    oNearestPawn;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// float                                           fDistToNearestSq;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	// class ABioAiController*                         oFurthestMember;                                  		// 0x0040 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oFurthestPawn;                                    		// 0x0048 (0x0008) [0x0000000000000000]              
	// float                                           fDistToFurthestSq;                                		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vFlockingOffset;                                  		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vTempOffset;                                      		// 0x0060 (0x000C) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetFlockingRanges
// [0x00020002] 
struct ABioBaseSquadDesign_execSetFlockingRanges_Parms
{
	float                                              FMin;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FMax;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSquadMax;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetFurthestSquadMember
// [0x00424002] 
struct ABioBaseSquadDesign_execGetFurthestSquadMember_Parms
{
	struct FVector                                     vTarget;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<class ABioAiController*>             aoIgnoreMembers;                                  		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	float                                              fLongestDistToTargetSq;                           		// 0x001C (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	class ABioAiController*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioAiController*                         oMember;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oFurthestMember;                                  		// 0x0030 (0x0008) [0x0000000000000000]              
	// float                                           fDistToTargetSq;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             nIgnoreIndex;                                     		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.ResetSquadProximity
// [0x00020002] 
struct ABioBaseSquadDesign_execResetSquadProximity_Parms
{
	// class ABioAiController*                         oMember;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oMemberPawn;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetSquadProximityByAttackRange
// [0x00024002] 
struct ABioBaseSquadDesign_execSetSquadProximityByAttackRange_Parms
{
	float                                              fMultiplier;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// struct TArray<class UBioCapability*>            oMemberCaps;                                      		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nCurrCap;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fProximity;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetSquadProximity
// [0x00024002] 
struct ABioBaseSquadDesign_execSetSquadProximity_Parms
{
	float                                              fDefault;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fCloseCombat;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fSniperCombat;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fSupport;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct TArray<class UBioCapability*>            aoMemberAttackCaps;                               		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct TArray<class UBioCapability*>            aoMemberSupportCaps;                              		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fProximity;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             nCurrCap;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.PushMoveWithLocking
// [0x00024002] 
struct ABioBaseSquadDesign_execPushMoveWithLocking_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oTarget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTolerance;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bWalking : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              fMovementDelay;                                   		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCrouch : 1;                                      		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ANavigationPoint*                         oDestPathNode;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadMemberTakeCover
// [0x00024002] 
struct ABioBaseSquadDesign_execSquadMemberTakeCover_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCoverRange;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fNavRange;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       oTarget;                                          		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       oAvoid;                                           		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNewCover : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCrouchIfNoCover : 1;                             		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              fMovementDelay;                                   		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     vCoverLocation;                                   		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseDefNodeIfNoCover : 1;                         		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         oMovePoint;                                       		// 0x0040 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vLateralOffset;                                   		// 0x0048 (0x000C) [0x0000000000000000]              
	// class APawn*                                    oMemberPawn;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bMovingToCover : 1;                               		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXStrategicAI.BioBaseSquadDesign.IsAtDefenseNode
// [0x00020002] 
struct ABioBaseSquadDesign_execIsAtDefenseNode_Parms
{
	class APawn*                                       oTestPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         oAnchor;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadTakeCover
// [0x00024002] 
struct ABioBaseSquadDesign_execSquadTakeCover_Parms
{
	float                                              fCoverRange;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fNavRange;                                        		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       oTarget;                                          		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       oAvoid;                                           		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bNewCover : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCrouchIfNoCover : 1;                             		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              fDelayOrdersLoop;                                 		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseDefNodeIfNoCover : 1;                         		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             nCurrMember;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.PushCoverWithLocking
// [0x00024002] 
struct ABioBaseSquadDesign_execPushCoverWithLocking_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vNear;                                            		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oTarget;                                          		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       oAvoid;                                           		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fCoverRadius;                                     		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fMovementDelay;                                   		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct TArray<class APawn*>                     aoCoverList;                                      		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct TArray<int>                              aoCoverValue;                                     		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FCoverRecord                             oCover;                                           		// 0x0050 (0x0014) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0064 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetCoverList
// [0x00424002] 
struct ABioBaseSquadDesign_execGetCoverList_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<class APawn*>                        aoCoverAgainst;                                   		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<int>                                 aoCoverValue;                                     		// 0x0018 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class APawn*                                       oTarget;                                          		// 0x0028 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       oAvoid;                                           		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APawn*                                    oEnemy;                                           		// 0x0038 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bFoundTarget : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bFoundAvoid : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXStrategicAI.BioBaseSquadDesign.UnlockAllPathnodes
// [0x00020002] 
struct ABioBaseSquadDesign_execUnlockAllPathnodes_Parms
{
};

// Function SFXStrategicAI.BioBaseSquadDesign.UnlockPathnodesByOwner
// [0x00020002] 
struct ABioBaseSquadDesign_execUnlockPathnodesByOwner_Parms
{
	class ABioPawn*                                    oUnlockOwner;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nUnlockIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         oUnlockNode;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.UnlockPathnode
// [0x00020002] 
struct ABioBaseSquadDesign_execUnlockPathnode_Parms
{
	class ANavigationPoint*                            oUnlockNode;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nUnlockIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.LockPathnode
// [0x00424002] 
struct ABioBaseSquadDesign_execLockPathnode_Parms
{
	class ANavigationPoint*                            oLockNode;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oLockOwner;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nIndex;                                           		// 0x0010 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	// struct FLockedPoint                             oNewNode;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.IsPathnodeLocked
// [0x00424002] 
struct ABioBaseSquadDesign_execIsPathnodeLocked_Parms
{
	class ANavigationPoint*                            oTestNode;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nIndex;                                           		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	class ABioPawn*                                    oIgnoreMember;                                    		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nLoopIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetLockedPathNodes
// [0x00024002] 
struct ABioBaseSquadDesign_execGetLockedPathNodes_Parms
{
	class ABioPawn*                                    oIgnoreMember;                                    		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct TArray<class ANavigationPoint*>             ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct TArray<class ANavigationPoint*>          aoReturn;                                         		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nIndex;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetCurrentMovePoint
// [0x00020002] 
struct ABioBaseSquadDesign_execGetCurrentMovePoint_Parms
{
	class ABioPawn*                                    oMemberPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   oMoveActor;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         oMovePoint;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vMoveLoc;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.DropAgitationIfNoHostile
// [0x00024002] 
struct ABioBaseSquadDesign_execDropAgitationIfNoHostile_Parms
{
	unsigned char                                      nNewLevel;                                        		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.UpgradeAgitationIfHostile
// [0x00020002] 
struct ABioBaseSquadDesign_execUpgradeAgitationIfHostile_Parms
{
	class APawn*                                       oWho;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oPerceived;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nNewLevel;                                        		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oPawnData;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetFactionByType
// [0x00020002] 
struct ABioBaseSquadDesign_execSetFactionByType_Parms
{
	unsigned char                                      nNewFaction;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.ClearAllSquadActions
// [0x00024002] 
struct ABioBaseSquadDesign_execClearAllSquadActions_Parms
{
	unsigned long                                      bClearQueue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bClearState : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUnlockTarget : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLeaveCombat : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ABioAiController*                         oCurrSquadMember;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             nRouteIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.CalculateAllLikelihoods
// [0x00020002] 
struct ABioBaseSquadDesign_execCalculateAllLikelihoods_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nStrategyIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fLikelihoodSum;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.CalculateLikelihood
// [0x00020002] 
struct ABioBaseSquadDesign_execCalculateLikelihood_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.IsValidStrategy
// [0x00020002] 
struct ABioBaseSquadDesign_execIsValidStrategy_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nStrategyIndex;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetStrategyList
// [0x00020002] 
struct ABioBaseSquadDesign_execGetStrategyList_Parms
{
	struct TArray<struct FName>                        ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct TArray<struct FName>                     asStrategyList;                                   		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nStrategyIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesign.ActivateAfterDelay
// [0x00020002] 
struct ABioBaseSquadDesign_execActivateAfterDelay_Parms
{
	float                                              fDelay;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesign.Activate
// [0x00020002] 
struct ABioBaseSquadDesign_execActivate_Parms
{
};

// Function SFXStrategicAI.BioBaseSquadDesign.Deactivate
// [0x00020002] 
struct ABioBaseSquadDesign_execDeactivate_Parms
{
};

// Function SFXStrategicAI.BioBaseSquadDesign.DoFallBackStrategy
// [0x00020002] 
struct ABioBaseSquadDesign_execDoFallBackStrategy_Parms
{
};

// Function SFXStrategicAI.BioBaseSquadDesign.ReEvaluateStrategy
// [0x00020002] 
struct ABioBaseSquadDesign_execReEvaluateStrategy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Combat
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventOnActionComplete_Combat_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmAction;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmTechnique;                                      		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReason;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oLastTarget;                                      		// 0x001C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Movement
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventOnActionComplete_Movement_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmAction;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReason;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oTarget;                                          		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vLocation;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.UseAttackCapability
// [0x00024002] 
struct ABioBaseSquadDesignCombat_execUseAttackCapability_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oTarget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UBioCapability*                              oCap;                                             		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eAttackType;                                      		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fStabilityOffset;                                 		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      oMoveDest;                                        		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fMovementDelay;                                   		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDistanceFromRange;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSuccess : 1;                                     		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           fStart;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fEnd;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fTimeOut;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         oDestPathNode;                                    		// 0x0044 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x004C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bUseMobMovment : 1;                               		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.FindDangerousEnemy
// [0x00024002] 
struct ABioBaseSquadDesignCombat_execFindDangerousEnemy_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oIgnore;                                          		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oMemberPawn;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oEnemy;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oBestEnemy;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	// unsigned char                                   eEnemyType;                                       		// 0x0030 (0x0001) [0x0000000000000000]              
	// unsigned long                                   bIsBestEnemyVehicle : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           fCurrDistanceToEnemySQ;                           		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fBestDistanceToEnemySQ;                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetClosestPerceivedTarget
// [0x00024002] 
struct ABioBaseSquadDesignCombat_execGetClosestPerceivedTarget_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oIgnoreTarget;                                    		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oNewTarget;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oReturnTarget;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	// float                                           fDistToTargetSq;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fBestDistToTargetSq;                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetDistanceToNearestHostile
// [0x00424002] 
struct ABioBaseSquadDesignCombat_execGetDistanceToNearestHostile_Parms
{
	unsigned long                                      bSquareDist : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class ABioAiController*                            oNearestMember;                                   		// 0x0004 (0x0008) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	class APawn*                                       oNearestTarget;                                   		// 0x000C (0x0008) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oNewTarget;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oMember;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct TArray<class ABioAiController*>          aoIgnoredMember;                                  		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fDistToTargetSq;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fBestDistToTargetSq;                              		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetOrientationType
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventGetOrientationType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetRestFormation
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventGetRestFormation_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnCastAt
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventOnCastAt_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oAttacker;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmPower;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oController;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnAttacked
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventOnAttacked_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oAttacker;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmWeapon;                                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.HearNoise
// [0x00024802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventHearNoise_Parms
{
	class APawn*                                       Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Loudness;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NoiseMaker;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vNoiseLocation;                                   		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NoiseType;                                        		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.NoLongerSeePlayer
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventNoLongerSeePlayer_Parms
{
	class APawn*                                       Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Seen;                                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.SeePlayer
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventSeePlayer_Parms
{
	class APawn*                                       Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Seen;                                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.SeenSquad
// [0x00020802] ( FUNC_Event )
struct ABioBaseSquadDesignCombat_eventSeenSquad_Parms
{
	class ABioBaseSquad*                               oSquad;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihoodFlee
// [0x00020002] 
struct ABioSquadAmbient_execCalculateLikelihoodFlee_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihoodIdle
// [0x00020002] 
struct ABioSquadAmbient_execCalculateLikelihoodIdle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihood
// [0x00020002] 
struct ABioSquadAmbient_execCalculateLikelihood_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadBeacon.CalculateLikelihoodCasting
// [0x00020002] 
struct ABioSquadBeacon_execCalculateLikelihoodCasting_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadBeacon.SquadMemberBeginCasting
// [0x00020002] 
struct ABioSquadBeacon_execSquadMemberBeginCasting_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioCapability*                           oCap;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   eAttackType;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadBeacon.CalculateLikelihood
// [0x00020002] 
struct ABioSquadBeacon_execCalculateLikelihood_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodDefend
// [0x00020002] 
struct ABioSquadCombat_execCalculateLikelihoodDefend_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fLikelihood;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fCoverSpots;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct TArray<class UBioCapability*>            aoSquadAttackCaps;                                		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fNumMembers;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             nCapCount;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fSniperCapCount;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodSkirmish
// [0x00020002] 
struct ABioSquadCombat_execCalculateLikelihoodSkirmish_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fLikelihood;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct TArray<class UBioCapability*>            aoSquadAttackCaps;                                		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fCoverSpots;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             nCapCount;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fCloseCapCount;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fNumMembers;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodCharge
// [0x00020002] 
struct ABioSquadCombat_execCalculateLikelihoodCharge_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fLikelihood;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct TArray<class UBioCapability*>            aoSquadAttackCaps;                                		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nCapCount;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           fCloseCapCount;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fCoverSpots;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fNumMembers;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             nEnemyCount;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// class APawn*                                    oTempPawn;                                        		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodSearch
// [0x00020002] 
struct ABioSquadCombat_execCalculateLikelihoodSearch_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodIdle
// [0x00020002] 
struct ABioSquadCombat_execCalculateLikelihoodIdle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihood
// [0x00020002] 
struct ABioSquadCombat_execCalculateLikelihood_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadCommoner.CalculateLikelihoodIdle
// [0x00020002] 
struct ABioSquadCommoner_execCalculateLikelihoodIdle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadCommoner.CalculateLikelihood
// [0x00020002] 
struct ABioSquadCommoner_execCalculateLikelihood_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.OnSquadSeen
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayerDesignBase_eventOnSquadSeen_Parms
{
	class ABioBaseSquad*                               oSquad;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oLeader;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     oController;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.AreHostilesNearby
// [0x00020002] 
struct ABioSquadPlayerDesignBase_execAreHostilesNearby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oMemberPawn;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oEnemy;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.ClearMemberAttackCommand
// [0x00020002] 
struct ABioSquadPlayerDesignBase_execClearMemberAttackCommand_Parms
{
	class ABioPawn*                                    oMemberPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.ClearPerceptionFlag
// [0x00020002] 
struct ABioSquadPlayerDesignBase_execClearPerceptionFlag_Parms
{
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.SetPerceptionFlag
// [0x00020002] 
struct ABioSquadPlayerDesignBase_execSetPerceptionFlag_Parms
{
};

// Function SFXStrategicAI.BioSquadPlayer.Tick
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadLeader;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oMember;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.onPlayerEnterCover
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventonPlayerEnterCover_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.onMemberArrivedAtTarget
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventonMemberArrivedAtTarget_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nMemberIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioAiController*                         oMemberAI;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.LookForCover
// [0x00020002] 
struct ABioSquadPlayer_execLookForCover_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FCoverRecord                             oUseCover;                                        		// 0x000C (0x0014) [0x0000000000000000]              
	// class ABioAiController*                         oMemberAI;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             nMemberIndex;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// class APawn*                                    oFollow;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FVector                                  vTarget;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.OnSetSquadFollowFormation
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventOnSetSquadFollowFormation_Parms
{
	unsigned char                                      eFormation;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nChatterFlags;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.OnMemberShieldsDown
// [0x00020002] 
struct ABioSquadPlayer_execOnMemberShieldsDown_Parms
{
	class APawn*                                       oWho;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.MemberAdded
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventMemberAdded_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oMember;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.OnPlayerSwitchStance
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventOnPlayerSwitchStance_Parms
{
	unsigned char                                      FromState;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ToState;                                          		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadPlayer.OnSetAttackTarget
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventOnSetAttackTarget_Parms
{
	class APawn*                                       pPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oController;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oTargetPawn;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.OnCombatEnd
// [0x00020002] 
struct ABioSquadPlayer_execOnCombatEnd_Parms
{
};

// Function SFXStrategicAI.BioSquadPlayer.OnCombatBegin
// [0x00020002] 
struct ABioSquadPlayer_execOnCombatBegin_Parms
{
};

// Function SFXStrategicAI.BioSquadPlayer.OnDeath
// [0x00020002] 
struct ABioSquadPlayer_execOnDeath_Parms
{
	class APawn*                                       pPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 pKiller;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.onMemberAbilityEnabledEvent
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventonMemberAbilityEnabledEvent_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEnableType;                                      		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmSubType;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.HearNoise
// [0x00024802] ( FUNC_Event )
struct ABioSquadPlayer_eventHearNoise_Parms
{
	class APawn*                                       Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Loudness;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NoiseMaker;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vNoiseLocation;                                   		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NoiseType;                                        		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.SeePlayer
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventSeePlayer_Parms
{
	class APawn*                                       Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Seen;                                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oMember;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.OnDamaged
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventOnDamaged_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 oInstigator;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamage;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    oAttacker;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oController;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.OnCastAt
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventOnCastAt_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oAttacker;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmPower;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oController;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.OnAttacked
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventOnAttacked_Parms
{
	class APawn*                                       oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oAttacker;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmWeapon;                                         		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         oController;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.MemberActionComplete_Combat
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventMemberActionComplete_Combat_Parms
{
	class ABioPawn*                                    Who;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Action;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       nmTechnique;                                      		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nReason;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oLastTarget;                                      		// 0x001C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fReqStability;                                    		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAbortStability;                                  		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fReqRadius;                                       		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fLastTimeOut;                                     		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   eReason;                                          		// 0x0034 (0x0001) [0x0000000000000000]              
	// class ABioAiController*                         oMember;                                          		// 0x0038 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.Leader_Changed
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventLeader_Changed_Parms
{
	class APawn*                                       OldLeader;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       NewLeader;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXStrategicAI.BioSquadPlayer.Initialize
// [0x00020802] ( FUNC_Event )
struct ABioSquadPlayer_eventInitialize_Parms
{
};

// Function SFXStrategicAI.BioSquadPlayer.EvaluateTargets
// [0x00020002] 
struct ABioSquadPlayer_execEvaluateTargets_Parms
{
	class ABioPawn*                                    oMemberPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nMemberIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oTarget;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadPlayer.PickNewTarget
// [0x00020002] 
struct ABioSquadPlayer_execPickNewTarget_Parms
{
	class ABioPawn*                                    oMemberPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadPlayer.IsAttackTargetValid
// [0x00024002] 
struct ABioSquadPlayer_execIsAttackTargetValid_Parms
{
	class ABioPawn*                                    oMemberPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oAttackTarget;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTestShooting : 1;                                		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadPlayer.DoBestAction
// [0x00020002] 
struct ABioSquadPlayer_execDoBestAction_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oTarget;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned char                                   eAttackType;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	// class UBioCapability*                           oCap;                                             		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oHealTarget;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bHostilesNearby : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bDefend : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SFXStrategicAI.BioSquadProxMine.CalculateLikelihoodArmed
// [0x00020002] 
struct ABioSquadProxMine_execCalculateLikelihoodArmed_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadProxMine.SquadMemberBeginCasting
// [0x00020002] 
struct ABioSquadProxMine_execSquadMemberBeginCasting_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioCapability*                           oCap;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   eAttackType;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadProxMine.CalculateLikelihood
// [0x00020002] 
struct ABioSquadProxMine_execCalculateLikelihood_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihoodAttacking
// [0x00020002] 
struct ABioSquadSitAndShoot_execCalculateLikelihoodAttacking_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct TArray<class UBioCapability*>            aoSquadCaps;                                      		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct TArray<class UBioCapability*>            aoSquadAoECaps;                                   		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXStrategicAI.BioSquadSitAndShoot.SquadMemberAttackAnyTarget
// [0x00024002] 
struct ABioSquadSitAndShoot_execSquadMemberAttackAnyTarget_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oIgnore;                                          		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UBioCapability*                           oAttackCap;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned char                                   eAttackType;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	// float                                           fStabilityOffset;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fDistanceToRange;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oClosestTarget;                                   		// 0x002C (0x0008) [0x0000000000000000]              
	// class APawn*                                    oNewTarget;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadSitAndShoot.SquadMemberAttackTarget
// [0x00020002] 
struct ABioSquadSitAndShoot_execSquadMemberAttackTarget_Parms
{
	class ABioAiController*                            oMember;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       oTarget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioCapability*                           oAttackCap;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned char                                   eAttackType;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	// float                                           fDistanceToRange;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihoodIdle
// [0x00020002] 
struct ABioSquadSitAndShoot_execCalculateLikelihoodIdle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihood
// [0x00020002] 
struct ABioSquadSitAndShoot_execCalculateLikelihood_Parms
{
	struct FName                                       sStrategyName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif