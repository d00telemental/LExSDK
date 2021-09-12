/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXStrategicAI_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "../SdkHeaders.h"



#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* ABioAI_SarenHopper::pClassPointer = NULL;

class UClass* ABioAI_SarenHopper::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioAI_SarenHopper" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioAI_SarenHopper.OnDamaged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AController*             oInstigator                    ( CPF_Parm )
// float                          fDamage                        ( CPF_Parm )

void ABioAI_SarenHopper::eventOnDamaged ( class AController* oInstigator, float fDamage )
{
	static UFunction* pFnOnDamaged = NULL;

	if ( ! pFnOnDamaged )
		pFnOnDamaged = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioAI_SarenHopper.OnDamaged" );

	ABioAI_SarenHopper_eventOnDamaged_Parms OnDamaged_Parms;
	OnDamaged_Parms.oInstigator = oInstigator;
	OnDamaged_Parms.fDamage = fDamage;

	this->ProcessEvent ( pFnOnDamaged, &OnDamaged_Parms, NULL );
};



class UClass* ABioBaseSquadDesign::pClassPointer = NULL;

class UClass* ABioBaseSquadDesign::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioBaseSquadDesign" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioBaseSquadDesign.OnProximityAlarm
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class AActor*                  oTarget                        ( CPF_Parm )
// int                            nRelationship                  ( CPF_Parm )

void ABioBaseSquadDesign::eventOnProximityAlarm ( class APawn* oMember, class AActor* oTarget, int nRelationship )
{
	static UFunction* pFnOnProximityAlarm = NULL;

	if ( ! pFnOnProximityAlarm )
		pFnOnProximityAlarm = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnProximityAlarm" );

	ABioBaseSquadDesign_eventOnProximityAlarm_Parms OnProximityAlarm_Parms;
	OnProximityAlarm_Parms.oMember = oMember;
	OnProximityAlarm_Parms.oTarget = oTarget;
	OnProximityAlarm_Parms.nRelationship = nRelationship;

	this->ProcessEvent ( pFnOnProximityAlarm, &OnProximityAlarm_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnSquadSeen
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class ABioBaseSquad*           oSquad                         ( CPF_Parm )

void ABioBaseSquadDesign::eventOnSquadSeen ( class ABioBaseSquad* oSquad )
{
	static UFunction* pFnOnSquadSeen = NULL;

	if ( ! pFnOnSquadSeen )
		pFnOnSquadSeen = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnSquadSeen" );

	ABioBaseSquadDesign_eventOnSquadSeen_Parms OnSquadSeen_Parms;
	OnSquadSeen_Parms.oSquad = oSquad;

	this->ProcessEvent ( pFnOnSquadSeen, &OnSquadSeen_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnDamaged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class AController*             oInstigator                    ( CPF_Parm )
// float                          fDamage                        ( CPF_Parm )

void ABioBaseSquadDesign::eventOnDamaged ( class APawn* oMember, class AController* oInstigator, float fDamage )
{
	static UFunction* pFnOnDamaged = NULL;

	if ( ! pFnOnDamaged )
		pFnOnDamaged = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnDamaged" );

	ABioBaseSquadDesign_eventOnDamaged_Parms OnDamaged_Parms;
	OnDamaged_Parms.oMember = oMember;
	OnDamaged_Parms.oInstigator = oInstigator;
	OnDamaged_Parms.fDamage = fDamage;

	this->ProcessEvent ( pFnOnDamaged, &OnDamaged_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnCastAt
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class APawn*                   oAttacker                      ( CPF_Parm )
// struct FName                   nmPower                        ( CPF_Parm )

void ABioBaseSquadDesign::eventOnCastAt ( class APawn* oMember, class APawn* oAttacker, struct FName nmPower )
{
	static UFunction* pFnOnCastAt = NULL;

	if ( ! pFnOnCastAt )
		pFnOnCastAt = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnCastAt" );

	ABioBaseSquadDesign_eventOnCastAt_Parms OnCastAt_Parms;
	OnCastAt_Parms.oMember = oMember;
	OnCastAt_Parms.oAttacker = oAttacker;
	memcpy ( &OnCastAt_Parms.nmPower, &nmPower, 0x8 );

	this->ProcessEvent ( pFnOnCastAt, &OnCastAt_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnAttacked
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class APawn*                   oAttacker                      ( CPF_Parm )
// struct FName                   nmWeapon                       ( CPF_Parm )

void ABioBaseSquadDesign::eventOnAttacked ( class APawn* oMember, class APawn* oAttacker, struct FName nmWeapon )
{
	static UFunction* pFnOnAttacked = NULL;

	if ( ! pFnOnAttacked )
		pFnOnAttacked = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnAttacked" );

	ABioBaseSquadDesign_eventOnAttacked_Parms OnAttacked_Parms;
	OnAttacked_Parms.oMember = oMember;
	OnAttacked_Parms.oAttacker = oAttacker;
	memcpy ( &OnAttacked_Parms.nmWeapon, &nmWeapon, 0x8 );

	this->ProcessEvent ( pFnOnAttacked, &OnAttacked_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnDeath
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class AController*             oKiller                        ( CPF_Parm )

void ABioBaseSquadDesign::eventOnDeath ( class APawn* oMember, class AController* oKiller )
{
	static UFunction* pFnOnDeath = NULL;

	if ( ! pFnOnDeath )
		pFnOnDeath = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnDeath" );

	ABioBaseSquadDesign_eventOnDeath_Parms OnDeath_Parms;
	OnDeath_Parms.oMember = oMember;
	OnDeath_Parms.oKiller = oKiller;

	this->ProcessEvent ( pFnOnDeath, &OnDeath_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetHackedSquad
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::SetHackedSquad ( )
{
	static UFunction* pFnSetHackedSquad = NULL;

	if ( ! pFnSetHackedSquad )
		pFnSetHackedSquad = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SetHackedSquad" );

	ABioBaseSquadDesign_execSetHackedSquad_Parms SetHackedSquad_Parms;

	this->ProcessEvent ( pFnSetHackedSquad, &SetHackedSquad_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ABioBaseSquadDesign::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SetInitialState" );

	ABioBaseSquadDesign_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnActionComplete_Movement
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// struct FName                   nmAction                       ( CPF_Parm )
// int                            nReason                        ( CPF_Parm )
// class AActor*                  oTarget                        ( CPF_Parm )
// struct FVector                 vLocation                      ( CPF_Parm )

void ABioBaseSquadDesign::eventOnActionComplete_Movement ( class APawn* oMember, struct FName nmAction, int nReason, class AActor* oTarget, struct FVector vLocation )
{
	static UFunction* pFnOnActionComplete_Movement = NULL;

	if ( ! pFnOnActionComplete_Movement )
		pFnOnActionComplete_Movement = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnActionComplete_Movement" );

	ABioBaseSquadDesign_eventOnActionComplete_Movement_Parms OnActionComplete_Movement_Parms;
	OnActionComplete_Movement_Parms.oMember = oMember;
	memcpy ( &OnActionComplete_Movement_Parms.nmAction, &nmAction, 0x8 );
	OnActionComplete_Movement_Parms.nReason = nReason;
	OnActionComplete_Movement_Parms.oTarget = oTarget;
	memcpy ( &OnActionComplete_Movement_Parms.vLocation, &vLocation, 0xC );

	this->ProcessEvent ( pFnOnActionComplete_Movement, &OnActionComplete_Movement_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.MemberAdded
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void ABioBaseSquadDesign::eventMemberAdded ( int nIndex )
{
	static UFunction* pFnMemberAdded = NULL;

	if ( ! pFnMemberAdded )
		pFnMemberAdded = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.MemberAdded" );

	ABioBaseSquadDesign_eventMemberAdded_Parms MemberAdded_Parms;
	MemberAdded_Parms.nIndex = nIndex;

	this->ProcessEvent ( pFnMemberAdded, &MemberAdded_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.MemberRemoved
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )

void ABioBaseSquadDesign::eventMemberRemoved ( class APawn* oPawn )
{
	static UFunction* pFnMemberRemoved = NULL;

	if ( ! pFnMemberRemoved )
		pFnMemberRemoved = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.MemberRemoved" );

	ABioBaseSquadDesign_eventMemberRemoved_Parms MemberRemoved_Parms;
	MemberRemoved_Parms.oPawn = oPawn;

	this->ProcessEvent ( pFnMemberRemoved, &MemberRemoved_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.RemovePerceptionMultipliers
// [0x00020002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )
// float                          fSightMult                     ( CPF_Parm )
// float                          fHearingMult                   ( CPF_Parm )

void ABioBaseSquadDesign::RemovePerceptionMultipliers ( class ABioAiController* oMember, float fSightMult, float fHearingMult )
{
	static UFunction* pFnRemovePerceptionMultipliers = NULL;

	if ( ! pFnRemovePerceptionMultipliers )
		pFnRemovePerceptionMultipliers = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.RemovePerceptionMultipliers" );

	ABioBaseSquadDesign_execRemovePerceptionMultipliers_Parms RemovePerceptionMultipliers_Parms;
	RemovePerceptionMultipliers_Parms.oMember = oMember;
	RemovePerceptionMultipliers_Parms.fSightMult = fSightMult;
	RemovePerceptionMultipliers_Parms.fHearingMult = fHearingMult;

	this->ProcessEvent ( pFnRemovePerceptionMultipliers, &RemovePerceptionMultipliers_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.ApplyPerceptionMultipliers
// [0x00020002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )
// float                          fSightMult                     ( CPF_Parm )
// float                          fHearingMult                   ( CPF_Parm )

void ABioBaseSquadDesign::ApplyPerceptionMultipliers ( class ABioAiController* oMember, float fSightMult, float fHearingMult )
{
	static UFunction* pFnApplyPerceptionMultipliers = NULL;

	if ( ! pFnApplyPerceptionMultipliers )
		pFnApplyPerceptionMultipliers = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.ApplyPerceptionMultipliers" );

	ABioBaseSquadDesign_execApplyPerceptionMultipliers_Parms ApplyPerceptionMultipliers_Parms;
	ApplyPerceptionMultipliers_Parms.oMember = oMember;
	ApplyPerceptionMultipliers_Parms.fSightMult = fSightMult;
	ApplyPerceptionMultipliers_Parms.fHearingMult = fHearingMult;

	this->ProcessEvent ( pFnApplyPerceptionMultipliers, &ApplyPerceptionMultipliers_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.ResetAttackedRecently
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::ResetAttackedRecently ( )
{
	static UFunction* pFnResetAttackedRecently = NULL;

	if ( ! pFnResetAttackedRecently )
		pFnResetAttackedRecently = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.ResetAttackedRecently" );

	ABioBaseSquadDesign_execResetAttackedRecently_Parms ResetAttackedRecently_Parms;

	this->ProcessEvent ( pFnResetAttackedRecently, &ResetAttackedRecently_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.NoLongerSeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   Who                            ( CPF_Parm )
// class APawn*                   Seen                           ( CPF_Parm )

void ABioBaseSquadDesign::eventNoLongerSeePlayer ( class APawn* Who, class APawn* Seen )
{
	static UFunction* pFnNoLongerSeePlayer = NULL;

	if ( ! pFnNoLongerSeePlayer )
		pFnNoLongerSeePlayer = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.NoLongerSeePlayer" );

	ABioBaseSquadDesign_eventNoLongerSeePlayer_Parms NoLongerSeePlayer_Parms;
	NoLongerSeePlayer_Parms.Who = Who;
	NoLongerSeePlayer_Parms.Seen = Seen;

	this->ProcessEvent ( pFnNoLongerSeePlayer, &NoLongerSeePlayer_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   Who                            ( CPF_Parm )
// class APawn*                   Seen                           ( CPF_Parm )

void ABioBaseSquadDesign::eventSeePlayer ( class APawn* Who, class APawn* Seen )
{
	static UFunction* pFnSeePlayer = NULL;

	if ( ! pFnSeePlayer )
		pFnSeePlayer = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SeePlayer" );

	ABioBaseSquadDesign_eventSeePlayer_Parms SeePlayer_Parms;
	SeePlayer_Parms.Who = Who;
	SeePlayer_Parms.Seen = Seen;

	this->ProcessEvent ( pFnSeePlayer, &SeePlayer_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.OnFactionChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UClass*                  oOldFaction                    ( CPF_Parm )
// class UClass*                  oNewFaction                    ( CPF_Parm )

void ABioBaseSquadDesign::eventOnFactionChanged ( class UClass* oOldFaction, class UClass* oNewFaction )
{
	static UFunction* pFnOnFactionChanged = NULL;

	if ( ! pFnOnFactionChanged )
		pFnOnFactionChanged = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.OnFactionChanged" );

	ABioBaseSquadDesign_eventOnFactionChanged_Parms OnFactionChanged_Parms;
	OnFactionChanged_Parms.oOldFaction = oOldFaction;
	OnFactionChanged_Parms.oNewFaction = oNewFaction;

	this->ProcessEvent ( pFnOnFactionChanged, &OnFactionChanged_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetOrientationType
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ABioBaseSquadDesign::eventGetOrientationType ( )
{
	static UFunction* pFnGetOrientationType = NULL;

	if ( ! pFnGetOrientationType )
		pFnGetOrientationType = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetOrientationType" );

	ABioBaseSquadDesign_eventGetOrientationType_Parms GetOrientationType_Parms;

	this->ProcessEvent ( pFnGetOrientationType, &GetOrientationType_Parms, NULL );

	return GetOrientationType_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetRestFormation
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ABioBaseSquadDesign::eventGetRestFormation ( )
{
	static UFunction* pFnGetRestFormation = NULL;

	if ( ! pFnGetRestFormation )
		pFnGetRestFormation = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetRestFormation" );

	ABioBaseSquadDesign_eventGetRestFormation_Parms GetRestFormation_Parms;

	this->ProcessEvent ( pFnGetRestFormation, &GetRestFormation_Parms, NULL );

	return GetRestFormation_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadWalkWaypoints
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::SquadWalkWaypoints ( )
{
	static UFunction* pFnSquadWalkWaypoints = NULL;

	if ( ! pFnSquadWalkWaypoints )
		pFnSquadWalkWaypoints = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SquadWalkWaypoints" );

	ABioBaseSquadDesign_execSquadWalkWaypoints_Parms SquadWalkWaypoints_Parms;

	this->ProcessEvent ( pFnSquadWalkWaypoints, &SquadWalkWaypoints_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadMemberWalkWaypoints
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioAiController*        oMember                        ( CPF_Parm )

bool ABioBaseSquadDesign::SquadMemberWalkWaypoints ( class ABioAiController* oMember )
{
	static UFunction* pFnSquadMemberWalkWaypoints = NULL;

	if ( ! pFnSquadMemberWalkWaypoints )
		pFnSquadMemberWalkWaypoints = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SquadMemberWalkWaypoints" );

	ABioBaseSquadDesign_execSquadMemberWalkWaypoints_Parms SquadMemberWalkWaypoints_Parms;
	SquadMemberWalkWaypoints_Parms.oMember = oMember;

	this->ProcessEvent ( pFnSquadMemberWalkWaypoints, &SquadMemberWalkWaypoints_Parms, NULL );

	return SquadMemberWalkWaypoints_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetNavPointInPlaypen
// [0x00024002] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 vNear                          ( CPF_Parm )
// struct FVector                 vLateralOffset                 ( CPF_Parm )
// float                          fSearchRadius                  ( CPF_Parm )
// float                          fVerticalOffset                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCanFly                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCanHop                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bSniper                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAggressive                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDefensive                     ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  oLOSTarget                     ( CPF_OptionalParm | CPF_Parm )
// class ABioPawn*                oIgnoreIfLockedBy              ( CPF_OptionalParm | CPF_Parm )

class ANavigationPoint* ABioBaseSquadDesign::GetNavPointInPlaypen ( struct FVector vNear, struct FVector vLateralOffset, float fSearchRadius, float fVerticalOffset, unsigned long bCanFly, unsigned long bCanHop, unsigned long bSniper, unsigned long bAggressive, unsigned long bDefensive, class AActor* oLOSTarget, class ABioPawn* oIgnoreIfLockedBy )
{
	static UFunction* pFnGetNavPointInPlaypen = NULL;

	if ( ! pFnGetNavPointInPlaypen )
		pFnGetNavPointInPlaypen = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetNavPointInPlaypen" );

	ABioBaseSquadDesign_execGetNavPointInPlaypen_Parms GetNavPointInPlaypen_Parms;
	memcpy ( &GetNavPointInPlaypen_Parms.vNear, &vNear, 0xC );
	memcpy ( &GetNavPointInPlaypen_Parms.vLateralOffset, &vLateralOffset, 0xC );
	GetNavPointInPlaypen_Parms.fSearchRadius = fSearchRadius;
	GetNavPointInPlaypen_Parms.fVerticalOffset = fVerticalOffset;
	GetNavPointInPlaypen_Parms.bCanFly = bCanFly;
	GetNavPointInPlaypen_Parms.bCanHop = bCanHop;
	GetNavPointInPlaypen_Parms.bSniper = bSniper;
	GetNavPointInPlaypen_Parms.bAggressive = bAggressive;
	GetNavPointInPlaypen_Parms.bDefensive = bDefensive;
	GetNavPointInPlaypen_Parms.oLOSTarget = oLOSTarget;
	GetNavPointInPlaypen_Parms.oIgnoreIfLockedBy = oIgnoreIfLockedBy;

	this->ProcessEvent ( pFnGetNavPointInPlaypen, &GetNavPointInPlaypen_Parms, NULL );

	return GetNavPointInPlaypen_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetFlockingOffset
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioAiController*        oMember                        ( CPF_Parm )

struct FVector ABioBaseSquadDesign::GetFlockingOffset ( class ABioAiController* oMember )
{
	static UFunction* pFnGetFlockingOffset = NULL;

	if ( ! pFnGetFlockingOffset )
		pFnGetFlockingOffset = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetFlockingOffset" );

	ABioBaseSquadDesign_execGetFlockingOffset_Parms GetFlockingOffset_Parms;
	GetFlockingOffset_Parms.oMember = oMember;

	this->ProcessEvent ( pFnGetFlockingOffset, &GetFlockingOffset_Parms, NULL );

	return GetFlockingOffset_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetFlockingRanges
// [0x00020002] 
// Parameters infos:
// float                          FMin                           ( CPF_Parm )
// float                          FMax                           ( CPF_Parm )
// float                          fSquadMax                      ( CPF_Parm )

void ABioBaseSquadDesign::SetFlockingRanges ( float FMin, float FMax, float fSquadMax )
{
	static UFunction* pFnSetFlockingRanges = NULL;

	if ( ! pFnSetFlockingRanges )
		pFnSetFlockingRanges = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SetFlockingRanges" );

	ABioBaseSquadDesign_execSetFlockingRanges_Parms SetFlockingRanges_Parms;
	SetFlockingRanges_Parms.FMin = FMin;
	SetFlockingRanges_Parms.FMax = FMax;
	SetFlockingRanges_Parms.fSquadMax = fSquadMax;

	this->ProcessEvent ( pFnSetFlockingRanges, &SetFlockingRanges_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetFurthestSquadMember
// [0x00424002] 
// Parameters infos:
// class ABioAiController*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 vTarget                        ( CPF_Parm )
// struct TArray<class ABioAiController*> aoIgnoreMembers                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// float                          fLongestDistToTargetSq         ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

class ABioAiController* ABioBaseSquadDesign::GetFurthestSquadMember ( struct FVector vTarget, struct TArray<class ABioAiController*> aoIgnoreMembers, float* fLongestDistToTargetSq )
{
	static UFunction* pFnGetFurthestSquadMember = NULL;

	if ( ! pFnGetFurthestSquadMember )
		pFnGetFurthestSquadMember = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetFurthestSquadMember" );

	ABioBaseSquadDesign_execGetFurthestSquadMember_Parms GetFurthestSquadMember_Parms;
	memcpy ( &GetFurthestSquadMember_Parms.vTarget, &vTarget, 0xC );
	memcpy ( &GetFurthestSquadMember_Parms.aoIgnoreMembers, &aoIgnoreMembers, 0x10 );

	this->ProcessEvent ( pFnGetFurthestSquadMember, &GetFurthestSquadMember_Parms, NULL );

	if ( fLongestDistToTargetSq )
		*fLongestDistToTargetSq = GetFurthestSquadMember_Parms.fLongestDistToTargetSq;

	return GetFurthestSquadMember_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.ResetSquadProximity
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::ResetSquadProximity ( )
{
	static UFunction* pFnResetSquadProximity = NULL;

	if ( ! pFnResetSquadProximity )
		pFnResetSquadProximity = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.ResetSquadProximity" );

	ABioBaseSquadDesign_execResetSquadProximity_Parms ResetSquadProximity_Parms;

	this->ProcessEvent ( pFnResetSquadProximity, &ResetSquadProximity_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetSquadProximityByAttackRange
// [0x00024002] 
// Parameters infos:
// float                          fMultiplier                    ( CPF_OptionalParm | CPF_Parm )

void ABioBaseSquadDesign::SetSquadProximityByAttackRange ( float fMultiplier )
{
	static UFunction* pFnSetSquadProximityByAttackRange = NULL;

	if ( ! pFnSetSquadProximityByAttackRange )
		pFnSetSquadProximityByAttackRange = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SetSquadProximityByAttackRange" );

	ABioBaseSquadDesign_execSetSquadProximityByAttackRange_Parms SetSquadProximityByAttackRange_Parms;
	SetSquadProximityByAttackRange_Parms.fMultiplier = fMultiplier;

	this->ProcessEvent ( pFnSetSquadProximityByAttackRange, &SetSquadProximityByAttackRange_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetSquadProximity
// [0x00024002] 
// Parameters infos:
// float                          fDefault                       ( CPF_OptionalParm | CPF_Parm )
// float                          fCloseCombat                   ( CPF_OptionalParm | CPF_Parm )
// float                          fSniperCombat                  ( CPF_OptionalParm | CPF_Parm )
// float                          fSupport                       ( CPF_OptionalParm | CPF_Parm )

void ABioBaseSquadDesign::SetSquadProximity ( float fDefault, float fCloseCombat, float fSniperCombat, float fSupport )
{
	static UFunction* pFnSetSquadProximity = NULL;

	if ( ! pFnSetSquadProximity )
		pFnSetSquadProximity = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SetSquadProximity" );

	ABioBaseSquadDesign_execSetSquadProximity_Parms SetSquadProximity_Parms;
	SetSquadProximity_Parms.fDefault = fDefault;
	SetSquadProximity_Parms.fCloseCombat = fCloseCombat;
	SetSquadProximity_Parms.fSniperCombat = fSniperCombat;
	SetSquadProximity_Parms.fSupport = fSupport;

	this->ProcessEvent ( pFnSetSquadProximity, &SetSquadProximity_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.PushMoveWithLocking
// [0x00024002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )
// class AActor*                  oTarget                        ( CPF_Parm )
// float                          fTolerance                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bWalking                       ( CPF_OptionalParm | CPF_Parm )
// float                          fMovementDelay                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCrouch                        ( CPF_OptionalParm | CPF_Parm )

void ABioBaseSquadDesign::PushMoveWithLocking ( class ABioAiController* oMember, class AActor* oTarget, float fTolerance, unsigned long bWalking, float fMovementDelay, unsigned long bCrouch )
{
	static UFunction* pFnPushMoveWithLocking = NULL;

	if ( ! pFnPushMoveWithLocking )
		pFnPushMoveWithLocking = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.PushMoveWithLocking" );

	ABioBaseSquadDesign_execPushMoveWithLocking_Parms PushMoveWithLocking_Parms;
	PushMoveWithLocking_Parms.oMember = oMember;
	PushMoveWithLocking_Parms.oTarget = oTarget;
	PushMoveWithLocking_Parms.fTolerance = fTolerance;
	PushMoveWithLocking_Parms.bWalking = bWalking;
	PushMoveWithLocking_Parms.fMovementDelay = fMovementDelay;
	PushMoveWithLocking_Parms.bCrouch = bCrouch;

	this->ProcessEvent ( pFnPushMoveWithLocking, &PushMoveWithLocking_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadMemberTakeCover
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioAiController*        oMember                        ( CPF_Parm )
// float                          fCoverRange                    ( CPF_OptionalParm | CPF_Parm )
// float                          fNavRange                      ( CPF_OptionalParm | CPF_Parm )
// class APawn*                   oTarget                        ( CPF_OptionalParm | CPF_Parm )
// class APawn*                   oAvoid                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNewCover                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCrouchIfNoCover               ( CPF_OptionalParm | CPF_Parm )
// float                          fMovementDelay                 ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vCoverLocation                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseDefNodeIfNoCover           ( CPF_OptionalParm | CPF_Parm )

bool ABioBaseSquadDesign::SquadMemberTakeCover ( class ABioAiController* oMember, float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, unsigned long bNewCover, unsigned long bCrouchIfNoCover, float fMovementDelay, struct FVector vCoverLocation, unsigned long bUseDefNodeIfNoCover )
{
	static UFunction* pFnSquadMemberTakeCover = NULL;

	if ( ! pFnSquadMemberTakeCover )
		pFnSquadMemberTakeCover = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SquadMemberTakeCover" );

	ABioBaseSquadDesign_execSquadMemberTakeCover_Parms SquadMemberTakeCover_Parms;
	SquadMemberTakeCover_Parms.oMember = oMember;
	SquadMemberTakeCover_Parms.fCoverRange = fCoverRange;
	SquadMemberTakeCover_Parms.fNavRange = fNavRange;
	SquadMemberTakeCover_Parms.oTarget = oTarget;
	SquadMemberTakeCover_Parms.oAvoid = oAvoid;
	SquadMemberTakeCover_Parms.bNewCover = bNewCover;
	SquadMemberTakeCover_Parms.bCrouchIfNoCover = bCrouchIfNoCover;
	SquadMemberTakeCover_Parms.fMovementDelay = fMovementDelay;
	memcpy ( &SquadMemberTakeCover_Parms.vCoverLocation, &vCoverLocation, 0xC );
	SquadMemberTakeCover_Parms.bUseDefNodeIfNoCover = bUseDefNodeIfNoCover;

	this->ProcessEvent ( pFnSquadMemberTakeCover, &SquadMemberTakeCover_Parms, NULL );

	return SquadMemberTakeCover_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.IsAtDefenseNode
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   oTestPawn                      ( CPF_Parm )

bool ABioBaseSquadDesign::IsAtDefenseNode ( class APawn* oTestPawn )
{
	static UFunction* pFnIsAtDefenseNode = NULL;

	if ( ! pFnIsAtDefenseNode )
		pFnIsAtDefenseNode = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.IsAtDefenseNode" );

	ABioBaseSquadDesign_execIsAtDefenseNode_Parms IsAtDefenseNode_Parms;
	IsAtDefenseNode_Parms.oTestPawn = oTestPawn;

	this->ProcessEvent ( pFnIsAtDefenseNode, &IsAtDefenseNode_Parms, NULL );

	return IsAtDefenseNode_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.SquadTakeCover
// [0x00024002] 
// Parameters infos:
// float                          fCoverRange                    ( CPF_OptionalParm | CPF_Parm )
// float                          fNavRange                      ( CPF_OptionalParm | CPF_Parm )
// class APawn*                   oTarget                        ( CPF_OptionalParm | CPF_Parm )
// class APawn*                   oAvoid                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNewCover                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCrouchIfNoCover               ( CPF_OptionalParm | CPF_Parm )
// float                          fDelayOrdersLoop               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseDefNodeIfNoCover           ( CPF_OptionalParm | CPF_Parm )

void ABioBaseSquadDesign::SquadTakeCover ( float fCoverRange, float fNavRange, class APawn* oTarget, class APawn* oAvoid, unsigned long bNewCover, unsigned long bCrouchIfNoCover, float fDelayOrdersLoop, unsigned long bUseDefNodeIfNoCover )
{
	static UFunction* pFnSquadTakeCover = NULL;

	if ( ! pFnSquadTakeCover )
		pFnSquadTakeCover = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SquadTakeCover" );

	ABioBaseSquadDesign_execSquadTakeCover_Parms SquadTakeCover_Parms;
	SquadTakeCover_Parms.fCoverRange = fCoverRange;
	SquadTakeCover_Parms.fNavRange = fNavRange;
	SquadTakeCover_Parms.oTarget = oTarget;
	SquadTakeCover_Parms.oAvoid = oAvoid;
	SquadTakeCover_Parms.bNewCover = bNewCover;
	SquadTakeCover_Parms.bCrouchIfNoCover = bCrouchIfNoCover;
	SquadTakeCover_Parms.fDelayOrdersLoop = fDelayOrdersLoop;
	SquadTakeCover_Parms.bUseDefNodeIfNoCover = bUseDefNodeIfNoCover;

	this->ProcessEvent ( pFnSquadTakeCover, &SquadTakeCover_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.PushCoverWithLocking
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioAiController*        oMember                        ( CPF_Parm )
// struct FVector                 vNear                          ( CPF_Parm )
// class APawn*                   oTarget                        ( CPF_OptionalParm | CPF_Parm )
// class APawn*                   oAvoid                         ( CPF_OptionalParm | CPF_Parm )
// float                          fCoverRadius                   ( CPF_OptionalParm | CPF_Parm )
// float                          fMovementDelay                 ( CPF_OptionalParm | CPF_Parm )

bool ABioBaseSquadDesign::PushCoverWithLocking ( class ABioAiController* oMember, struct FVector vNear, class APawn* oTarget, class APawn* oAvoid, float fCoverRadius, float fMovementDelay )
{
	static UFunction* pFnPushCoverWithLocking = NULL;

	if ( ! pFnPushCoverWithLocking )
		pFnPushCoverWithLocking = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.PushCoverWithLocking" );

	ABioBaseSquadDesign_execPushCoverWithLocking_Parms PushCoverWithLocking_Parms;
	PushCoverWithLocking_Parms.oMember = oMember;
	memcpy ( &PushCoverWithLocking_Parms.vNear, &vNear, 0xC );
	PushCoverWithLocking_Parms.oTarget = oTarget;
	PushCoverWithLocking_Parms.oAvoid = oAvoid;
	PushCoverWithLocking_Parms.fCoverRadius = fCoverRadius;
	PushCoverWithLocking_Parms.fMovementDelay = fMovementDelay;

	this->ProcessEvent ( pFnPushCoverWithLocking, &PushCoverWithLocking_Parms, NULL );

	return PushCoverWithLocking_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetCoverList
// [0x00424002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )
// class APawn*                   oTarget                        ( CPF_OptionalParm | CPF_Parm )
// class APawn*                   oAvoid                         ( CPF_OptionalParm | CPF_Parm )
// struct TArray<class APawn*>    aoCoverAgainst                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct TArray<int>             aoCoverValue                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ABioBaseSquadDesign::GetCoverList ( class ABioAiController* oMember, class APawn* oTarget, class APawn* oAvoid, struct TArray<class APawn*>* aoCoverAgainst, struct TArray<int>* aoCoverValue )
{
	static UFunction* pFnGetCoverList = NULL;

	if ( ! pFnGetCoverList )
		pFnGetCoverList = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetCoverList" );

	ABioBaseSquadDesign_execGetCoverList_Parms GetCoverList_Parms;
	GetCoverList_Parms.oMember = oMember;
	GetCoverList_Parms.oTarget = oTarget;
	GetCoverList_Parms.oAvoid = oAvoid;

	this->ProcessEvent ( pFnGetCoverList, &GetCoverList_Parms, NULL );

	if ( aoCoverAgainst )
		memcpy ( aoCoverAgainst, &GetCoverList_Parms.aoCoverAgainst, 0x10 );

	if ( aoCoverValue )
		memcpy ( aoCoverValue, &GetCoverList_Parms.aoCoverValue, 0x10 );
};

// Function SFXStrategicAI.BioBaseSquadDesign.UnlockAllPathnodes
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::UnlockAllPathnodes ( )
{
	static UFunction* pFnUnlockAllPathnodes = NULL;

	if ( ! pFnUnlockAllPathnodes )
		pFnUnlockAllPathnodes = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.UnlockAllPathnodes" );

	ABioBaseSquadDesign_execUnlockAllPathnodes_Parms UnlockAllPathnodes_Parms;

	this->ProcessEvent ( pFnUnlockAllPathnodes, &UnlockAllPathnodes_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.UnlockPathnodesByOwner
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oUnlockOwner                   ( CPF_Parm )

void ABioBaseSquadDesign::UnlockPathnodesByOwner ( class ABioPawn* oUnlockOwner )
{
	static UFunction* pFnUnlockPathnodesByOwner = NULL;

	if ( ! pFnUnlockPathnodesByOwner )
		pFnUnlockPathnodesByOwner = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.UnlockPathnodesByOwner" );

	ABioBaseSquadDesign_execUnlockPathnodesByOwner_Parms UnlockPathnodesByOwner_Parms;
	UnlockPathnodesByOwner_Parms.oUnlockOwner = oUnlockOwner;

	this->ProcessEvent ( pFnUnlockPathnodesByOwner, &UnlockPathnodesByOwner_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.UnlockPathnode
// [0x00020002] 
// Parameters infos:
// class ANavigationPoint*        oUnlockNode                    ( CPF_Parm )

void ABioBaseSquadDesign::UnlockPathnode ( class ANavigationPoint* oUnlockNode )
{
	static UFunction* pFnUnlockPathnode = NULL;

	if ( ! pFnUnlockPathnode )
		pFnUnlockPathnode = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.UnlockPathnode" );

	ABioBaseSquadDesign_execUnlockPathnode_Parms UnlockPathnode_Parms;
	UnlockPathnode_Parms.oUnlockNode = oUnlockNode;

	this->ProcessEvent ( pFnUnlockPathnode, &UnlockPathnode_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.LockPathnode
// [0x00424002] 
// Parameters infos:
// class ANavigationPoint*        oLockNode                      ( CPF_Parm )
// class ABioPawn*                oLockOwner                     ( CPF_Parm )
// int                            nIndex                         ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void ABioBaseSquadDesign::LockPathnode ( class ANavigationPoint* oLockNode, class ABioPawn* oLockOwner, int* nIndex )
{
	static UFunction* pFnLockPathnode = NULL;

	if ( ! pFnLockPathnode )
		pFnLockPathnode = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.LockPathnode" );

	ABioBaseSquadDesign_execLockPathnode_Parms LockPathnode_Parms;
	LockPathnode_Parms.oLockNode = oLockNode;
	LockPathnode_Parms.oLockOwner = oLockOwner;

	this->ProcessEvent ( pFnLockPathnode, &LockPathnode_Parms, NULL );

	if ( nIndex )
		*nIndex = LockPathnode_Parms.nIndex;
};

// Function SFXStrategicAI.BioBaseSquadDesign.IsPathnodeLocked
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ANavigationPoint*        oTestNode                      ( CPF_Parm )
// class ABioPawn*                oIgnoreMember                  ( CPF_OptionalParm | CPF_Parm )
// int                            nIndex                         ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

bool ABioBaseSquadDesign::IsPathnodeLocked ( class ANavigationPoint* oTestNode, class ABioPawn* oIgnoreMember, int* nIndex )
{
	static UFunction* pFnIsPathnodeLocked = NULL;

	if ( ! pFnIsPathnodeLocked )
		pFnIsPathnodeLocked = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.IsPathnodeLocked" );

	ABioBaseSquadDesign_execIsPathnodeLocked_Parms IsPathnodeLocked_Parms;
	IsPathnodeLocked_Parms.oTestNode = oTestNode;
	IsPathnodeLocked_Parms.oIgnoreMember = oIgnoreMember;

	this->ProcessEvent ( pFnIsPathnodeLocked, &IsPathnodeLocked_Parms, NULL );

	if ( nIndex )
		*nIndex = IsPathnodeLocked_Parms.nIndex;

	return IsPathnodeLocked_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetLockedPathNodes
// [0x00024002] 
// Parameters infos:
// struct TArray<class ANavigationPoint*> ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class ABioPawn*                oIgnoreMember                  ( CPF_OptionalParm | CPF_Parm )

struct TArray<class ANavigationPoint*> ABioBaseSquadDesign::GetLockedPathNodes ( class ABioPawn* oIgnoreMember )
{
	static UFunction* pFnGetLockedPathNodes = NULL;

	if ( ! pFnGetLockedPathNodes )
		pFnGetLockedPathNodes = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetLockedPathNodes" );

	ABioBaseSquadDesign_execGetLockedPathNodes_Parms GetLockedPathNodes_Parms;
	GetLockedPathNodes_Parms.oIgnoreMember = oIgnoreMember;

	this->ProcessEvent ( pFnGetLockedPathNodes, &GetLockedPathNodes_Parms, NULL );

	return GetLockedPathNodes_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetCurrentMovePoint
// [0x00020002] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oMemberPawn                    ( CPF_Parm )

class ANavigationPoint* ABioBaseSquadDesign::GetCurrentMovePoint ( class ABioPawn* oMemberPawn )
{
	static UFunction* pFnGetCurrentMovePoint = NULL;

	if ( ! pFnGetCurrentMovePoint )
		pFnGetCurrentMovePoint = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetCurrentMovePoint" );

	ABioBaseSquadDesign_execGetCurrentMovePoint_Parms GetCurrentMovePoint_Parms;
	GetCurrentMovePoint_Parms.oMemberPawn = oMemberPawn;

	this->ProcessEvent ( pFnGetCurrentMovePoint, &GetCurrentMovePoint_Parms, NULL );

	return GetCurrentMovePoint_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.DropAgitationIfNoHostile
// [0x00024002] 
// Parameters infos:
// unsigned char                  nNewLevel                      ( CPF_OptionalParm | CPF_Parm )

void ABioBaseSquadDesign::DropAgitationIfNoHostile ( unsigned char nNewLevel )
{
	static UFunction* pFnDropAgitationIfNoHostile = NULL;

	if ( ! pFnDropAgitationIfNoHostile )
		pFnDropAgitationIfNoHostile = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.DropAgitationIfNoHostile" );

	ABioBaseSquadDesign_execDropAgitationIfNoHostile_Parms DropAgitationIfNoHostile_Parms;
	DropAgitationIfNoHostile_Parms.nNewLevel = nNewLevel;

	this->ProcessEvent ( pFnDropAgitationIfNoHostile, &DropAgitationIfNoHostile_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.UpgradeAgitationIfHostile
// [0x00020002] 
// Parameters infos:
// class APawn*                   oWho                           ( CPF_Parm )
// class APawn*                   oPerceived                     ( CPF_Parm )
// unsigned char                  nNewLevel                      ( CPF_Parm )

void ABioBaseSquadDesign::UpgradeAgitationIfHostile ( class APawn* oWho, class APawn* oPerceived, unsigned char nNewLevel )
{
	static UFunction* pFnUpgradeAgitationIfHostile = NULL;

	if ( ! pFnUpgradeAgitationIfHostile )
		pFnUpgradeAgitationIfHostile = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.UpgradeAgitationIfHostile" );

	ABioBaseSquadDesign_execUpgradeAgitationIfHostile_Parms UpgradeAgitationIfHostile_Parms;
	UpgradeAgitationIfHostile_Parms.oWho = oWho;
	UpgradeAgitationIfHostile_Parms.oPerceived = oPerceived;
	UpgradeAgitationIfHostile_Parms.nNewLevel = nNewLevel;

	this->ProcessEvent ( pFnUpgradeAgitationIfHostile, &UpgradeAgitationIfHostile_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.SetFactionByType
// [0x00020002] 
// Parameters infos:
// unsigned char                  nNewFaction                    ( CPF_Parm )

void ABioBaseSquadDesign::SetFactionByType ( unsigned char nNewFaction )
{
	static UFunction* pFnSetFactionByType = NULL;

	if ( ! pFnSetFactionByType )
		pFnSetFactionByType = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.SetFactionByType" );

	ABioBaseSquadDesign_execSetFactionByType_Parms SetFactionByType_Parms;
	SetFactionByType_Parms.nNewFaction = nNewFaction;

	this->ProcessEvent ( pFnSetFactionByType, &SetFactionByType_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.ClearAllSquadActions
// [0x00024002] 
// Parameters infos:
// unsigned long                  bClearQueue                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bClearState                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUnlockTarget                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLeaveCombat                   ( CPF_OptionalParm | CPF_Parm )

void ABioBaseSquadDesign::ClearAllSquadActions ( unsigned long bClearQueue, unsigned long bClearState, unsigned long bUnlockTarget, unsigned long bLeaveCombat )
{
	static UFunction* pFnClearAllSquadActions = NULL;

	if ( ! pFnClearAllSquadActions )
		pFnClearAllSquadActions = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.ClearAllSquadActions" );

	ABioBaseSquadDesign_execClearAllSquadActions_Parms ClearAllSquadActions_Parms;
	ClearAllSquadActions_Parms.bClearQueue = bClearQueue;
	ClearAllSquadActions_Parms.bClearState = bClearState;
	ClearAllSquadActions_Parms.bUnlockTarget = bUnlockTarget;
	ClearAllSquadActions_Parms.bLeaveCombat = bLeaveCombat;

	this->ProcessEvent ( pFnClearAllSquadActions, &ClearAllSquadActions_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.CalculateAllLikelihoods
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioBaseSquadDesign::CalculateAllLikelihoods ( )
{
	static UFunction* pFnCalculateAllLikelihoods = NULL;

	if ( ! pFnCalculateAllLikelihoods )
		pFnCalculateAllLikelihoods = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.CalculateAllLikelihoods" );

	ABioBaseSquadDesign_execCalculateAllLikelihoods_Parms CalculateAllLikelihoods_Parms;

	this->ProcessEvent ( pFnCalculateAllLikelihoods, &CalculateAllLikelihoods_Parms, NULL );

	return CalculateAllLikelihoods_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.CalculateLikelihood
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

float ABioBaseSquadDesign::CalculateLikelihood ( struct FName sStrategyName )
{
	static UFunction* pFnCalculateLikelihood = NULL;

	if ( ! pFnCalculateLikelihood )
		pFnCalculateLikelihood = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.CalculateLikelihood" );

	ABioBaseSquadDesign_execCalculateLikelihood_Parms CalculateLikelihood_Parms;
	memcpy ( &CalculateLikelihood_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnCalculateLikelihood, &CalculateLikelihood_Parms, NULL );

	return CalculateLikelihood_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.IsValidStrategy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

bool ABioBaseSquadDesign::IsValidStrategy ( struct FName sStrategyName )
{
	static UFunction* pFnIsValidStrategy = NULL;

	if ( ! pFnIsValidStrategy )
		pFnIsValidStrategy = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.IsValidStrategy" );

	ABioBaseSquadDesign_execIsValidStrategy_Parms IsValidStrategy_Parms;
	memcpy ( &IsValidStrategy_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnIsValidStrategy, &IsValidStrategy_Parms, NULL );

	return IsValidStrategy_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.GetStrategyList
// [0x00020002] 
// Parameters infos:
// struct TArray<struct FName>    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct TArray<struct FName> ABioBaseSquadDesign::GetStrategyList ( )
{
	static UFunction* pFnGetStrategyList = NULL;

	if ( ! pFnGetStrategyList )
		pFnGetStrategyList = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.GetStrategyList" );

	ABioBaseSquadDesign_execGetStrategyList_Parms GetStrategyList_Parms;

	this->ProcessEvent ( pFnGetStrategyList, &GetStrategyList_Parms, NULL );

	return GetStrategyList_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesign.ActivateAfterDelay
// [0x00020002] 
// Parameters infos:
// float                          fDelay                         ( CPF_Parm )

void ABioBaseSquadDesign::ActivateAfterDelay ( float fDelay )
{
	static UFunction* pFnActivateAfterDelay = NULL;

	if ( ! pFnActivateAfterDelay )
		pFnActivateAfterDelay = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.ActivateAfterDelay" );

	ABioBaseSquadDesign_execActivateAfterDelay_Parms ActivateAfterDelay_Parms;
	ActivateAfterDelay_Parms.fDelay = fDelay;

	this->ProcessEvent ( pFnActivateAfterDelay, &ActivateAfterDelay_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.Activate
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.Activate" );

	ABioBaseSquadDesign_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.Deactivate
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::Deactivate ( )
{
	static UFunction* pFnDeactivate = NULL;

	if ( ! pFnDeactivate )
		pFnDeactivate = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.Deactivate" );

	ABioBaseSquadDesign_execDeactivate_Parms Deactivate_Parms;

	this->ProcessEvent ( pFnDeactivate, &Deactivate_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.DoFallBackStrategy
// [0x00020002] 
// Parameters infos:

void ABioBaseSquadDesign::DoFallBackStrategy ( )
{
	static UFunction* pFnDoFallBackStrategy = NULL;

	if ( ! pFnDoFallBackStrategy )
		pFnDoFallBackStrategy = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.DoFallBackStrategy" );

	ABioBaseSquadDesign_execDoFallBackStrategy_Parms DoFallBackStrategy_Parms;

	this->ProcessEvent ( pFnDoFallBackStrategy, &DoFallBackStrategy_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesign.ReEvaluateStrategy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ABioBaseSquadDesign::ReEvaluateStrategy ( )
{
	static UFunction* pFnReEvaluateStrategy = NULL;

	if ( ! pFnReEvaluateStrategy )
		pFnReEvaluateStrategy = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesign.ReEvaluateStrategy" );

	ABioBaseSquadDesign_execReEvaluateStrategy_Parms ReEvaluateStrategy_Parms;

	this->ProcessEvent ( pFnReEvaluateStrategy, &ReEvaluateStrategy_Parms, NULL );

	return ReEvaluateStrategy_Parms.ReturnValue;
};



class UClass* UBioFaction_Commoner::pClassPointer = NULL;

class UClass* UBioFaction_Commoner::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioFaction_Commoner" );

		return pClassPointer;
	};



class UClass* UBioFaction_Ambient::pClassPointer = NULL;

class UClass* UBioFaction_Ambient::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioFaction_Ambient" );

		return pClassPointer;
	};



class UClass* UBioFaction_Defender1::pClassPointer = NULL;

class UClass* UBioFaction_Defender1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioFaction_Defender1" );

		return pClassPointer;
	};



class UClass* UBioFaction_Defender2::pClassPointer = NULL;

class UClass* UBioFaction_Defender2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioFaction_Defender2" );

		return pClassPointer;
	};



class UClass* UBioFaction_Hostile1::pClassPointer = NULL;

class UClass* UBioFaction_Hostile1::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioFaction_Hostile1" );

		return pClassPointer;
	};



class UClass* UBioFaction_Hostile2::pClassPointer = NULL;

class UClass* UBioFaction_Hostile2::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioFaction_Hostile2" );

		return pClassPointer;
	};



class UClass* ABioBaseSquadDesignCombat::pClassPointer = NULL;

class UClass* ABioBaseSquadDesignCombat::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioBaseSquadDesignCombat" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Combat
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// struct FName                   nmAction                       ( CPF_Parm )
// struct FName                   nmTechnique                    ( CPF_Parm )
// int                            nReason                        ( CPF_Parm )
// class AActor*                  oLastTarget                    ( CPF_Parm )

void ABioBaseSquadDesignCombat::eventOnActionComplete_Combat ( class APawn* oMember, struct FName nmAction, struct FName nmTechnique, int nReason, class AActor* oLastTarget )
{
	static UFunction* pFnOnActionComplete_Combat = NULL;

	if ( ! pFnOnActionComplete_Combat )
		pFnOnActionComplete_Combat = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Combat" );

	ABioBaseSquadDesignCombat_eventOnActionComplete_Combat_Parms OnActionComplete_Combat_Parms;
	OnActionComplete_Combat_Parms.oMember = oMember;
	memcpy ( &OnActionComplete_Combat_Parms.nmAction, &nmAction, 0x8 );
	memcpy ( &OnActionComplete_Combat_Parms.nmTechnique, &nmTechnique, 0x8 );
	OnActionComplete_Combat_Parms.nReason = nReason;
	OnActionComplete_Combat_Parms.oLastTarget = oLastTarget;

	this->ProcessEvent ( pFnOnActionComplete_Combat, &OnActionComplete_Combat_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Movement
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// struct FName                   nmAction                       ( CPF_Parm )
// int                            nReason                        ( CPF_Parm )
// class AActor*                  oTarget                        ( CPF_Parm )
// struct FVector                 vLocation                      ( CPF_Parm )

void ABioBaseSquadDesignCombat::eventOnActionComplete_Movement ( class APawn* oMember, struct FName nmAction, int nReason, class AActor* oTarget, struct FVector vLocation )
{
	static UFunction* pFnOnActionComplete_Movement = NULL;

	if ( ! pFnOnActionComplete_Movement )
		pFnOnActionComplete_Movement = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.OnActionComplete_Movement" );

	ABioBaseSquadDesignCombat_eventOnActionComplete_Movement_Parms OnActionComplete_Movement_Parms;
	OnActionComplete_Movement_Parms.oMember = oMember;
	memcpy ( &OnActionComplete_Movement_Parms.nmAction, &nmAction, 0x8 );
	OnActionComplete_Movement_Parms.nReason = nReason;
	OnActionComplete_Movement_Parms.oTarget = oTarget;
	memcpy ( &OnActionComplete_Movement_Parms.vLocation, &vLocation, 0xC );

	this->ProcessEvent ( pFnOnActionComplete_Movement, &OnActionComplete_Movement_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.UseAttackCapability
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioAiController*        oMember                        ( CPF_Parm )
// class APawn*                   oTarget                        ( CPF_Parm )
// class UBioCapability*          oCap                           ( CPF_Parm )
// unsigned char                  eAttackType                    ( CPF_Parm )
// float                          fStabilityOffset               ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  oMoveDest                      ( CPF_OptionalParm | CPF_Parm )
// float                          fMovementDelay                 ( CPF_OptionalParm | CPF_Parm )

bool ABioBaseSquadDesignCombat::UseAttackCapability ( class ABioAiController* oMember, class APawn* oTarget, class UBioCapability* oCap, unsigned char eAttackType, float fStabilityOffset, class AActor* oMoveDest, float fMovementDelay )
{
	static UFunction* pFnUseAttackCapability = NULL;

	if ( ! pFnUseAttackCapability )
		pFnUseAttackCapability = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.UseAttackCapability" );

	ABioBaseSquadDesignCombat_execUseAttackCapability_Parms UseAttackCapability_Parms;
	UseAttackCapability_Parms.oMember = oMember;
	UseAttackCapability_Parms.oTarget = oTarget;
	UseAttackCapability_Parms.oCap = oCap;
	UseAttackCapability_Parms.eAttackType = eAttackType;
	UseAttackCapability_Parms.fStabilityOffset = fStabilityOffset;
	UseAttackCapability_Parms.oMoveDest = oMoveDest;
	UseAttackCapability_Parms.fMovementDelay = fMovementDelay;

	this->ProcessEvent ( pFnUseAttackCapability, &UseAttackCapability_Parms, NULL );

	return UseAttackCapability_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.FindDangerousEnemy
// [0x00024002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioAiController*        oMember                        ( CPF_Parm )
// class APawn*                   oIgnore                        ( CPF_OptionalParm | CPF_Parm )

class APawn* ABioBaseSquadDesignCombat::FindDangerousEnemy ( class ABioAiController* oMember, class APawn* oIgnore )
{
	static UFunction* pFnFindDangerousEnemy = NULL;

	if ( ! pFnFindDangerousEnemy )
		pFnFindDangerousEnemy = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.FindDangerousEnemy" );

	ABioBaseSquadDesignCombat_execFindDangerousEnemy_Parms FindDangerousEnemy_Parms;
	FindDangerousEnemy_Parms.oMember = oMember;
	FindDangerousEnemy_Parms.oIgnore = oIgnore;

	this->ProcessEvent ( pFnFindDangerousEnemy, &FindDangerousEnemy_Parms, NULL );

	return FindDangerousEnemy_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetClosestPerceivedTarget
// [0x00024002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioAiController*        oMember                        ( CPF_Parm )
// class APawn*                   oIgnoreTarget                  ( CPF_OptionalParm | CPF_Parm )

class APawn* ABioBaseSquadDesignCombat::GetClosestPerceivedTarget ( class ABioAiController* oMember, class APawn* oIgnoreTarget )
{
	static UFunction* pFnGetClosestPerceivedTarget = NULL;

	if ( ! pFnGetClosestPerceivedTarget )
		pFnGetClosestPerceivedTarget = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.GetClosestPerceivedTarget" );

	ABioBaseSquadDesignCombat_execGetClosestPerceivedTarget_Parms GetClosestPerceivedTarget_Parms;
	GetClosestPerceivedTarget_Parms.oMember = oMember;
	GetClosestPerceivedTarget_Parms.oIgnoreTarget = oIgnoreTarget;

	this->ProcessEvent ( pFnGetClosestPerceivedTarget, &GetClosestPerceivedTarget_Parms, NULL );

	return GetClosestPerceivedTarget_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetDistanceToNearestHostile
// [0x00424002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bSquareDist                    ( CPF_OptionalParm | CPF_Parm )
// class ABioAiController*        oNearestMember                 ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// class APawn*                   oNearestTarget                 ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

float ABioBaseSquadDesignCombat::GetDistanceToNearestHostile ( unsigned long bSquareDist, class ABioAiController** oNearestMember, class APawn** oNearestTarget )
{
	static UFunction* pFnGetDistanceToNearestHostile = NULL;

	if ( ! pFnGetDistanceToNearestHostile )
		pFnGetDistanceToNearestHostile = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.GetDistanceToNearestHostile" );

	ABioBaseSquadDesignCombat_execGetDistanceToNearestHostile_Parms GetDistanceToNearestHostile_Parms;
	GetDistanceToNearestHostile_Parms.bSquareDist = bSquareDist;

	this->ProcessEvent ( pFnGetDistanceToNearestHostile, &GetDistanceToNearestHostile_Parms, NULL );

	if ( oNearestMember )
		*oNearestMember = GetDistanceToNearestHostile_Parms.oNearestMember;

	if ( oNearestTarget )
		*oNearestTarget = GetDistanceToNearestHostile_Parms.oNearestTarget;

	return GetDistanceToNearestHostile_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetOrientationType
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char ABioBaseSquadDesignCombat::eventGetOrientationType ( )
{
	static UFunction* pFnGetOrientationType = NULL;

	if ( ! pFnGetOrientationType )
		pFnGetOrientationType = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.GetOrientationType" );

	ABioBaseSquadDesignCombat_eventGetOrientationType_Parms GetOrientationType_Parms;

	this->ProcessEvent ( pFnGetOrientationType, &GetOrientationType_Parms, NULL );

	return GetOrientationType_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.GetRestFormation
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ABioBaseSquadDesignCombat::eventGetRestFormation ( )
{
	static UFunction* pFnGetRestFormation = NULL;

	if ( ! pFnGetRestFormation )
		pFnGetRestFormation = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.GetRestFormation" );

	ABioBaseSquadDesignCombat_eventGetRestFormation_Parms GetRestFormation_Parms;

	this->ProcessEvent ( pFnGetRestFormation, &GetRestFormation_Parms, NULL );

	return GetRestFormation_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnCastAt
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class APawn*                   oAttacker                      ( CPF_Parm )
// struct FName                   nmPower                        ( CPF_Parm )

void ABioBaseSquadDesignCombat::eventOnCastAt ( class APawn* oMember, class APawn* oAttacker, struct FName nmPower )
{
	static UFunction* pFnOnCastAt = NULL;

	if ( ! pFnOnCastAt )
		pFnOnCastAt = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.OnCastAt" );

	ABioBaseSquadDesignCombat_eventOnCastAt_Parms OnCastAt_Parms;
	OnCastAt_Parms.oMember = oMember;
	OnCastAt_Parms.oAttacker = oAttacker;
	memcpy ( &OnCastAt_Parms.nmPower, &nmPower, 0x8 );

	this->ProcessEvent ( pFnOnCastAt, &OnCastAt_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.OnAttacked
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class APawn*                   oAttacker                      ( CPF_Parm )
// struct FName                   nmWeapon                       ( CPF_Parm )

void ABioBaseSquadDesignCombat::eventOnAttacked ( class APawn* oMember, class APawn* oAttacker, struct FName nmWeapon )
{
	static UFunction* pFnOnAttacked = NULL;

	if ( ! pFnOnAttacked )
		pFnOnAttacked = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.OnAttacked" );

	ABioBaseSquadDesignCombat_eventOnAttacked_Parms OnAttacked_Parms;
	OnAttacked_Parms.oMember = oMember;
	OnAttacked_Parms.oAttacker = oAttacker;
	memcpy ( &OnAttacked_Parms.nmWeapon, &nmWeapon, 0x8 );

	this->ProcessEvent ( pFnOnAttacked, &OnAttacked_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.HearNoise
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   Who                            ( CPF_Parm )
// float                          Loudness                       ( CPF_Parm )
// class AActor*                  NoiseMaker                     ( CPF_Parm )
// struct FVector                 vNoiseLocation                 ( CPF_Parm )
// struct FName                   NoiseType                      ( CPF_OptionalParm | CPF_Parm )

void ABioBaseSquadDesignCombat::eventHearNoise ( class APawn* Who, float Loudness, class AActor* NoiseMaker, struct FVector vNoiseLocation, struct FName NoiseType )
{
	static UFunction* pFnHearNoise = NULL;

	if ( ! pFnHearNoise )
		pFnHearNoise = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.HearNoise" );

	ABioBaseSquadDesignCombat_eventHearNoise_Parms HearNoise_Parms;
	HearNoise_Parms.Who = Who;
	HearNoise_Parms.Loudness = Loudness;
	HearNoise_Parms.NoiseMaker = NoiseMaker;
	memcpy ( &HearNoise_Parms.vNoiseLocation, &vNoiseLocation, 0xC );
	memcpy ( &HearNoise_Parms.NoiseType, &NoiseType, 0x8 );

	this->ProcessEvent ( pFnHearNoise, &HearNoise_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.NoLongerSeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   Who                            ( CPF_Parm )
// class APawn*                   Seen                           ( CPF_Parm )

void ABioBaseSquadDesignCombat::eventNoLongerSeePlayer ( class APawn* Who, class APawn* Seen )
{
	static UFunction* pFnNoLongerSeePlayer = NULL;

	if ( ! pFnNoLongerSeePlayer )
		pFnNoLongerSeePlayer = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.NoLongerSeePlayer" );

	ABioBaseSquadDesignCombat_eventNoLongerSeePlayer_Parms NoLongerSeePlayer_Parms;
	NoLongerSeePlayer_Parms.Who = Who;
	NoLongerSeePlayer_Parms.Seen = Seen;

	this->ProcessEvent ( pFnNoLongerSeePlayer, &NoLongerSeePlayer_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.SeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   Who                            ( CPF_Parm )
// class APawn*                   Seen                           ( CPF_Parm )

void ABioBaseSquadDesignCombat::eventSeePlayer ( class APawn* Who, class APawn* Seen )
{
	static UFunction* pFnSeePlayer = NULL;

	if ( ! pFnSeePlayer )
		pFnSeePlayer = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.SeePlayer" );

	ABioBaseSquadDesignCombat_eventSeePlayer_Parms SeePlayer_Parms;
	SeePlayer_Parms.Who = Who;
	SeePlayer_Parms.Seen = Seen;

	this->ProcessEvent ( pFnSeePlayer, &SeePlayer_Parms, NULL );
};

// Function SFXStrategicAI.BioBaseSquadDesignCombat.SeenSquad
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class ABioBaseSquad*           oSquad                         ( CPF_Parm )

void ABioBaseSquadDesignCombat::eventSeenSquad ( class ABioBaseSquad* oSquad )
{
	static UFunction* pFnSeenSquad = NULL;

	if ( ! pFnSeenSquad )
		pFnSeenSquad = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioBaseSquadDesignCombat.SeenSquad" );

	ABioBaseSquadDesignCombat_eventSeenSquad_Parms SeenSquad_Parms;
	SeenSquad_Parms.oSquad = oSquad;

	this->ProcessEvent ( pFnSeenSquad, &SeenSquad_Parms, NULL );
};



class UClass* UBioFaction_CommonerPhysics::pClassPointer = NULL;

class UClass* UBioFaction_CommonerPhysics::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioFaction_CommonerPhysics" );

		return pClassPointer;
	};



class UClass* UBioForm_ScoutSwarm::pClassPointer = NULL;

class UClass* UBioForm_ScoutSwarm::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioForm_ScoutSwarm" );

		return pClassPointer;
	};



class UClass* UBioSeqAct_GetPropertyDesignSquad::pClassPointer = NULL;

class UClass* UBioSeqAct_GetPropertyDesignSquad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSeqAct_GetPropertyDesignSquad" );

		return pClassPointer;
	};



class UClass* UBioSeqAct_ModifyPropertyDesignSquad::pClassPointer = NULL;

class UClass* UBioSeqAct_ModifyPropertyDesignSquad::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSeqAct_ModifyPropertyDesignSquad" );

		return pClassPointer;
	};



class UClass* ABioSquadAmbient::pClassPointer = NULL;

class UClass* ABioSquadAmbient::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadAmbient" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihoodFlee
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadAmbient::CalculateLikelihoodFlee ( )
{
	static UFunction* pFnCalculateLikelihoodFlee = NULL;

	if ( ! pFnCalculateLikelihoodFlee )
		pFnCalculateLikelihoodFlee = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihoodFlee" );

	ABioSquadAmbient_execCalculateLikelihoodFlee_Parms CalculateLikelihoodFlee_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodFlee, &CalculateLikelihoodFlee_Parms, NULL );

	return CalculateLikelihoodFlee_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihoodIdle
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadAmbient::CalculateLikelihoodIdle ( )
{
	static UFunction* pFnCalculateLikelihoodIdle = NULL;

	if ( ! pFnCalculateLikelihoodIdle )
		pFnCalculateLikelihoodIdle = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihoodIdle" );

	ABioSquadAmbient_execCalculateLikelihoodIdle_Parms CalculateLikelihoodIdle_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodIdle, &CalculateLikelihoodIdle_Parms, NULL );

	return CalculateLikelihoodIdle_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihood
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

float ABioSquadAmbient::CalculateLikelihood ( struct FName sStrategyName )
{
	static UFunction* pFnCalculateLikelihood = NULL;

	if ( ! pFnCalculateLikelihood )
		pFnCalculateLikelihood = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadAmbient.CalculateLikelihood" );

	ABioSquadAmbient_execCalculateLikelihood_Parms CalculateLikelihood_Parms;
	memcpy ( &CalculateLikelihood_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnCalculateLikelihood, &CalculateLikelihood_Parms, NULL );

	return CalculateLikelihood_Parms.ReturnValue;
};



class UClass* ABioSquadBeacon::pClassPointer = NULL;

class UClass* ABioSquadBeacon::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadBeacon" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadBeacon.CalculateLikelihoodCasting
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadBeacon::CalculateLikelihoodCasting ( )
{
	static UFunction* pFnCalculateLikelihoodCasting = NULL;

	if ( ! pFnCalculateLikelihoodCasting )
		pFnCalculateLikelihoodCasting = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadBeacon.CalculateLikelihoodCasting" );

	ABioSquadBeacon_execCalculateLikelihoodCasting_Parms CalculateLikelihoodCasting_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodCasting, &CalculateLikelihoodCasting_Parms, NULL );

	return CalculateLikelihoodCasting_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadBeacon.SquadMemberBeginCasting
// [0x00020002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )

void ABioSquadBeacon::SquadMemberBeginCasting ( class ABioAiController* oMember )
{
	static UFunction* pFnSquadMemberBeginCasting = NULL;

	if ( ! pFnSquadMemberBeginCasting )
		pFnSquadMemberBeginCasting = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadBeacon.SquadMemberBeginCasting" );

	ABioSquadBeacon_execSquadMemberBeginCasting_Parms SquadMemberBeginCasting_Parms;
	SquadMemberBeginCasting_Parms.oMember = oMember;

	this->ProcessEvent ( pFnSquadMemberBeginCasting, &SquadMemberBeginCasting_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadBeacon.CalculateLikelihood
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

float ABioSquadBeacon::CalculateLikelihood ( struct FName sStrategyName )
{
	static UFunction* pFnCalculateLikelihood = NULL;

	if ( ! pFnCalculateLikelihood )
		pFnCalculateLikelihood = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadBeacon.CalculateLikelihood" );

	ABioSquadBeacon_execCalculateLikelihood_Parms CalculateLikelihood_Parms;
	memcpy ( &CalculateLikelihood_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnCalculateLikelihood, &CalculateLikelihood_Parms, NULL );

	return CalculateLikelihood_Parms.ReturnValue;
};



class UClass* ABioSquadCombat::pClassPointer = NULL;

class UClass* ABioSquadCombat::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadCombat" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodDefend
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadCombat::CalculateLikelihoodDefend ( )
{
	static UFunction* pFnCalculateLikelihoodDefend = NULL;

	if ( ! pFnCalculateLikelihoodDefend )
		pFnCalculateLikelihoodDefend = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodDefend" );

	ABioSquadCombat_execCalculateLikelihoodDefend_Parms CalculateLikelihoodDefend_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodDefend, &CalculateLikelihoodDefend_Parms, NULL );

	return CalculateLikelihoodDefend_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodSkirmish
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadCombat::CalculateLikelihoodSkirmish ( )
{
	static UFunction* pFnCalculateLikelihoodSkirmish = NULL;

	if ( ! pFnCalculateLikelihoodSkirmish )
		pFnCalculateLikelihoodSkirmish = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodSkirmish" );

	ABioSquadCombat_execCalculateLikelihoodSkirmish_Parms CalculateLikelihoodSkirmish_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodSkirmish, &CalculateLikelihoodSkirmish_Parms, NULL );

	return CalculateLikelihoodSkirmish_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodCharge
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadCombat::CalculateLikelihoodCharge ( )
{
	static UFunction* pFnCalculateLikelihoodCharge = NULL;

	if ( ! pFnCalculateLikelihoodCharge )
		pFnCalculateLikelihoodCharge = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodCharge" );

	ABioSquadCombat_execCalculateLikelihoodCharge_Parms CalculateLikelihoodCharge_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodCharge, &CalculateLikelihoodCharge_Parms, NULL );

	return CalculateLikelihoodCharge_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodSearch
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadCombat::CalculateLikelihoodSearch ( )
{
	static UFunction* pFnCalculateLikelihoodSearch = NULL;

	if ( ! pFnCalculateLikelihoodSearch )
		pFnCalculateLikelihoodSearch = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodSearch" );

	ABioSquadCombat_execCalculateLikelihoodSearch_Parms CalculateLikelihoodSearch_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodSearch, &CalculateLikelihoodSearch_Parms, NULL );

	return CalculateLikelihoodSearch_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodIdle
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadCombat::CalculateLikelihoodIdle ( )
{
	static UFunction* pFnCalculateLikelihoodIdle = NULL;

	if ( ! pFnCalculateLikelihoodIdle )
		pFnCalculateLikelihoodIdle = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCombat.CalculateLikelihoodIdle" );

	ABioSquadCombat_execCalculateLikelihoodIdle_Parms CalculateLikelihoodIdle_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodIdle, &CalculateLikelihoodIdle_Parms, NULL );

	return CalculateLikelihoodIdle_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadCombat.CalculateLikelihood
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

float ABioSquadCombat::CalculateLikelihood ( struct FName sStrategyName )
{
	static UFunction* pFnCalculateLikelihood = NULL;

	if ( ! pFnCalculateLikelihood )
		pFnCalculateLikelihood = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCombat.CalculateLikelihood" );

	ABioSquadCombat_execCalculateLikelihood_Parms CalculateLikelihood_Parms;
	memcpy ( &CalculateLikelihood_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnCalculateLikelihood, &CalculateLikelihood_Parms, NULL );

	return CalculateLikelihood_Parms.ReturnValue;
};



class UClass* ABioSquadCommoner::pClassPointer = NULL;

class UClass* ABioSquadCommoner::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadCommoner" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadCommoner.CalculateLikelihoodIdle
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadCommoner::CalculateLikelihoodIdle ( )
{
	static UFunction* pFnCalculateLikelihoodIdle = NULL;

	if ( ! pFnCalculateLikelihoodIdle )
		pFnCalculateLikelihoodIdle = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCommoner.CalculateLikelihoodIdle" );

	ABioSquadCommoner_execCalculateLikelihoodIdle_Parms CalculateLikelihoodIdle_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodIdle, &CalculateLikelihoodIdle_Parms, NULL );

	return CalculateLikelihoodIdle_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadCommoner.CalculateLikelihood
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

float ABioSquadCommoner::CalculateLikelihood ( struct FName sStrategyName )
{
	static UFunction* pFnCalculateLikelihood = NULL;

	if ( ! pFnCalculateLikelihood )
		pFnCalculateLikelihood = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadCommoner.CalculateLikelihood" );

	ABioSquadCommoner_execCalculateLikelihood_Parms CalculateLikelihood_Parms;
	memcpy ( &CalculateLikelihood_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnCalculateLikelihood, &CalculateLikelihood_Parms, NULL );

	return CalculateLikelihood_Parms.ReturnValue;
};



class UClass* ABioSquadPlayerDesignBase::pClassPointer = NULL;

class UClass* ABioSquadPlayerDesignBase::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadPlayerDesignBase" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.OnSquadSeen
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class ABioBaseSquad*           oSquad                         ( CPF_Parm )

void ABioSquadPlayerDesignBase::eventOnSquadSeen ( class ABioBaseSquad* oSquad )
{
	static UFunction* pFnOnSquadSeen = NULL;

	if ( ! pFnOnSquadSeen )
		pFnOnSquadSeen = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayerDesignBase.OnSquadSeen" );

	ABioSquadPlayerDesignBase_eventOnSquadSeen_Parms OnSquadSeen_Parms;
	OnSquadSeen_Parms.oSquad = oSquad;

	this->ProcessEvent ( pFnOnSquadSeen, &OnSquadSeen_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.AreHostilesNearby
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ABioSquadPlayerDesignBase::AreHostilesNearby ( )
{
	static UFunction* pFnAreHostilesNearby = NULL;

	if ( ! pFnAreHostilesNearby )
		pFnAreHostilesNearby = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayerDesignBase.AreHostilesNearby" );

	ABioSquadPlayerDesignBase_execAreHostilesNearby_Parms AreHostilesNearby_Parms;

	this->ProcessEvent ( pFnAreHostilesNearby, &AreHostilesNearby_Parms, NULL );

	return AreHostilesNearby_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.ClearMemberAttackCommand
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                oMemberPawn                    ( CPF_Parm )

void ABioSquadPlayerDesignBase::ClearMemberAttackCommand ( class ABioPawn* oMemberPawn )
{
	static UFunction* pFnClearMemberAttackCommand = NULL;

	if ( ! pFnClearMemberAttackCommand )
		pFnClearMemberAttackCommand = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayerDesignBase.ClearMemberAttackCommand" );

	ABioSquadPlayerDesignBase_execClearMemberAttackCommand_Parms ClearMemberAttackCommand_Parms;
	ClearMemberAttackCommand_Parms.oMemberPawn = oMemberPawn;

	this->ProcessEvent ( pFnClearMemberAttackCommand, &ClearMemberAttackCommand_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.ClearPerceptionFlag
// [0x00020002] 
// Parameters infos:

void ABioSquadPlayerDesignBase::ClearPerceptionFlag ( )
{
	static UFunction* pFnClearPerceptionFlag = NULL;

	if ( ! pFnClearPerceptionFlag )
		pFnClearPerceptionFlag = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayerDesignBase.ClearPerceptionFlag" );

	ABioSquadPlayerDesignBase_execClearPerceptionFlag_Parms ClearPerceptionFlag_Parms;

	this->ProcessEvent ( pFnClearPerceptionFlag, &ClearPerceptionFlag_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayerDesignBase.SetPerceptionFlag
// [0x00020002] 
// Parameters infos:

void ABioSquadPlayerDesignBase::SetPerceptionFlag ( )
{
	static UFunction* pFnSetPerceptionFlag = NULL;

	if ( ! pFnSetPerceptionFlag )
		pFnSetPerceptionFlag = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayerDesignBase.SetPerceptionFlag" );

	ABioSquadPlayerDesignBase_execSetPerceptionFlag_Parms SetPerceptionFlag_Parms;

	this->ProcessEvent ( pFnSetPerceptionFlag, &SetPerceptionFlag_Parms, NULL );
};



class UClass* ABioSquadPlayer::pClassPointer = NULL;

class UClass* ABioSquadPlayer::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadPlayer" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadPlayer.Tick
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ABioSquadPlayer::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.Tick" );

	ABioSquadPlayer_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.onPlayerEnterCover
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ABioSquadPlayer::eventonPlayerEnterCover ( )
{
	static UFunction* pFnonPlayerEnterCover = NULL;

	if ( ! pFnonPlayerEnterCover )
		pFnonPlayerEnterCover = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.onPlayerEnterCover" );

	ABioSquadPlayer_eventonPlayerEnterCover_Parms onPlayerEnterCover_Parms;

	this->ProcessEvent ( pFnonPlayerEnterCover, &onPlayerEnterCover_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.onMemberArrivedAtTarget
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )

void ABioSquadPlayer::eventonMemberArrivedAtTarget ( class APawn* oMember )
{
	static UFunction* pFnonMemberArrivedAtTarget = NULL;

	if ( ! pFnonMemberArrivedAtTarget )
		pFnonMemberArrivedAtTarget = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.onMemberArrivedAtTarget" );

	ABioSquadPlayer_eventonMemberArrivedAtTarget_Parms onMemberArrivedAtTarget_Parms;
	onMemberArrivedAtTarget_Parms.oMember = oMember;

	this->ProcessEvent ( pFnonMemberArrivedAtTarget, &onMemberArrivedAtTarget_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.LookForCover
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   oMember                        ( CPF_Parm )

bool ABioSquadPlayer::LookForCover ( class APawn* oMember )
{
	static UFunction* pFnLookForCover = NULL;

	if ( ! pFnLookForCover )
		pFnLookForCover = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.LookForCover" );

	ABioSquadPlayer_execLookForCover_Parms LookForCover_Parms;
	LookForCover_Parms.oMember = oMember;

	this->ProcessEvent ( pFnLookForCover, &LookForCover_Parms, NULL );

	return LookForCover_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadPlayer.OnSetSquadFollowFormation
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  eFormation                     ( CPF_Parm )

void ABioSquadPlayer::eventOnSetSquadFollowFormation ( unsigned char eFormation )
{
	static UFunction* pFnOnSetSquadFollowFormation = NULL;

	if ( ! pFnOnSetSquadFollowFormation )
		pFnOnSetSquadFollowFormation = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnSetSquadFollowFormation" );

	ABioSquadPlayer_eventOnSetSquadFollowFormation_Parms OnSetSquadFollowFormation_Parms;
	OnSetSquadFollowFormation_Parms.eFormation = eFormation;

	this->ProcessEvent ( pFnOnSetSquadFollowFormation, &OnSetSquadFollowFormation_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnMemberShieldsDown
// [0x00020002] 
// Parameters infos:
// class APawn*                   oWho                           ( CPF_Parm )

void ABioSquadPlayer::OnMemberShieldsDown ( class APawn* oWho )
{
	static UFunction* pFnOnMemberShieldsDown = NULL;

	if ( ! pFnOnMemberShieldsDown )
		pFnOnMemberShieldsDown = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnMemberShieldsDown" );

	ABioSquadPlayer_execOnMemberShieldsDown_Parms OnMemberShieldsDown_Parms;
	OnMemberShieldsDown_Parms.oWho = oWho;

	this->ProcessEvent ( pFnOnMemberShieldsDown, &OnMemberShieldsDown_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.MemberAdded
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nIndex                         ( CPF_Parm )

void ABioSquadPlayer::eventMemberAdded ( int nIndex )
{
	static UFunction* pFnMemberAdded = NULL;

	if ( ! pFnMemberAdded )
		pFnMemberAdded = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.MemberAdded" );

	ABioSquadPlayer_eventMemberAdded_Parms MemberAdded_Parms;
	MemberAdded_Parms.nIndex = nIndex;

	this->ProcessEvent ( pFnMemberAdded, &MemberAdded_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnPlayerSwitchStance
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FromState                      ( CPF_Parm )
// unsigned char                  ToState                        ( CPF_Parm )

bool ABioSquadPlayer::eventOnPlayerSwitchStance ( unsigned char FromState, unsigned char ToState )
{
	static UFunction* pFnOnPlayerSwitchStance = NULL;

	if ( ! pFnOnPlayerSwitchStance )
		pFnOnPlayerSwitchStance = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnPlayerSwitchStance" );

	ABioSquadPlayer_eventOnPlayerSwitchStance_Parms OnPlayerSwitchStance_Parms;
	OnPlayerSwitchStance_Parms.FromState = FromState;
	OnPlayerSwitchStance_Parms.ToState = ToState;

	this->ProcessEvent ( pFnOnPlayerSwitchStance, &OnPlayerSwitchStance_Parms, NULL );

	return OnPlayerSwitchStance_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadPlayer.OnSetAttackTarget
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   pPawn                          ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )

void ABioSquadPlayer::eventOnSetAttackTarget ( class APawn* pPawn, class AActor* Target )
{
	static UFunction* pFnOnSetAttackTarget = NULL;

	if ( ! pFnOnSetAttackTarget )
		pFnOnSetAttackTarget = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnSetAttackTarget" );

	ABioSquadPlayer_eventOnSetAttackTarget_Parms OnSetAttackTarget_Parms;
	OnSetAttackTarget_Parms.pPawn = pPawn;
	OnSetAttackTarget_Parms.Target = Target;

	this->ProcessEvent ( pFnOnSetAttackTarget, &OnSetAttackTarget_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnCombatEnd
// [0x00020002] 
// Parameters infos:

void ABioSquadPlayer::OnCombatEnd ( )
{
	static UFunction* pFnOnCombatEnd = NULL;

	if ( ! pFnOnCombatEnd )
		pFnOnCombatEnd = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnCombatEnd" );

	ABioSquadPlayer_execOnCombatEnd_Parms OnCombatEnd_Parms;

	this->ProcessEvent ( pFnOnCombatEnd, &OnCombatEnd_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnCombatBegin
// [0x00020002] 
// Parameters infos:

void ABioSquadPlayer::OnCombatBegin ( )
{
	static UFunction* pFnOnCombatBegin = NULL;

	if ( ! pFnOnCombatBegin )
		pFnOnCombatBegin = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnCombatBegin" );

	ABioSquadPlayer_execOnCombatBegin_Parms OnCombatBegin_Parms;

	this->ProcessEvent ( pFnOnCombatBegin, &OnCombatBegin_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnDeath
// [0x00020002] 
// Parameters infos:
// class APawn*                   pPawn                          ( CPF_Parm )
// class AController*             pKiller                        ( CPF_Parm )

void ABioSquadPlayer::OnDeath ( class APawn* pPawn, class AController* pKiller )
{
	static UFunction* pFnOnDeath = NULL;

	if ( ! pFnOnDeath )
		pFnOnDeath = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnDeath" );

	ABioSquadPlayer_execOnDeath_Parms OnDeath_Parms;
	OnDeath_Parms.pPawn = pPawn;
	OnDeath_Parms.pKiller = pKiller;

	this->ProcessEvent ( pFnOnDeath, &OnDeath_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.onMemberAbilityEnabledEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oPawn                          ( CPF_Parm )
// unsigned char                  eEnableType                    ( CPF_Parm )
// struct FName                   nmSubType                      ( CPF_Parm )

void ABioSquadPlayer::eventonMemberAbilityEnabledEvent ( class APawn* oPawn, unsigned char eEnableType, struct FName nmSubType )
{
	static UFunction* pFnonMemberAbilityEnabledEvent = NULL;

	if ( ! pFnonMemberAbilityEnabledEvent )
		pFnonMemberAbilityEnabledEvent = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.onMemberAbilityEnabledEvent" );

	ABioSquadPlayer_eventonMemberAbilityEnabledEvent_Parms onMemberAbilityEnabledEvent_Parms;
	onMemberAbilityEnabledEvent_Parms.oPawn = oPawn;
	onMemberAbilityEnabledEvent_Parms.eEnableType = eEnableType;
	memcpy ( &onMemberAbilityEnabledEvent_Parms.nmSubType, &nmSubType, 0x8 );

	this->ProcessEvent ( pFnonMemberAbilityEnabledEvent, &onMemberAbilityEnabledEvent_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.HearNoise
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   Who                            ( CPF_Parm )
// float                          Loudness                       ( CPF_Parm )
// class AActor*                  NoiseMaker                     ( CPF_Parm )
// struct FVector                 vNoiseLocation                 ( CPF_Parm )
// struct FName                   NoiseType                      ( CPF_OptionalParm | CPF_Parm )

void ABioSquadPlayer::eventHearNoise ( class APawn* Who, float Loudness, class AActor* NoiseMaker, struct FVector vNoiseLocation, struct FName NoiseType )
{
	static UFunction* pFnHearNoise = NULL;

	if ( ! pFnHearNoise )
		pFnHearNoise = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.HearNoise" );

	ABioSquadPlayer_eventHearNoise_Parms HearNoise_Parms;
	HearNoise_Parms.Who = Who;
	HearNoise_Parms.Loudness = Loudness;
	HearNoise_Parms.NoiseMaker = NoiseMaker;
	memcpy ( &HearNoise_Parms.vNoiseLocation, &vNoiseLocation, 0xC );
	memcpy ( &HearNoise_Parms.NoiseType, &NoiseType, 0x8 );

	this->ProcessEvent ( pFnHearNoise, &HearNoise_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.SeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   Who                            ( CPF_Parm )
// class APawn*                   Seen                           ( CPF_Parm )

void ABioSquadPlayer::eventSeePlayer ( class APawn* Who, class APawn* Seen )
{
	static UFunction* pFnSeePlayer = NULL;

	if ( ! pFnSeePlayer )
		pFnSeePlayer = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.SeePlayer" );

	ABioSquadPlayer_eventSeePlayer_Parms SeePlayer_Parms;
	SeePlayer_Parms.Who = Who;
	SeePlayer_Parms.Seen = Seen;

	this->ProcessEvent ( pFnSeePlayer, &SeePlayer_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnDamaged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class AController*             oInstigator                    ( CPF_Parm )
// float                          fDamage                        ( CPF_Parm )

void ABioSquadPlayer::eventOnDamaged ( class APawn* oMember, class AController* oInstigator, float fDamage )
{
	static UFunction* pFnOnDamaged = NULL;

	if ( ! pFnOnDamaged )
		pFnOnDamaged = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnDamaged" );

	ABioSquadPlayer_eventOnDamaged_Parms OnDamaged_Parms;
	OnDamaged_Parms.oMember = oMember;
	OnDamaged_Parms.oInstigator = oInstigator;
	OnDamaged_Parms.fDamage = fDamage;

	this->ProcessEvent ( pFnOnDamaged, &OnDamaged_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnCastAt
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class APawn*                   oAttacker                      ( CPF_Parm )
// struct FName                   nmPower                        ( CPF_Parm )

void ABioSquadPlayer::eventOnCastAt ( class APawn* oMember, class APawn* oAttacker, struct FName nmPower )
{
	static UFunction* pFnOnCastAt = NULL;

	if ( ! pFnOnCastAt )
		pFnOnCastAt = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnCastAt" );

	ABioSquadPlayer_eventOnCastAt_Parms OnCastAt_Parms;
	OnCastAt_Parms.oMember = oMember;
	OnCastAt_Parms.oAttacker = oAttacker;
	memcpy ( &OnCastAt_Parms.nmPower, &nmPower, 0x8 );

	this->ProcessEvent ( pFnOnCastAt, &OnCastAt_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.OnAttacked
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   oMember                        ( CPF_Parm )
// class APawn*                   oAttacker                      ( CPF_Parm )
// struct FName                   nmWeapon                       ( CPF_Parm )

void ABioSquadPlayer::eventOnAttacked ( class APawn* oMember, class APawn* oAttacker, struct FName nmWeapon )
{
	static UFunction* pFnOnAttacked = NULL;

	if ( ! pFnOnAttacked )
		pFnOnAttacked = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.OnAttacked" );

	ABioSquadPlayer_eventOnAttacked_Parms OnAttacked_Parms;
	OnAttacked_Parms.oMember = oMember;
	OnAttacked_Parms.oAttacker = oAttacker;
	memcpy ( &OnAttacked_Parms.nmWeapon, &nmWeapon, 0x8 );

	this->ProcessEvent ( pFnOnAttacked, &OnAttacked_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.MemberActionComplete_Combat
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class ABioPawn*                Who                            ( CPF_Parm )
// struct FName                   Action                         ( CPF_Parm )
// struct FName                   nmTechnique                    ( CPF_Parm )
// int                            nReason                        ( CPF_Parm )
// class AActor*                  oLastTarget                    ( CPF_Parm )
// float                          fReqStability                  ( CPF_Parm )
// float                          fAbortStability                ( CPF_Parm )
// float                          fReqRadius                     ( CPF_Parm )
// float                          fLastTimeOut                   ( CPF_Parm )

void ABioSquadPlayer::eventMemberActionComplete_Combat ( class ABioPawn* Who, struct FName Action, struct FName nmTechnique, int nReason, class AActor* oLastTarget, float fReqStability, float fAbortStability, float fReqRadius, float fLastTimeOut )
{
	static UFunction* pFnMemberActionComplete_Combat = NULL;

	if ( ! pFnMemberActionComplete_Combat )
		pFnMemberActionComplete_Combat = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.MemberActionComplete_Combat" );

	ABioSquadPlayer_eventMemberActionComplete_Combat_Parms MemberActionComplete_Combat_Parms;
	MemberActionComplete_Combat_Parms.Who = Who;
	memcpy ( &MemberActionComplete_Combat_Parms.Action, &Action, 0x8 );
	memcpy ( &MemberActionComplete_Combat_Parms.nmTechnique, &nmTechnique, 0x8 );
	MemberActionComplete_Combat_Parms.nReason = nReason;
	MemberActionComplete_Combat_Parms.oLastTarget = oLastTarget;
	MemberActionComplete_Combat_Parms.fReqStability = fReqStability;
	MemberActionComplete_Combat_Parms.fAbortStability = fAbortStability;
	MemberActionComplete_Combat_Parms.fReqRadius = fReqRadius;
	MemberActionComplete_Combat_Parms.fLastTimeOut = fLastTimeOut;

	this->ProcessEvent ( pFnMemberActionComplete_Combat, &MemberActionComplete_Combat_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.Leader_Changed
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   OldLeader                      ( CPF_Parm )
// class APawn*                   NewLeader                      ( CPF_Parm )

void ABioSquadPlayer::eventLeader_Changed ( class APawn* OldLeader, class APawn* NewLeader )
{
	static UFunction* pFnLeader_Changed = NULL;

	if ( ! pFnLeader_Changed )
		pFnLeader_Changed = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.Leader_Changed" );

	ABioSquadPlayer_eventLeader_Changed_Parms Leader_Changed_Parms;
	Leader_Changed_Parms.OldLeader = OldLeader;
	Leader_Changed_Parms.NewLeader = NewLeader;

	this->ProcessEvent ( pFnLeader_Changed, &Leader_Changed_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.Initialize
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ABioSquadPlayer::eventInitialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.Initialize" );

	ABioSquadPlayer_eventInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadPlayer.EvaluateTargets
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oMemberPawn                    ( CPF_Parm )

class ABioPawn* ABioSquadPlayer::EvaluateTargets ( class ABioPawn* oMemberPawn )
{
	static UFunction* pFnEvaluateTargets = NULL;

	if ( ! pFnEvaluateTargets )
		pFnEvaluateTargets = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.EvaluateTargets" );

	ABioSquadPlayer_execEvaluateTargets_Parms EvaluateTargets_Parms;
	EvaluateTargets_Parms.oMemberPawn = oMemberPawn;

	this->ProcessEvent ( pFnEvaluateTargets, &EvaluateTargets_Parms, NULL );

	return EvaluateTargets_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadPlayer.PickNewTarget
// [0x00020002] 
// Parameters infos:
// class ABioPawn*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oMemberPawn                    ( CPF_Parm )

class ABioPawn* ABioSquadPlayer::PickNewTarget ( class ABioPawn* oMemberPawn )
{
	static UFunction* pFnPickNewTarget = NULL;

	if ( ! pFnPickNewTarget )
		pFnPickNewTarget = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.PickNewTarget" );

	ABioSquadPlayer_execPickNewTarget_Parms PickNewTarget_Parms;
	PickNewTarget_Parms.oMemberPawn = oMemberPawn;

	this->ProcessEvent ( pFnPickNewTarget, &PickNewTarget_Parms, NULL );

	return PickNewTarget_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadPlayer.IsAttackTargetValid
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oMemberPawn                    ( CPF_Parm )
// class ABioPawn*                oAttackTarget                  ( CPF_Parm )
// unsigned long                  bTestShooting                  ( CPF_OptionalParm | CPF_Parm )

bool ABioSquadPlayer::IsAttackTargetValid ( class ABioPawn* oMemberPawn, class ABioPawn* oAttackTarget, unsigned long bTestShooting )
{
	static UFunction* pFnIsAttackTargetValid = NULL;

	if ( ! pFnIsAttackTargetValid )
		pFnIsAttackTargetValid = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.IsAttackTargetValid" );

	ABioSquadPlayer_execIsAttackTargetValid_Parms IsAttackTargetValid_Parms;
	IsAttackTargetValid_Parms.oMemberPawn = oMemberPawn;
	IsAttackTargetValid_Parms.oAttackTarget = oAttackTarget;
	IsAttackTargetValid_Parms.bTestShooting = bTestShooting;

	this->ProcessEvent ( pFnIsAttackTargetValid, &IsAttackTargetValid_Parms, NULL );

	return IsAttackTargetValid_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadPlayer.DoBestAction
// [0x00020002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )

void ABioSquadPlayer::DoBestAction ( class ABioAiController* oMember )
{
	static UFunction* pFnDoBestAction = NULL;

	if ( ! pFnDoBestAction )
		pFnDoBestAction = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadPlayer.DoBestAction" );

	ABioSquadPlayer_execDoBestAction_Parms DoBestAction_Parms;
	DoBestAction_Parms.oMember = oMember;

	this->ProcessEvent ( pFnDoBestAction, &DoBestAction_Parms, NULL );
};



class UClass* ABioSquadProxMine::pClassPointer = NULL;

class UClass* ABioSquadProxMine::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadProxMine" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadProxMine.CalculateLikelihoodArmed
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadProxMine::CalculateLikelihoodArmed ( )
{
	static UFunction* pFnCalculateLikelihoodArmed = NULL;

	if ( ! pFnCalculateLikelihoodArmed )
		pFnCalculateLikelihoodArmed = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadProxMine.CalculateLikelihoodArmed" );

	ABioSquadProxMine_execCalculateLikelihoodArmed_Parms CalculateLikelihoodArmed_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodArmed, &CalculateLikelihoodArmed_Parms, NULL );

	return CalculateLikelihoodArmed_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadProxMine.SquadMemberBeginCasting
// [0x00020002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )

void ABioSquadProxMine::SquadMemberBeginCasting ( class ABioAiController* oMember )
{
	static UFunction* pFnSquadMemberBeginCasting = NULL;

	if ( ! pFnSquadMemberBeginCasting )
		pFnSquadMemberBeginCasting = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadProxMine.SquadMemberBeginCasting" );

	ABioSquadProxMine_execSquadMemberBeginCasting_Parms SquadMemberBeginCasting_Parms;
	SquadMemberBeginCasting_Parms.oMember = oMember;

	this->ProcessEvent ( pFnSquadMemberBeginCasting, &SquadMemberBeginCasting_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadProxMine.CalculateLikelihood
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

float ABioSquadProxMine::CalculateLikelihood ( struct FName sStrategyName )
{
	static UFunction* pFnCalculateLikelihood = NULL;

	if ( ! pFnCalculateLikelihood )
		pFnCalculateLikelihood = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadProxMine.CalculateLikelihood" );

	ABioSquadProxMine_execCalculateLikelihood_Parms CalculateLikelihood_Parms;
	memcpy ( &CalculateLikelihood_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnCalculateLikelihood, &CalculateLikelihood_Parms, NULL );

	return CalculateLikelihood_Parms.ReturnValue;
};



class UClass* ABioSquadSitAndShoot::pClassPointer = NULL;

class UClass* ABioSquadSitAndShoot::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class SFXStrategicAI.BioSquadSitAndShoot" );

		return pClassPointer;
	};

// Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihoodAttacking
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadSitAndShoot::CalculateLikelihoodAttacking ( )
{
	static UFunction* pFnCalculateLikelihoodAttacking = NULL;

	if ( ! pFnCalculateLikelihoodAttacking )
		pFnCalculateLikelihoodAttacking = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihoodAttacking" );

	ABioSquadSitAndShoot_execCalculateLikelihoodAttacking_Parms CalculateLikelihoodAttacking_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodAttacking, &CalculateLikelihoodAttacking_Parms, NULL );

	return CalculateLikelihoodAttacking_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadSitAndShoot.SquadMemberAttackAnyTarget
// [0x00024002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )
// class APawn*                   oIgnore                        ( CPF_OptionalParm | CPF_Parm )

void ABioSquadSitAndShoot::SquadMemberAttackAnyTarget ( class ABioAiController* oMember, class APawn* oIgnore )
{
	static UFunction* pFnSquadMemberAttackAnyTarget = NULL;

	if ( ! pFnSquadMemberAttackAnyTarget )
		pFnSquadMemberAttackAnyTarget = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadSitAndShoot.SquadMemberAttackAnyTarget" );

	ABioSquadSitAndShoot_execSquadMemberAttackAnyTarget_Parms SquadMemberAttackAnyTarget_Parms;
	SquadMemberAttackAnyTarget_Parms.oMember = oMember;
	SquadMemberAttackAnyTarget_Parms.oIgnore = oIgnore;

	this->ProcessEvent ( pFnSquadMemberAttackAnyTarget, &SquadMemberAttackAnyTarget_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadSitAndShoot.SquadMemberAttackTarget
// [0x00020002] 
// Parameters infos:
// class ABioAiController*        oMember                        ( CPF_Parm )
// class APawn*                   oTarget                        ( CPF_Parm )

void ABioSquadSitAndShoot::SquadMemberAttackTarget ( class ABioAiController* oMember, class APawn* oTarget )
{
	static UFunction* pFnSquadMemberAttackTarget = NULL;

	if ( ! pFnSquadMemberAttackTarget )
		pFnSquadMemberAttackTarget = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadSitAndShoot.SquadMemberAttackTarget" );

	ABioSquadSitAndShoot_execSquadMemberAttackTarget_Parms SquadMemberAttackTarget_Parms;
	SquadMemberAttackTarget_Parms.oMember = oMember;
	SquadMemberAttackTarget_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnSquadMemberAttackTarget, &SquadMemberAttackTarget_Parms, NULL );
};

// Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihoodIdle
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ABioSquadSitAndShoot::CalculateLikelihoodIdle ( )
{
	static UFunction* pFnCalculateLikelihoodIdle = NULL;

	if ( ! pFnCalculateLikelihoodIdle )
		pFnCalculateLikelihoodIdle = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihoodIdle" );

	ABioSquadSitAndShoot_execCalculateLikelihoodIdle_Parms CalculateLikelihoodIdle_Parms;

	this->ProcessEvent ( pFnCalculateLikelihoodIdle, &CalculateLikelihoodIdle_Parms, NULL );

	return CalculateLikelihoodIdle_Parms.ReturnValue;
};

// Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihood
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   sStrategyName                  ( CPF_Parm )

float ABioSquadSitAndShoot::CalculateLikelihood ( struct FName sStrategyName )
{
	static UFunction* pFnCalculateLikelihood = NULL;

	if ( ! pFnCalculateLikelihood )
		pFnCalculateLikelihood = UObject::FindObject< UFunction > ( "Function SFXStrategicAI.BioSquadSitAndShoot.CalculateLikelihood" );

	ABioSquadSitAndShoot_execCalculateLikelihood_Parms CalculateLikelihood_Parms;
	memcpy ( &CalculateLikelihood_Parms.sStrategyName, &sStrategyName, 0x8 );

	this->ProcessEvent ( pFnCalculateLikelihood, &CalculateLikelihood_Parms, NULL );

	return CalculateLikelihood_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif