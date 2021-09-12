/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_CON_Pack02_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_CON_Pack02.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_CON_Pack02.BioAutoConditionals.F2035
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2035 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2035 = NULL;

	if ( ! pFnF2035 )
		pFnF2035 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_CON_Pack02.BioAutoConditionals.F2035" );

	UBioAutoConditionals_execF2035_Parms F2035_Parms;
	F2035_Parms.bioWorld = bioWorld;
	F2035_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2035, &F2035_Parms, NULL );

	return F2035_Parms.ReturnValue;
};

// Function PlotManagerDLC_CON_Pack02.BioAutoConditionals.F2034
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2034 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2034 = NULL;

	if ( ! pFnF2034 )
		pFnF2034 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_CON_Pack02.BioAutoConditionals.F2034" );

	UBioAutoConditionals_execF2034_Parms F2034_Parms;
	F2034_Parms.bioWorld = bioWorld;
	F2034_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2034, &F2034_Parms, NULL );

	return F2034_Parms.ReturnValue;
};

// Function PlotManagerDLC_CON_Pack02.BioAutoConditionals.F2033
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2033 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2033 = NULL;

	if ( ! pFnF2033 )
		pFnF2033 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_CON_Pack02.BioAutoConditionals.F2033" );

	UBioAutoConditionals_execF2033_Parms F2033_Parms;
	F2033_Parms.bioWorld = bioWorld;
	F2033_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2033, &F2033_Parms, NULL );

	return F2033_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif