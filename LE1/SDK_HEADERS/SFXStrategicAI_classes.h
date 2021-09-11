/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXStrategicAI_classes.h
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

#define CONST_ATTACKED_RECENTLY_TIMEOUT                          10.0
#define CONST_SNIPER_DISTANCE                                    4000
#define CONST_SNIPER_DISTANCE_SQ                                 16000000
#define CONST_CLOSE_COMBAT_DISTANCE                              1000
#define CONST_CLOSE_COMBAT_DISTANCE_SQ                           1000000
#define CONST_PROXIMITY_RESET_DELAY                              10.0
#define CONST_MAX_STABILITY_OFFSET                               0.10
#define CONST_FT_IDLE                                            0.5
#define CONST_FT_FLEE                                            0.5
#define CONST_FLEE_NOISE_LEVEL                                   0.5
#define CONST_FLEE_NAV_RANGE                                     1200
#define CONST_FLEE_DISTANCE                                      1000
#define CONST_FT_CASTING                                         0.1
#define CONST_FT_IDLE01                                          0.99
#define CONST_FT_SEARCH                                          0.99
#define CONST_FT_CHARGE                                          0.8
#define CONST_FT_SKIRMISH                                        0.6
#define CONST_FT_DEFEND                                          0.5
#define CONST_CHARGE_MAX_RANGE_SQ                                1000000.0
#define CONST_SKIRMISH_MAX_RANGE_SQ                              4000000.0
#define CONST_DEFEND_MIN_RANGE_SQ                                640000.0
#define CONST_CHARGE_NAV_RANGE                                   500.0
#define CONST_SKIRMISH_NAV_RANGE                                 1000.0
#define CONST_DEFEND_NAV_RANGE                                   1500.0
#define CONST_SEARCH_NAV_RANGE                                   1600.0
#define CONST_DEFAULT_NAV_RANGE                                  3000.0
#define CONST_LONG_NAV_RANGE                                     6000.0
#define CONST_CHARGE_COVER_RANGE                                 500.0
#define CONST_SKIRMISH_COVER_RANGE                               1000.0
#define CONST_DEFEND_COVER_RANGE                                 1500.0
#define CONST_CHARGE_STOP_RANGE                                  300.0
#define CONST_SKIRMISH_STOP_RANGE                                1200.0
#define CONST_DEFEND_STOP_RANGE                                  1600.0
#define CONST_DEFEND_FORCE_MOVE_CHANCE                           0.30
#define CONST_AI_MOVE_RANGE                                      800
#define CONST_CLOSE_COMBAT_DISTANCE01                            1000.0
#define CONST_FT_ARMED                                           0.1
#define CONST_FT_IDLE02                                          0.1
#define CONST_FT_ATTACKING                                       0.1

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXStrategicAI.BioBaseSquadDesign.eAgitationLevel
/*enum eAgitationLevel
{
	AS_Low                                             = 0,
	AS_Medium                                          = 1,
	AS_High                                            = 2,
	AS_MAX                                             = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXStrategicAI.BioAI_SarenHopper
// 0x0000 (0x0650 - 0x0650)
class ABioAI_SarenHopper : public ABioAI_Hopper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73967 ];

		return pClassPointer;
	};

	void eventOnDamaged ( class AController* oInstigator, float fDamage );
};

UClass* ABioAI_SarenHopper::pClassPointer = NULL;

// Class SFXStrategicAI.BioBaseSquadDesign
// 0x0055 (0x04FD - 0x04A8)
class ABioBaseSquadDesign : public ABioSquadAI
{
public:
	struct TArray<struct FWaypointRoute>               WaypointRoutes;                                   		// 0x04A8 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	struct TArray<struct FLockedPoint>                 m_aoAssignedPathnodes;                            		// 0x04B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       InitialStrategy;                                  		// 0x04C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FallBackStrategy;                                 		// 0x04D0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayReactionIdle;                                		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayLostSight;                                   		// 0x04DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayOrdersLoop;                                  		// 0x04E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SightMultiplier;                                  		// 0x04E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HearingMultiplier;                                		// 0x04E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fFlockingMinDistance;                           		// 0x04EC (0x0004) [0x0000000000000000]              
	float                                              m_fFlockingMaxDistance;                           		// 0x04F0 (0x0004) [0x0000000000000000]              
	float                                              m_fFlockingMaxSquadDistance;                      		// 0x04F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPerceptionScaled : 1;                          		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAttackedRecently : 1;                          		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      AgitationLevel;                                   		// 0x04FC (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73973 ];

		return pClassPointer;
	};

	void eventOnProximityAlarm ( class APawn* oMember, class AActor* oTarget, int nRelationship );
	void eventOnSquadSeen ( class ABioBaseSquad* oSquad );
	void eventOnDamaged ( class APawn* oMember, class AController* oInstigator, float fDamage );
	void eventOnCastAt ( class APawn* oMember, class APawn* oAttacker, struct FName nmPower );
	void eventOnAttacked ( class APawn* oMember, class APawn* oAttacker, struct FName nmWeapon );
	void eventOnDeath ( class APawn* oMember, class AController* oKiller );
	void SetHackedSquad ( );
	void eventSetInitialState ( );
	void eventOnActionComplete_Movement ( class APawn* oMember, struct FName nmAction, int nReason, class AActor* oTarget, struct FVector vLocation );
	void eventMemberAdded ( int nIndex );
	void eventMemberRemoved ( class APawn* oPawn );
	void RemovePerceptionMultipliers ( class ABioAiController* oMember, float fSightMult, float fHearingMult );
	void ApplyPerceptionMultipliers ( class ABioAiController* oMember, float fSightMult, float fHearingMult );
	void ResetAttackedRecently ( );
	void eventNoLongerSeePlayer ( class APawn* Who, class APawn* Seen );
	void eventSeePlayer ( class APawn* Who, class APawn* Seen );
	void eventOnFactionChanged ( class UClass* oOldFaction, class UClass* oNewFaction );
	unsigned char eventGetOrientationType ( );
	class UClass* eventGetRestFormation ( );
	void SquadWalkWaypoints ( );
	bool SquadMemberWalkWaypoints ( class ABioAiController* oMember );
	class ANavigationPoint* GetNavPointInPlaypen ( struct FVector vNear, struct FVector vLateralOffset, float fSearchRadius, float fVerticalOffset, unsigned long bCanFly, unsigned long bCanHop, unsigned long bSniper, unsigned long bAggressive, unsigned long bDefensive, class AActor* oLOSTarget, class ABioPawn* oIgnoreIfLockedBy );
	struct FVector GetFlockingOffset ( class ABioAiController* oMember );
	void SetFlockingRanges ( float FMin, float FMax, float fSquadMax );
	class ABioAiController* GetFurthestSquadMember ( struct FVector vTarget, struct TArray<class ABioAiController*> aoIgnoreMembers, float* fLongestDistToTargetSq );
	void ResetSquadProximity ( );
	void SetSquadProximityByAttackRange ( float fMultiplier );
	void SetSquadProximity ( float fDefault, float fCloseCombat, float fSniperCombat, float fSupport );
	void PushMoveWithLocking ( class ABioAiController* oMember, class AActor* oTarget, float fTolerance, unsigned long bWalking, float fMovementDelay, unsigned long bCrouch );
	bool SquadMemberTakeCover ( class ABioAiController* oMember, float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, unsigned long bNewCover, unsigned long bCrouchIfNoCover, float fMovementDelay, struct FVector vCoverLocation, unsigned long bUseDefNodeIfNoCover );
	bool IsAtDefenseNode ( class APawn* oTestPawn );
	void SquadTakeCover ( float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, unsigned long bNewCover, unsigned long bCrouchIfNoCover, float fDelayOrdersLoop, unsigned long bUseDefNodeIfNoCover );
	bool PushCoverWithLocking ( class ABioAiController* oMember, struct FVector vNear, class APawn* oTarget, class APawn* oAvoid, float fCoverRadius, float fMovementDelay );
	void GetCoverList ( class ABioAiController* oMember, class APawn* oTarget, class APawn* oAvoid, struct TArray<class APawn*>* aoCoverAgainst, struct TArray<int>* aoCoverValue );
	void UnlockAllPathnodes ( );
	void UnlockPathnodesByOwner ( class ABioPawn* oUnlockOwner );
	void UnlockPathnode ( class ANavigationPoint* oUnlockNode );
	void LockPathnode ( class ANavigationPoint* oLockNode, class ABioPawn* oLockOwner, int* nIndex );
	bool IsPathnodeLocked ( class ANavigationPoint* oTestNode, class ABioPawn* oIgnoreMember, int* nIndex );
	struct TArray<class ANavigationPoint*> GetLockedPathNodes ( class ABioPawn* oIgnoreMember );
	class ANavigationPoint* GetCurrentMovePoint ( class ABioPawn* oMemberPawn );
	void DropAgitationIfNoHostile ( unsigned char nNewLevel );
	void UpgradeAgitationIfHostile ( class APawn* oWho, class APawn* oPerceived, unsigned char nNewLevel );
	void SetFactionByType ( unsigned char nNewFaction );
	void ClearAllSquadActions ( unsigned long bClearQueue, unsigned long bClearState, unsigned long bUnlockTarget, unsigned long bLeaveCombat );
	float CalculateAllLikelihoods ( );
	float CalculateLikelihood ( struct FName sStrategyName );
	bool IsValidStrategy ( struct FName sStrategyName );
	struct TArray<struct FName> GetStrategyList ( );
	void ActivateAfterDelay ( float fDelay );
	void Activate ( );
	void Deactivate ( );
	void DoFallBackStrategy ( );
	bool ReEvaluateStrategy ( );
};

UClass* ABioBaseSquadDesign::pClassPointer = NULL;

// Class SFXStrategicAI.BioFaction_Commoner
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Commoner : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74030 ];

		return pClassPointer;
	};

};

UClass* UBioFaction_Commoner::pClassPointer = NULL;

// Class SFXStrategicAI.BioFaction_Ambient
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Ambient : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74031 ];

		return pClassPointer;
	};

};

UClass* UBioFaction_Ambient::pClassPointer = NULL;

// Class SFXStrategicAI.BioFaction_Defender1
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Defender1 : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74032 ];

		return pClassPointer;
	};

};

UClass* UBioFaction_Defender1::pClassPointer = NULL;

// Class SFXStrategicAI.BioFaction_Defender2
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Defender2 : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74033 ];

		return pClassPointer;
	};

};

UClass* UBioFaction_Defender2::pClassPointer = NULL;

// Class SFXStrategicAI.BioFaction_Hostile1
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Hostile1 : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74034 ];

		return pClassPointer;
	};

};

UClass* UBioFaction_Hostile1::pClassPointer = NULL;

// Class SFXStrategicAI.BioFaction_Hostile2
// 0x0003 (0x0080 - 0x007D)
class UBioFaction_Hostile2 : public UBioFaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74035 ];

		return pClassPointer;
	};

};

UClass* UBioFaction_Hostile2::pClassPointer = NULL;

// Class SFXStrategicAI.BioBaseSquadDesignCombat
// 0x0014 (0x0511 - 0x04FD)
class ABioBaseSquadDesignCombat : public ABioBaseSquadDesign
{
public:
	class UClass*                                      CombatRestFormations;                             		// 0x0500 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayReactionCombat;                              		// 0x0508 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelaySwitchTarget;                                		// 0x050C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CombatRestOrientation;                            		// 0x0510 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74324 ];

		return pClassPointer;
	};

	void eventOnActionComplete_Combat ( class APawn* oMember, struct FName nmAction, struct FName nmTechnique, int nReason, class AActor* oLastTarget );
	void eventOnActionComplete_Movement ( class APawn* oMember, struct FName nmAction, int nReason, class AActor* oTarget, struct FVector vLocation );
	bool UseAttackCapability ( class ABioAiController* oMember, class APawn* oTarget, class UBioCapability* oCap, unsigned char eAttackType, float fStabilityOffset, class AActor* oMoveDest, float fMovementDelay );
	class APawn* FindDangerousEnemy ( class ABioAiController* oMember, class APawn* oIgnore );
	class APawn* GetClosestPerceivedTarget ( class ABioAiController* oMember, class APawn* oIgnoreTarget );
	float GetDistanceToNearestHostile ( unsigned long bSquareDist, class ABioAiController** oNearestMember, class APawn** oNearestTarget );
	unsigned char eventGetOrientationType ( );
	class UClass* eventGetRestFormation ( );
	void eventOnCastAt ( class APawn* oMember, class APawn* oAttacker, struct FName nmPower );
	void eventOnAttacked ( class APawn* oMember, class APawn* oAttacker, struct FName nmWeapon );
	void eventHearNoise ( class APawn* Who, float Loudness, class AActor* NoiseMaker, struct FVector vNoiseLocation, struct FName NoiseType );
	void eventNoLongerSeePlayer ( class APawn* Who, class APawn* Seen );
	void eventSeePlayer ( class APawn* Who, class APawn* Seen );
	void eventSeenSquad ( class ABioBaseSquad* oSquad );
};

UClass* ABioBaseSquadDesignCombat::pClassPointer = NULL;

// Class SFXStrategicAI.BioFaction_CommonerPhysics
// 0x0000 (0x0080 - 0x0080)
class UBioFaction_CommonerPhysics : public UBioFaction_Commoner
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74423 ];

		return pClassPointer;
	};

};

UClass* UBioFaction_CommonerPhysics::pClassPointer = NULL;

// Class SFXStrategicAI.BioForm_ScoutSwarm
// 0x0000 (0x0078 - 0x0078)
class UBioForm_ScoutSwarm : public UBioFormations
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74432 ];

		return pClassPointer;
	};

};

UClass* UBioForm_ScoutSwarm::pClassPointer = NULL;

// Class SFXStrategicAI.BioSeqAct_GetPropertyDesignSquad
// 0x0000 (0x0158 - 0x0158)
class UBioSeqAct_GetPropertyDesignSquad : public UBioSeqAct_GetProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74434 ];

		return pClassPointer;
	};

};

UClass* UBioSeqAct_GetPropertyDesignSquad::pClassPointer = NULL;

// Class SFXStrategicAI.BioSeqAct_ModifyPropertyDesignSquad
// 0x0000 (0x0158 - 0x0158)
class UBioSeqAct_ModifyPropertyDesignSquad : public UBioSeqAct_ModifyPropertyBaseSquad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74436 ];

		return pClassPointer;
	};

};

UClass* UBioSeqAct_ModifyPropertyDesignSquad::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadAmbient
// 0x001F (0x051C - 0x04FD)
class ABioSquadAmbient : public ABioBaseSquadDesign
{
public:
	class AActor*                                      m_oAvoid;                                         		// 0x0500 (0x0008) [0x0000000000000000]              
	float                                              FleeTimeout;                                      		// 0x0508 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlockingMinDistance;                              		// 0x050C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlockingMaxDistance;                              		// 0x0510 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlockingMaxSquadDistance;                         		// 0x0514 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bShouldFlee : 1;                                		// 0x0518 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74438 ];

		return pClassPointer;
	};

	float CalculateLikelihoodFlee ( );
	float CalculateLikelihoodIdle ( );
	float CalculateLikelihood ( struct FName sStrategyName );
};

UClass* ABioSquadAmbient::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadBeacon
// 0x0003 (0x0514 - 0x0511)
class ABioSquadBeacon : public ABioBaseSquadDesignCombat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74583 ];

		return pClassPointer;
	};

	float CalculateLikelihoodCasting ( );
	void SquadMemberBeginCasting ( class ABioAiController* oMember );
	float CalculateLikelihood ( struct FName sStrategyName );
};

UClass* ABioSquadBeacon::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadCombat
// 0x0053 (0x0564 - 0x0511)
class ABioSquadCombat : public ABioBaseSquadDesignCombat
{
public:
	struct FVector                                     m_vSearchLocation;                                		// 0x0514 (0x000C) [0x0000000000000000]              
	class APawn*                                       m_oDefendAvoid;                                   		// 0x0520 (0x0008) [0x0000000000000000]              
	float                                              SearchMaxRadius;                                  		// 0x0528 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SearchPercentToSend;                              		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SearchTimeout;                                    		// 0x0530 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fSearchStartRadius;                             		// 0x0534 (0x0004) [0x0000000000000000]              
	float                                              m_fSearchStopRadius;                              		// 0x0538 (0x0004) [0x0000000000000000]              
	float                                              ChargeMinDist;                                    		// 0x053C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeMaxDist;                                    		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChargeSquadMaxDist;                               		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SkirmishMinDist;                                  		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SkirmishMaxDist;                                  		// 0x054C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SkirmishSquadMaxDist;                             		// 0x0550 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefendMinDist;                                    		// 0x0554 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefendMaxDist;                                    		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefendSquadMaxDist;                               		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bSearchEnabled : 1;                             		// 0x0560 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74621 ];

		return pClassPointer;
	};

	float CalculateLikelihoodDefend ( );
	float CalculateLikelihoodSkirmish ( );
	float CalculateLikelihoodCharge ( );
	float CalculateLikelihoodSearch ( );
	float CalculateLikelihoodIdle ( );
	float CalculateLikelihood ( struct FName sStrategyName );
};

UClass* ABioSquadCombat::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadCommoner
// 0x0003 (0x0500 - 0x04FD)
class ABioSquadCommoner : public ABioBaseSquadDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75139 ];

		return pClassPointer;
	};

	float CalculateLikelihoodIdle ( );
	float CalculateLikelihood ( struct FName sStrategyName );
};

UClass* ABioSquadCommoner::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadPlayerDesignBase
// 0x000A (0x0608 - 0x05FE)
class ABioSquadPlayerDesignBase : public ABioPlayerSquad
{
public:
	float                                              m_fPerceivedRecentlyClearTime;                    		// 0x0600 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPerceivedEnemyRecently : 1;                    		// 0x0604 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75162 ];

		return pClassPointer;
	};

	void eventOnSquadSeen ( class ABioBaseSquad* oSquad );
	bool AreHostilesNearby ( );
	void ClearMemberAttackCommand ( class ABioPawn* oMemberPawn );
	void ClearPerceptionFlag ( );
	void SetPerceptionFlag ( );
};

UClass* ABioSquadPlayerDesignBase::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadPlayer
// 0x0004 (0x060C - 0x0608)
class ABioSquadPlayer : public ABioSquadPlayerDesignBase
{
public:
	float                                              m_fSquadTickTimer;                                		// 0x0608 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75185 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void eventonPlayerEnterCover ( );
	void eventonMemberArrivedAtTarget ( class APawn* oMember );
	bool LookForCover ( class APawn* oMember );
	void eventOnSetSquadFollowFormation ( unsigned char eFormation );
	void OnMemberShieldsDown ( class APawn* oWho );
	void eventMemberAdded ( int nIndex );
	bool eventOnPlayerSwitchStance ( unsigned char FromState, unsigned char ToState );
	void eventOnSetAttackTarget ( class APawn* pPawn, class AActor* Target );
	void OnCombatEnd ( );
	void OnCombatBegin ( );
	void OnDeath ( class APawn* pPawn, class AController* pKiller );
	void eventonMemberAbilityEnabledEvent ( class APawn* oPawn, unsigned char eEnableType, struct FName nmSubType );
	void eventHearNoise ( class APawn* Who, float Loudness, class AActor* NoiseMaker, struct FVector vNoiseLocation, struct FName NoiseType );
	void eventSeePlayer ( class APawn* Who, class APawn* Seen );
	void eventOnDamaged ( class APawn* oMember, class AController* oInstigator, float fDamage );
	void eventOnCastAt ( class APawn* oMember, class APawn* oAttacker, struct FName nmPower );
	void eventOnAttacked ( class APawn* oMember, class APawn* oAttacker, struct FName nmWeapon );
	void eventMemberActionComplete_Combat ( class ABioPawn* Who, struct FName Action, struct FName nmTechnique, int nReason, class AActor* oLastTarget, float fReqStability, float fAbortStability, float fReqRadius, float fLastTimeOut );
	void eventLeader_Changed ( class APawn* OldLeader, class APawn* NewLeader );
	void eventInitialize ( );
	class ABioPawn* EvaluateTargets ( class ABioPawn* oMemberPawn );
	class ABioPawn* PickNewTarget ( class ABioPawn* oMemberPawn );
	bool IsAttackTargetValid ( class ABioPawn* oMemberPawn, class ABioPawn* oAttackTarget, unsigned long bTestShooting );
	void DoBestAction ( class ABioAiController* oMember );
};

UClass* ABioSquadPlayer::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadProxMine
// 0x0003 (0x0514 - 0x0511)
class ABioSquadProxMine : public ABioBaseSquadDesignCombat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75311 ];

		return pClassPointer;
	};

	float CalculateLikelihoodArmed ( );
	void SquadMemberBeginCasting ( class ABioAiController* oMember );
	float CalculateLikelihood ( struct FName sStrategyName );
};

UClass* ABioSquadProxMine::pClassPointer = NULL;

// Class SFXStrategicAI.BioSquadSitAndShoot
// 0x0003 (0x0514 - 0x0511)
class ABioSquadSitAndShoot : public ABioBaseSquadDesignCombat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75350 ];

		return pClassPointer;
	};

	float CalculateLikelihoodAttacking ( );
	void SquadMemberAttackAnyTarget ( class ABioAiController* oMember, class APawn* oIgnore );
	void SquadMemberAttackTarget ( class ABioAiController* oMember, class APawn* oTarget );
	float CalculateLikelihoodIdle ( );
	float CalculateLikelihood ( struct FName sStrategyName );
};

UClass* ABioSquadSitAndShoot::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif