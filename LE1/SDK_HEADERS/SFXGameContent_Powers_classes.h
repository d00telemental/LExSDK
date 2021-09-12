/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_Powers_classes.h
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

#define CONST_GFX_GROUP_ALWAYS_STACKS                            -1
#define CONST_GFX_GROUP_Marksman                                 0
#define CONST_GFX_GROUP_Critical_Dmg                             1
#define CONST_GFX_GROUP_Critical_Stun                            2
#define CONST_GFX_GROUP_Suppression_Caster                       3
#define CONST_GFX_GROUP_Suppression_Target                       4
#define CONST_GFX_GROUP_Shield_Boost                             5
#define CONST_GFX_GROUP_Adrenaline                               6
#define CONST_GFX_GROUP_Take_Down                                7
#define CONST_GFX_GROUP_Lift                                     8
#define CONST_GFX_GROUP_Warp_DoT                                 9
#define CONST_GFX_GROUP_Weaken                                   10
#define CONST_GFX_GROUP_Stasis                                   11
#define CONST_GFX_GROUP_Sabotage_WeaponPowers                    12
#define CONST_GFX_GROUP_AI_Hacking                               13
#define CONST_GFX_GROUP_Damping_Field                            14
#define CONST_GFX_GROUP_Neural_Shock                             15
#define CONST_GFX_GROUP_Immunity                                 16
#define CONST_GFX_GROUP_Resin_Slow                               18
#define CONST_GFX_GROUP_Acid_DR_Lowered                          19
#define CONST_GFX_GROUP_Singularity                              20
#define CONST_GFX_GROUP_Sabotage_Pistol                          21
#define CONST_GFX_GROUP_Sabotage_Shotgun                         22
#define CONST_GFX_GROUP_Sabotage_Assault                         23
#define CONST_GFX_GROUP_Sabotage_Sniper                          24
#define CONST_GFX_GROUP_Entrench                                 25
#define CONST_GFX_GROUP_Carnage_Setup                            26
#define CONST_GFX_GROUP_Sabotage_BurnDamage                      27
#define CONST_BARRIER_ACTOR_TYPE                                 "BIOG_V_B_Barrier_Z.BioticBarrier01_Type"
#define CONST_BARRIER_HEIGHT                                     150
#define CONST_BARRIER_WIDTH                                      240
#define CONST_BARRIER_DEPTH                                      50
#define CONST_HEAL_INTERVAL                                      0.1
#define CONST_BARRIER_ACTOR_TYPE01                               "BIOG_APL_TYPES.Cover.HexL_90_Type"
#define CONST_DEGREES_TO_UUR                                     0
#define CONST_DEGREES_TO_UUR01                                   16384
#define CONST_TICK_INTERVAL                                      0.1f
#define CONST_REPAIR_INTERVAL                                    0.1
#define CONST_TALENTID_ELECTRONICS                               84
#define CONST_BURN_INTERVAL                                      0.1
#define CONST_FORCE_INTERVAL                                     0.25
#define CONST_WARP_INTERVAL                                      0.1

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

// Class SFXGameContent_Powers.BioPowerScriptDesign
// 0x0000 (0x0080 - 0x0080)
class UBioPowerScriptDesign : public UBioPowerScript
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool AdjustInventoryResource ( class AActor* oActor, unsigned char eResource, float fAmount );
	bool EffectCarnageSetup ( class AActor* oCaster, int nNumberOfUses, float fDuration );
	bool InstantRegenerateShield ( class AActor* oActor, float fPercentOfShieldRegained );
	bool IncreaseAllPowerCooldowns ( class AActor* oActor, float fPercentOfTotalToIncreaseBy, unsigned long bIncreaseTech, unsigned long bIncreaseBiotic, unsigned long bIncreaseWeapon, unsigned long bIncreaseCombat );
	bool ClearAllPowerCooldowns ( class AActor* oActor );
	bool EffectSingularity ( class AActor* oCaster, class AActor* oImpacted, struct FVector vSingularityLocation, float fForce, float fForceInterval, float fDuration, float fBubbleRadius );
	bool EffectRagdoll ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGroupID );
	bool EffectEntrenchShield ( class AActor* oCaster, class AActor* oImpacted, float fShieldInc, float fDuration );
	bool EffectRegenerateShield ( class AActor* oCaster, class AActor* oImpacted, float fAmountPerInterval, float fInterval, float fDuration );
	bool EffectDamageVulnerability ( class AActor* oCaster, class AActor* oImpacted, float fDamageMultiplier, float fDuration );
	bool EffectRegen ( class AActor* oCaster, float fHealingFactor, float fDuration );
	bool EffectHealInstant ( class AActor* oCaster, class AActor* oImpacted, float fHealth, float fToxic );
	bool EffectHeal ( class AActor* oCaster, class AActor* oImpacted, float fHealthPerInterval, float fToxicPerInterval, float fInterval, float fDuration );
	bool EffectCombatBoost ( class AActor* oCaster, class AActor* oImpacted, float fDuration, float fDmgDurBonus, float fRegenBonus, float fSuppResistBonus, float fMobilityBonus );
	bool EffectImmunity ( class AActor* oCaster, float fDuration, float fDamageResistBonus );
	bool EffectSniperCritical ( class AActor* oCaster, float fDuration, float fDamageBonus, float fStunDuration, float fMaxDriftRed, float fMinDriftRed );
	bool EffectOverkill ( class AActor* oCaster, float fDuration, float fSuppDamage, float fKickbackRed, float fHeatRed, float fDamageBonus );
	bool EffectMarksman ( class AActor* oCaster, float fDuration, float fMaxDriftRed, float fMinDriftRed, float fDamageBonus, float fRPSBonus, float fHeatRed );
	bool EffectCorrosion ( class AActor* oImpacted, class AActor* oCaster, float fCorrosion, float fDuration );
	bool EffectSuppressingFire ( class AActor* oCaster, float fDuration, float fDriftInc );
	bool EffectZeroGLift ( class AActor* oImpacted, class AActor* oCaster, float fDuration, float fLiftForce, float fLiftDistance, float fDeceleration, float fMinVelocity );
	bool EffectAIHacking ( class AActor* oCaster, class AActor* oImpacted, float fDuration );
	bool EffectDisablePowers ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, unsigned long bDisableTech, unsigned long bDisableBiotics, unsigned long bDisableWeaponPowers, unsigned long bDisableCombat );
	bool EffectOverheatWeapons ( class AActor* oCaster, class AActor* oImpacted, float fDuration, float fHeat );
	bool EffectDisableWeapons ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup );
	bool EffectDisableActions ( class AActor* oCaster, class AActor* oImpacted, float fDuration, int nGFXGroup, unsigned long bDisableActionQueue, unsigned long bDisableMovementStack );
	bool EffectAdjustStability ( class ABioPawn* oTarget, class AActor* oCaster, float fAmount, float fApplyInterval, float fTotalTime );
	bool EffectDamageOverTime ( class AActor* oImpacted, class AActor* oCaster, float fDamagePerInterval, struct FVector vMomentumPerInterval, class UBioDamageType* pDamage, float fInterval, float fDuration, int nGroup );
	bool EffectTakeDamage ( class AActor* oImpacted, class AActor* oCaster, float fDamage, struct FVector vMomentum, class UBioDamageType* pDamage );
	class AActor* SpawnBeacon ( class UBioActorBehavior* oCasterBehavior, struct FString sBeaconActorType, struct FVector vLocation, struct FRotator vFacing, float fDuration, unsigned long bFloatingBeacon, unsigned long bSnapToFloor, unsigned long bSpawnAsProxMine, float fSquadActivateDelay, float fRadiusMulti, float fDamageMulti, class AActor* oOwner );
	class AActor* SpawnBarrier ( class UBioActorBehavior* oCasterBehavior, struct FString sBarrierActorType, struct FVector vLocation, struct FRotator vFacing, float fHealth, float fDuration, unsigned long bSnapToFloor, unsigned long bAddToSquadCover, class AActor* oOwner );
	void WeaponPowerActivated ( class AActor* Caster, unsigned long bNeedsRetrigger );
	bool ShouldIncrementPowerUsage ( class AActor* Caster );
	unsigned char GetFactionRelationship ( class AActor* oCaster, class AActor* oTarget );
	float GetTechResistance ( class AActor* oTarget );
	float GetBioticResistance ( class AActor* oTarget );
	float GetTargetResistance ( class AActor* oTarget );
	float GetDistanceModifier ( class AActor* oTarget, unsigned char eFalloff );
	float GetDmgDurModifier ( class AActor* oCaster );
	int GetPhysicsLevel ( class AActor* oImpacted );
	bool IsOfRace ( class AActor* oImpacted, unsigned char eRace );
	bool HasShields ( class AActor* oImpacted, unsigned long bCheckMax );
	bool IsDeadBody ( class AActor* oImpacted );
	bool IsPlaceable ( class AActor* oImpacted );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioAdrenalineScript
// 0x0000 (0x0080 - 0x0080)
class UBioAdrenalineScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioBarrierScript
// 0x0000 (0x0080 - 0x0080)
class UBioBarrierScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
};

// Class SFXGameContent_Powers.BioCarnageScript
// 0x001C (0x009C - 0x0080)
class UBioCarnageScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vCasterLocation;                                		// 0x0080 (0x000C) [0x0000000000000000]              
	class UBioDamageType*                              m_oDamageType;                                    		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDamage;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fForce;                                         		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioCarnageSetupScript
// 0x0000 (0x0080 - 0x0080)
class UBioCarnageSetupScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
};

// Class SFXGameContent_Powers.BioSpawnBeacon
// 0x0028 (0x00A8 - 0x0080)
class UBioSpawnBeacon : public UBioPowerScriptDesign
{
public:
	struct TArray<struct FString>                      m_asBeaconActorType;                              		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRecordUseName;                                 		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fBeaconOffset;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRecordUses : 1;                                		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bProxMine : 1;                                  		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bFloating : 1;                                  		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bSnapToGround : 1;                              		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioDampingBeacon
// 0x0000 (0x00A8 - 0x00A8)
class UBioDampingBeacon : public UBioSpawnBeacon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.BioDampingScript
// 0x001C (0x009C - 0x0080)
class UBioDampingScript : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oDTExplosion;                                   		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fMineDamage;                                    		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              m_fCooldownIncPct;                                		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                m_nDifficultyLevel;                               		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDampenBiotics : 1;                             		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDampenTech : 1;                                		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDampenWeapons : 1;                             		// 0x0098 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDampenCombat : 1;                              		// 0x0098 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioDampingSuicideScript
// 0x0008 (0x00A4 - 0x009C)
class UBioDampingSuicideScript : public UBioDampingScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                             		// 0x009C (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioEMPBeacon
// 0x0000 (0x00A8 - 0x00A8)
class UBioEMPBeacon : public UBioSpawnBeacon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.BioEMPScript
// 0x002C (0x00AC - 0x0080)
class UBioEMPScript : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oDTExplosion;                                   		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oDTStability;                                   		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oDTElectroMagneticPulse;                        		// 0x0090 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fMineDamage;                                    		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              m_fEMPDamage;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              m_fSuppressionDamage;                             		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              m_fDamageVulnerability;                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioEMPSuicideScript
// 0x0008 (0x00B4 - 0x00AC)
class UBioEMPSuicideScript : public UBioEMPScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                             		// 0x00AC (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioFakePowerScript
// 0x0004 (0x0084 - 0x0080)
class UBioFakePowerScript : public UBioPowerScriptDesign
{
public:
	unsigned long                                      m_bIgnoreFriendly : 1;                            		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIgnoreNeutral : 1;                             		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIgnoreHostile : 1;                             		// 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bIgnoreHumanoid : 1;                            		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIgnoreAnimal : 1;                              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bIgnoreMachine : 1;                             		// 0x0080 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bIgnorePlaceables : 1;                          		// 0x0080 (0x0004) [0x0000000000000000] [0x00000040] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioGethCarnageScript
// 0x001C (0x009C - 0x0080)
class UBioGethCarnageScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vCasterLocation;                                		// 0x0080 (0x000C) [0x0000000000000000]              
	class UBioDamageType*                              m_oDamageType;                                    		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDamage;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fForce;                                         		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioHackingScript
// 0x000C (0x008C - 0x0080)
class UBioHackingScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fHackingTime;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_fEliteMult;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              m_fSubBossMult;                                   		// 0x0088 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioHealScript
// 0x0018 (0x0098 - 0x0080)
class UBioHealScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_fHealAmountPerInterval;                         		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              m_fToxicAmountPerInterval;                        		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              m_fHealInterval;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              m_fMediGelPerUse;                                 		// 0x0090 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHealsAnimals : 1;                              		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHealsHumanoids : 1;                            		// 0x0094 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHealsMachines : 1;                             		// 0x0094 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioHealSelfScript
// 0x0000 (0x0098 - 0x0098)
class UBioHealSelfScript : public UBioHealScript
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventCanStartPower ( class AActor* oCaster );
};

// Class SFXGameContent_Powers.BioHealSquadScript
// 0x0018 (0x0098 - 0x0080)
class UBioHealSquadScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_fHealAmountPerInterval;                         		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              m_fToxicAmountPerInterval;                        		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              m_fHealInterval;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              m_fCooldownMulti;                                 		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              m_fRezHealthPct;                                  		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool eventCanStartPower ( class AActor* oCaster );
	bool eventAdjustCooldown ( float* fCoolDownTime );
	bool DoesSquadNeedHealing ( class AActor* oActor );
	float GetCooldownMultiForSquad ( class AActor* oCaster );
	void GetHealAmountForSquad ( class AActor* oCaster, float* fHealAmount, float* fToxicAmount );
};

// Class SFXGameContent_Powers.BioHexBarrierScript
// 0x0000 (0x0080 - 0x0080)
class UBioHexBarrierScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
};

// Class SFXGameContent_Powers.BioImmunityScript
// 0x0000 (0x0080 - 0x0080)
class UBioImmunityScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioLanceArmScript
// 0x001C (0x009C - 0x0080)
class UBioLanceArmScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vCasterLocation;                                		// 0x0080 (0x000C) [0x0000000000000000]              
	class UBioDamageType*                              m_oDamageType;                                    		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fForce;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fDamage;                                        		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioLiftScript
// 0x0010 (0x0090 - 0x0080)
class UBioLiftScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fForce;                                         		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_fDistance;                                      		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                m_nPhysicsLevel;                                  		// 0x008C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioLiftPLCScript
// 0x0004 (0x0094 - 0x0090)
class UBioLiftPLCScript : public UBioLiftScript
{
public:
	float                                              m_fPawnDurationMult;                              		// 0x0090 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
};

// Class SFXGameContent_Powers.BioMarksmanScript
// 0x0000 (0x0080 - 0x0080)
class UBioMarksmanScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioNeuralShockScript
// 0x0020 (0x00A0 - 0x0080)
class UBioNeuralShockScript : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oDTToxic;                                       		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oDTPhysics;                                     		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDuration;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              m_fToxicDamage;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fPushForce;                                     		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              m_fPushDamage;                                    		// 0x009C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioOverkillScript
// 0x0000 (0x0080 - 0x0080)
class UBioOverkillScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioRegenBurstScript
// 0x0000 (0x0080 - 0x0080)
class UBioRegenBurstScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
};

// Class SFXGameContent_Powers.BioRepairScript
// 0x000C (0x008C - 0x0080)
class UBioRepairScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_fRepairAmountPerInterval;                       		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              m_fRepairInterval;                                		// 0x0088 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool eventCanStartPower ( class AActor* oCaster );
	int GetSquadElectronicsRank ( class AActor* oCaster );
};

// Class SFXGameContent_Powers.BioSabotageBeacon
// 0x0000 (0x00A8 - 0x00A8)
class UBioSabotageBeacon : public UBioSpawnBeacon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent_Powers.BioSabotageScript
// 0x0020 (0x00A0 - 0x0080)
class UBioSabotageScript : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oDTExplosion;                                   		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oDTBurn;                                        		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fMineDamage;                                    		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fHeat;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              m_fDamagePerSecond;                               		// 0x009C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioSabotageSuicideScript
// 0x0008 (0x00A8 - 0x00A0)
class UBioSabotageSuicideScript : public UBioSabotageScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                             		// 0x00A0 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioShieldBoostScript
// 0x0008 (0x0088 - 0x0080)
class UBioShieldBoostScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_fShieldPercentPerSecond;                        		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	bool eventCanStartPower ( class AActor* oCaster );
};

// Class SFXGameContent_Powers.BioShieldEntrenchScript
// 0x000C (0x008C - 0x0080)
class UBioShieldEntrenchScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              m_fShieldMax;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              m_fShieldsPerInterval;                            		// 0x0088 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioSiegePulseScript
// 0x001C (0x009C - 0x0080)
class UBioSiegePulseScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vCasterLocation;                                		// 0x0080 (0x000C) [0x0000000000000000]              
	class UBioDamageType*                              m_oDamageType;                                    		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDamage;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fForce;                                         		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioSingularityScript
// 0x0020 (0x00A0 - 0x0080)
class UBioSingularityScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vSingularityLocation;                           		// 0x0080 (0x000C) [0x0000000000000000]              
	float                                              m_fForcePerSecond;                                		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              m_fRadius;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                m_nPhysicsLevel;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bLocationSet : 1;                               		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	struct FVector BumpUpFromFloor ( struct FVector vOriginalLocation, float fBumpDistance );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioSmashScript
// 0x001C (0x009C - 0x0080)
class UBioSmashScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vCasterLocation;                                		// 0x0080 (0x000C) [0x0000000000000000]              
	class UBioDamageType*                              m_oDamageType;                                    		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fForce;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fDamage;                                        		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioSniperCritScript
// 0x0000 (0x0080 - 0x0080)
class UBioSniperCritScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioStasisScript
// 0x0008 (0x0088 - 0x0080)
class UBioStasisScript : public UBioPowerScriptDesign
{
public:
	float                                              m_fDuration;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAllowDamage : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioTakeDownScript
// 0x0000 (0x0080 - 0x0080)
class UBioTakeDownScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
};

// Class SFXGameContent_Powers.BioTeslaBurstScript
// 0x0018 (0x0098 - 0x0080)
class UBioTeslaBurstScript : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oDTElectroMagneticPulse;                        		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oDTElectric;                                    		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fEMPDamage;                                     		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              m_fDamage;                                        		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioThrowScript
// 0x0020 (0x00A0 - 0x0080)
class UBioThrowScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vCasterLocation;                                		// 0x0080 (0x000C) [0x0000000000000000]              
	class UBioDamageType*                              m_oDamageType;                                    		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fForce;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              m_fDamage;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                m_nPhysicsLevel;                                  		// 0x009C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioThrowWarpScript
// 0x0034 (0x00B4 - 0x0080)
class UBioThrowWarpScript : public UBioPowerScriptDesign
{
public:
	struct FVector                                     m_vCasterLocation;                                		// 0x0080 (0x000C) [0x0000000000000000]              
	class UBioDamageType*                              m_oThrowDamageType;                               		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oWarpDamageType;                                		// 0x0094 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fThrowForce;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              m_fThrowDamage;                                   		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                m_nPhysicsLevel;                                  		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              m_fDamagePerSecond;                               		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              m_fDamageMultiplier;                              		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioToxicSpitScript
// 0x000C (0x008C - 0x0080)
class UBioToxicSpitScript : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oDamageType;                                    		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDamage;                                        		// 0x0088 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioToxicSpitSuicideScript
// 0x0008 (0x0094 - 0x008C)
class UBioToxicSpitSuicideScript : public UBioToxicSpitScript
{
public:
	class UBioDamageType*                              m_oSuicideDamageType;                             		// 0x008C (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventEndPhase ( unsigned char ePhase, class AActor* oCaster );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioUnityScript
// 0x0000 (0x0080 - 0x0080)
class UBioUnityScript : public UBioPowerScriptDesign
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventCanStartPower ( class AActor* oCaster );
	bool DoesSquadHaveDeadMember ( class AActor* oActor );
};

// Class SFXGameContent_Powers.BioWarpScript
// 0x0014 (0x0094 - 0x0080)
class UBioWarpScript : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oDamageType;                                    		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDamagePerSecond;                               		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              m_fDamageMultiplier;                              		// 0x0090 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioArmorEmitter
// 0x0028 (0x00A8 - 0x0080)
class UBioArmorEmitter : public UBioPowerScriptDesign
{
public:
	class UBioDamageType*                              m_oEnervate;                                      		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oToxic;                                         		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oSiphon;                                        		// 0x0090 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UBioDamageType*                              m_oDestab;                                        		// 0x0098 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDamage;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              m_fType;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventOnImpact ( class AActor* oCaster, float fCasterStability, class AActor* oImpacted, int nPreviouslyImpacted );
	bool eventStartPhase ( unsigned char ePhase, class AActor* oCaster, float fDuration );
	void eventInitializePowerScript ( class UBioPower* pPower );
};

// Class SFXGameContent_Powers.BioHealMachineScript
// 0x0000 (0x0098 - 0x0098)
class UBioHealMachineScript : public UBioHealScript
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif