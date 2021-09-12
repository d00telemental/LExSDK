/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_DHME1_classes.h
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

// Class PlotManagerDLC_DHME1.BioAutoConditionals
// 0x0000 (0x0060 - 0x0060)
class UBioAutoConditionals : public UBioConditionals
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool F2039 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2038 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2025 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2024 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2023 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2022 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2021 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2020 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2019 ( class ABioWorldInfo* bioWorld, int Argument );
	bool F2018 ( class ABioWorldInfo* bioWorld, int Argument );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif