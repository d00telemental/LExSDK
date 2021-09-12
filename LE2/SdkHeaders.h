/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "SdkInitializer.h"



/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

#undef lst1
#undef lst2
#undef lst3
#undef lst4
#undef lst5
#undef lst6
#undef lst7
#undef lst8
#undef lst9
#undef lst10
#undef lst11
#undef lst12
#undef lst13
#undef lst14
#undef lst15
#undef lst16

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

}; 

struct PackedIndex 
{ 
DWORD Offset : 20; 
DWORD Length : 9; 
DWORD Bits : 3; 
}; 

#pragma pack(1)
struct FNameEntry
{
	PackedIndex Index;
	FNameEntry* HashNext;
	char AnsiName[1];
};

#pragma pack(1)
struct FName
{
	DWORD Offset : 29;
	DWORD Chunk : 3;
	signed long Number;

	__forceinline char* GetName() const noexcept
	{
		auto chunk = SDKInitializer::Instance()->GetBioNamePools()[Chunk]; 
		auto entry = (FNameEntry*)((BYTE*)chunk + Offset);
		return entry->AnsiName;
	}

	bool operator==(const FName& A) const noexcept
	{
		return Offset == A.Offset && Chunk == A.Chunk && Number == A.Number;
	}

	static bool TryFind(char* lookup, signed long instance, FName* outName)
	{
		auto gBioNamePools = SDKInitializer::Instance()->GetBioNamePools();
		for (FNameEntry** namePool = reinterpret_cast<FNameEntry**>(gBioNamePools);
				*namePool != nullptr;
				namePool++)
		{
			for (FNameEntry* nameEntry = *namePool;
					nameEntry->Index.Length != 0;
					nameEntry = reinterpret_cast<FNameEntry*>(reinterpret_cast<BYTE*>(nameEntry) + sizeof FNameEntry + nameEntry->Index.Length))
			{
				if (!strcmp(lookup, nameEntry->AnsiName))
				{
					FName name{};
					name.Offset = (DWORD)((unsigned long long)nameEntry - (unsigned long long)*namePool);
					name.Chunk = (DWORD)((unsigned long long)namePool - (unsigned long long)gBioNamePools);
					name.Number = instance;
					*outName = name;
					return true;
				}
			}
		}
		outName = nullptr;
		return false;
	}

	FName() : Offset{ 0 }, Chunk{ 0 }, Number{ 0 } { }

	FName(char* lookup, signed long instance = 0)
		: Offset{ 0 }, Chunk{ 0 }, Number{ instance }
	{
		if (!TryFind(lookup, instance, this))
		{ 
			if (IsDebuggerPresent()) DebugBreak();

			if (!strcmp(lookup, "None")) 
			{
				MessageBoxW(nullptr, L"FName lookup contstructor failed for 'None'!", L"LE2 SDK ERROR", MB_OK | MB_ICONERROR);
				exit(-1);
			}
			else 
			{
				*this = FName{ "None", instance };
			}
		} 
	}
};

struct FString : public TArray<wchar_t>  { 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( (int)wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( (int)wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	class UObject*		Object; 
	struct FName		FunctionName; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
// #include "SDK_HEADERS\Core_functions.cpp"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
// #include "SDK_HEADERS\Engine_functions.cpp"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
// #include "SDK_HEADERS\IpDrv_functions.cpp"
#include "SDK_HEADERS\GFxUI_structs.h"
#include "SDK_HEADERS\GFxUI_classes.h"
#include "SDK_HEADERS\GFxUI_f_structs.h"
// #include "SDK_HEADERS\GFxUI_functions.cpp"
#include "SDK_HEADERS\WwiseAudio_structs.h"
#include "SDK_HEADERS\WwiseAudio_classes.h"
#include "SDK_HEADERS\WwiseAudio_f_structs.h"
// #include "SDK_HEADERS\WwiseAudio_functions.cpp"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
// #include "SDK_HEADERS\WinDrv_functions.cpp"
#include "SDK_HEADERS\SFXOnlineFoundation_structs.h"
#include "SDK_HEADERS\SFXOnlineFoundation_classes.h"
#include "SDK_HEADERS\SFXOnlineFoundation_f_structs.h"
// #include "SDK_HEADERS\SFXOnlineFoundation_functions.cpp"
#include "SDK_HEADERS\SFXGame_structs.h"
#include "SDK_HEADERS\SFXGame_classes.h"
#include "SDK_HEADERS\SFXGame_f_structs.h"
// #include "SDK_HEADERS\SFXGame_functions.cpp"
#include "SDK_HEADERS\PlotManagerMap_structs.h"
#include "SDK_HEADERS\PlotManagerMap_classes.h"
#include "SDK_HEADERS\PlotManagerMap_f_structs.h"
// #include "SDK_HEADERS\PlotManagerMap_functions.cpp"
#include "SDK_HEADERS\PlotManager_structs.h"
#include "SDK_HEADERS\PlotManager_classes.h"
#include "SDK_HEADERS\PlotManager_f_structs.h"
// #include "SDK_HEADERS\PlotManager_functions.cpp"
#include "SDK_HEADERS\BIOC_Materials_structs.h"
#include "SDK_HEADERS\BIOC_Materials_classes.h"
#include "SDK_HEADERS\BIOC_Materials_f_structs.h"
// #include "SDK_HEADERS\BIOC_Materials_functions.cpp"
#include "SDK_HEADERS\SFXGameContent_Bonuses_structs.h"
#include "SDK_HEADERS\SFXGameContent_Bonuses_classes.h"
#include "SDK_HEADERS\SFXGameContent_Bonuses_f_structs.h"
// #include "SDK_HEADERS\SFXGameContent_Bonuses_functions.cpp"
#include "SDK_HEADERS\SFXGameContent_structs.h"
#include "SDK_HEADERS\SFXGameContent_classes.h"
#include "SDK_HEADERS\SFXGameContent_f_structs.h"
// #include "SDK_HEADERS\SFXGameContent_functions.cpp"
#include "SDK_HEADERS\SFXQA_structs.h"
#include "SDK_HEADERS\SFXQA_classes.h"
#include "SDK_HEADERS\SFXQA_f_structs.h"
// #include "SDK_HEADERS\SFXQA_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_00_Shared_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_00_Shared_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_00_Shared_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_00_Shared_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Moment01_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Moment01_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Moment01_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Moment01_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_VT_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_VT_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_VT_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_VT_functions.cpp"
#include "SDK_HEADERS\SFXGameDLC_PRE_Cerberus_structs.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_Cerberus_classes.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_Cerberus_f_structs.h"
// #include "SDK_HEADERS\SFXGameDLC_PRE_Cerberus_functions.cpp"
#include "SDK_HEADERS\SFXGameDLC_PRE_Collectors_structs.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_Collectors_classes.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_Collectors_f_structs.h"
// #include "SDK_HEADERS\SFXGameDLC_PRE_Collectors_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_PRE_DA_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRE_DA_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRE_DA_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_PRE_DA_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_PRE_Terminus_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_PRE_Terminus_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_PRE_Terminus_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_PRE_Terminus_functions.cpp"
#include "SDK_HEADERS\SFXGameDLC_PRE_Terminus_structs.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_Terminus_classes.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_Terminus_f_structs.h"
// #include "SDK_HEADERS\SFXGameDLC_PRE_Terminus_functions.cpp"
#include "SDK_HEADERS\SFXGameDLC_PRE_General_structs.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_General_classes.h"
#include "SDK_HEADERS\SFXGameDLC_PRE_General_f_structs.h"
// #include "SDK_HEADERS\SFXGameDLC_PRE_General_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Gulp01_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Gulp01_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Gulp01_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_PRO_Gulp01_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper01_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper01_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper01_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper01_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper02_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper02_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper02_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_PRO_Pepper02_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Hammer01_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Hammer01_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Hammer01_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Hammer01_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_MT_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_MT_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_MT_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_HEN_MT_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack01_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack01_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack01_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack01_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_MCR_03_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_MCR_03_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_MCR_03_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_MCR_03_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Pack01_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Pack01_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Pack01_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_Pack01_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_UNC_01_AreaMap_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_UNC_01_AreaMap_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_UNC_01_AreaMap_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_UNC_01_AreaMap_functions.cpp"
#include "SDK_HEADERS\SFXGameContent_Inventory_structs.h"
#include "SDK_HEADERS\SFXGameContent_Inventory_classes.h"
#include "SDK_HEADERS\SFXGameContent_Inventory_f_structs.h"
// #include "SDK_HEADERS\SFXGameContent_Inventory_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_CER_02_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_CER_02_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_CER_02_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_CER_02_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part01_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part01_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part01_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part01_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_DHME1_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_DHME1_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_DHME1_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_DHME1_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack02_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack02_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack02_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_CON_Pack02_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part02_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part02_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part02_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_EXP_Part02_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch02_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch02_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch02_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch02_functions.cpp"
#include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch03_structs.h"
#include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch03_classes.h"
#include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch03_f_structs.h"
// #include "SDK_HEADERS\SFXGameContentDLC_UPD_Patch03_functions.cpp"
