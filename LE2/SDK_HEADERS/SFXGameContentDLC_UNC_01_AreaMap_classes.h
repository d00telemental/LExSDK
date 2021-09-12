/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UNC_01_AreaMap_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContentDLC_UNC_01_AreaMap.SFXAreaMapDataEx
// 0x0007 (0x00B0 - 0x00A9)
class USFXAreaMapDataEx : public USFXAreaMapData
{
public:
	int                                                MapLayoutOverride;                                		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContentDLC_UNC_01_AreaMap.SFXSeqAct_SetAreaMapEx
// 0x000B (0x014C - 0x0141)
class USFXSeqAct_SetAreaMapEx : public USFXSeqAct_SetAreaMap
{
public:
	int                                                MapLayoutOverride;                                		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIgnoreMapLayoutEnum : 1;                         		// 0x0148 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_AreaMapEx
// 0x0000 (0x00A8 - 0x00A8)
class USFXSFHandler_AreaMapEx : public USFXSFHandler_AreaMap
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetMap ( class USFXAreaMapData* oMapData );
	void ProcessPlayer ( class USFXAreaMapData* oMapData );
};

// Class SFXGameContentDLC_UNC_01_AreaMap.SFXSFHandler_PCAreaMapEx
// 0x0000 (0x00A8 - 0x00A8)
class USFXSFHandler_PCAreaMapEx : public USFXSFHandler_AreaMapEx
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnPanelAdded ( );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif