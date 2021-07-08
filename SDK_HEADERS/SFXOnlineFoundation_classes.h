/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXOnlineFoundation_classes.h
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

// Enum SFXOnlineFoundation.ISFXOnlineComponentLogin.SFXOnlineConnectMode
/*enum SFXOnlineConnectMode
{
	SFXONLINE_CM_NONE                                  = 0,
	SFXONLINE_CM_IMPLICIT                              = 1,
	SFXONLINE_CM_EXPLICIT                              = 2,
	SFXONLINE_CM_SILENT                                = 3,
	SFXONLINE_CM_MAX                                   = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineConnection_MessageType
/*enum SFXOnlineConnection_MessageType
{
	SFXONLINE_MT_NORMAL                                = 0,
	SFXONLINE_MT_DOWNLOAD_PROMPT                       = 1,
	SFXONLINE_MT_MAX                                   = 2
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlineUIState
/*enum SFXOnlineUIState
{
	SFXONLINE_UISTATE_NONE                             = 0,
	SFXONLINE_UISTATE_NUCLEUS_CONNECTING               = 1,
	SFXONLINE_UISTATE_NUCLEUS_CONNECTED                = 2,
	SFXONLINE_UISTATE_CERBERUS_CONNECTING              = 3,
	SFXONLINE_UISTATE_CERBERUS_ENTITLED                = 4,
	SFXONLINE_UISTATE_CERBERUS_CONNECTED               = 5,
	SFXONLINE_UISTATE_PS3_RDYTOREDEEMCODE              = 6,
	SFXONLINE_UISTATE_MAX                              = 7
};*/

// Enum SFXOnlineFoundation.SFXOnlineDefine.SFXOnlinePurchaseSource
/*enum SFXOnlinePurchaseSource
{
	SFXONLINE_PS_CERBERUS_MAIN                         = 0,
	SFXONLINE_PS_SHOW_LIVE_CONTENT                     = 1,
	SFXONLINE_PS_DLC_AVAILABLE                         = 2,
	SFXONLINE_PS_MARKETPLACE                           = 3,
	SFXONLINE_PS_MAX                                   = 4
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineNotificationOfferPurchaseStatus
/*enum SFXOnlineNotificationOfferPurchaseStatus
{
	SFXONLINE_NOTIFICATION_PURHASE_UNKNOWN             = 0,
	SFXONLINE_NOTIFICATION_PURHASE_COMPLETED           = 1,
	SFXONLINE_NOTIFICATION_PURHASE_NONE                = 2,
	SFXONLINE_NOTIFICATION_PURHASE_MAX                 = 3
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentNotification.SFXOnlineNotificationPriority
/*enum SFXOnlineNotificationPriority
{
	SFXONLINE_NOTIFICATION_PRIORITY_CERBERUS_CONTENT   = 0,
	SFXONLINE_NOTIFICATION_PRIORITY_NEW_UNLOCK         = 1,
	SFXONLINE_NOTIFICATION_PRIORITY_SOON_DLC           = 2,
	SFXONLINE_NOTIFICATION_PRIORITY_MOTD               = 3,
	SFXONLINE_NOTIFICATION_PRIORITY_UPCOMING_UNLOCK    = 4,
	SFXONLINE_NOTIFICATION_PRIORITY_UPCOMING_DLC       = 5,
	SFXONLINE_NOTIFICATION_PRIORITY_MAX                = 6
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentPlatform.EKeyboardType
/*enum EKeyboardType
{
	KT_Standard                                        = 0,
	KT_Password                                        = 1,
	KT_Email                                           = 2,
	KT_Code                                            = 3,
	KT_MAX                                             = 4
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentTelemetry.ETelemetryChannel
/*enum ETelemetryChannel
{
	Channel_Normal                                     = 0,
	Channel_Anonymous                                  = 1,
	Channel_MAX                                        = 2
};*/

// Enum SFXOnlineFoundation.ISFXOnlineComponentTelemetry.ETelemetryAttributeType
/*enum ETelemetryAttributeType
{
	AttributeType_None                                 = 0,
	AttributeType_String                               = 1,
	AttributeType_Int                                  = 2,
	AttributeType_Float                                = 3,
	AttributeType_Bool                                 = 4,
	AttributeType_ClassName                            = 5,
	AttributeType_MAX                                  = 6
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventStatusFinished
/*enum SFXOnlineEventStatusFinished
{
	SFXONLINE_EVENT_STATUS_FINISHED_SUCCESS            = 0,
	SFXONLINE_EVENT_STATUS_FINISHED_FAILED             = 1,
	SFXONLINE_EVENT_STATUS_FINISHED_CANCELED           = 2,
	SFXONLINE_EVENT_STATUS_FINISHED_TIMEOUT            = 3,
	SFXONLINE_EVENT_STATUS_FINISHED_MAX                = 4
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventType
/*enum SFXOnlineEventType
{
	SFXONLINE_EVENT_NONE                               = 0,
	SFXONLINE_EVENT_TICK                               = 1,
	SFXONLINE_EVENT_TIMER                              = 2,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE          = 3,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE01        = 4,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE02        = 5,
	SFXONLINE_EVENT_PLATFORM_CONTROLLERCHANGE03        = 6,
	SFXONLINE_EVENT_PLATFORM_CONNECT                   = 7,
	SFXONLINE_EVENT_PLATFORM_DISCONNECT                = 8,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE               = 9,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE01             = 10,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE02             = 11,
	SFXONLINE_EVENT_PLATFORM_LOGINCHANGE03             = 12,
	SFXONLINE_EVENT_PLATFORM_UI_OPEN                   = 13,
	SFXONLINE_EVENT_PLATFORM_UI_CLOSE                  = 14,
	SFXONLINE_EVENT_PLATFORM_LOGINCANCEL               = 15,
	SFXONLINE_EVENT_PLATFORM_LOGINSUCCESS              = 16,
	SFXONLINE_EVENT_PLATFORM_UI_KEYBOARD               = 17,
	SFXONLINE_EVENT_MAX                                = 18
};*/

// Enum SFXOnlineFoundation.SFXOnlineEvent.SFXOnlineEventStatus
/*enum SFXOnlineEventStatus
{
	SFXONLINE_EVENT_STATUS_NONE                        = 0,
	SFXONLINE_EVENT_STATUS_PENDING                     = 1,
	SFXONLINE_EVENT_STATUS_COMPLETE                    = 2,
	SFXONLINE_EVENT_STATUS_MAX                         = 3
};*/

// Enum SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SFXOnlineXenonPlayerListButtonType
/*enum SFXOnlineXenonPlayerListButtonType
{
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_TITLECUSTOM = 0,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_PLAYERREVIEW = 1,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_GAMEINVITE  = 2,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_MESSAGE     = 3,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_FRIENDREQUEST = 4,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_NONE        = 5,
	SFXONLINE_XENON_PLAYERLIST_BUTTON_TYPE_MAX         = 6
};*/

// Enum SFXOnlineFoundation.SFXOnlineSubsystem.SFXOnlineComponentType
/*enum SFXOnlineComponentType
{
	SFXONLINE_COMPONENT_TYPE_COORDINATOR               = 0,
	SFXONLINE_COMPONENT_TYPE_ONLINE_API                = 1,
	SFXONLINE_COMPONENT_TYPE_ONLINE_UI                 = 2,
	SFXONLINE_COMPONENT_TYPE_PLATFORM                  = 3,
	SFXONLINE_COMPONENT_TYPE_LOGIN                     = 4,
	SFXONLINE_COMPONENT_TYPE_TELEMETRY                 = 5,
	SFXONLINE_COMPONENT_TYPE_LEADERBOARD               = 6,
	SFXONLINE_COMPONENT_TYPE_STATS                     = 7,
	SFXONLINE_COMPONENT_TYPE_ACHIEVEMENT               = 8,
	SFXONLINE_COMPONENT_TYPE_PLAYGROUP                 = 9,
	SFXONLINE_COMPONENT_TYPE_MATCH_MAKER               = 10,
	SFXONLINE_COMPONENT_TYPE_GAME_MANAGER              = 11,
	SFXONLINE_COMPONENT_TYPE_VOICE                     = 12,
	SFXONLINE_COMPONENT_TYPE_ANTICHEAT                 = 13,
	SFXONLINE_COMPONENT_TYPE_SERVER_LIST               = 14,
	SFXONLINE_COMPONENT_TYPE_GAMEFLOW                  = 15,
	SFXONLINE_COMPONENT_TYPE_ASSOCIATION               = 16,
	SFXONLINE_COMPONENT_TYPE_UNREALSYSTEM              = 17,
	SFXONLINE_COMPONENT_TYPE_UNREALPLAYER              = 18,
	SFXONLINE_COMPONENT_TYPE_UNREALPLAYEREX            = 19,
	SFXONLINE_COMPONENT_TYPE_ORIGIN                    = 20,
	SFXONLINE_COMPONENT_TYPE_NOTIFICATION              = 21,
	SFXONLINE_COMPONENT_TYPE_MAX                       = 22
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXOnlineFoundation.SFXOnlineEvent
// 0x0023 (0x0083 - 0x0060)
class USFXOnlineEvent : public UObject
{
public:
	struct FString                                     ErrorString;                                      		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EventID;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              TimeOut;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                ErrorCode;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsUnique : 1;                                     		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      TimeOutEnabled : 1;                               		// 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      EventType;                                        		// 0x0080 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentStatus;                                    		// 0x0081 (0x0001) [0x0000000000000000]              
	unsigned char                                      Outcome;                                          		// 0x0082 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4483 ];

		return pClassPointer;
	};

	void Update ( class USFXOnlineEvent* oEvent );
	bool IsComplete ( );
	bool IsPending ( );
	bool CompleteAndSucceeded ( );
	bool HasTimedOut ( );
	bool IsTimeoutEnabled ( );
	void DisableTimeout ( );
	void EnableTimeout ( );
	void SetTimeout ( float fEventTimeout );
	float GetTimeout ( );
	void SetErrorString ( struct FString sMessage );
	struct FString GetErrorString ( );
	void SetErrorCode ( int nCode );
	int GetErrorCode ( );
	void SetStatus ( unsigned char eNewStatus );
	unsigned char GetStatus ( );
	void SetOutcome ( unsigned char eStatusFinished );
	unsigned char GetOutcome ( );
	void SetEventId ( int nNewEventId );
	int GetEventId ( );
	void SetEventType ( unsigned char eNewEventType );
	unsigned char GetEventType ( );
};

UClass* USFXOnlineEvent::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_Integer
// 0x0005 (0x0088 - 0x0083)
class USFXOnlineEvent_Integer : public USFXOnlineEvent
{
public:
	int                                                m_nInteger;                                       		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4485 ];

		return pClassPointer;
	};

	void SetInteger ( int nInteger );
	int GetInteger ( );
};

UClass* USFXOnlineEvent_Integer::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_PlatformKeyboardUI
// 0x004E (0x00D1 - 0x0083)
class USFXOnlineEvent_PlatformKeyboardUI : public USFXOnlineEvent
{
public:
	struct FString                                     Response;                                         		// 0x0084 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     TitleText;                                        		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x00A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DefaultText;                                      		// 0x00B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ResponseBuffer;                                   		// 0x00C4 (0x0008) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      ShouldValidate : 1;                               		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      RouteThroughConsole : 1;                          		// 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      LocalUserNum;                                     		// 0x00D0 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4487 ];

		return pClassPointer;
	};

};

UClass* USFXOnlineEvent_PlatformKeyboardUI::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_String
// 0x0011 (0x0094 - 0x0083)
class USFXOnlineEvent_String : public USFXOnlineEvent
{
public:
	struct FString                                     StringData;                                       		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4489 ];

		return pClassPointer;
	};

	void SetStringData ( struct FString sStringData );
	struct FString GetStringData ( );
};

UClass* USFXOnlineEvent_String::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEvent_Notification
// 0x0014 (0x00A8 - 0x0094)
class USFXOnlineEvent_Notification : public USFXOnlineEvent_String
{
public:
	struct FString                                     m_sImageName;                                     		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPriority;                                      		// 0x00A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4491 ];

		return pClassPointer;
	};

	void SetPriority ( int nPriority );
	int GetPriority ( );
	void SetImageName ( struct FString sImageName );
	struct FString GetImageName ( );
};

UClass* USFXOnlineEvent_Notification::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineEventList
// 0x0010 (0x0070 - 0x0060)
class USFXOnlineEventList : public UObject
{
public:
	struct TArray<class USFXOnlineEvent*>              EventList;                                        		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4493 ];

		return pClassPointer;
	};

	class USFXOnlineEvent* GetNextTimedOutEvent ( );
	bool RemoveEvent ( class USFXOnlineEvent* oEvent );
	int FindEventByType ( unsigned char eEventType, int nEventId );
	int FindEvent ( class USFXOnlineEvent* oEvent );
	class USFXOnlineEvent* GetEventAtIndex ( int nEventIndex );
	class USFXOnlineEvent* GetEvent ( class USFXOnlineEvent* oEvent );
	bool AddEvent ( class USFXOnlineEvent* oEvent );
};

UClass* USFXOnlineEventList::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponent
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponent : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4495 ];

		return pClassPointer;
	};

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* UISFXOnlineComponent::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentAPI
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentAPI : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4497 ];

		return pClassPointer;
	};

	bool Idle ( );
};

UClass* UISFXOnlineComponentAPI::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentAchievement
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentAchievement : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4499 ];

		return pClassPointer;
	};

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

UClass* UISFXOnlineComponentAchievement::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentLogin
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentLogin : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4501 ];

		return pClassPointer;
	};

	unsigned char GetConnectMode ( );
	unsigned char GetUIState ( );
	unsigned char CanShowPresenceInformation ( int nUserIndex );
	unsigned char CanViewPlayerProfiles ( int nUserIndex );
	unsigned char CanPurchaseContent ( int nUserIndex );
	unsigned char CanDownloadUserContent ( int nUserIndex );
	unsigned char CanCommunicate ( int nUserIndex );
	unsigned char CanPlayOnline ( int nUserIndex );
	void EnterCDKey ( struct FString sKey );
	void OnDownloadOffersUICompleted ( );
	void OnDLCInfoLoaded ( );
	void OpenCerberusUI ( );
	bool CheckEntitlement ( struct FString sGroup, struct FString sTag );
	bool IsCerberusMember ( );
	void DisablePersona ( struct FString sPersonaNonGrata );
	void CreatePersona ( struct FString sPersonaName );
	void SelectPersona ( struct FString sPersonaName );
	void AcceptTOS ( unsigned long bAccepted );
	void Disconnect ( );
	void SubmitStore ( struct TArray<int> aiChosen );
	void SubmitCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, unsigned long bSubmit );
	void SubmitEmailPasswordMismatch ( struct FString Email, struct FString Password, int eReturnCode );
	void SubmitMessageBox ( int eReturnCode );
	void SubmitRedeemCode ( unsigned long bContinue, struct FString i_sCode );
	void SubmitCerberusWelcomeMessage ( );
	void SubmitCerberusIntro ( int eReturnCode );
	void SubmitNucleusWelcomeMessage ( );
	void SubmitCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, unsigned long bSubmit );
	void SubmitParentEmail ( unsigned long bContinue, struct FString ParentEmail );
	void SubmitNucleusLogin ( struct FString Email, struct FString Password, unsigned char eReturnCode );
	void SubmitIntroPage ( unsigned long bContinue, unsigned long bSimulated );
	void Connect ( unsigned char connectMode );
	void GoBackInUI ( );
	void Cancel ( );
	struct FUniqueNetId GetUserId ( );
	struct FString GetPersonaName ( );
	bool HasInternetConnection ( );
	bool IsConnectedTo3rdPartyOnlineService ( );
	bool HasAccountFor3rdPartyOnlineService ( );
	bool IsSignedIn ( );
	bool IsConnected ( );
	void SwitchActiveUserIndex ( int nNewIndex );
	int GetActiveUserIndex ( );
	unsigned char GetLoginStatus ( );
};

UClass* UISFXOnlineComponentLogin::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentNotification
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentNotification : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4503 ];

		return pClassPointer;
	};

	struct FSFXOnlineTargetOfferInfo GetTargetOfferInfo ( unsigned char nSource );
	unsigned char HasUserPurchasedAnOffer ( struct FSFXOnline_OfferID aOfferId );
	bool DownloadOffers ( struct TArray<struct FSFXOnline_OfferID> aOfferIds );
	struct FString GetOfferKeyIfEntitled ( int internalId );
	struct TArray<struct FSFXOfferDescriptor> GetGrantingOffers ( );
	struct TArray<struct FSFXOfferDescriptor> GetEntitledDLCInfo ( );
	void RefreshEntitlementFlags ( );
	struct TArray<struct FSFXOnlineEntitlementGroupInfo> GetEntitlementGroups ( );
	int GetDaysSinceCerberusRegistration ( );
	bool IsCalendarUnlockEarned ( int nDay );
	void RequestServerInfo ( );
	void RequestData ( );
};

UClass* UISFXOnlineComponentNotification::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentPlatform
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentPlatform : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4505 ];

		return pClassPointer;
	};

	int GetRebootUserData ( );
	bool WasRebootedFromOSCodeRedemptionUI ( );
	bool ShowCodeRedemptionUI ( int UserData );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oUserXuid );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	bool ShowKeyboardUI ( unsigned char byLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowFriendsInviteUI ( unsigned char byLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowFriendsUI ( unsigned char byLocalUserNum );
	unsigned char CanShowPresenceInformation ( unsigned char byLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char byLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char byLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char byLocalUserNum );
	unsigned char CanCommunicate ( unsigned char byLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char byLocalUserNum );
	void SetRichPresence ( unsigned char byLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char byLocalUserNum );
};

UClass* UISFXOnlineComponentPlatform::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentTelemetry
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentTelemetry : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4507 ];

		return pClassPointer;
	};

	void Flush ( unsigned char Channel );
	void RegisterConnectionDelegates ( );
	void OnDisconnect ( int Error, struct FString SessionId );
	void OnAuthenticate ( );
	bool CanCollect ( );
};

UClass* UISFXOnlineComponentTelemetry::pClassPointer = NULL;

// Class SFXOnlineFoundation.ISFXOnlineComponentUserInterface
// 0x0000 (0x0060 - 0x0060)
class UISFXOnlineComponentUserInterface : public UISFXOnlineComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4509 ];

		return pClassPointer;
	};

	void eventShowStore ( struct TArray<struct FSFXOfferDescriptor> aOffers );
	void eventHasCerberusDLC ( unsigned long bVal );
	void eventOnDisplayNotification ( unsigned char Type, struct FString MessageData, struct FString Title, struct FString Image );
	void eventClearNotifications ( );
	void eventCloseEANetworking ( );
	void eventSetState ( unsigned char eState );
	void ShowEmailPasswordMismatch ( struct FString Email, struct FString Password );
	void ShowMessageBoxWait ( int srMessage, int srButton1Text, int srButton2Text );
	void ShowMessageBox ( struct FString sTitle, struct FString sMessage, struct FString sButton1Text, struct FString sButton2Text, struct FString sButton3Text );
	void ShowCreateNucleusAccountEx ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bBioWareProducts, struct FString i_sCountryCode, int BirthDay, int BirthMonth, int BirthYear, struct FString i_sLanguageCode, struct TArray<struct FString> m_CountryCodeList, struct TArray<struct FString> m_CountryDisplayList );
	void ShowCerberusWelcomeMessage ( );
	void ShowRedeemCode ( );
	void ShowCerberusIntro ( );
	void ShowNucleusWelcomeMessage ( );
	void ShowCreateNucleusAccount ( struct FString sEmail, struct FString sPassword, unsigned long bEAProducts, unsigned long bThirdParty, unsigned long bRegisterProduct, unsigned long bBioWareProducts, unsigned long bUnderage );
	void ShowParentEmail ( );
	void ShowAccountDemographics ( struct TArray<struct FString> m_CountryCodeList, struct TArray<struct FString> m_CountryDisplayList );
	void ShowTermsOfService ( struct FString i_sTermsOfService, unsigned long bTOSChanged );
	void ShowNucleusLogin ( struct FString Email, struct FString Password, int eScreenState );
	void ShowIntroPage ( );
};

UClass* UISFXOnlineComponentUserInterface::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineDefine
// 0x0000 (0x0060 - 0x0060)
class USFXOnlineDefine : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4511 ];

		return pClassPointer;
	};

};

UClass* USFXOnlineDefine::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponent
// 0x0034 (0x0094 - 0x0060)
class USFXOnlineComponent : public UObject
{
public:
	struct TArray<struct FSFXOnlineSubscriberEventType> EventSubscriberTable;                             		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEvent__Delegate;                              		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       APIName;                                          		// 0x0080 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class USFXOnlineSubsystem*                         OnlineSubsystem;                                  		// 0x0088 (0x0008) [0x0000000000000000]              
	unsigned long                                      NeedsStateMachine : 1;                            		// 0x0090 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4513 ];

		return pClassPointer;
	};

	bool eventIsXbox360 ( );
	bool eventIsPS3 ( );
	bool eventIsConsole ( );
	bool IsEventPending ( unsigned char eEventType, int nEventId );
	class USFXOnlineEvent* GetEvent ( unsigned char eEventType, int nEventId );
	void WaitingForWorkSetObject ( struct TArray<class USFXOnlineEvent*> aOnlineEventSet, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkSetType ( struct TArray<unsigned char> aWorkUnits, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkType ( unsigned char eWork, struct FScriptDelegate fnWorkComplete, int nEventId );
	void NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished );
	void NotifyWorkFinishedType ( unsigned char eWork, unsigned char eStatusFinished, int nEventId );
	void NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType );
	void NotifyWorkStartedType ( unsigned char eWork, int nEventId, float fTimeOut );
	void NotifyEventObject ( class USFXOnlineEvent* oEvent );
	void NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome );
	void StopWaitingForAllWork ( class UObject* oCallbackTarget );
	void UnsubscribeFromAllEvents ( class UObject* oCallbackTarget );
	void UnsubscribeFromEvent ( unsigned char oEventType, struct FScriptDelegate fnEventCallback );
	void SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void OnEvent ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void SubscribeToEvents ( );
};

UClass* USFXOnlineComponent::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentOrigin
// 0x0030 (0x00C4 - 0x0094)
class USFXOnlineComponentOrigin : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     mPresenceString;                                  		// 0x009C (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     mGamePresenceString;                              		// 0x00AC (0x0010) [0x0000000000001000]              ( CPF_Native )
	int                                                mQueryAchievementsTimeOut;                        		// 0x00BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      mServiceStarted : 1;                              		// 0x00C0 (0x0004) [0x0000000000001000] [0x00000001] ( CPF_Native )
	unsigned long                                      mIsLoggedIn : 1;                                  		// 0x00C0 (0x0004) [0x0000000000001000] [0x00000002] ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4515 ];

		return pClassPointer;
	};

	void OnTick ( );
	bool RefreshServerAchievements_ASync ( struct FSFXCachedAchievements* cached );
	bool SetRichPresence ( struct FString presence, struct FString gamePresence );
	bool RequestProfile ( );
	bool StartService ( );
	bool EnsureSignedIn ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentOrigin::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer
// 0x0438 (0x04CC - 0x0094)
class USFXOnlineComponentUnrealPlayer : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FSFXProfileSettingsCache                    ProfileCache[ 0x4 ];                              		// 0x009C (0x0140) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBioPerUserDelegateLists                    PerUserDelegates[ 0x4 ];                          		// 0x01DC (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLoginStatusDelegates                       PlayerLoginStatusDelegates[ 0x4 ];                		// 0x025C (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXCachedAchievements>       CachedAchievementList;                            		// 0x029C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LocalPlayerStorageReadDelegates;                  		// 0x02AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LocalPlayerStorageWriteDelegates;                 		// 0x02BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              RemotePlayerStorageReadDelegates;                 		// 0x02CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LoginCancelledDelegates;                          		// 0x02DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LoginFailedDelegates;                             		// 0x02EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LogoutCompletedDelegates;                         		// 0x02FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LoginChangeDelegates;                             		// 0x030C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ProfileDataDirectory;                             		// 0x031C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x032C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x033C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x034C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x035C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x036C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x037C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x038C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x039C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x03AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x03BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x03CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x03DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x03EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x03FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x040C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x041C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x042C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x043C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x044C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x045C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x046C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x047C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x048C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x049C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache[ 0x4 ];                        		// 0x04AC (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4517 ];

		return pClassPointer;
	};

	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, int SetIndex, struct TArray<struct FAchievementDetails>* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, struct TArray<struct FOnlineFriendMessage>* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, struct TArray<struct FUniqueNetId> Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, struct TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, struct TArray<struct FSettingsProperty>* Properties );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, struct TArray<struct FOnlineFriend>* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings, unsigned long bIsTrilogyProfile );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings, unsigned long bIsTrilogyProfile );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, struct TArray<struct FFriendsQuery>* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	unsigned char CanShowPresenceInformation ( unsigned char LocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char LocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char LocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char LocalUserNum );
	unsigned char CanCommunicate ( unsigned char LocalUserNum );
	unsigned char CanPlayOnline ( unsigned char LocalUserNum );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	void OnProfileDataChanged ( );
	struct FString CreateProfileName ( unsigned long bIsTrilogyProfile );
	bool DoesProfileExist ( unsigned long bIsTrilogyProfile );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentUnrealPlayer::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx
// 0x00B8 (0x014C - 0x0094)
class USFXOnlineComponentUnrealPlayerEx : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FSFXDeviceIdCache                           DeviceCache[ 0x4 ];                               		// 0x009C (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4519 ];

		return pClassPointer;
	};

	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, struct TArray<struct FUniqueNetId>* Players );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentUnrealPlayerEx::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentUnrealSystem
// 0x00D9 (0x016D - 0x0094)
class USFXOnlineComponentUnrealSystem : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FScriptDelegate>              ExternalUIChangeDelegates;                        		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              ControllerChangeDelegates;                        		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FTitleFile>                   TitleManagedFiles;                                		// 0x00BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              ReadTitleFileCompleteDelegates;                   		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              StorageDeviceChangeDelegates;                     		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              ConnectionStatusChangeDelegates;                  		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FScriptDelegate>              LinkStatusChangeDelegates;                        		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x012C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x016C (0x0001) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4521 ];

		return pClassPointer;
	};

	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, struct TArray<unsigned char>* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	bool IsControllerConnected ( int ControllerId );
	void ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void OnControllerChange ( int ControllerId, unsigned long bIsConnected );
	void SetNetworkNotificationPosition ( unsigned char NewPos );
	unsigned char GetNetworkNotificationPosition ( );
	void ProcessExternalUINotification ( unsigned long bOpening );
	void ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void OnExternalUIChange ( unsigned long bIsOpening );
	void ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void OnLinkStatusChange ( unsigned long bIsConnected );
	bool HasLinkConnection ( );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentUnrealSystem::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentCoordinator
// 0x0260 (0x02C0 - 0x0060)
class USFXOnlineComponentCoordinator : public UObject
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponent;                     		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FSFXOnlineEventNotify                       OnlineEventNotifyTable[ 0x12 ];                   		// 0x0068 (0x0240) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEvent__Delegate;                              		// 0x02A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXOnlineEventList*                         EventList;                                        		// 0x02B8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4523 ];

		return pClassPointer;
	};

	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void StopWaitingForAllWork ( class UObject* oCallbackTarget );
	void WaitingForWorkSetObject ( struct TArray<class USFXOnlineEvent*> aEventObjects, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkSetType ( struct TArray<unsigned char> aEventTypes, struct FScriptDelegate fnWorkComplete, struct TArray<int> aWorkEventIds );
	void WaitingForWorkObject ( class USFXOnlineEvent* oEvent, struct FScriptDelegate fnWorkComplete );
	void WaitingForWorkType ( unsigned char eEventType, struct FScriptDelegate fnWorkComplete, int nEventId );
	bool IsEventPending ( unsigned char eEventType, int nEventId );
	class USFXOnlineEvent* GetEvent ( unsigned char eEventType, int nEventId );
	void UnsubscribeFromAllEvents ( class UObject* oCallbackTarget );
	void UnsubscribeFromEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void SubscribeToEvent ( unsigned char eEventType, struct FScriptDelegate fnEventCallback );
	void NotifyWorkFinishedObject ( class USFXOnlineEvent* oEvent, unsigned char eStatusFinished );
	void NotifyWorkFinishedType ( unsigned char eEventType, unsigned char eStatusFinished, int nEventId );
	void NotifyWorkStartedObject ( class USFXOnlineEvent* oEvent, unsigned char eEventType );
	void NotifyWorkStartedType ( unsigned char eEventType, int nEventId, float fTimeOut );
	void NotifyEventObject ( class USFXOnlineEvent* oEvent );
	void NotifyEventType ( unsigned char eEventType, unsigned char eStatus, unsigned char eOutcome );
	void OnTick ( class USFXOnlineEvent* oEvent );
	void OnEvent ( class USFXOnlineEvent* oEvent );
};

UClass* USFXOnlineComponentCoordinator::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineSubsystem
// 0x01D8 (0x0334 - 0x015C)
class USFXOnlineSubsystem : public UOnlineSubsystem
{
public:
	struct FString                                     GameProtocolVersion;                              		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineAchievement>        AchievementList;                                  		// 0x016C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FString>                      SuggestPersonaNameKeywords;                       		// 0x017C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct TArray<struct FSFXOnlineComponentDescription> ComponentClassList;                               		// 0x018C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OnlineUIClass;                                    		// 0x019C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPointer                                    PlatformOnlineGameCallbackManager;                		// 0x01AC (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UISFXOnlineComponent*                        OnlineComponentList[ 0x16 ];                      		// 0x01B4 (0x0160) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xB0 ];                            		// 0x0264 (0x00B0) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class USFXOnlineEvent*                             TickEvent;                                        		// 0x0314 (0x0008) [0x0000000000000000]              
	int                                                GameListenPort;                                   		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                MaxPlayerCount;                                   		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                MaxObserverCount;                                 		// 0x0324 (0x0004) [0x0000000000000000]              
	int                                                ReserveTimeOut;                                   		// 0x0328 (0x0004) [0x0000000000000000]              
	int                                                GameNetworkTimeOutMS;                             		// 0x032C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      SuggestPersonaNames : 1;                          		// 0x0330 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4525 ];

		return pClassPointer;
	};

	void eventExit ( );
	bool ShowConsoleRoutedKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength );
	bool ShowKeyboardUI ( unsigned char eLocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString sDefaultText, int nMaxResultLength );
	struct FString FormatTime ( float fInSeconds, unsigned long bShowHours, unsigned long bShowMins );
	bool CheckEntitlement ( struct FString sGroup, struct FString sTag );
	bool IsCerberusMember ( );
	struct FUniqueNetId GetUniqueIdFromConnection ( class APlayerReplicationInfo* oPRI );
	struct FString MD5HashString ( struct FString InStr );
	struct FString GetProjectID ( );
	struct FString GetCDKey ( );
	struct FString GetLanguage ( );
	struct FName GetPlatform ( );
	void eventShutDown ( );
	bool NativeInit ( );
	int GetGameListenPort ( );
	int GetReserveTimeout ( );
	int GetMaxObserverCount ( );
	int GetMaxPlayerCount ( );
	void SetMaxPlayerCount ( int nMaxPlayers );
	struct FString GetGameProtocolVersion ( );
	class USFXOnlineComponentOrigin* GetComponentOrigin ( );
	class USFXOnlineComponentUnrealPlayerEx* GetComponentUnrealPlayerEx ( );
	class USFXOnlineComponentUnrealPlayer* GetComponentUnrealPlayer ( );
	class USFXOnlineComponentUnrealSystem* GetComponentUnrealSystem ( );
	class USFXOnlineComponentCoordinator* GetCoordinator ( );
	class UISFXOnlineComponentTelemetry* GetComponentTelemetry ( );
	class UISFXOnlineComponentNotification* GetComponentNotification ( );
	class UISFXOnlineComponentUserInterface* GetComponentUserInterface ( );
	class UISFXOnlineComponentLogin* GetComponentLogin ( );
	class UISFXOnlineComponentAPI* GetComponentAPI ( );
	class UISFXOnlineComponentAchievement* GetComponentAchievement ( );
	class UISFXOnlineComponentPlatform* GetComponentPlatform ( );
	class USFXOnlineSubsystem* GetOnlineSubsystem ( );
	struct FString StripBadPWCharacters ( struct FString sPassword );
	struct FString eventGetURL ( );
	void SetUnrealInterfaces ( );
	void CreateComponents ( );
	void InitGameProtocolVersion ( );
	bool eventInit ( );
	struct TArray<struct FSFXOnlineAchievement> GetAchievementList ( );
};

UClass* USFXOnlineSubsystem::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementPC
// 0x0054 (0x00E8 - 0x0094)
class USFXOnlineComponentAchievementPC : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FMap_Mirror                                 AchievementMap;                                   		// 0x009C (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	int                                                mGrantAchievementsTimeOut;                        		// 0x00E4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4527 ];

		return pClassPointer;
	};

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

UClass* USFXOnlineComponentAchievementPC::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformPC
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentPlatformPC : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4529 ];

		return pClassPointer;
	};

	int GetRebootUserData ( );
	bool WasRebootedFromOSCodeRedemptionUI ( );
	bool ShowCodeRedemptionUI ( int UserData );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformPC::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementXenon
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentAchievementXenon : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4531 ];

		return pClassPointer;
	};

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

UClass* USFXOnlineComponentAchievementXenon::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformXenon
// 0x0084 (0x0118 - 0x0094)
class USFXOnlineComponentPlatformXenon : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FCachedLoginState                           LastLoginState[ 0x4 ];                            		// 0x009C (0x0050) [0x0000000000000002]              ( CPF_Const )
	struct TArray<struct FPointer>                     OverlappedTasks;                                  		// 0x00EC (0x0010) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    NotificationHandle;                               		// 0x00FC (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                NumLogins;                                        		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                LastInputDeviceConnectedMask;                     		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              SigninCountDownCounter;                           		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SigninCountDownDelay;                             		// 0x0110 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsInSignInUI : 1;                                		// 0x0114 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsCountingDownSigninNotification : 1;            		// 0x0114 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4533 ];

		return pClassPointer;
	};

	int GetRebootUserData ( );
	bool WasRebootedFromOSCodeRedemptionUI ( );
	bool ShowCodeRedemptionUI ( int UserData );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	void TickAsyncTasks ( );
	void OnTick ( class USFXOnlineEvent* oEvent );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformXenon::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementPS3
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentAchievementPS3 : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4535 ];

		return pClassPointer;
	};

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

UClass* USFXOnlineComponentAchievementPS3::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformPS3
// 0x0034 (0x00C8 - 0x0094)
class USFXOnlineComponentPlatformPS3 : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct TArray<struct FUniqueNetId>                 PendingRecentPlayers;                             		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSignInComplete__Delegate;                     		// 0x00AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    NpData;                                           		// 0x00BC (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      m_bLaunchedSignInUI : 1;                          		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4537 ];

		return pClassPointer;
	};

	bool ShowLoginUIEx ( struct FScriptDelegate funcSignInComplete );
	void OnSignInComplete ( unsigned long bSignedIn );
	int GetRebootUserData ( );
	bool WasRebootedFromOSCodeRedemptionUI ( );
	bool ShowCodeRedemptionUI ( int UserData );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	void OnKeyboardUI ( class USFXOnlineEvent* oEvent );
	void OnTick ( class USFXOnlineEvent* oEvent );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformPS3::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementDingo
// 0x0050 (0x00E4 - 0x0094)
class USFXOnlineComponentAchievementDingo : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FMap_Mirror                                 AchievementMap;                                   		// 0x009C (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4539 ];

		return pClassPointer;
	};

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

UClass* USFXOnlineComponentAchievementDingo::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformDingo
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentPlatformDingo : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4541 ];

		return pClassPointer;
	};

	void OnTick ( class USFXOnlineEvent* oEvent );
	void OnKeyboardUIClosed ( unsigned long Success, struct FString InputBuffer );
	int GetRebootUserData ( );
	bool WasRebootedFromOSCodeRedemptionUI ( );
	bool ShowCodeRedemptionUI ( int UserData );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformDingo::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis
// 0x0098 (0x012C - 0x0094)
class USFXOnlineComponentAchievementOrbis : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentAchievement;          		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FMap_Mirror                                 AchievementMap;                                   		// 0x009C (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FMap_Mirror                                 TrophyPackMap;                                    		// 0x00E4 (0x0048) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4543 ];

		return pClassPointer;
	};

	int GetTitleAchievementID ( int Index, int* SetIndex );
	int GetPlatformAchievementID ( int Index, int* SetIndex );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	bool IsGranted ( unsigned char LocalUserNum, int AchievementId );
	void Grant ( unsigned char LocalUserNum, int AchievementId );
};

UClass* USFXOnlineComponentAchievementOrbis::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis
// 0x0008 (0x009C - 0x0094)
class USFXOnlineComponentPlatformOrbis : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentPlatform;             		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4545 ];

		return pClassPointer;
	};

	void OnKeyboardUIClosed ( unsigned long Success, struct FString InputBuffer );
	int GetRebootUserData ( );
	bool WasRebootedFromOSCodeRedemptionUI ( );
	bool ShowCodeRedemptionUI ( int UserData );
	bool ShowStoreUI ( );
	bool GetOnlineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool GetOfflineXuid ( int nUserIndex, struct FUniqueNetId* oPlayerXuid );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString sTitleText, struct FString sDescriptionText, unsigned char nKeyboardType, unsigned long bShouldValidate, unsigned long bRouteThroughConsole, struct FString sDefaultText, int nMaxResultLength );
	bool ShowFriendsInviteUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerXuid );
	bool ShowFriendsUI ( unsigned char eLocalUserNum );
	bool ShowAchievementsUI ( unsigned char byLocalUserNum );
	bool ShowFeedbackUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	bool ShowGamerCardUI ( unsigned char eLocalUserNum, struct FUniqueNetId oPlayerId );
	unsigned char CanShowPresenceInformation ( unsigned char eLocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char eLocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char eLocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char eLocalUserNum );
	unsigned char CanCommunicate ( unsigned char eLocalUserNum );
	unsigned char CanPlayOnline ( unsigned char eLocalUserNum );
	void SetRichPresence ( unsigned char eLocalUserNum, int nPresenceMode, struct TArray<struct FLocalizedStringSetting>* aLocalizedStringSettings, struct TArray<struct FSettingsProperty>* aProperties );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	unsigned char GetLoginStatus ( unsigned char eLocalUserNum );
	bool AddRecentPlayer ( struct FUniqueNetId oPlayerId, struct FString sDescription );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
};

UClass* USFXOnlineComponentPlatformOrbis::pClassPointer = NULL;

// Class SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem
// 0x00A4 (0x0138 - 0x0094)
class USFXOnlineComponentTelemetrySystem : public USFXOnlineComponent
{
public:
	struct FPointer                                    VfTable_IISFXOnlineComponentTelemetry;            		// 0x0094 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     InitTestServerAddressOverride;                    		// 0x009C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitProdServerAddressOverride;                    		// 0x00AC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitDomain;                                       		// 0x00BC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitTitleMode;                                    		// 0x00CC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     InitDisabledCountryList;                          		// 0x00DC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __CanCollect__Delegate;                           		// 0x00EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAuthenticate__Delegate;                       		// 0x00FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDisconnect__Delegate;                         		// 0x010C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                bConnectedToChannel[ 0x2 ];                       		// 0x011C (0x0008) [0x0000000000000000]              
	int                                                InitServerPortOverride;                           		// 0x0124 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                InitTitleProjectId;                               		// 0x0128 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                InitSendPercent;                                  		// 0x012C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                InitSendTimeout;                                  		// 0x0130 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bForceAnonymousChannel : 1;                       		// 0x0134 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bEnableSpam : 1;                                  		// 0x0134 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bInitWithEngineConfig : 1;                        		// 0x0134 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4547 ];

		return pClassPointer;
	};

	void OnTick ( class USFXOnlineEvent* oEvent );
	void Flush ( unsigned char Channel );
	struct FName GetAPIName ( );
	void OnRelease ( );
	void OnInitialize ( class USFXOnlineSubsystem* oOnlineSubsystem );
	void RegisterConnectionDelegates ( struct FScriptDelegate CollectDelegate, struct FScriptDelegate AuthenticateDelegate, struct FScriptDelegate DisconnectDelegate );
	void OnDisconnect ( int Error, struct FString SessionId );
	void OnAuthenticate ( );
	bool CanCollect ( );
};

UClass* USFXOnlineComponentTelemetrySystem::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif