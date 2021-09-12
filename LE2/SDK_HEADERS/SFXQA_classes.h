/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXQA_classes.h
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

// Class SFXQA.BioSeqAct_IsAutomated
// 0x0004 (0x00FC - 0x00F8)
class UBioSeqAct_IsAutomated : public USequenceAction
{
public:
	int                                                bQAAutomation;                                    		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXQA.BioSeqAct_IsPerformance
// 0x0004 (0x00FC - 0x00F8)
class UBioSeqAct_IsPerformance : public USequenceAction
{
public:
	int                                                bPerformance;                                     		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXQA.BioSeqAct_IsSplinePilot
// 0x0004 (0x00FC - 0x00F8)
class UBioSeqAct_IsSplinePilot : public USequenceAction
{
public:
	int                                                bSplinePilot;                                     		// 0x00F8 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXQA.BioSeqAct_ReadSplinePilotConsoleCommand
// 0x0020 (0x0118 - 0x00F8)
class UBioSeqAct_ReadSplinePilotConsoleCommand : public USequenceAction
{
public:
	struct FString                                     sConsoleCommand;                                  		// 0x00F8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     m_sOutputString;                                  		// 0x0108 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif