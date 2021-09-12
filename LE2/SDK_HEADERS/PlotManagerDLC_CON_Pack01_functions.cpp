/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_CON_Pack01_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_CON_Pack01.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_CON_Pack01.BioAutoConditionals.F1532
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1532 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1532 = NULL;

	if ( ! pFnF1532 )
		pFnF1532 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_CON_Pack01.BioAutoConditionals.F1532" );

	UBioAutoConditionals_execF1532_Parms F1532_Parms;
	F1532_Parms.bioWorld = bioWorld;
	F1532_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1532, &F1532_Parms, NULL );

	return F1532_Parms.ReturnValue;
};

// Function PlotManagerDLC_CON_Pack01.BioAutoConditionals.F1531
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1531 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1531 = NULL;

	if ( ! pFnF1531 )
		pFnF1531 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_CON_Pack01.BioAutoConditionals.F1531" );

	UBioAutoConditionals_execF1531_Parms F1531_Parms;
	F1531_Parms.bioWorld = bioWorld;
	F1531_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1531, &F1531_Parms, NULL );

	return F1531_Parms.ReturnValue;
};

// Function PlotManagerDLC_CON_Pack01.BioAutoConditionals.F1526
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1526 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1526 = NULL;

	if ( ! pFnF1526 )
		pFnF1526 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_CON_Pack01.BioAutoConditionals.F1526" );

	UBioAutoConditionals_execF1526_Parms F1526_Parms;
	F1526_Parms.bioWorld = bioWorld;
	F1526_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1526, &F1526_Parms, NULL );

	return F1526_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif