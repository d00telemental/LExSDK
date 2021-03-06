/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
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
				MessageBoxW(nullptr, L"FName lookup contstructor failed for 'None'!", L"LE1 SDK ERROR", MB_OK | MB_ICONERROR);
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
#include "SDK_HEADERS\ISACTAudio_structs.h"
#include "SDK_HEADERS\ISACTAudio_classes.h"
#include "SDK_HEADERS\ISACTAudio_f_structs.h"
// #include "SDK_HEADERS\ISACTAudio_functions.cpp"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
// #include "SDK_HEADERS\WinDrv_functions.cpp"
#include "SDK_HEADERS\SFXGame_structs.h"
#include "SDK_HEADERS\SFXGame_classes.h"
#include "SDK_HEADERS\SFXGame_f_structs.h"
// #include "SDK_HEADERS\SFXGame_functions.cpp"
#include "SDK_HEADERS\SFXOnlineFoundation_structs.h"
#include "SDK_HEADERS\SFXOnlineFoundation_classes.h"
#include "SDK_HEADERS\SFXOnlineFoundation_f_structs.h"
// #include "SDK_HEADERS\SFXOnlineFoundation_functions.cpp"
#include "SDK_HEADERS\PlotManagerMap_structs.h"
#include "SDK_HEADERS\PlotManagerMap_classes.h"
#include "SDK_HEADERS\PlotManagerMap_f_structs.h"
// #include "SDK_HEADERS\PlotManagerMap_functions.cpp"
#include "SDK_HEADERS\SFXStrategicAI_structs.h"
#include "SDK_HEADERS\SFXStrategicAI_classes.h"
#include "SDK_HEADERS\SFXStrategicAI_f_structs.h"
// #include "SDK_HEADERS\SFXStrategicAI_functions.cpp"
#include "SDK_HEADERS\SFXGameContent_Powers_structs.h"
#include "SDK_HEADERS\SFXGameContent_Powers_classes.h"
#include "SDK_HEADERS\SFXGameContent_Powers_f_structs.h"
// #include "SDK_HEADERS\SFXGameContent_Powers_functions.cpp"
#include "SDK_HEADERS\PlotManager_structs.h"
#include "SDK_HEADERS\PlotManager_classes.h"
#include "SDK_HEADERS\PlotManager_f_structs.h"
// #include "SDK_HEADERS\PlotManager_functions.cpp"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_classes.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_f_structs.h"
// #include "SDK_HEADERS\PlotManagerDLC_UNC_functions.cpp"
#include "SDK_HEADERS\BIOC_Materials_structs.h"
#include "SDK_HEADERS\BIOC_Materials_classes.h"
#include "SDK_HEADERS\BIOC_Materials_f_structs.h"
// #include "SDK_HEADERS\BIOC_Materials_functions.cpp"
#include "SDK_HEADERS\SFXWorldResources_structs.h"
#include "SDK_HEADERS\SFXWorldResources_classes.h"
#include "SDK_HEADERS\SFXWorldResources_f_structs.h"
// #include "SDK_HEADERS\SFXWorldResources_functions.cpp"
#include "SDK_HEADERS\SFXVehicleResources_structs.h"
#include "SDK_HEADERS\SFXVehicleResources_classes.h"
#include "SDK_HEADERS\SFXVehicleResources_f_structs.h"
// #include "SDK_HEADERS\SFXVehicleResources_functions.cpp"
#include "SDK_HEADERS\SFXQA_structs.h"
#include "SDK_HEADERS\SFXQA_classes.h"
#include "SDK_HEADERS\SFXQA_f_structs.h"
// #include "SDK_HEADERS\SFXQA_functions.cpp"
