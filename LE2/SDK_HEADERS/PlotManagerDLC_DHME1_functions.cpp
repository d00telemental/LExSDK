/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_DHME1_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "../SdkHeaders.h"



#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* UBioAutoConditionals::pClassPointer = NULL;

class UClass* UBioAutoConditionals::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_DHME1.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2039
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2039 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2039 = NULL;

	if ( ! pFnF2039 )
		pFnF2039 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2039" );

	UBioAutoConditionals_execF2039_Parms F2039_Parms;
	F2039_Parms.bioWorld = bioWorld;
	F2039_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2039, &F2039_Parms, NULL );

	return F2039_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2038
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2038 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2038 = NULL;

	if ( ! pFnF2038 )
		pFnF2038 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2038" );

	UBioAutoConditionals_execF2038_Parms F2038_Parms;
	F2038_Parms.bioWorld = bioWorld;
	F2038_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2038, &F2038_Parms, NULL );

	return F2038_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2025
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2025 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2025 = NULL;

	if ( ! pFnF2025 )
		pFnF2025 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2025" );

	UBioAutoConditionals_execF2025_Parms F2025_Parms;
	F2025_Parms.bioWorld = bioWorld;
	F2025_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2025, &F2025_Parms, NULL );

	return F2025_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2024
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2024 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2024 = NULL;

	if ( ! pFnF2024 )
		pFnF2024 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2024" );

	UBioAutoConditionals_execF2024_Parms F2024_Parms;
	F2024_Parms.bioWorld = bioWorld;
	F2024_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2024, &F2024_Parms, NULL );

	return F2024_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2023
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2023 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2023 = NULL;

	if ( ! pFnF2023 )
		pFnF2023 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2023" );

	UBioAutoConditionals_execF2023_Parms F2023_Parms;
	F2023_Parms.bioWorld = bioWorld;
	F2023_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2023, &F2023_Parms, NULL );

	return F2023_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2022
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2022 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2022 = NULL;

	if ( ! pFnF2022 )
		pFnF2022 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2022" );

	UBioAutoConditionals_execF2022_Parms F2022_Parms;
	F2022_Parms.bioWorld = bioWorld;
	F2022_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2022, &F2022_Parms, NULL );

	return F2022_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2021
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2021 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2021 = NULL;

	if ( ! pFnF2021 )
		pFnF2021 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2021" );

	UBioAutoConditionals_execF2021_Parms F2021_Parms;
	F2021_Parms.bioWorld = bioWorld;
	F2021_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2021, &F2021_Parms, NULL );

	return F2021_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2020
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2020 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2020 = NULL;

	if ( ! pFnF2020 )
		pFnF2020 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2020" );

	UBioAutoConditionals_execF2020_Parms F2020_Parms;
	F2020_Parms.bioWorld = bioWorld;
	F2020_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2020, &F2020_Parms, NULL );

	return F2020_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2019
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2019 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2019 = NULL;

	if ( ! pFnF2019 )
		pFnF2019 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2019" );

	UBioAutoConditionals_execF2019_Parms F2019_Parms;
	F2019_Parms.bioWorld = bioWorld;
	F2019_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2019, &F2019_Parms, NULL );

	return F2019_Parms.ReturnValue;
};

// Function PlotManagerDLC_DHME1.BioAutoConditionals.F2018
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2018 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2018 = NULL;

	if ( ! pFnF2018 )
		pFnF2018 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_DHME1.BioAutoConditionals.F2018" );

	UBioAutoConditionals_execF2018_Parms F2018_Parms;
	F2018_Parms.bioWorld = bioWorld;
	F2018_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2018, &F2018_Parms, NULL );

	return F2018_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif