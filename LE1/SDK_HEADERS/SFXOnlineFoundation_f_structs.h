/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXOnlineFoundation_f_structs.h
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

// Function SFXOnlineFoundation.SFXOnlineEvent.Update
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEvent_execUpdate_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsPending_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.CompleteAndSucceeded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execCompleteAndSucceeded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.HasTimedOut
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execHasTimedOut_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsTimeoutEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsTimeoutEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.DisableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execDisableTimeout_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.EnableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execEnableTimeout_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetTimeout_Parms
{
	float                                              fEventTimeout;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetTimeout_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorString_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorCode_Parms
{
	int                                                nCode;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorCode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetStatus_Parms
{
	unsigned char                                      eNewStatus;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetOutcome_Parms
{
	unsigned char                                      eStatusFinished;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetOutcome_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventId_Parms
{
	int                                                nNewEventId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventType_Parms
{
	unsigned char                                      eNewEventType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.SetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execSetInteger_Parms
{
	int                                                nInteger;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.GetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execGetInteger_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.SetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execSetStringData_Parms
{
	struct FString                                     sStringData;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.GetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execGetStringData_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetPriority_Parms
{
	int                                                nPriority;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetImageName_Parms
{
	struct FString                                     sImageName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetImageName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetNextTimedOutEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetNextTimedOutEvent_Parms
{
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.RemoveEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execRemoveEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEventByType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execFindEventByType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execFindEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEventAtIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEventAtIndex_Parms
{
	int                                                nEventIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.AddEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execAddEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAPI.Idle
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAPI_execIdle_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentAchievement_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentAchievement_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.IsGranted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.Grant
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetConnectMode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetConnectMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetUIState
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetUIState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanShowPresenceInformation
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanShowPresenceInformation_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanViewPlayerProfiles
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanViewPlayerProfiles_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPurchaseContent
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPurchaseContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanDownloadUserContent
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanDownloadUserContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanCommunicate
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanCommunicate_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPlayOnline
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPlayOnline_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execEnterCDKey_Parms
{
	struct FString                                     sKey;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDownloadOffersUICompleted_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDLCInfoLoaded_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOpenCerberusUI_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CheckEntitlement
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCheckEntitlement_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisablePersona_Parms
{
	struct FString                                     sPersonaNonGrata;                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCreatePersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSelectPersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execAcceptTOS_Parms
{
	unsigned long                                      bAccepted : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Disconnect
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisconnect_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitStore_Parms
{
	struct TArray<int>                                 aiChosen;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x002C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x0048 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bSubmit : 1;                                      		// 0x0058 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitEmailPasswordMismatch_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eReturnCode;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitMessageBox_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCode;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusIntro_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSubmit : 1;                                      		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitParentEmail_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ParentEmail;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusLogin_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eReturnCode;                                      		// 0x0020 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitIntroPage_Parms
{
	unsigned long                                      bContinue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSimulated : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Connect
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execConnect_Parms
{
	unsigned char                                      connectMode;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGoBackInUI_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Cancel
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCancel_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetUserId
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetUserId_Parms
{
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetPersonaName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.HasInternetConnection
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execHasInternetConnection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnectedTo3rdPartyOnlineService
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsConnectedTo3rdPartyOnlineService_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.HasAccountFor3rdPartyOnlineService
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execHasAccountFor3rdPartyOnlineService_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsSignedIn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnected
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsConnected_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSwitchActiveUserIndex_Parms
{
	int                                                nNewIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetActiveUserIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetLoginStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetTargetOfferInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetTargetOfferInfo_Parms
{
	unsigned char                                      nSource;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FSFXOnlineTargetOfferInfo                   ReturnValue;                                      		// 0x0004 (0x0020) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.HasUserPurchasedAnOffer
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execHasUserPurchasedAnOffer_Parms
{
	struct FSFXOnline_OfferID                          aOfferId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.DownloadOffers
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execDownloadOffers_Parms
{
	struct TArray<struct FSFXOnline_OfferID>           aOfferIds;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetOfferKeyIfEntitled
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetOfferKeyIfEntitled_Parms
{
	int                                                internalId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetGrantingOffers
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetGrantingOffers_Parms
{
	struct TArray<struct FSFXOfferDescriptor>          ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitledDLCInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetEntitledDLCInfo_Parms
{
	struct TArray<struct FSFXOfferDescriptor>          ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RefreshEntitlementFlags
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRefreshEntitlementFlags_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitlementGroups
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetEntitlementGroups_Parms
{
	struct TArray<struct FSFXOnlineEntitlementGroupInfo> ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetDaysSinceCerberusRegistration
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetDaysSinceCerberusRegistration_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.IsCalendarUnlockEarned
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execIsCalendarUnlockEarned_Parms
{
	int                                                nDay;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestServerInfo_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestData_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowKeyboardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFeedbackUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowGamerCardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsInviteUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanShowPresenceInformation_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPurchaseContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanDownloadUserContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanCommunicate_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPlayOnline_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execSetRichPresence_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetLoginStatus_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.Flush
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentTelemetry_execFlush_Parms
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.RegisterConnectionDelegates
// [0x00020000] 
struct UISFXOnlineComponentTelemetry_execRegisterConnectionDelegates_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.OnDisconnect
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execOnDisconnect_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SessionId;                                        		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.OnAuthenticate
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execOnAuthenticate_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.CanCollect
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execCanCollect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowStore
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventShowStore_Parms
{
	struct TArray<struct FSFXOfferDescriptor>          aOffers;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.HasCerberusDLC
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventHasCerberusDLC_Parms
{
	unsigned long                                      bVal : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.OnDisplayNotification
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventOnDisplayNotification_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MessageData;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ClearNotifications
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventClearNotifications_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.CloseEANetworking
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventCloseEANetworking_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.SetState
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventSetState_Parms
{
	unsigned char                                      eState;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowEmailPasswordMismatch_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBoxWait
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowMessageBoxWait_Parms
{
	int                                                srMessage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                srButton1Text;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                srButton2Text;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBox
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowMessageBox_Parms
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton1Text;                                     		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton2Text;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton3Text;                                     		// 0x0040 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x002C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x0048 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FString>                      m_CountryCodeList;                                		// 0x0058 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FString>                      m_CountryDisplayList;                             		// 0x0068 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowRedeemCode_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusIntro_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bThirdParty : 1;                                  		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bRegisterProduct : 1;                             		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bBioWareProducts : 1;                             		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bUnderage : 1;                                    		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowParentEmail_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowAccountDemographics
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowAccountDemographics_Parms
{
	struct TArray<struct FString>                      m_CountryCodeList;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FString>                      m_CountryDisplayList;                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowTermsOfService
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowTermsOfService_Parms
{
	struct FString                                     i_sTermsOfService;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bTOSChanged : 1;                                  		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusLogin_Parms
{
	struct FString                                     Email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eScreenState;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowIntroPage_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsXbox360
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsXbox360_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsPS3
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsPS3_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsConsole
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsConsole_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsEventPending
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetObject_Parms
{
	struct TArray<class USFXOnlineEvent*>              aOnlineEventSet;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetType_Parms
{
	struct TArray<unsigned char>                       aWorkUnits;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventId;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.StopWaitingForAllWork
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromAllEvents
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      oEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnEvent
// [0x00120000] 
struct USFXOnlineComponent_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvents
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execSubscribeToEvents_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnTick
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnTick_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RefreshServerAchievements_ASync
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRefreshServerAchievements_ASync_Parms
{
	struct FSFXCachedAchievements                      cached;                                           		// 0x0000 (0x0024) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.SetRichPresence
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execSetRichPresence_Parms
{
	struct FString                                     presence;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     gamePresence;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestProfile
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestProfile_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.StartService
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execStartService_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.EnsureSignedIn
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execEnsureSignedIn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnUnlockAchievementComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.UnlockAchievement
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetAchievements
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FAchievementDetails>          Achievements;                                     		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                SetIndex;                                         		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadAchievementsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadAchievements
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DeleteMessage
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendMessageReceived
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SendingNick;                                      		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetFriendMessages
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriendMessage>         FriendMessages;                                   		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnJoinFriendGameComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.JoinFriendGame
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReceivedGameInviteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReceivedGameInviteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReceivedGameInvite
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviterName;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendGameInviteToFriends
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FUniqueNetId>                 Friends;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendGameInviteToFriend
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendMessageToFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendInviteReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendInviteReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendInviteReceived
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     RequestingNick;                                   		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.RemoveFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DenyFriendInvite
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AcceptFriendInvite
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnAddFriendByNameComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendByName
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FriendName;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriend
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetKeyboardInputResults
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnKeyboardInputComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowKeyboardUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      LocalizedStringSettings;                          		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            Properties;                                       		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetFriendsList
// [0x00424000] 
struct USFXOnlineComponentUnrealPlayer_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadFriendsCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadFriendsCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadFriendsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadFriendsList
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnWritePlayerStorageComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.WritePlayerStorage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetPlayerStorage
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadPlayerStorageForNetId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadPlayerStorageForNetId_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadPlayerStorageComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadPlayerStorage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnWriteProfileSettingsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.WriteProfileSettings
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTrilogyProfile : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetProfileSettings
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadProfileSettingsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadProfileSettings
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTrilogyProfile : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendsChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendsChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearMutingChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddMutingChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginCancelledDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginCancelledDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowFriendsUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsMuted
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AreAnyFriends
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FFriendsQuery>                Query;                                            		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsLocalLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsGuestLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetPlayerNickname
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetUniquePlayerId
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetLoginStatus
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineSubsystem*                      oOnlineSubsystem;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ELoginStatus;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLogoutCompletedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLogoutCompletedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLogoutCompleted
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.Logout
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginFailedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginFailedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginFailed
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AutoLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.Login
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LoginName;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly : 1;                              		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendsChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendsChange_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnMutingChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnMutingChange_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginCancelled
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginCancelled_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnProfileDataChanged
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnProfileDataChanged_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CreateProfileName
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCreateProfileName_Parms
{
	unsigned long                                      bIsTrilogyProfile : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DoesProfileExist
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execDoesProfileExist_Parms
{
	unsigned long                                      bIsTrilogyProfile : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowCustomPlayersUI
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowCustomPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FUniqueNetId>                 Players;                                          		// 0x0004 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowPlayersUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowFriendsInviteUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowFriendsInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ClearProfileDataChangedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execClearProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.AddProfileDataChangedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execAddProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnProfileDataChanged
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayerEx_execOnProfileDataChanged_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.UnlockGamerPicture
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execUnlockGamerPicture_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.IsDeviceValid
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execIsDeviceValid_Parms
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execGetDeviceSelectionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     DeviceName;                                       		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayerEx_execClearDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.AddDeviceSelectionDoneDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayerEx_execAddDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnDeviceSelectionComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayerEx_execOnDeviceSelectionComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execShowDeviceSelectionUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceShowUI : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bManageStorage : 1;                               		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowMembershipMarketplaceUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowMembershipMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowContentMarketplaceUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowInviteUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowAchievementsUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowAchievementsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowMessagesUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowMessagesUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowGamerCardUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowGamerCardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowFeedbackUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowFeedbackUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetTitleFileState
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<unsigned char>                       FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnReadTitleFileComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearStorageDeviceChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddStorageDeviceChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnStorageDeviceChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnStorageDeviceChange_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetNATType
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnConnectionStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.IsControllerConnected
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearControllerChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddControllerChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnControllerChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetNetworkNotificationPosition
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ProcessExternalUINotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execProcessExternalUINotification_Parms
{
	unsigned long                                      bOpening : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearExternalUIChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddExternalUIChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnExternalUIChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddLinkStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnLinkStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.HasLinkConnection
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execHasLinkConnection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetAPIName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnRelease
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnInitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.StopWaitingForAllWork
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetObject_Parms
{
	struct TArray<class USFXOnlineEvent*>              aEventObjects;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetType_Parms
{
	struct TArray<unsigned char>                       aEventTypes;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 aWorkEventIds;                                    		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventId;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.IsEventPending
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetEvent
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromAllEvents
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.SubscribeToEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventId;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnEvent
// [0x00120000] 
struct USFXOnlineComponentCoordinator_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USFXOnlineSubsystem_eventExit_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowConsoleRoutedKeyboardUI
// [0x00024102] 
struct USFXOnlineSubsystem_execShowConsoleRoutedKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowKeyboardUI
// [0x00024002] 
struct USFXOnlineSubsystem_execShowKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.FormatTime
// [0x00044401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execFormatTime_Parms
{
	float                                              fInSeconds;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowHours : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowMins : 1;                                    		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CheckEntitlement
// [0x00020002] 
struct USFXOnlineSubsystem_execCheckEntitlement_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTag;                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.IsCerberusMember
// [0x00020002] 
struct USFXOnlineSubsystem_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetUniqueIdFromConnection
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetUniqueIdFromConnection_Parms
{
	class APlayerReplicationInfo*                      oPRI;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.MD5HashString
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execMD5HashString_Parms
{
	struct FString                                     InStr;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetProjectID
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetProjectID_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCDKey
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetCDKey_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetLanguage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetLanguage_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetPlatform
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetPlatform_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShutDown
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USFXOnlineSubsystem_eventShutDown_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.NativeInit
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execNativeInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameListenPort
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetGameListenPort_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetReserveTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetReserveTimeout_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxObserverCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetMaxObserverCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetMaxPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.SetMaxPlayerCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execSetMaxPlayerCount_Parms
{
	int                                                nMaxPlayers;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameProtocolVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetGameProtocolVersion_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentOrigin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentOrigin_Parms
{
	class USFXOnlineComponentOrigin*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealPlayerEx
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealPlayerEx_Parms
{
	class USFXOnlineComponentUnrealPlayerEx*           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealPlayer_Parms
{
	class USFXOnlineComponentUnrealPlayer*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealSystem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealSystem_Parms
{
	class USFXOnlineComponentUnrealSystem*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCoordinator
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetCoordinator_Parms
{
	class USFXOnlineComponentCoordinator*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentTelemetry
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentTelemetry_Parms
{
	class UISFXOnlineComponentTelemetry*               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentNotification_Parms
{
	class UISFXOnlineComponentNotification*            ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUserInterface
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUserInterface_Parms
{
	class UISFXOnlineComponentUserInterface*           ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentLogin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentLogin_Parms
{
	class UISFXOnlineComponentLogin*                   ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAPI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAPI_Parms
{
	class UISFXOnlineComponentAPI*                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAchievement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAchievement_Parms
{
	class UISFXOnlineComponentAchievement*             ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentPlatform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentPlatform_Parms
{
	class UISFXOnlineComponentPlatform*                ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetOnlineSubsystem
// [0x00022400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetOnlineSubsystem_Parms
{
	class USFXOnlineSubsystem*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.StripBadPWCharacters
// [0x00080002] 
struct USFXOnlineSubsystem_execStripBadPWCharacters_Parms
{
	struct FString                                     sPassword;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sStrippedPassword;                                		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nIndex;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FString                                  sBuffer;                                          		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetURL
// [0x00020902] ( FUNC_Event )
struct USFXOnlineSubsystem_eventGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sURL;                                             		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.SetUnrealInterfaces
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execSetUnrealInterfaces_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CreateComponents
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execCreateComponents_Parms
{
	// struct FName                                    nmPlatformName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             nComponentIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.InitGameProtocolVersion
// [0x00040001] ( FUNC_Final )
struct USFXOnlineSubsystem_execInitGameProtocolVersion_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Init
// [0x00020802] ( FUNC_Event )
struct USFXOnlineSubsystem_eventInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetAchievementList
// [0x00020002] 
struct USFXOnlineSubsystem_execGetAchievementList_Parms
{
	struct TArray<struct FSFXOnlineAchievement>        ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.TickAsyncTasks
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execTickAsyncTasks_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUIEx
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowLoginUIEx_Parms
{
	struct FScriptDelegate                             funcSignInComplete;                               		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnSignInComplete
// [0x00120000] 
struct USFXOnlineComponentPlatformPS3_execOnSignInComplete_Parms
{
	unsigned long                                      bSignedIn : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnKeyboardUI
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnKeyboardUI_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnKeyboardUIClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnKeyboardUIClosed_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     InputBuffer;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnKeyboardUIClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnKeyboardUIClosed_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     InputBuffer;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetRebootUserData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetRebootUserData_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.WasRebootedFromOSCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execWasRebootedFromOSCodeRedemptionUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowCodeRedemptionUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowCodeRedemptionUI_Parms
{
	int                                                UserData;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole : 1;                         		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.Flush
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execFlush_Parms
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.RegisterConnectionDelegates
// [0x00020003] ( FUNC_Final )
struct USFXOnlineComponentTelemetrySystem_execRegisterConnectionDelegates_Parms
{
	struct FScriptDelegate                             CollectDelegate;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             AuthenticateDelegate;                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             DisconnectDelegate;                               		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnDisconnect
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execOnDisconnect_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SessionId;                                        		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnAuthenticate
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execOnAuthenticate_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.CanCollect
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execCanCollect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif