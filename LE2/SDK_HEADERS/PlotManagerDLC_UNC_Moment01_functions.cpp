/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_UNC_Moment01_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_UNC_Moment01.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1711
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1711 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1711 = NULL;

	if ( ! pFnF1711 )
		pFnF1711 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1711" );

	UBioAutoConditionals_execF1711_Parms F1711_Parms;
	F1711_Parms.bioWorld = bioWorld;
	F1711_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1711, &F1711_Parms, NULL );

	return F1711_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1689
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1689 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1689 = NULL;

	if ( ! pFnF1689 )
		pFnF1689 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1689" );

	UBioAutoConditionals_execF1689_Parms F1689_Parms;
	F1689_Parms.bioWorld = bioWorld;
	F1689_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1689, &F1689_Parms, NULL );

	return F1689_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1688
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1688 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1688 = NULL;

	if ( ! pFnF1688 )
		pFnF1688 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1688" );

	UBioAutoConditionals_execF1688_Parms F1688_Parms;
	F1688_Parms.bioWorld = bioWorld;
	F1688_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1688, &F1688_Parms, NULL );

	return F1688_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1669
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1669 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1669 = NULL;

	if ( ! pFnF1669 )
		pFnF1669 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1669" );

	UBioAutoConditionals_execF1669_Parms F1669_Parms;
	F1669_Parms.bioWorld = bioWorld;
	F1669_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1669, &F1669_Parms, NULL );

	return F1669_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1668
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1668 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1668 = NULL;

	if ( ! pFnF1668 )
		pFnF1668 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1668" );

	UBioAutoConditionals_execF1668_Parms F1668_Parms;
	F1668_Parms.bioWorld = bioWorld;
	F1668_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1668, &F1668_Parms, NULL );

	return F1668_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1667
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1667 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1667 = NULL;

	if ( ! pFnF1667 )
		pFnF1667 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1667" );

	UBioAutoConditionals_execF1667_Parms F1667_Parms;
	F1667_Parms.bioWorld = bioWorld;
	F1667_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1667, &F1667_Parms, NULL );

	return F1667_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1622
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1622 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1622 = NULL;

	if ( ! pFnF1622 )
		pFnF1622 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1622" );

	UBioAutoConditionals_execF1622_Parms F1622_Parms;
	F1622_Parms.bioWorld = bioWorld;
	F1622_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1622, &F1622_Parms, NULL );

	return F1622_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1621
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1621 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1621 = NULL;

	if ( ! pFnF1621 )
		pFnF1621 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Moment01.BioAutoConditionals.F1621" );

	UBioAutoConditionals_execF1621_Parms F1621_Parms;
	F1621_Parms.bioWorld = bioWorld;
	F1621_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1621, &F1621_Parms, NULL );

	return F1621_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif