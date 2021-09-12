/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_Powers_f_structs.h
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

// Function SFXGameContent_Powers.BioPowerScriptDesign.AdjustInventoryResource
// [0x00020002] 
struct UBioPowerScriptDesign_execAdjustInventoryResource_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eResource;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAmount;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioPlayerSquad*                          oPlayerSquad;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioInventory*                            oInventory;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           fCurrentAmount;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectCarnageSetup
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectCarnageSetup_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nNumberOfUses;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioGamePropertyConditionalOnWeaponChange* oWeaponChangeConditional;                         		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioGamePropertyConditionalWeaponPowerUsed* oPowerUseConditional;                             		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.InstantRegenerateShield
// [0x00020002] 
struct UBioPowerScriptDesign_execInstantRegenerateShield_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fPercentOfShieldRegained;                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oBehavior;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           fAmount;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IncreaseAllPowerCooldowns
// [0x00024002] 
struct UBioPowerScriptDesign_execIncreaseAllPowerCooldowns_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fPercentOfTotalToIncreaseBy;                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIncreaseTech;                                    		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIncreaseBiotic;                                  		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIncreaseWeapon;                                  		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIncreaseCombat;                                  		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UBioPower*                                oPower;                                           		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           fCooldownRemaining;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fTotalCooldown;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.ClearAllPowerCooldowns
// [0x00020002] 
struct UBioPowerScriptDesign_execClearAllPowerCooldowns_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oBehavior;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UBioPower*                                oPower;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectSingularity
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectSingularity_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vSingularityLocation;                             		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fForce;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fForceInterval;                                   		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fBubbleRadius;                                    		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0030 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oCasterBehavior;                                  		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oTargetBehavior;                                  		// 0x0040 (0x0008) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oTargetPawnBehavior;                              		// 0x0048 (0x0008) [0x0000000000000000]              
	// class UBioBaseAppearance*                       oAppearance;                                      		// 0x0050 (0x0008) [0x0000000000000000]              
	// struct FName                                    nmBoneName;                                       		// 0x0058 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vPosition;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// float                                           fOuterBubbleRange;                                		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           fVelocityThresholdOuterBubble;                    		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           fInnerBubbleRange;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           fBubbleForce;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectRagdoll
// [0x00024002] 
struct UBioPowerScriptDesign_execEffectRagdoll_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGroupID;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oCasterBehavior;                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oTargetBehavior;                                  		// 0x002C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oTarget;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectEntrenchShield
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectEntrenchShield_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fShieldInc;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oImpactedInfo;                                    		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectRegenerateShield
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectRegenerateShield_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAmountPerInterval;                               		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fInterval;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDamageVulnerability
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectDamageVulnerability_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamageMultiplier;                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectRegen
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectRegen_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHealingFactor;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectHealInstant
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectHealInstant_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHealth;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fToxic;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectHeal
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectHeal_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHealthPerInterval;                               		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fToxicPerInterval;                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fInterval;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectCombatBoost
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectCombatBoost_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDmgDurBonus;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRegenBonus;                                      		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSuppResistBonus;                                 		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMobilityBonus;                                   		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectImmunity
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectImmunity_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamageResistBonus;                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectSniperCritical
// [0x00024002] 
struct UBioPowerScriptDesign_execEffectSniperCritical_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamageBonus;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fStunDuration;                                    		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fMaxDriftRed;                                     		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fMinDriftRed;                                     		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// class UBioGameProperty*                         pStunSubProperty;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0030 (0x0008) [0x0000000000000000]              
	// class UBioGamePropertyConditionalOnWeaponChange* oConditional;                                     		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UBioGamePropertyConditionalHasNotFired*   pHasNotFired;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	// class UBioGameEffectGiveGP*                     pGiveGPEffect;                                    		// 0x0048 (0x0008) [0x0000000000000000]              
	// class UBioGameEffectAttributeBool*              pClearHasFired;                                   		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectOverkill
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectOverkill_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSuppDamage;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fKickbackRed;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHeatRed;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamageBonus;                                     		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UBioGamePropertyConditionalOnWeaponChange* oConditional;                                     		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectMarksman
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectMarksman_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMaxDriftRed;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMinDriftRed;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamageBonus;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRPSBonus;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHeatRed;                                         		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioGamePropertyConditionalOnWeaponChange* oConditional;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectCorrosion
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectCorrosion_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCorrosion;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectSuppressingFire
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectSuppressingFire_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDriftInc;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectZeroGLift
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectZeroGLift_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fLiftForce;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fLiftDistance;                                    		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDeceleration;                                    		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMinVelocity;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oCasterBehavior;                                  		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oTargetBehavior;                                  		// 0x0030 (0x0008) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oTargetPawnBehavior;                              		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UBioGameProperty*                         oProperty;                                        		// 0x0040 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vForce;                                           		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vDestination;                                     		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vPosition;                                        		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FName                                    nmBoneName;                                       		// 0x006C (0x0008) [0x0000000000000000]              
	// class UBioBaseAppearance*                       oAppearance;                                      		// 0x0074 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vDeceleration;                                    		// 0x007C (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oBioPawn;                                         		// 0x0088 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bApplyToAllBones;                                 		// 0x0090 (0x0004) [0x0000000000000000]              
	// class ABioArtPlaceable*                         oArtPlaceable;                                    		// 0x0094 (0x0008) [0x0000000000000000]              
	// class UBioArtPlaceableType*                     oArtPlaceableType;                                		// 0x009C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectAIHacking
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectAIHacking_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oCasterBehavior;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oTargetBehavior;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	// class UBioGameProperty*                         oProperty;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             srImpactText;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDisablePowers
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectDisablePowers_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGFXGroup;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableTech;                                     		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableBiotics;                                  		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableWeaponPowers;                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableCombat;                                   		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectOverheatWeapons
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectOverheatWeapons_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHeat;                                            		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oCasterBehavior;                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oImpactedBehavior;                                		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioGamePropertyConditionalOnWeaponChange* oConditional;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioWeapon*                               oWeapon;                                          		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDisableWeapons
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectDisableWeapons_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGFXGroup;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDisableActions
// [0x00024002] 
struct UBioPowerScriptDesign_execEffectDisableActions_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGFXGroup;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableActionQueue;                              		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDisableMovementStack;                            		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectAdjustStability
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectAdjustStability_Parms
{
	class ABioPawn*                                    oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fAmount;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fApplyInterval;                                   		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTotalTime;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioGameProperty*                         oProperty;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectDamageOverTime
// [0x00024002] 
struct UBioPowerScriptDesign_execEffectDamageOverTime_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamagePerInterval;                               		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vMomentumPerInterval;                             		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UBioDamageType*                              pDamage;                                          		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fInterval;                                        		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nGroup;                                           		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oPawn;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
	// class AController*                              oController;                                      		// 0x0040 (0x0008) [0x0000000000000000]              
	// class UBioGameProperty*                         oProperty;                                        		// 0x0048 (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.EffectTakeDamage
// [0x00020002] 
struct UBioPowerScriptDesign_execEffectTakeDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDamage;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vMomentum;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UBioDamageType*                              pDamage;                                          		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class AController*                              oController;                                      		// 0x0034 (0x0008) [0x0000000000000000]              
	// class UBioGameProperty*                         oProperty;                                        		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           fDistanceScale;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned char                                   eDamageFalloff;                                   		// 0x0048 (0x0001) [0x0000000000000000]              
	// class UBioAttributesDamage*                     oDamageAttributes;                                		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.SpawnBeacon
// [0x00024002] 
struct UBioPowerScriptDesign_execSpawnBeacon_Parms
{
	class UBioActorBehavior*                           oCasterBehavior;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sBeaconActorType;                                 		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     vLocation;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    vFacing;                                          		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFloatingBeacon;                                  		// 0x0034 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bSnapToFloor;                                     		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bSpawnAsProxMine;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fSquadActivateDelay;                              		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fRadiusMulti;                                     		// 0x0044 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fDamageMulti;                                     		// 0x0048 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      oOwner;                                           		// 0x004C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0054 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   oBeacon;                                          		// 0x005C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oBeaconPawn;                                      		// 0x0064 (0x0008) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oBeaconInfo;                                      		// 0x006C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oCasterSquad;                                     		// 0x0074 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oNewSquad;                                        		// 0x007C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquadDesign*                      oNewSquadDesign;                                  		// 0x0084 (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oBeaconAttrib;                                    		// 0x008C (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oCasterAttrib;                                    		// 0x0094 (0x0008) [0x0000000000000000]              
	// int                                             nPowerIndex;                                      		// 0x009C (0x0004) [0x0000000000000000]              
	// class UBioGameProperty*                         oProperty;                                        		// 0x00A0 (0x0008) [0x0000000000000000]              
	// class UBioGameEffectPowerAttributeFloat*        oRadInc;                                          		// 0x00A8 (0x0008) [0x0000000000000000]              
	// class UBioGameEffectPowerAttributeFloat*        oRangeInc;                                        		// 0x00B0 (0x0008) [0x0000000000000000]              
	// class UBioGameEffectPowerParameter*             oDamageInc;                                       		// 0x00B8 (0x0008) [0x0000000000000000]              
	// class UBioPower*                                oPower;                                           		// 0x00C0 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.SpawnBarrier
// [0x00024002] 
struct UBioPowerScriptDesign_execSpawnBarrier_Parms
{
	class UBioActorBehavior*                           oCasterBehavior;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sBarrierActorType;                                		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     vLocation;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    vFacing;                                          		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHealth;                                          		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSnapToFloor;                                     		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAddToSquadCover;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      oOwner;                                           		// 0x0040 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0048 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   oBarrier;                                         		// 0x0050 (0x0008) [0x0000000000000000]              
	// class ABioArtPlaceable*                         oBarrierAPL;                                      		// 0x0058 (0x0008) [0x0000000000000000]              
	// class UBioArtPlaceableBehavior*                 oBarrierInfo;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oCasterSquad;                                     		// 0x0068 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.WeaponPowerActivated
// [0x00020002] 
struct UBioPowerScriptDesign_execWeaponPowerActivated_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNeedsRetrigger;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    PawnCaster;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// class ABioWeaponRanged*                         Weapon;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.ShouldIncrementPowerUsage
// [0x00020002] 
struct UBioPowerScriptDesign_execShouldIncrementPowerUsage_Parms
{
	class AActor*                                      Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 BP;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioActivePower*                          Active;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetFactionRelationship
// [0x00020002] 
struct UBioPowerScriptDesign_execGetFactionRelationship_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oTarget;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oCasterData;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class APawn*                                    oTargetPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oTargetData;                                      		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetTechResistance
// [0x00040003] ( FUNC_Final )
struct UBioPowerScriptDesign_execGetTechResistance_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioItemArmor*                            oArmor;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UBioAttributesItemArmor*                  oArmorData;                                       		// 0x001C (0x0008) [0x0000000000000000]              
	// float                                           fResistance;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fIgnoreResistance;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fMinResistance;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetBioticResistance
// [0x00040003] ( FUNC_Final )
struct UBioPowerScriptDesign_execGetBioticResistance_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oTargetData;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           fResistance;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fIgnoreResistance;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fMinResistance;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetTargetResistance
// [0x00020002] 
struct UBioPowerScriptDesign_execGetTargetResistance_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetDistanceModifier
// [0x00020002] 
struct UBioPowerScriptDesign_execGetDistanceModifier_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eFalloff;                                         		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDistanceFromImpact;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fPowerMaxRange;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fDistanceModifier;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vInvalid;                                         		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetDmgDurModifier
// [0x00020002] 
struct UBioPowerScriptDesign_execGetDmgDurModifier_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oCasterData;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           fPowerModifier;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.GetPhysicsLevel
// [0x00020002] 
struct UBioPowerScriptDesign_execGetPhysicsLevel_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oImpactedInfo;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IsOfRace
// [0x00020002] 
struct UBioPowerScriptDesign_execIsOfRace_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eRace;                                            		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.HasShields
// [0x00024002] 
struct UBioPowerScriptDesign_execHasShields_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCheckMax;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oImpactedInfo;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UBioShield*                               oImpactedShield;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UBioAttributesShield*                     oShieldInfo;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IsDeadBody
// [0x00020002] 
struct UBioPowerScriptDesign_execIsDeadBody_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oImpactPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oImpactPawnBehavior;                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.IsPlaceable
// [0x00020002] 
struct UBioPowerScriptDesign_execIsPlaceable_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioArtPlaceable*                         oImpactedPlaceable;                               		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioPowerScriptDesign.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioPowerScriptDesign_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioAdrenalineScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioAdrenalineScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCooldownRemaining;                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioAdrenalineScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioAdrenalineScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioBarrierScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioBarrierScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oImpactedBehavior;                                		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FVector                                  vRotation;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vUpDir;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vRightDir;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vLocation;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// float                                           fHealth;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             nNumBarriers;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamageBonus;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UBioAttributesItemWeapon*                 oShotgunData;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           fShotgunDamage;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           fScaledCasterPrecisionBonus;                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioCarnageScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioCarnageSetupScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioCarnageSetupScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nNumberOfUses;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSpawnBeacon.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioSpawnBeacon_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioSpawnBeacon.EndPhase
// [0x00020802] ( FUNC_Event )
struct UBioSpawnBeacon_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vBeaconLocation;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oCasterInfo;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// float                                           fBeaconLevel;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             nBeaconLevel;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  sBeaconActorType;                                 		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// float                                           fActivationDelay;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           fRadiusMulti;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           fDamageMulti;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSpawnBeacon.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioSpawnBeacon_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioSpawnBeacon.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSpawnBeacon_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioDampingScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioDampingScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bApplyStun;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTargetResistance;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fCooldownIncPct;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioPawnChallengeScaledType*              oImpactedActorType;                               		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioDampingScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioDampingScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fDifficultyLevel;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioDampingScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioDampingScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioDampingSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
struct UBioDampingSuicideScript_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oCasterInfo;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioDampingSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioDampingSuicideScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioEMPScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioEMPScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fEMPDamage;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fSuppressionDamage;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           fScaledTargetTechResist;                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioEMPScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioEMPScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioEMPScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioEMPScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioEMPSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
struct UBioEMPSuicideScript_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oCasterInfo;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioEMPSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioEMPSuicideScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioFakePowerScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioFakePowerScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   eFaction;                                         		// 0x001C (0x0001) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioFakePowerScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioFakePowerScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioGethCarnageScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioGethCarnageScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioGethCarnageScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioGethCarnageScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           fScaledCasterPrecisionBonus;                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioGethCarnageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioGethCarnageScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioHackingScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioPawnChallengeScaledType*              oImpactedActorType;                               		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           fHackingTime;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           fScaledTargetTechResist;                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHackingScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioHackingScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioHealScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oImpactedPawn;                                    		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oPawnInfo;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioAttributesEpicPawn*                   oPawnAttribs;                                     		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioHealScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fScaledCasterBonus;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fHealAmountPerUse;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           fToxicAmountPerUse;                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealSelfScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioHealSelfScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oImpactedPawn;                                    		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealSelfScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioHealSelfScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oCasterBehavior;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioAttributesEpicPawn*                   oCasterAttributes;                                		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oCasterPawnAttributes;                            		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealSquadScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioHealSquadScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oCasterBehavior;                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oCasterSquad;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// int                                             nMemberIndex;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oMemberAttribs;                                   		// 0x0040 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bMemberDead;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSomeoneHealed;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealSquadScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioHealSquadScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fHealAmountPerUse;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fToxicAmountPerUse;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           fMediGelPerUse;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealSquadScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioHealSquadScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioHealSquadScript.AdjustCooldown
// [0x00420802] ( FUNC_Event )
struct UBioHealSquadScript_eventAdjustCooldown_Parms
{
	float                                              fCoolDownTime;                                    		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioHealSquadScript.DoesSquadNeedHealing
// [0x00020002] 
struct UBioHealSquadScript_execDoesSquadNeedHealing_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oActorSquad;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oSquadMember;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oSquadMemberBehavior;                             		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioAttributesEpicPawn*                   oSquadMemberAttributes;                           		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioAttributesPawn*                       oSquadMemberPawnAttributes;                       		// 0x0034 (0x0008) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealSquadScript.GetCooldownMultiForSquad
// [0x00020002] 
struct UBioHealSquadScript_execGetCooldownMultiForSquad_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oCasterBehavior;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oCasterSquad;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oSquadMember;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oSquadMemberBehavior;                             		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioPower*                                oPower;                                           		// 0x002C (0x0008) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fCooldownMulti;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fMemberCooldownMulti;                             		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHealSquadScript.GetHealAmountForSquad
// [0x00420002] 
struct UBioHealSquadScript_execGetHealAmountForSquad_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHealAmount;                                      		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              fToxicAmount;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class UBioActorBehavior*                        oCasterBehavior;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oCasterSquad;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oSquadMember;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oSquadMemberBehavior;                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class UBioPower*                                oPower;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioHexBarrierScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioHexBarrierScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oImpactedBehavior;                                		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vRotation;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rBarrierRotation;                                 		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vLocation;                                        		// 0x0044 (0x000C) [0x0000000000000000]              
	// float                                           fHealth;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioImmunityScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioImmunityScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamageResistBonus;                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioImmunityScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioImmunityScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioLanceArmScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioLanceArmScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vDirection;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioLanceArmScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioLanceArmScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioLanceArmScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioLanceArmScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioLiftScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioLiftScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fScaledDuration;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioLiftScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioLiftScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioLiftPLCScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioLiftPLCScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fScaledDuration;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oCasterAI;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bIsCurrentTarget;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsPlaceable;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioMarksmanScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioMarksmanScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamageBonus;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fRPSBonus;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fMaxDriftRed;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fMinDriftRed;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fHeatRed;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioMarksmanScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioMarksmanScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioNeuralShockScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioNeuralShockScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fToxicDamage;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vPushMomentum;                                    		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vToxicMomentum;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           fScaledTargetTechResist;                          		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioNeuralShockScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioNeuralShockScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioNeuralShockScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioNeuralShockScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioOverkillScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioOverkillScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fSuppDamage;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fKickbackRed;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fHeatRed;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fDamageBonus;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioOverkillScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioOverkillScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioRegenBurstScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioRegenBurstScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 pPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// float                                           fMaxHealth;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fHealthToHeal;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             nTickCount;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           fHealthPerTick;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           fEffectDuration;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fToxicPerTick_Zero;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fInstantHealth;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fInstantToxic_Zero;                               		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioRepairScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioRepairScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioVehicleBase*                          oVehicle;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	// class APawn*                                    oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     oController;                                      		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioRepairScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioRepairScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fRepairAmount;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fRepairAmountPerTalent;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           fSalvagePerUse;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioRepairScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioRepairScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oCasterBehavior;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioAttributesEpicPawn*                   oCasterAttributes;                                		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioRepairScript.GetSquadElectronicsRank
// [0x00020002] 
struct UBioRepairScript_execGetSquadElectronicsRank_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oCasterInfo;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oSquad;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             nSquadMemberIndex;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             nTalentRank;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             nTotalRank;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSabotageScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioSabotageScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDuration;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fScaledTargetTechResist;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fDamagePerInterval;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSabotageScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioSabotageScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSabotageScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSabotageScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSabotageSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
struct UBioSabotageSuicideScript_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// class UBioPawnBehavior*                         oCasterInfo;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSabotageSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSabotageSuicideScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldBoostScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioShieldBoostScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioItemArmorShielded*                    oImpactedArmor;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UBioAttributesShield*                     oImpactedShield;                                  		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           fShieldsPerSecond;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fShieldsPerInterval;                              		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldBoostScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioShieldBoostScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioShieldBoostScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioShieldBoostScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oCasterBehavior;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// class UBioShield*                               oShield;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           fShieldMax;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioShieldEntrenchScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioShieldEntrenchScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioShieldEntrenchScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioShieldEntrenchScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fShieldsPerSecond;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSiegePulseScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioSiegePulseScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSiegePulseScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioSiegePulseScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fSPDamage;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oCasterPawn;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           fScaledCasterPrecisionBonus;                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSiegePulseScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSiegePulseScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioSingularityScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fBioticResistance;                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fForcePerInterval;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioSingularityScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.BumpUpFromFloor
// [0x00024002] 
struct UBioSingularityScript_execBumpUpFromFloor_Parms
{
	struct FVector                                     vOriginalLocation;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fBumpDistance;                                    		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fFloorZ;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  vFloorLocation;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vNewLocation;                                     		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSingularityScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSingularityScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent_Powers.BioSmashScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioSmashScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vDirection;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSmashScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioSmashScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSmashScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioSmashScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSniperCritScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioSniperCritScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamageBonus;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fMinDriftRed;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fMaxDriftRed;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           fStunDuration;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioSniperCritScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioSniperCritScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioStasisScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioStasisScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioEpicPawnBehavior*                     oCasterBehavior;                                  		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oImpactedBehavior;                                		// 0x0024 (0x0008) [0x0000000000000000]              
	// int                                             srImpactText;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned char                                   eRelation;                                        		// 0x0034 (0x0001) [0x0000000000000000]              
	// unsigned long                                   bAllowDamage;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioStasisScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioStasisScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fAllowDamage;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioTakeDownScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioTakeDownScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oCasterData;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oCasterSquad;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// int                                             nMemberCount;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// class APawn*                                    oSquadMember;                                     		// 0x0038 (0x0008) [0x0000000000000000]              
	// float                                           fDamageBonus;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           fRegenBonus;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           fSuppResistBonus;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           fMobilityBonus;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioTakeDownScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioTakeDownScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioTeslaBurstScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioTeslaBurstScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fEMPDamage;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           fScaledTargetTechResist;                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioTeslaBurstScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioTeslaBurstScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioTeslaBurstScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioTeslaBurstScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioThrowScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioThrowScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fTargetForce;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fTargetDamage;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fScaledTargetBioticResist;                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vDirection;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// class UBioAttributesDamage*                     oDamageAtt;                                       		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioThrowScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioThrowScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioThrowScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioThrowScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioThrowWarpScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioThrowWarpScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fTargetDamagePerInterval;                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fScaledTargetBioticResist;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vWarpMomentum;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           fThrowForce;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           fThrowDamage;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vThrowDirection;                                  		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vThrowMomentum;                                   		// 0x0048 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bSuccess;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	// class UBioAttributesDamage*                     oDamageAtt;                                       		// 0x0058 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioThrowWarpScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioThrowWarpScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioThrowWarpScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioThrowWarpScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioToxicSpitScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioToxicSpitScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioToxicSpitScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioToxicSpitScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fCasterPrecisionBonus;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioToxicSpitScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioToxicSpitScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioToxicSpitSuicideScript.EndPhase
// [0x00020802] ( FUNC_Event )
struct UBioToxicSpitSuicideScript_eventEndPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vMomentum;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioToxicSpitSuicideScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioToxicSpitSuicideScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioUnityScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioUnityScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioEpicPawnBehavior*                     oCasterBehavior;                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oCasterSquad;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         oMember;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oMemberPawn;                                      		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           fPercentOfHealthRegained;                         		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           fPercentOfShieldRegained;                         		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioUnityScript.CanStartPower
// [0x00020802] ( FUNC_Event )
struct UBioUnityScript_eventCanStartPower_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioUnityScript.DoesSquadHaveDeadMember
// [0x00020002] 
struct UBioUnityScript_execDoesSquadHaveDeadMember_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UBioActorBehavior*                        oActorBehavior;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oActorSquad;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class APawn*                                    oSquadMember;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// class UBioActorBehavior*                        oSquadMemberBehavior;                             		// 0x0024 (0x0008) [0x0000000000000000]              
	// int                                             nCount;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioWarpScript_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fTargetDamagePerInterval;                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           fScaledTargetBioticResist;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fDuration;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bSuccess;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioWarpScript.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioWarpScript_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioWarpScript.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioWarpScript_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioArmorEmitter.OnImpact
// [0x00020802] ( FUNC_Event )
struct UBioArmorEmitter_eventOnImpact_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCasterStability;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  V;                                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vDestab;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// int                                             iType;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UBioItemArmorShielded*                    oImpactedArmor;                                   		// 0x0040 (0x0008) [0x0000000000000000]              
	// class UBioAttributesShield*                     oImpactedShield;                                  		// 0x0048 (0x0008) [0x0000000000000000]              
	// float                                           fShieldSettings;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent_Powers.BioArmorEmitter.StartPhase
// [0x00020802] ( FUNC_Event )
struct UBioArmorEmitter_eventStartPhase_Parms
{
	unsigned char                                      ePhase;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oCaster;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDuration;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent_Powers.BioArmorEmitter.InitializePowerScript
// [0x00020802] ( FUNC_Event )
struct UBioArmorEmitter_eventInitializePowerScript_Parms
{
	class UBioPower*                                   pPower;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UBioDeathVFX*                             oDeathVFX;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif