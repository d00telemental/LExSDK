/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_EXP_Part02_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_EXP_Part02.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2032
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2032 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2032 = NULL;

	if ( ! pFnF2032 )
		pFnF2032 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2032" );

	UBioAutoConditionals_execF2032_Parms F2032_Parms;
	F2032_Parms.bioWorld = bioWorld;
	F2032_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2032, &F2032_Parms, NULL );

	return F2032_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2031
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2031 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2031 = NULL;

	if ( ! pFnF2031 )
		pFnF2031 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2031" );

	UBioAutoConditionals_execF2031_Parms F2031_Parms;
	F2031_Parms.bioWorld = bioWorld;
	F2031_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2031, &F2031_Parms, NULL );

	return F2031_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2037
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2037 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2037 = NULL;

	if ( ! pFnF2037 )
		pFnF2037 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2037" );

	UBioAutoConditionals_execF2037_Parms F2037_Parms;
	F2037_Parms.bioWorld = bioWorld;
	F2037_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2037, &F2037_Parms, NULL );

	return F2037_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2036
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2036 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2036 = NULL;

	if ( ! pFnF2036 )
		pFnF2036 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2036" );

	UBioAutoConditionals_execF2036_Parms F2036_Parms;
	F2036_Parms.bioWorld = bioWorld;
	F2036_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2036, &F2036_Parms, NULL );

	return F2036_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2027
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2027 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2027 = NULL;

	if ( ! pFnF2027 )
		pFnF2027 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2027" );

	UBioAutoConditionals_execF2027_Parms F2027_Parms;
	F2027_Parms.bioWorld = bioWorld;
	F2027_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2027, &F2027_Parms, NULL );

	return F2027_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2026
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2026 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2026 = NULL;

	if ( ! pFnF2026 )
		pFnF2026 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2026" );

	UBioAutoConditionals_execF2026_Parms F2026_Parms;
	F2026_Parms.bioWorld = bioWorld;
	F2026_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2026, &F2026_Parms, NULL );

	return F2026_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2002
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2002 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2002 = NULL;

	if ( ! pFnF2002 )
		pFnF2002 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2002" );

	UBioAutoConditionals_execF2002_Parms F2002_Parms;
	F2002_Parms.bioWorld = bioWorld;
	F2002_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2002, &F2002_Parms, NULL );

	return F2002_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1999
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1999 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1999 = NULL;

	if ( ! pFnF1999 )
		pFnF1999 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1999" );

	UBioAutoConditionals_execF1999_Parms F1999_Parms;
	F1999_Parms.bioWorld = bioWorld;
	F1999_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1999, &F1999_Parms, NULL );

	return F1999_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2001
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2001 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2001 = NULL;

	if ( ! pFnF2001 )
		pFnF2001 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2001" );

	UBioAutoConditionals_execF2001_Parms F2001_Parms;
	F2001_Parms.bioWorld = bioWorld;
	F2001_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2001, &F2001_Parms, NULL );

	return F2001_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2000
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2000 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2000 = NULL;

	if ( ! pFnF2000 )
		pFnF2000 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2000" );

	UBioAutoConditionals_execF2000_Parms F2000_Parms;
	F2000_Parms.bioWorld = bioWorld;
	F2000_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2000, &F2000_Parms, NULL );

	return F2000_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2003
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2003 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2003 = NULL;

	if ( ! pFnF2003 )
		pFnF2003 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2003" );

	UBioAutoConditionals_execF2003_Parms F2003_Parms;
	F2003_Parms.bioWorld = bioWorld;
	F2003_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2003, &F2003_Parms, NULL );

	return F2003_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2005
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2005 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2005 = NULL;

	if ( ! pFnF2005 )
		pFnF2005 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2005" );

	UBioAutoConditionals_execF2005_Parms F2005_Parms;
	F2005_Parms.bioWorld = bioWorld;
	F2005_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2005, &F2005_Parms, NULL );

	return F2005_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2004
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2004 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2004 = NULL;

	if ( ! pFnF2004 )
		pFnF2004 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2004" );

	UBioAutoConditionals_execF2004_Parms F2004_Parms;
	F2004_Parms.bioWorld = bioWorld;
	F2004_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2004, &F2004_Parms, NULL );

	return F2004_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1991
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1991 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1991 = NULL;

	if ( ! pFnF1991 )
		pFnF1991 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1991" );

	UBioAutoConditionals_execF1991_Parms F1991_Parms;
	F1991_Parms.bioWorld = bioWorld;
	F1991_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1991, &F1991_Parms, NULL );

	return F1991_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1990
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1990 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1990 = NULL;

	if ( ! pFnF1990 )
		pFnF1990 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1990" );

	UBioAutoConditionals_execF1990_Parms F1990_Parms;
	F1990_Parms.bioWorld = bioWorld;
	F1990_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1990, &F1990_Parms, NULL );

	return F1990_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1989
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1989 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1989 = NULL;

	if ( ! pFnF1989 )
		pFnF1989 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1989" );

	UBioAutoConditionals_execF1989_Parms F1989_Parms;
	F1989_Parms.bioWorld = bioWorld;
	F1989_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1989, &F1989_Parms, NULL );

	return F1989_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1996
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1996 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1996 = NULL;

	if ( ! pFnF1996 )
		pFnF1996 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1996" );

	UBioAutoConditionals_execF1996_Parms F1996_Parms;
	F1996_Parms.bioWorld = bioWorld;
	F1996_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1996, &F1996_Parms, NULL );

	return F1996_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1986
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1986 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1986 = NULL;

	if ( ! pFnF1986 )
		pFnF1986 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1986" );

	UBioAutoConditionals_execF1986_Parms F1986_Parms;
	F1986_Parms.bioWorld = bioWorld;
	F1986_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1986, &F1986_Parms, NULL );

	return F1986_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1985
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1985 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1985 = NULL;

	if ( ! pFnF1985 )
		pFnF1985 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1985" );

	UBioAutoConditionals_execF1985_Parms F1985_Parms;
	F1985_Parms.bioWorld = bioWorld;
	F1985_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1985, &F1985_Parms, NULL );

	return F1985_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1983
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1983 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1983 = NULL;

	if ( ! pFnF1983 )
		pFnF1983 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1983" );

	UBioAutoConditionals_execF1983_Parms F1983_Parms;
	F1983_Parms.bioWorld = bioWorld;
	F1983_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1983, &F1983_Parms, NULL );

	return F1983_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1982
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1982 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1982 = NULL;

	if ( ! pFnF1982 )
		pFnF1982 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1982" );

	UBioAutoConditionals_execF1982_Parms F1982_Parms;
	F1982_Parms.bioWorld = bioWorld;
	F1982_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1982, &F1982_Parms, NULL );

	return F1982_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1981
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1981 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1981 = NULL;

	if ( ! pFnF1981 )
		pFnF1981 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1981" );

	UBioAutoConditionals_execF1981_Parms F1981_Parms;
	F1981_Parms.bioWorld = bioWorld;
	F1981_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1981, &F1981_Parms, NULL );

	return F1981_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1980
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1980 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1980 = NULL;

	if ( ! pFnF1980 )
		pFnF1980 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1980" );

	UBioAutoConditionals_execF1980_Parms F1980_Parms;
	F1980_Parms.bioWorld = bioWorld;
	F1980_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1980, &F1980_Parms, NULL );

	return F1980_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1979
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1979 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1979 = NULL;

	if ( ! pFnF1979 )
		pFnF1979 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1979" );

	UBioAutoConditionals_execF1979_Parms F1979_Parms;
	F1979_Parms.bioWorld = bioWorld;
	F1979_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1979, &F1979_Parms, NULL );

	return F1979_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1978
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1978 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1978 = NULL;

	if ( ! pFnF1978 )
		pFnF1978 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1978" );

	UBioAutoConditionals_execF1978_Parms F1978_Parms;
	F1978_Parms.bioWorld = bioWorld;
	F1978_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1978, &F1978_Parms, NULL );

	return F1978_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1977
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1977 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1977 = NULL;

	if ( ! pFnF1977 )
		pFnF1977 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1977" );

	UBioAutoConditionals_execF1977_Parms F1977_Parms;
	F1977_Parms.bioWorld = bioWorld;
	F1977_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1977, &F1977_Parms, NULL );

	return F1977_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1969
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1969 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1969 = NULL;

	if ( ! pFnF1969 )
		pFnF1969 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1969" );

	UBioAutoConditionals_execF1969_Parms F1969_Parms;
	F1969_Parms.bioWorld = bioWorld;
	F1969_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1969, &F1969_Parms, NULL );

	return F1969_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1968
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1968 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1968 = NULL;

	if ( ! pFnF1968 )
		pFnF1968 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1968" );

	UBioAutoConditionals_execF1968_Parms F1968_Parms;
	F1968_Parms.bioWorld = bioWorld;
	F1968_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1968, &F1968_Parms, NULL );

	return F1968_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1967
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1967 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1967 = NULL;

	if ( ! pFnF1967 )
		pFnF1967 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1967" );

	UBioAutoConditionals_execF1967_Parms F1967_Parms;
	F1967_Parms.bioWorld = bioWorld;
	F1967_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1967, &F1967_Parms, NULL );

	return F1967_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1966
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1966 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1966 = NULL;

	if ( ! pFnF1966 )
		pFnF1966 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1966" );

	UBioAutoConditionals_execF1966_Parms F1966_Parms;
	F1966_Parms.bioWorld = bioWorld;
	F1966_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1966, &F1966_Parms, NULL );

	return F1966_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1964
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1964 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1964 = NULL;

	if ( ! pFnF1964 )
		pFnF1964 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1964" );

	UBioAutoConditionals_execF1964_Parms F1964_Parms;
	F1964_Parms.bioWorld = bioWorld;
	F1964_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1964, &F1964_Parms, NULL );

	return F1964_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1963
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1963 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1963 = NULL;

	if ( ! pFnF1963 )
		pFnF1963 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1963" );

	UBioAutoConditionals_execF1963_Parms F1963_Parms;
	F1963_Parms.bioWorld = bioWorld;
	F1963_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1963, &F1963_Parms, NULL );

	return F1963_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1962
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1962 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1962 = NULL;

	if ( ! pFnF1962 )
		pFnF1962 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1962" );

	UBioAutoConditionals_execF1962_Parms F1962_Parms;
	F1962_Parms.bioWorld = bioWorld;
	F1962_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1962, &F1962_Parms, NULL );

	return F1962_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1961
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1961 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1961 = NULL;

	if ( ! pFnF1961 )
		pFnF1961 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1961" );

	UBioAutoConditionals_execF1961_Parms F1961_Parms;
	F1961_Parms.bioWorld = bioWorld;
	F1961_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1961, &F1961_Parms, NULL );

	return F1961_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1960
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1960 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1960 = NULL;

	if ( ! pFnF1960 )
		pFnF1960 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F1960" );

	UBioAutoConditionals_execF1960_Parms F1960_Parms;
	F1960_Parms.bioWorld = bioWorld;
	F1960_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1960, &F1960_Parms, NULL );

	return F1960_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2030
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2030 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2030 = NULL;

	if ( ! pFnF2030 )
		pFnF2030 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2030" );

	UBioAutoConditionals_execF2030_Parms F2030_Parms;
	F2030_Parms.bioWorld = bioWorld;
	F2030_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2030, &F2030_Parms, NULL );

	return F2030_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2008
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2008 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2008 = NULL;

	if ( ! pFnF2008 )
		pFnF2008 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2008" );

	UBioAutoConditionals_execF2008_Parms F2008_Parms;
	F2008_Parms.bioWorld = bioWorld;
	F2008_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2008, &F2008_Parms, NULL );

	return F2008_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2007
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2007 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2007 = NULL;

	if ( ! pFnF2007 )
		pFnF2007 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part02.BioAutoConditionals.F2007" );

	UBioAutoConditionals_execF2007_Parms F2007_Parms;
	F2007_Parms.bioWorld = bioWorld;
	F2007_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2007, &F2007_Parms, NULL );

	return F2007_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif