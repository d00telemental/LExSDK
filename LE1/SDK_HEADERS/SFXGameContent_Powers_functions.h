/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGameContent_Powers_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function SFXGameContent_Powers.BioPowerScriptDesign.AdjustInventoryResource
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )
// unsigned char                  eResource                      ( CPF_Parm )
// float                          fAmount                        ( CPF_Parm )

bool UBioPowerScriptDesign::AdjustInventoryResource ( class AActor* oActor, unsigned char eResource, float fAmount )
{
	static UFunction* pFnAdjustInventoryResource = NULL;

	if ( ! pFnAdjustInventoryResource )
		pFnAdjustInventoryResource = (UFunction*) UObject::GObjObjects()->Data[ 75995 ];

	UBioPowerScriptDesign_execAdjustInventoryResource_Parms AdjustInventoryResource_Parms;
	AdjustInventoryResource_Parms.oActor = oActor;
	AdjustInventoryResource_Parms.eResource = eResource;
	AdjustInventoryResource_Parms.fAmount = fAmount;

	this->ProcessEvent ( pFnAdjustInventoryResource, &AdjustInventoryResource_Parms, NULL );

	return AdjustInventoryResource_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectCarnageSetup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// int                            nNumberOfUses                  ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectCarnageSetup ( class AActor* oCaster, int nNumberOfUses, float fDuration )
{
	static UFunction* pFnEffectCarnageSetup = NULL;

	if ( ! pFnEffectCarnageSetup )
		pFnEffectCarnageSetup = (UFunction*) UObject::GObjObjects()->Data[ 75986 ];

	UBioPowerScriptDesign_execEffectCarnageSetup_Parms EffectCarnageSetup_Parms;
	EffectCarnageSetup_Parms.oCaster = oCaster;
	EffectCarnageSetup_Parms.nNumberOfUses = nNumberOfUses;
	EffectCarnageSetup_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectCarnageSetup, &EffectCarnageSetup_Parms, NULL );

	return EffectCarnageSetup_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.InstantRegenerateShield
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )
// float                          fPercentOfShieldRegained       ( CPF_Parm )

bool UBioPowerScriptDesign::InstantRegenerateShield ( class AActor* oActor, float fPercentOfShieldRegained )
{
	static UFunction* pFnInstantRegenerateShield = NULL;

	if ( ! pFnInstantRegenerateShield )
		pFnInstantRegenerateShield = (UFunction*) UObject::GObjObjects()->Data[ 75980 ];

	UBioPowerScriptDesign_execInstantRegenerateShield_Parms InstantRegenerateShield_Parms;
	InstantRegenerateShield_Parms.oActor = oActor;
	InstantRegenerateShield_Parms.fPercentOfShieldRegained = fPercentOfShieldRegained;

	this->ProcessEvent ( pFnInstantRegenerateShield, &InstantRegenerateShield_Parms, NULL );

	return InstantRegenerateShield_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IncreaseAllPowerCooldowns
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )
// float                          fPercentOfTotalToIncreaseBy    ( CPF_Parm )
// unsigned long                  bIncreaseTech                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIncreaseBiotic                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIncreaseWeapon                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIncreaseCombat                ( CPF_OptionalParm | CPF_Parm )

bool UBioPowerScriptDesign::IncreaseAllPowerCooldowns ( class AActor* oActor, float fPercentOfTotalToIncreaseBy, unsigned long bIncreaseTech, unsigned long bIncreaseBiotic, unsigned long bIncreaseWeapon, unsigned long bIncreaseCombat )
{
	static UFunction* pFnIncreaseAllPowerCooldowns = NULL;

	if ( ! pFnIncreaseAllPowerCooldowns )
		pFnIncreaseAllPowerCooldowns = (UFunction*) UObject::GObjObjects()->Data[ 75967 ];

	UBioPowerScriptDesign_execIncreaseAllPowerCooldowns_Parms IncreaseAllPowerCooldowns_Parms;
	IncreaseAllPowerCooldowns_Parms.oActor = oActor;
	IncreaseAllPowerCooldowns_Parms.fPercentOfTotalToIncreaseBy = fPercentOfTotalToIncreaseBy;
	IncreaseAllPowerCooldowns_Parms.bIncreaseTech = bIncreaseTech;
	IncreaseAllPowerCooldowns_Parms.bIncreaseBiotic = bIncreaseBiotic;
	IncreaseAllPowerCooldowns_Parms.bIncreaseWeapon = bIncreaseWeapon;
	IncreaseAllPowerCooldowns_Parms.bIncreaseCombat = bIncreaseCombat;

	this->ProcessEvent ( pFnIncreaseAllPowerCooldowns, &IncreaseAllPowerCooldowns_Parms, NULL );

	return IncreaseAllPowerCooldowns_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.ClearAllPowerCooldowns
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )

bool UBioPowerScriptDesign::ClearAllPowerCooldowns ( class AActor* oActor )
{
	static UFunction* pFnClearAllPowerCooldowns = NULL;

	if ( ! pFnClearAllPowerCooldowns )
		pFnClearAllPowerCooldowns = (UFunction*) UObject::GObjObjects()->Data[ 75961 ];

	UBioPowerScriptDesign_execClearAllPowerCooldowns_Parms ClearAllPowerCooldowns_Parms;
	ClearAllPowerCooldowns_Parms.oActor = oActor;

	this->ProcessEvent ( pFnClearAllPowerCooldowns, &ClearAllPowerCooldowns_Parms, NULL );

	return ClearAllPowerCooldowns_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectSingularity
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// struct FVector                 vSingularityLocation           ( CPF_Parm )
// float                          fForce                         ( CPF_Parm )
// float                          fForceInterval                 ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fBubbleRadius                  ( CPF_Parm )

bool UBioPowerScriptDesign::EffectSingularity ( class AActor* oCaster, class AActor* oImpacted, struct FVector vSingularityLocation, float fForce, float fForceInterval, float fDuration, float fBubbleRadius )
{
	static UFunction* pFnEffectSingularity = NULL;

	if ( ! pFnEffectSingularity )
		pFnEffectSingularity = (UFunction*) UObject::GObjObjects()->Data[ 75941 ];

	UBioPowerScriptDesign_execEffectSingularity_Parms EffectSingularity_Parms;
	EffectSingularity_Parms.oCaster = oCaster;
	EffectSingularity_Parms.oImpacted = oImpacted;
	memcpy ( &EffectSingularity_Parms.vSingularityLocation, &vSingularityLocation, 0xC );
	EffectSingularity_Parms.fForce = fForce;
	EffectSingularity_Parms.fForceInterval = fForceInterval;
	EffectSingularity_Parms.fDuration = fDuration;
	EffectSingularity_Parms.fBubbleRadius = fBubbleRadius;

	this->ProcessEvent ( pFnEffectSingularity, &EffectSingularity_Parms, NULL );

	return EffectSingularity_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectRagdoll
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// int                            nGroupID                       ( CPF_OptionalParm | CPF_Parm )

bool UBioPowerScriptDesign::EffectRagdoll ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGroupID )
{
	static UFunction* pFnEffectRagdoll = NULL;

	if ( ! pFnEffectRagdoll )
		pFnEffectRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 75931 ];

	UBioPowerScriptDesign_execEffectRagdoll_Parms EffectRagdoll_Parms;
	EffectRagdoll_Parms.oCaster = oCaster;
	EffectRagdoll_Parms.oImpacted = oImpacted;
	EffectRagdoll_Parms.fDuration = fDuration;
	EffectRagdoll_Parms.nGroupID = nGroupID;

	this->ProcessEvent ( pFnEffectRagdoll, &EffectRagdoll_Parms, NULL );

	return EffectRagdoll_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectEntrenchShield
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fShieldInc                     ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectEntrenchShield ( class AActor* oCaster, class AActor* oImpacted, float fShieldInc, float fDuration )
{
	static UFunction* pFnEffectEntrenchShield = NULL;

	if ( ! pFnEffectEntrenchShield )
		pFnEffectEntrenchShield = (UFunction*) UObject::GObjObjects()->Data[ 75922 ];

	UBioPowerScriptDesign_execEffectEntrenchShield_Parms EffectEntrenchShield_Parms;
	EffectEntrenchShield_Parms.oCaster = oCaster;
	EffectEntrenchShield_Parms.oImpacted = oImpacted;
	EffectEntrenchShield_Parms.fShieldInc = fShieldInc;
	EffectEntrenchShield_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectEntrenchShield, &EffectEntrenchShield_Parms, NULL );

	return EffectEntrenchShield_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectRegenerateShield
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fAmountPerInterval             ( CPF_Parm )
// float                          fInterval                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectRegenerateShield ( class AActor* oCaster, class AActor* oImpacted, float fAmountPerInterval, float fInterval, float fDuration )
{
	static UFunction* pFnEffectRegenerateShield = NULL;

	if ( ! pFnEffectRegenerateShield )
		pFnEffectRegenerateShield = (UFunction*) UObject::GObjObjects()->Data[ 75913 ];

	UBioPowerScriptDesign_execEffectRegenerateShield_Parms EffectRegenerateShield_Parms;
	EffectRegenerateShield_Parms.oCaster = oCaster;
	EffectRegenerateShield_Parms.oImpacted = oImpacted;
	EffectRegenerateShield_Parms.fAmountPerInterval = fAmountPerInterval;
	EffectRegenerateShield_Parms.fInterval = fInterval;
	EffectRegenerateShield_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectRegenerateShield, &EffectRegenerateShield_Parms, NULL );

	return EffectRegenerateShield_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDamageVulnerability
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDamageMultiplier              ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectDamageVulnerability ( class AActor* oCaster, class AActor* oImpacted, float fDamageMultiplier, float fDuration )
{
	static UFunction* pFnEffectDamageVulnerability = NULL;

	if ( ! pFnEffectDamageVulnerability )
		pFnEffectDamageVulnerability = (UFunction*) UObject::GObjObjects()->Data[ 75905 ];

	UBioPowerScriptDesign_execEffectDamageVulnerability_Parms EffectDamageVulnerability_Parms;
	EffectDamageVulnerability_Parms.oCaster = oCaster;
	EffectDamageVulnerability_Parms.oImpacted = oImpacted;
	EffectDamageVulnerability_Parms.fDamageMultiplier = fDamageMultiplier;
	EffectDamageVulnerability_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectDamageVulnerability, &EffectDamageVulnerability_Parms, NULL );

	return EffectDamageVulnerability_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectRegen
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fHealingFactor                 ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectRegen ( class AActor* oCaster, float fHealingFactor, float fDuration )
{
	static UFunction* pFnEffectRegen = NULL;

	if ( ! pFnEffectRegen )
		pFnEffectRegen = (UFunction*) UObject::GObjObjects()->Data[ 75898 ];

	UBioPowerScriptDesign_execEffectRegen_Parms EffectRegen_Parms;
	EffectRegen_Parms.oCaster = oCaster;
	EffectRegen_Parms.fHealingFactor = fHealingFactor;
	EffectRegen_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectRegen, &EffectRegen_Parms, NULL );

	return EffectRegen_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectHealInstant
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fHealth                        ( CPF_Parm )
// float                          fToxic                         ( CPF_Parm )

bool UBioPowerScriptDesign::EffectHealInstant ( class AActor* oCaster, class AActor* oImpacted, float fHealth, float fToxic )
{
	static UFunction* pFnEffectHealInstant = NULL;

	if ( ! pFnEffectHealInstant )
		pFnEffectHealInstant = (UFunction*) UObject::GObjObjects()->Data[ 75890 ];

	UBioPowerScriptDesign_execEffectHealInstant_Parms EffectHealInstant_Parms;
	EffectHealInstant_Parms.oCaster = oCaster;
	EffectHealInstant_Parms.oImpacted = oImpacted;
	EffectHealInstant_Parms.fHealth = fHealth;
	EffectHealInstant_Parms.fToxic = fToxic;

	this->ProcessEvent ( pFnEffectHealInstant, &EffectHealInstant_Parms, NULL );

	return EffectHealInstant_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectHeal
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fHealthPerInterval             ( CPF_Parm )
// float                          fToxicPerInterval              ( CPF_Parm )
// float                          fInterval                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectHeal ( class AActor* oCaster, class AActor* oImpacted, float fHealthPerInterval, float fToxicPerInterval, float fInterval, float fDuration )
{
	static UFunction* pFnEffectHeal = NULL;

	if ( ! pFnEffectHeal )
		pFnEffectHeal = (UFunction*) UObject::GObjObjects()->Data[ 75880 ];

	UBioPowerScriptDesign_execEffectHeal_Parms EffectHeal_Parms;
	EffectHeal_Parms.oCaster = oCaster;
	EffectHeal_Parms.oImpacted = oImpacted;
	EffectHeal_Parms.fHealthPerInterval = fHealthPerInterval;
	EffectHeal_Parms.fToxicPerInterval = fToxicPerInterval;
	EffectHeal_Parms.fInterval = fInterval;
	EffectHeal_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectHeal, &EffectHeal_Parms, NULL );

	return EffectHeal_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectCombatBoost
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fDmgDurBonus                   ( CPF_Parm )
// float                          fRegenBonus                    ( CPF_Parm )
// float                          fSuppResistBonus               ( CPF_Parm )
// float                          fMobilityBonus                 ( CPF_Parm )

bool UBioPowerScriptDesign::EffectCombatBoost ( class AActor* oCaster, class AActor* oImpacted, float fDuration, float fDmgDurBonus, float fRegenBonus, float fSuppResistBonus, float fMobilityBonus )
{
	static UFunction* pFnEffectCombatBoost = NULL;

	if ( ! pFnEffectCombatBoost )
		pFnEffectCombatBoost = (UFunction*) UObject::GObjObjects()->Data[ 75869 ];

	UBioPowerScriptDesign_execEffectCombatBoost_Parms EffectCombatBoost_Parms;
	EffectCombatBoost_Parms.oCaster = oCaster;
	EffectCombatBoost_Parms.oImpacted = oImpacted;
	EffectCombatBoost_Parms.fDuration = fDuration;
	EffectCombatBoost_Parms.fDmgDurBonus = fDmgDurBonus;
	EffectCombatBoost_Parms.fRegenBonus = fRegenBonus;
	EffectCombatBoost_Parms.fSuppResistBonus = fSuppResistBonus;
	EffectCombatBoost_Parms.fMobilityBonus = fMobilityBonus;

	this->ProcessEvent ( pFnEffectCombatBoost, &EffectCombatBoost_Parms, NULL );

	return EffectCombatBoost_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectImmunity
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fDamageResistBonus             ( CPF_Parm )

bool UBioPowerScriptDesign::EffectImmunity ( class AActor* oCaster, float fDuration, float fDamageResistBonus )
{
	static UFunction* pFnEffectImmunity = NULL;

	if ( ! pFnEffectImmunity )
		pFnEffectImmunity = (UFunction*) UObject::GObjObjects()->Data[ 75862 ];

	UBioPowerScriptDesign_execEffectImmunity_Parms EffectImmunity_Parms;
	EffectImmunity_Parms.oCaster = oCaster;
	EffectImmunity_Parms.fDuration = fDuration;
	EffectImmunity_Parms.fDamageResistBonus = fDamageResistBonus;

	this->ProcessEvent ( pFnEffectImmunity, &EffectImmunity_Parms, NULL );

	return EffectImmunity_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectSniperCritical
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fDamageBonus                   ( CPF_Parm )
// float                          fStunDuration                  ( CPF_OptionalParm | CPF_Parm )
// float                          fMaxDriftRed                   ( CPF_OptionalParm | CPF_Parm )
// float                          fMinDriftRed                   ( CPF_OptionalParm | CPF_Parm )

bool UBioPowerScriptDesign::EffectSniperCritical ( class AActor* oCaster, float fDuration, float fDamageBonus, float fStunDuration, float fMaxDriftRed, float fMinDriftRed )
{
	static UFunction* pFnEffectSniperCritical = NULL;

	if ( ! pFnEffectSniperCritical )
		pFnEffectSniperCritical = (UFunction*) UObject::GObjObjects()->Data[ 75847 ];

	UBioPowerScriptDesign_execEffectSniperCritical_Parms EffectSniperCritical_Parms;
	EffectSniperCritical_Parms.oCaster = oCaster;
	EffectSniperCritical_Parms.fDuration = fDuration;
	EffectSniperCritical_Parms.fDamageBonus = fDamageBonus;
	EffectSniperCritical_Parms.fStunDuration = fStunDuration;
	EffectSniperCritical_Parms.fMaxDriftRed = fMaxDriftRed;
	EffectSniperCritical_Parms.fMinDriftRed = fMinDriftRed;

	this->ProcessEvent ( pFnEffectSniperCritical, &EffectSniperCritical_Parms, NULL );

	return EffectSniperCritical_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectOverkill
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fSuppDamage                    ( CPF_Parm )
// float                          fKickbackRed                   ( CPF_Parm )
// float                          fHeatRed                       ( CPF_Parm )
// float                          fDamageBonus                   ( CPF_Parm )

bool UBioPowerScriptDesign::EffectOverkill ( class AActor* oCaster, float fDuration, float fSuppDamage, float fKickbackRed, float fHeatRed, float fDamageBonus )
{
	static UFunction* pFnEffectOverkill = NULL;

	if ( ! pFnEffectOverkill )
		pFnEffectOverkill = (UFunction*) UObject::GObjObjects()->Data[ 75836 ];

	UBioPowerScriptDesign_execEffectOverkill_Parms EffectOverkill_Parms;
	EffectOverkill_Parms.oCaster = oCaster;
	EffectOverkill_Parms.fDuration = fDuration;
	EffectOverkill_Parms.fSuppDamage = fSuppDamage;
	EffectOverkill_Parms.fKickbackRed = fKickbackRed;
	EffectOverkill_Parms.fHeatRed = fHeatRed;
	EffectOverkill_Parms.fDamageBonus = fDamageBonus;

	this->ProcessEvent ( pFnEffectOverkill, &EffectOverkill_Parms, NULL );

	return EffectOverkill_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectMarksman
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fMaxDriftRed                   ( CPF_Parm )
// float                          fMinDriftRed                   ( CPF_Parm )
// float                          fDamageBonus                   ( CPF_Parm )
// float                          fRPSBonus                      ( CPF_Parm )
// float                          fHeatRed                       ( CPF_Parm )

bool UBioPowerScriptDesign::EffectMarksman ( class AActor* oCaster, float fDuration, float fMaxDriftRed, float fMinDriftRed, float fDamageBonus, float fRPSBonus, float fHeatRed )
{
	static UFunction* pFnEffectMarksman = NULL;

	if ( ! pFnEffectMarksman )
		pFnEffectMarksman = (UFunction*) UObject::GObjObjects()->Data[ 75824 ];

	UBioPowerScriptDesign_execEffectMarksman_Parms EffectMarksman_Parms;
	EffectMarksman_Parms.oCaster = oCaster;
	EffectMarksman_Parms.fDuration = fDuration;
	EffectMarksman_Parms.fMaxDriftRed = fMaxDriftRed;
	EffectMarksman_Parms.fMinDriftRed = fMinDriftRed;
	EffectMarksman_Parms.fDamageBonus = fDamageBonus;
	EffectMarksman_Parms.fRPSBonus = fRPSBonus;
	EffectMarksman_Parms.fHeatRed = fHeatRed;

	this->ProcessEvent ( pFnEffectMarksman, &EffectMarksman_Parms, NULL );

	return EffectMarksman_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectCorrosion
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCorrosion                     ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectCorrosion ( class AActor* oImpacted, class AActor* oCaster, float fCorrosion, float fDuration )
{
	static UFunction* pFnEffectCorrosion = NULL;

	if ( ! pFnEffectCorrosion )
		pFnEffectCorrosion = (UFunction*) UObject::GObjObjects()->Data[ 75816 ];

	UBioPowerScriptDesign_execEffectCorrosion_Parms EffectCorrosion_Parms;
	EffectCorrosion_Parms.oImpacted = oImpacted;
	EffectCorrosion_Parms.oCaster = oCaster;
	EffectCorrosion_Parms.fCorrosion = fCorrosion;
	EffectCorrosion_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectCorrosion, &EffectCorrosion_Parms, NULL );

	return EffectCorrosion_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectSuppressingFire
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fDriftInc                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectSuppressingFire ( class AActor* oCaster, float fDuration, float fDriftInc )
{
	static UFunction* pFnEffectSuppressingFire = NULL;

	if ( ! pFnEffectSuppressingFire )
		pFnEffectSuppressingFire = (UFunction*) UObject::GObjObjects()->Data[ 75809 ];

	UBioPowerScriptDesign_execEffectSuppressingFire_Parms EffectSuppressingFire_Parms;
	EffectSuppressingFire_Parms.oCaster = oCaster;
	EffectSuppressingFire_Parms.fDuration = fDuration;
	EffectSuppressingFire_Parms.fDriftInc = fDriftInc;

	this->ProcessEvent ( pFnEffectSuppressingFire, &EffectSuppressingFire_Parms, NULL );

	return EffectSuppressingFire_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectZeroGLift
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fLiftForce                     ( CPF_Parm )
// float                          fLiftDistance                  ( CPF_Parm )
// float                          fDeceleration                  ( CPF_Parm )
// float                          fMinVelocity                   ( CPF_Parm )

bool UBioPowerScriptDesign::EffectZeroGLift ( class AActor* oImpacted, class AActor* oCaster, float fDuration, float fLiftForce, float fLiftDistance, float fDeceleration, float fMinVelocity )
{
	static UFunction* pFnEffectZeroGLift = NULL;

	if ( ! pFnEffectZeroGLift )
		pFnEffectZeroGLift = (UFunction*) UObject::GObjObjects()->Data[ 75786 ];

	UBioPowerScriptDesign_execEffectZeroGLift_Parms EffectZeroGLift_Parms;
	EffectZeroGLift_Parms.oImpacted = oImpacted;
	EffectZeroGLift_Parms.oCaster = oCaster;
	EffectZeroGLift_Parms.fDuration = fDuration;
	EffectZeroGLift_Parms.fLiftForce = fLiftForce;
	EffectZeroGLift_Parms.fLiftDistance = fLiftDistance;
	EffectZeroGLift_Parms.fDeceleration = fDeceleration;
	EffectZeroGLift_Parms.fMinVelocity = fMinVelocity;

	this->ProcessEvent ( pFnEffectZeroGLift, &EffectZeroGLift_Parms, NULL );

	return EffectZeroGLift_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectAIHacking
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectAIHacking ( class AActor* oCaster, class AActor* oImpacted, float fDuration )
{
	static UFunction* pFnEffectAIHacking = NULL;

	if ( ! pFnEffectAIHacking )
		pFnEffectAIHacking = (UFunction*) UObject::GObjObjects()->Data[ 75777 ];

	UBioPowerScriptDesign_execEffectAIHacking_Parms EffectAIHacking_Parms;
	EffectAIHacking_Parms.oCaster = oCaster;
	EffectAIHacking_Parms.oImpacted = oImpacted;
	EffectAIHacking_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnEffectAIHacking, &EffectAIHacking_Parms, NULL );

	return EffectAIHacking_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDisablePowers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// int                            nGFXGroup                      ( CPF_Parm )
// unsigned long                  bDisableTech                   ( CPF_Parm )
// unsigned long                  bDisableBiotics                ( CPF_Parm )
// unsigned long                  bDisableWeaponPowers           ( CPF_Parm )
// unsigned long                  bDisableCombat                 ( CPF_Parm )

bool UBioPowerScriptDesign::EffectDisablePowers ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, unsigned long bDisableTech, unsigned long bDisableBiotics, unsigned long bDisableWeaponPowers, unsigned long bDisableCombat )
{
	static UFunction* pFnEffectDisablePowers = NULL;

	if ( ! pFnEffectDisablePowers )
		pFnEffectDisablePowers = (UFunction*) UObject::GObjObjects()->Data[ 75765 ];

	UBioPowerScriptDesign_execEffectDisablePowers_Parms EffectDisablePowers_Parms;
	EffectDisablePowers_Parms.oCaster = oCaster;
	EffectDisablePowers_Parms.oImpacted = oImpacted;
	EffectDisablePowers_Parms.fDuration = fDuration;
	EffectDisablePowers_Parms.nGFXGroup = nGFXGroup;
	EffectDisablePowers_Parms.bDisableTech = bDisableTech;
	EffectDisablePowers_Parms.bDisableBiotics = bDisableBiotics;
	EffectDisablePowers_Parms.bDisableWeaponPowers = bDisableWeaponPowers;
	EffectDisablePowers_Parms.bDisableCombat = bDisableCombat;

	this->ProcessEvent ( pFnEffectDisablePowers, &EffectDisablePowers_Parms, NULL );

	return EffectDisablePowers_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectOverheatWeapons
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// float                          fHeat                          ( CPF_Parm )

bool UBioPowerScriptDesign::EffectOverheatWeapons ( class AActor* oCaster, class AActor* oImpacted, float fDuration, float fHeat )
{
	static UFunction* pFnEffectOverheatWeapons = NULL;

	if ( ! pFnEffectOverheatWeapons )
		pFnEffectOverheatWeapons = (UFunction*) UObject::GObjObjects()->Data[ 75754 ];

	UBioPowerScriptDesign_execEffectOverheatWeapons_Parms EffectOverheatWeapons_Parms;
	EffectOverheatWeapons_Parms.oCaster = oCaster;
	EffectOverheatWeapons_Parms.oImpacted = oImpacted;
	EffectOverheatWeapons_Parms.fDuration = fDuration;
	EffectOverheatWeapons_Parms.fHeat = fHeat;

	this->ProcessEvent ( pFnEffectOverheatWeapons, &EffectOverheatWeapons_Parms, NULL );

	return EffectOverheatWeapons_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDisableWeapons
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// int                            nGFXGroup                      ( CPF_Parm )

bool UBioPowerScriptDesign::EffectDisableWeapons ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup )
{
	static UFunction* pFnEffectDisableWeapons = NULL;

	if ( ! pFnEffectDisableWeapons )
		pFnEffectDisableWeapons = (UFunction*) UObject::GObjObjects()->Data[ 75746 ];

	UBioPowerScriptDesign_execEffectDisableWeapons_Parms EffectDisableWeapons_Parms;
	EffectDisableWeapons_Parms.oCaster = oCaster;
	EffectDisableWeapons_Parms.oImpacted = oImpacted;
	EffectDisableWeapons_Parms.fDuration = fDuration;
	EffectDisableWeapons_Parms.nGFXGroup = nGFXGroup;

	this->ProcessEvent ( pFnEffectDisableWeapons, &EffectDisableWeapons_Parms, NULL );

	return EffectDisableWeapons_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDisableActions
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// int                            nGFXGroup                      ( CPF_Parm )
// unsigned long                  bDisableActionQueue            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDisableMovementStack          ( CPF_OptionalParm | CPF_Parm )

bool UBioPowerScriptDesign::EffectDisableActions ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, unsigned long bDisableActionQueue, unsigned long bDisableMovementStack )
{
	static UFunction* pFnEffectDisableActions = NULL;

	if ( ! pFnEffectDisableActions )
		pFnEffectDisableActions = (UFunction*) UObject::GObjObjects()->Data[ 75736 ];

	UBioPowerScriptDesign_execEffectDisableActions_Parms EffectDisableActions_Parms;
	EffectDisableActions_Parms.oCaster = oCaster;
	EffectDisableActions_Parms.oImpacted = oImpacted;
	EffectDisableActions_Parms.fDuration = fDuration;
	EffectDisableActions_Parms.nGFXGroup = nGFXGroup;
	EffectDisableActions_Parms.bDisableActionQueue = bDisableActionQueue;
	EffectDisableActions_Parms.bDisableMovementStack = bDisableMovementStack;

	this->ProcessEvent ( pFnEffectDisableActions, &EffectDisableActions_Parms, NULL );

	return EffectDisableActions_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectAdjustStability
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioPawn*                oTarget                        ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fAmount                        ( CPF_Parm )
// float                          fApplyInterval                 ( CPF_Parm )
// float                          fTotalTime                     ( CPF_Parm )

bool UBioPowerScriptDesign::EffectAdjustStability ( class ABioPawn* oTarget, class AActor* oCaster, float fAmount, float fApplyInterval, float fTotalTime )
{
	static UFunction* pFnEffectAdjustStability = NULL;

	if ( ! pFnEffectAdjustStability )
		pFnEffectAdjustStability = (UFunction*) UObject::GObjObjects()->Data[ 75727 ];

	UBioPowerScriptDesign_execEffectAdjustStability_Parms EffectAdjustStability_Parms;
	EffectAdjustStability_Parms.oTarget = oTarget;
	EffectAdjustStability_Parms.oCaster = oCaster;
	EffectAdjustStability_Parms.fAmount = fAmount;
	EffectAdjustStability_Parms.fApplyInterval = fApplyInterval;
	EffectAdjustStability_Parms.fTotalTime = fTotalTime;

	this->ProcessEvent ( pFnEffectAdjustStability, &EffectAdjustStability_Parms, NULL );

	return EffectAdjustStability_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDamageOverTime
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDamagePerInterval             ( CPF_Parm )
// struct FVector                 vMomentumPerInterval           ( CPF_Parm )
// class UBioDamageType*          pDamage                        ( CPF_Parm )
// float                          fInterval                      ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// int                            nGroup                         ( CPF_OptionalParm | CPF_Parm )

bool UBioPowerScriptDesign::EffectDamageOverTime ( class AActor* oImpacted, class AActor* oCaster, float fDamagePerInterval, struct FVector vMomentumPerInterval, class UBioDamageType* pDamage, float fInterval, float fDuration, int nGroup )
{
	static UFunction* pFnEffectDamageOverTime = NULL;

	if ( ! pFnEffectDamageOverTime )
		pFnEffectDamageOverTime = (UFunction*) UObject::GObjObjects()->Data[ 75713 ];

	UBioPowerScriptDesign_execEffectDamageOverTime_Parms EffectDamageOverTime_Parms;
	EffectDamageOverTime_Parms.oImpacted = oImpacted;
	EffectDamageOverTime_Parms.oCaster = oCaster;
	EffectDamageOverTime_Parms.fDamagePerInterval = fDamagePerInterval;
	memcpy ( &EffectDamageOverTime_Parms.vMomentumPerInterval, &vMomentumPerInterval, 0xC );
	EffectDamageOverTime_Parms.pDamage = pDamage;
	EffectDamageOverTime_Parms.fInterval = fInterval;
	EffectDamageOverTime_Parms.fDuration = fDuration;
	EffectDamageOverTime_Parms.nGroup = nGroup;

	this->ProcessEvent ( pFnEffectDamageOverTime, &EffectDamageOverTime_Parms, NULL );

	return EffectDamageOverTime_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectTakeDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDamage                        ( CPF_Parm )
// struct FVector                 vMomentum                      ( CPF_Parm )
// class UBioDamageType*          pDamage                        ( CPF_Parm )

bool UBioPowerScriptDesign::EffectTakeDamage ( class AActor* oImpacted, class AActor* oCaster, float fDamage, struct FVector vMomentum, class UBioDamageType* pDamage )
{
	static UFunction* pFnEffectTakeDamage = NULL;

	if ( ! pFnEffectTakeDamage )
		pFnEffectTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 75700 ];

	UBioPowerScriptDesign_execEffectTakeDamage_Parms EffectTakeDamage_Parms;
	EffectTakeDamage_Parms.oImpacted = oImpacted;
	EffectTakeDamage_Parms.oCaster = oCaster;
	EffectTakeDamage_Parms.fDamage = fDamage;
	memcpy ( &EffectTakeDamage_Parms.vMomentum, &vMomentum, 0xC );
	EffectTakeDamage_Parms.pDamage = pDamage;

	this->ProcessEvent ( pFnEffectTakeDamage, &EffectTakeDamage_Parms, NULL );

	return EffectTakeDamage_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.SpawnBeacon
// [0x00024002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UBioActorBehavior*       oCasterBehavior                ( CPF_Parm )
// struct FString                 sBeaconActorType               ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 vLocation                      ( CPF_Parm )
// struct FRotator                vFacing                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// unsigned long                  bFloatingBeacon                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bSnapToFloor                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bSpawnAsProxMine               ( CPF_OptionalParm | CPF_Parm )
// float                          fSquadActivateDelay            ( CPF_OptionalParm | CPF_Parm )
// float                          fRadiusMulti                   ( CPF_OptionalParm | CPF_Parm )
// float                          fDamageMulti                   ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  oOwner                         ( CPF_OptionalParm | CPF_Parm )

class AActor* UBioPowerScriptDesign::SpawnBeacon ( class UBioActorBehavior* oCasterBehavior, struct FString sBeaconActorType, struct FVector vLocation, struct FRotator vFacing, float fDuration, unsigned long bFloatingBeacon, unsigned long bSnapToFloor, unsigned long bSpawnAsProxMine, float fSquadActivateDelay, float fRadiusMulti, float fDamageMulti, class AActor* oOwner )
{
	static UFunction* pFnSpawnBeacon = NULL;

	if ( ! pFnSpawnBeacon )
		pFnSpawnBeacon = (UFunction*) UObject::GObjObjects()->Data[ 75672 ];

	UBioPowerScriptDesign_execSpawnBeacon_Parms SpawnBeacon_Parms;
	SpawnBeacon_Parms.oCasterBehavior = oCasterBehavior;
	memcpy ( &SpawnBeacon_Parms.sBeaconActorType, &sBeaconActorType, 0x10 );
	memcpy ( &SpawnBeacon_Parms.vLocation, &vLocation, 0xC );
	memcpy ( &SpawnBeacon_Parms.vFacing, &vFacing, 0xC );
	SpawnBeacon_Parms.fDuration = fDuration;
	SpawnBeacon_Parms.bFloatingBeacon = bFloatingBeacon;
	SpawnBeacon_Parms.bSnapToFloor = bSnapToFloor;
	SpawnBeacon_Parms.bSpawnAsProxMine = bSpawnAsProxMine;
	SpawnBeacon_Parms.fSquadActivateDelay = fSquadActivateDelay;
	SpawnBeacon_Parms.fRadiusMulti = fRadiusMulti;
	SpawnBeacon_Parms.fDamageMulti = fDamageMulti;
	SpawnBeacon_Parms.oOwner = oOwner;

	this->ProcessEvent ( pFnSpawnBeacon, &SpawnBeacon_Parms, NULL );

	return SpawnBeacon_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.SpawnBarrier
// [0x00024002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UBioActorBehavior*       oCasterBehavior                ( CPF_Parm )
// struct FString                 sBarrierActorType              ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 vLocation                      ( CPF_Parm )
// struct FRotator                vFacing                        ( CPF_Parm )
// float                          fHealth                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )
// unsigned long                  bSnapToFloor                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAddToSquadCover               ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  oOwner                         ( CPF_OptionalParm | CPF_Parm )

class AActor* UBioPowerScriptDesign::SpawnBarrier ( class UBioActorBehavior* oCasterBehavior, struct FString sBarrierActorType, struct FVector vLocation, struct FRotator vFacing, float fHealth, float fDuration, unsigned long bSnapToFloor, unsigned long bAddToSquadCover, class AActor* oOwner )
{
	static UFunction* pFnSpawnBarrier = NULL;

	if ( ! pFnSpawnBarrier )
		pFnSpawnBarrier = (UFunction*) UObject::GObjObjects()->Data[ 75657 ];

	UBioPowerScriptDesign_execSpawnBarrier_Parms SpawnBarrier_Parms;
	SpawnBarrier_Parms.oCasterBehavior = oCasterBehavior;
	memcpy ( &SpawnBarrier_Parms.sBarrierActorType, &sBarrierActorType, 0x10 );
	memcpy ( &SpawnBarrier_Parms.vLocation, &vLocation, 0xC );
	memcpy ( &SpawnBarrier_Parms.vFacing, &vFacing, 0xC );
	SpawnBarrier_Parms.fHealth = fHealth;
	SpawnBarrier_Parms.fDuration = fDuration;
	SpawnBarrier_Parms.bSnapToFloor = bSnapToFloor;
	SpawnBarrier_Parms.bAddToSquadCover = bAddToSquadCover;
	SpawnBarrier_Parms.oOwner = oOwner;

	this->ProcessEvent ( pFnSpawnBarrier, &SpawnBarrier_Parms, NULL );

	return SpawnBarrier_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.WeaponPowerActivated
// [0x00020002] 
// Parameters infos:
// class AActor*                  Caster                         ( CPF_Parm )
// unsigned long                  bNeedsRetrigger                ( CPF_Parm )

void UBioPowerScriptDesign::WeaponPowerActivated ( class AActor* Caster, unsigned long bNeedsRetrigger )
{
	static UFunction* pFnWeaponPowerActivated = NULL;

	if ( ! pFnWeaponPowerActivated )
		pFnWeaponPowerActivated = (UFunction*) UObject::GObjObjects()->Data[ 75651 ];

	UBioPowerScriptDesign_execWeaponPowerActivated_Parms WeaponPowerActivated_Parms;
	WeaponPowerActivated_Parms.Caster = Caster;
	WeaponPowerActivated_Parms.bNeedsRetrigger = bNeedsRetrigger;

	this->ProcessEvent ( pFnWeaponPowerActivated, &WeaponPowerActivated_Parms, NULL );
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.ShouldIncrementPowerUsage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Caster                         ( CPF_Parm )

bool UBioPowerScriptDesign::ShouldIncrementPowerUsage ( class AActor* Caster )
{
	static UFunction* pFnShouldIncrementPowerUsage = NULL;

	if ( ! pFnShouldIncrementPowerUsage )
		pFnShouldIncrementPowerUsage = (UFunction*) UObject::GObjObjects()->Data[ 75646 ];

	UBioPowerScriptDesign_execShouldIncrementPowerUsage_Parms ShouldIncrementPowerUsage_Parms;
	ShouldIncrementPowerUsage_Parms.Caster = Caster;

	this->ProcessEvent ( pFnShouldIncrementPowerUsage, &ShouldIncrementPowerUsage_Parms, NULL );

	return ShouldIncrementPowerUsage_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetFactionRelationship
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// class AActor*                  oTarget                        ( CPF_Parm )

unsigned char UBioPowerScriptDesign::GetFactionRelationship ( class AActor* oCaster, class AActor* oTarget )
{
	static UFunction* pFnGetFactionRelationship = NULL;

	if ( ! pFnGetFactionRelationship )
		pFnGetFactionRelationship = (UFunction*) UObject::GObjObjects()->Data[ 75638 ];

	UBioPowerScriptDesign_execGetFactionRelationship_Parms GetFactionRelationship_Parms;
	GetFactionRelationship_Parms.oCaster = oCaster;
	GetFactionRelationship_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnGetFactionRelationship, &GetFactionRelationship_Parms, NULL );

	return GetFactionRelationship_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetTechResistance
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

float UBioPowerScriptDesign::GetTechResistance ( class AActor* oTarget )
{
	static UFunction* pFnGetTechResistance = NULL;

	if ( ! pFnGetTechResistance )
		pFnGetTechResistance = (UFunction*) UObject::GObjObjects()->Data[ 75621 ];

	UBioPowerScriptDesign_execGetTechResistance_Parms GetTechResistance_Parms;
	GetTechResistance_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnGetTechResistance, &GetTechResistance_Parms, NULL );

	return GetTechResistance_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetBioticResistance
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

float UBioPowerScriptDesign::GetBioticResistance ( class AActor* oTarget )
{
	static UFunction* pFnGetBioticResistance = NULL;

	if ( ! pFnGetBioticResistance )
		pFnGetBioticResistance = (UFunction*) UObject::GObjObjects()->Data[ 75622 ];

	UBioPowerScriptDesign_execGetBioticResistance_Parms GetBioticResistance_Parms;
	GetBioticResistance_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnGetBioticResistance, &GetBioticResistance_Parms, NULL );

	return GetBioticResistance_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetTargetResistance
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )

float UBioPowerScriptDesign::GetTargetResistance ( class AActor* oTarget )
{
	static UFunction* pFnGetTargetResistance = NULL;

	if ( ! pFnGetTargetResistance )
		pFnGetTargetResistance = (UFunction*) UObject::GObjObjects()->Data[ 75618 ];

	UBioPowerScriptDesign_execGetTargetResistance_Parms GetTargetResistance_Parms;
	GetTargetResistance_Parms.oTarget = oTarget;

	this->ProcessEvent ( pFnGetTargetResistance, &GetTargetResistance_Parms, NULL );

	return GetTargetResistance_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetDistanceModifier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oTarget                        ( CPF_Parm )
// unsigned char                  eFalloff                       ( CPF_Parm )

float UBioPowerScriptDesign::GetDistanceModifier ( class AActor* oTarget, unsigned char eFalloff )
{
	static UFunction* pFnGetDistanceModifier = NULL;

	if ( ! pFnGetDistanceModifier )
		pFnGetDistanceModifier = (UFunction*) UObject::GObjObjects()->Data[ 75610 ];

	UBioPowerScriptDesign_execGetDistanceModifier_Parms GetDistanceModifier_Parms;
	GetDistanceModifier_Parms.oTarget = oTarget;
	GetDistanceModifier_Parms.eFalloff = eFalloff;

	this->ProcessEvent ( pFnGetDistanceModifier, &GetDistanceModifier_Parms, NULL );

	return GetDistanceModifier_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetDmgDurModifier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

float UBioPowerScriptDesign::GetDmgDurModifier ( class AActor* oCaster )
{
	static UFunction* pFnGetDmgDurModifier = NULL;

	if ( ! pFnGetDmgDurModifier )
		pFnGetDmgDurModifier = (UFunction*) UObject::GObjObjects()->Data[ 75604 ];

	UBioPowerScriptDesign_execGetDmgDurModifier_Parms GetDmgDurModifier_Parms;
	GetDmgDurModifier_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnGetDmgDurModifier, &GetDmgDurModifier_Parms, NULL );

	return GetDmgDurModifier_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetPhysicsLevel
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

int UBioPowerScriptDesign::GetPhysicsLevel ( class AActor* oImpacted )
{
	static UFunction* pFnGetPhysicsLevel = NULL;

	if ( ! pFnGetPhysicsLevel )
		pFnGetPhysicsLevel = (UFunction*) UObject::GObjObjects()->Data[ 75600 ];

	UBioPowerScriptDesign_execGetPhysicsLevel_Parms GetPhysicsLevel_Parms;
	GetPhysicsLevel_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnGetPhysicsLevel, &GetPhysicsLevel_Parms, NULL );

	return GetPhysicsLevel_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IsOfRace
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// unsigned char                  eRace                          ( CPF_Parm )

bool UBioPowerScriptDesign::IsOfRace ( class AActor* oImpacted, unsigned char eRace )
{
	static UFunction* pFnIsOfRace = NULL;

	if ( ! pFnIsOfRace )
		pFnIsOfRace = (UFunction*) UObject::GObjObjects()->Data[ 75595 ];

	UBioPowerScriptDesign_execIsOfRace_Parms IsOfRace_Parms;
	IsOfRace_Parms.oImpacted = oImpacted;
	IsOfRace_Parms.eRace = eRace;

	this->ProcessEvent ( pFnIsOfRace, &IsOfRace_Parms, NULL );

	return IsOfRace_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.HasShields
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// unsigned long                  bCheckMax                      ( CPF_OptionalParm | CPF_Parm )

bool UBioPowerScriptDesign::HasShields ( class AActor* oImpacted, unsigned long bCheckMax )
{
	static UFunction* pFnHasShields = NULL;

	if ( ! pFnHasShields )
		pFnHasShields = (UFunction*) UObject::GObjObjects()->Data[ 75588 ];

	UBioPowerScriptDesign_execHasShields_Parms HasShields_Parms;
	HasShields_Parms.oImpacted = oImpacted;
	HasShields_Parms.bCheckMax = bCheckMax;

	this->ProcessEvent ( pFnHasShields, &HasShields_Parms, NULL );

	return HasShields_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IsDeadBody
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

bool UBioPowerScriptDesign::IsDeadBody ( class AActor* oImpacted )
{
	static UFunction* pFnIsDeadBody = NULL;

	if ( ! pFnIsDeadBody )
		pFnIsDeadBody = (UFunction*) UObject::GObjObjects()->Data[ 75583 ];

	UBioPowerScriptDesign_execIsDeadBody_Parms IsDeadBody_Parms;
	IsDeadBody_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnIsDeadBody, &IsDeadBody_Parms, NULL );

	return IsDeadBody_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IsPlaceable
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oImpacted                      ( CPF_Parm )

bool UBioPowerScriptDesign::IsPlaceable ( class AActor* oImpacted )
{
	static UFunction* pFnIsPlaceable = NULL;

	if ( ! pFnIsPlaceable )
		pFnIsPlaceable = (UFunction*) UObject::GObjObjects()->Data[ 75579 ];

	UBioPowerScriptDesign_execIsPlaceable_Parms IsPlaceable_Parms;
	IsPlaceable_Parms.oImpacted = oImpacted;

	this->ProcessEvent ( pFnIsPlaceable, &IsPlaceable_Parms, NULL );

	return IsPlaceable_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioPowerScriptDesign::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 75577 ];

	UBioPowerScriptDesign_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioAdrenalineScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioAdrenalineScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76010 ];

	UBioAdrenalineScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioAdrenalineScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioAdrenalineScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76005 ];

	UBioAdrenalineScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioBarrierScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioBarrierScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76055 ];

	UBioBarrierScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioCarnageScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76088 ];

	UBioCarnageScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioCarnageScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76075 ];

	UBioCarnageScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioCarnageScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76071 ];

	UBioCarnageScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioCarnageSetupScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioCarnageSetupScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76097 ];

	UBioCarnageSetupScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSpawnBeacon.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioSpawnBeacon::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76134 ];

	UBioSpawnBeacon_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSpawnBeacon.EndPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioSpawnBeacon::eventEndPhase ( unsigned char ePhase, class AActor* oCaster )
{
	static UFunction* pFnEndPhase = NULL;

	if ( ! pFnEndPhase )
		pFnEndPhase = (UFunction*) UObject::GObjObjects()->Data[ 76115 ];

	UBioSpawnBeacon_eventEndPhase_Parms EndPhase_Parms;
	EndPhase_Parms.ePhase = ePhase;
	EndPhase_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnEndPhase, &EndPhase_Parms, NULL );

	return EndPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSpawnBeacon.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioSpawnBeacon::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76110 ];

	UBioSpawnBeacon_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSpawnBeacon.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioSpawnBeacon::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76108 ];

	UBioSpawnBeacon_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioDampingScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioDampingScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76157 ];

	UBioDampingScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioDampingScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioDampingScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76146 ];

	UBioDampingScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioDampingScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioDampingScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76142 ];

	UBioDampingScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioDampingSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioDampingSuicideScript::eventEndPhase ( unsigned char ePhase, class AActor* oCaster )
{
	static UFunction* pFnEndPhase = NULL;

	if ( ! pFnEndPhase )
		pFnEndPhase = (UFunction*) UObject::GObjObjects()->Data[ 76181 ];

	UBioDampingSuicideScript_eventEndPhase_Parms EndPhase_Parms;
	EndPhase_Parms.ePhase = ePhase;
	EndPhase_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnEndPhase, &EndPhase_Parms, NULL );

	return EndPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioDampingSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioDampingSuicideScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76177 ];

	UBioDampingSuicideScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioEMPScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioEMPScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76208 ];

	UBioEMPScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioEMPScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioEMPScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76197 ];

	UBioEMPScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioEMPScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioEMPScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76191 ];

	UBioEMPScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioEMPSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioEMPSuicideScript::eventEndPhase ( unsigned char ePhase, class AActor* oCaster )
{
	static UFunction* pFnEndPhase = NULL;

	if ( ! pFnEndPhase )
		pFnEndPhase = (UFunction*) UObject::GObjObjects()->Data[ 76230 ];

	UBioEMPSuicideScript_eventEndPhase_Parms EndPhase_Parms;
	EndPhase_Parms.ePhase = ePhase;
	EndPhase_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnEndPhase, &EndPhase_Parms, NULL );

	return EndPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioEMPSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioEMPSuicideScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76226 ];

	UBioEMPSuicideScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioFakePowerScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioFakePowerScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76246 ];

	UBioFakePowerScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioFakePowerScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioFakePowerScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76241 ];

	UBioFakePowerScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioGethCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioGethCarnageScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76275 ];

	UBioGethCarnageScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioGethCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioGethCarnageScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76265 ];

	UBioGethCarnageScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioGethCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioGethCarnageScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76261 ];

	UBioGethCarnageScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioHackingScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioHackingScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76293 ];

	UBioHackingScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHackingScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioHackingScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76284 ];

	UBioHackingScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioHealScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76318 ];

	UBioHealScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioHealScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76305 ];

	UBioHealScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSelfScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioHealSelfScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76339 ];

	UBioHealSelfScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSelfScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioHealSelfScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 76333 ];

	UBioHealSelfScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSquadScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioHealSquadScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76403 ];

	UBioHealSquadScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSquadScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioHealSquadScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76389 ];

	UBioHealSquadScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSquadScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioHealSquadScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 76386 ];

	UBioHealSquadScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSquadScript.AdjustCooldown
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fCoolDownTime                  ( CPF_Parm | CPF_OutParm )

bool UBioHealSquadScript::eventAdjustCooldown ( float* fCoolDownTime )
{
	static UFunction* pFnAdjustCooldown = NULL;

	if ( ! pFnAdjustCooldown )
		pFnAdjustCooldown = (UFunction*) UObject::GObjObjects()->Data[ 76382 ];

	UBioHealSquadScript_eventAdjustCooldown_Parms AdjustCooldown_Parms;

	this->ProcessEvent ( pFnAdjustCooldown, &AdjustCooldown_Parms, NULL );

	if ( fCoolDownTime )
		*fCoolDownTime = AdjustCooldown_Parms.fCoolDownTime;

	return AdjustCooldown_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSquadScript.DoesSquadNeedHealing
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )

bool UBioHealSquadScript::DoesSquadNeedHealing ( class AActor* oActor )
{
	static UFunction* pFnDoesSquadNeedHealing = NULL;

	if ( ! pFnDoesSquadNeedHealing )
		pFnDoesSquadNeedHealing = (UFunction*) UObject::GObjObjects()->Data[ 76371 ];

	UBioHealSquadScript_execDoesSquadNeedHealing_Parms DoesSquadNeedHealing_Parms;
	DoesSquadNeedHealing_Parms.oActor = oActor;

	this->ProcessEvent ( pFnDoesSquadNeedHealing, &DoesSquadNeedHealing_Parms, NULL );

	return DoesSquadNeedHealing_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSquadScript.GetCooldownMultiForSquad
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

float UBioHealSquadScript::GetCooldownMultiForSquad ( class AActor* oCaster )
{
	static UFunction* pFnGetCooldownMultiForSquad = NULL;

	if ( ! pFnGetCooldownMultiForSquad )
		pFnGetCooldownMultiForSquad = (UFunction*) UObject::GObjObjects()->Data[ 76359 ];

	UBioHealSquadScript_execGetCooldownMultiForSquad_Parms GetCooldownMultiForSquad_Parms;
	GetCooldownMultiForSquad_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnGetCooldownMultiForSquad, &GetCooldownMultiForSquad_Parms, NULL );

	return GetCooldownMultiForSquad_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioHealSquadScript.GetHealAmountForSquad
// [0x00420002] 
// Parameters infos:
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fHealAmount                    ( CPF_Parm | CPF_OutParm )
// float                          fToxicAmount                   ( CPF_Parm | CPF_OutParm )

void UBioHealSquadScript::GetHealAmountForSquad ( class AActor* oCaster, float* fHealAmount, float* fToxicAmount )
{
	static UFunction* pFnGetHealAmountForSquad = NULL;

	if ( ! pFnGetHealAmountForSquad )
		pFnGetHealAmountForSquad = (UFunction*) UObject::GObjObjects()->Data[ 76348 ];

	UBioHealSquadScript_execGetHealAmountForSquad_Parms GetHealAmountForSquad_Parms;
	GetHealAmountForSquad_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnGetHealAmountForSquad, &GetHealAmountForSquad_Parms, NULL );

	if ( fHealAmount )
		*fHealAmount = GetHealAmountForSquad_Parms.fHealAmount;

	if ( fToxicAmount )
		*fToxicAmount = GetHealAmountForSquad_Parms.fToxicAmount;
};

// Function SFXGameContent_Powers.BioHexBarrierScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioHexBarrierScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76421 ];

	UBioHexBarrierScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioImmunityScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioImmunityScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76441 ];

	UBioImmunityScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioImmunityScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioImmunityScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76436 ];

	UBioImmunityScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioLanceArmScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioLanceArmScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76463 ];

	UBioLanceArmScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioLanceArmScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioLanceArmScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76454 ];

	UBioLanceArmScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioLanceArmScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioLanceArmScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76450 ];

	UBioLanceArmScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioLiftScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioLiftScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76482 ];

	UBioLiftScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioLiftScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioLiftScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76473 ];

	UBioLiftScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioLiftPLCScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioLiftPLCScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76490 ];

	UBioLiftPLCScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioMarksmanScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioMarksmanScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76508 ];

	UBioMarksmanScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioMarksmanScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioMarksmanScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76503 ];

	UBioMarksmanScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioNeuralShockScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioNeuralShockScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76536 ];

	UBioNeuralShockScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioNeuralShockScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioNeuralShockScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76526 ];

	UBioNeuralShockScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioNeuralShockScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioNeuralShockScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76521 ];

	UBioNeuralShockScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioOverkillScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioOverkillScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76555 ];

	UBioOverkillScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioOverkillScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioOverkillScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76550 ];

	UBioOverkillScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioRegenBurstScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioRegenBurstScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76568 ];

	UBioRegenBurstScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioRepairScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioRepairScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76611 ];

	UBioRepairScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioRepairScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioRepairScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76600 ];

	UBioRepairScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioRepairScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioRepairScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 76595 ];

	UBioRepairScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioRepairScript.GetSquadElectronicsRank
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

int UBioRepairScript::GetSquadElectronicsRank ( class AActor* oCaster )
{
	static UFunction* pFnGetSquadElectronicsRank = NULL;

	if ( ! pFnGetSquadElectronicsRank )
		pFnGetSquadElectronicsRank = (UFunction*) UObject::GObjObjects()->Data[ 76586 ];

	UBioRepairScript_execGetSquadElectronicsRank_Parms GetSquadElectronicsRank_Parms;
	GetSquadElectronicsRank_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnGetSquadElectronicsRank, &GetSquadElectronicsRank_Parms, NULL );

	return GetSquadElectronicsRank_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSabotageScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioSabotageScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76638 ];

	UBioSabotageScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSabotageScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioSabotageScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76628 ];

	UBioSabotageScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSabotageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioSabotageScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76623 ];

	UBioSabotageScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSabotageSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioSabotageSuicideScript::eventEndPhase ( unsigned char ePhase, class AActor* oCaster )
{
	static UFunction* pFnEndPhase = NULL;

	if ( ! pFnEndPhase )
		pFnEndPhase = (UFunction*) UObject::GObjObjects()->Data[ 76657 ];

	UBioSabotageSuicideScript_eventEndPhase_Parms EndPhase_Parms;
	EndPhase_Parms.ePhase = ePhase;
	EndPhase_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnEndPhase, &EndPhase_Parms, NULL );

	return EndPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSabotageSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioSabotageSuicideScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76653 ];

	UBioSabotageSuicideScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioShieldBoostScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioShieldBoostScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76681 ];

	UBioShieldBoostScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioShieldBoostScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioShieldBoostScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76674 ];

	UBioShieldBoostScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioShieldBoostScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioShieldBoostScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 76668 ];

	UBioShieldBoostScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioShieldEntrenchScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioShieldEntrenchScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76704 ];

	UBioShieldEntrenchScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioShieldEntrenchScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioShieldEntrenchScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76695 ];

	UBioShieldEntrenchScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSiegePulseScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioSiegePulseScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76726 ];

	UBioSiegePulseScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSiegePulseScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioSiegePulseScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76715 ];

	UBioSiegePulseScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSiegePulseScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioSiegePulseScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76711 ];

	UBioSiegePulseScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSingularityScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioSingularityScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76756 ];

	UBioSingularityScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSingularityScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioSingularityScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76745 ];

	UBioSingularityScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSingularityScript.BumpUpFromFloor
// [0x00024002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 vOriginalLocation              ( CPF_Parm )
// float                          fBumpDistance                  ( CPF_OptionalParm | CPF_Parm )

struct FVector UBioSingularityScript::BumpUpFromFloor ( struct FVector vOriginalLocation, float fBumpDistance )
{
	static UFunction* pFnBumpUpFromFloor = NULL;

	if ( ! pFnBumpUpFromFloor )
		pFnBumpUpFromFloor = (UFunction*) UObject::GObjObjects()->Data[ 76738 ];

	UBioSingularityScript_execBumpUpFromFloor_Parms BumpUpFromFloor_Parms;
	memcpy ( &BumpUpFromFloor_Parms.vOriginalLocation, &vOriginalLocation, 0xC );
	BumpUpFromFloor_Parms.fBumpDistance = fBumpDistance;

	this->ProcessEvent ( pFnBumpUpFromFloor, &BumpUpFromFloor_Parms, NULL );

	return BumpUpFromFloor_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSingularityScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioSingularityScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76736 ];

	UBioSingularityScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSmashScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioSmashScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76780 ];

	UBioSmashScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSmashScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioSmashScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76771 ];

	UBioSmashScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSmashScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioSmashScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76767 ];

	UBioSmashScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioSniperCritScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioSniperCritScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76795 ];

	UBioSniperCritScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioSniperCritScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioSniperCritScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76790 ];

	UBioSniperCritScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioStasisScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioStasisScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76815 ];

	UBioStasisScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioStasisScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioStasisScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76807 ];

	UBioStasisScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioTakeDownScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioTakeDownScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76834 ];

	UBioTakeDownScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioTakeDownScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioTakeDownScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76828 ];

	UBioTakeDownScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioTeslaBurstScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioTeslaBurstScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76864 ];

	UBioTeslaBurstScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioTeslaBurstScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioTeslaBurstScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76856 ];

	UBioTeslaBurstScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioTeslaBurstScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioTeslaBurstScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76851 ];

	UBioTeslaBurstScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioThrowScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioThrowScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76891 ];

	UBioThrowScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioThrowScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioThrowScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76881 ];

	UBioThrowScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioThrowScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioThrowScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76877 ];

	UBioThrowScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioThrowWarpScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioThrowWarpScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76924 ];

	UBioThrowWarpScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioThrowWarpScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioThrowWarpScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76911 ];

	UBioThrowWarpScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioThrowWarpScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioThrowWarpScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76906 ];

	UBioThrowWarpScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioToxicSpitScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioToxicSpitScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76954 ];

	UBioToxicSpitScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioToxicSpitScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioToxicSpitScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76947 ];

	UBioToxicSpitScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioToxicSpitScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioToxicSpitScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76943 ];

	UBioToxicSpitScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioToxicSpitSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioToxicSpitSuicideScript::eventEndPhase ( unsigned char ePhase, class AActor* oCaster )
{
	static UFunction* pFnEndPhase = NULL;

	if ( ! pFnEndPhase )
		pFnEndPhase = (UFunction*) UObject::GObjObjects()->Data[ 76968 ];

	UBioToxicSpitSuicideScript_eventEndPhase_Parms EndPhase_Parms;
	EndPhase_Parms.ePhase = ePhase;
	EndPhase_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnEndPhase, &EndPhase_Parms, NULL );

	return EndPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioToxicSpitSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioToxicSpitSuicideScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76964 ];

	UBioToxicSpitSuicideScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioUnityScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioUnityScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76988 ];

	UBioUnityScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioUnityScript.CanStartPower
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )

bool UBioUnityScript::eventCanStartPower ( class AActor* oCaster )
{
	static UFunction* pFnCanStartPower = NULL;

	if ( ! pFnCanStartPower )
		pFnCanStartPower = (UFunction*) UObject::GObjObjects()->Data[ 76985 ];

	UBioUnityScript_eventCanStartPower_Parms CanStartPower_Parms;
	CanStartPower_Parms.oCaster = oCaster;

	this->ProcessEvent ( pFnCanStartPower, &CanStartPower_Parms, NULL );

	return CanStartPower_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioUnityScript.DoesSquadHaveDeadMember
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oActor                         ( CPF_Parm )

bool UBioUnityScript::DoesSquadHaveDeadMember ( class AActor* oActor )
{
	static UFunction* pFnDoesSquadHaveDeadMember = NULL;

	if ( ! pFnDoesSquadHaveDeadMember )
		pFnDoesSquadHaveDeadMember = (UFunction*) UObject::GObjObjects()->Data[ 76976 ];

	UBioUnityScript_execDoesSquadHaveDeadMember_Parms DoesSquadHaveDeadMember_Parms;
	DoesSquadHaveDeadMember_Parms.oActor = oActor;

	this->ProcessEvent ( pFnDoesSquadHaveDeadMember, &DoesSquadHaveDeadMember_Parms, NULL );

	return DoesSquadHaveDeadMember_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWarpScript.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioWarpScript::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 77015 ];

	UBioWarpScript_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWarpScript.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioWarpScript::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 77007 ];

	UBioWarpScript_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioWarpScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioWarpScript::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 77003 ];

	UBioWarpScript_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};

// Function SFXGameContent_Powers.BioArmorEmitter.OnImpact
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fCasterStability               ( CPF_Parm )
// class AActor*                  oImpacted                      ( CPF_Parm )
// int                            nPreviouslyImpacted            ( CPF_Parm )

bool UBioArmorEmitter::eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted )
{
	static UFunction* pFnOnImpact = NULL;

	if ( ! pFnOnImpact )
		pFnOnImpact = (UFunction*) UObject::GObjObjects()->Data[ 76033 ];

	UBioArmorEmitter_eventOnImpact_Parms OnImpact_Parms;
	OnImpact_Parms.oCaster = oCaster;
	OnImpact_Parms.fCasterStability = fCasterStability;
	OnImpact_Parms.oImpacted = oImpacted;
	OnImpact_Parms.nPreviouslyImpacted = nPreviouslyImpacted;

	this->ProcessEvent ( pFnOnImpact, &OnImpact_Parms, NULL );

	return OnImpact_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioArmorEmitter.StartPhase
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ePhase                         ( CPF_Parm )
// class AActor*                  oCaster                        ( CPF_Parm )
// float                          fDuration                      ( CPF_Parm )

bool UBioArmorEmitter::eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration )
{
	static UFunction* pFnStartPhase = NULL;

	if ( ! pFnStartPhase )
		pFnStartPhase = (UFunction*) UObject::GObjObjects()->Data[ 76026 ];

	UBioArmorEmitter_eventStartPhase_Parms StartPhase_Parms;
	StartPhase_Parms.ePhase = ePhase;
	StartPhase_Parms.oCaster = oCaster;
	StartPhase_Parms.fDuration = fDuration;

	this->ProcessEvent ( pFnStartPhase, &StartPhase_Parms, NULL );

	return StartPhase_Parms.ReturnValue;
};

// Function SFXGameContent_Powers.BioArmorEmitter.InitializePowerScript
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UBioPower*               pPower                         ( CPF_Parm )

void UBioArmorEmitter::eventInitializePowerScript ( class UBioPower* pPower )
{
	static UFunction* pFnInitializePowerScript = NULL;

	if ( ! pFnInitializePowerScript )
		pFnInitializePowerScript = (UFunction*) UObject::GObjObjects()->Data[ 76019 ];

	UBioArmorEmitter_eventInitializePowerScript_Parms InitializePowerScript_Parms;
	InitializePowerScript_Parms.pPower = pPower;

	this->ProcessEvent ( pFnInitializePowerScript, &InitializePowerScript_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif