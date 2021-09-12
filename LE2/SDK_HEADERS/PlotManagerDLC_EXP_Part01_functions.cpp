/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_EXP_Part01_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_EXP_Part01.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1876
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1876 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1876 = NULL;

	if ( ! pFnF1876 )
		pFnF1876 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1876" );

	UBioAutoConditionals_execF1876_Parms F1876_Parms;
	F1876_Parms.bioWorld = bioWorld;
	F1876_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1876, &F1876_Parms, NULL );

	return F1876_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1875
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1875 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1875 = NULL;

	if ( ! pFnF1875 )
		pFnF1875 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1875" );

	UBioAutoConditionals_execF1875_Parms F1875_Parms;
	F1875_Parms.bioWorld = bioWorld;
	F1875_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1875, &F1875_Parms, NULL );

	return F1875_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1874
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1874 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1874 = NULL;

	if ( ! pFnF1874 )
		pFnF1874 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1874" );

	UBioAutoConditionals_execF1874_Parms F1874_Parms;
	F1874_Parms.bioWorld = bioWorld;
	F1874_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1874, &F1874_Parms, NULL );

	return F1874_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1987
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1987 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1987 = NULL;

	if ( ! pFnF1987 )
		pFnF1987 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1987" );

	UBioAutoConditionals_execF1987_Parms F1987_Parms;
	F1987_Parms.bioWorld = bioWorld;
	F1987_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1987, &F1987_Parms, NULL );

	return F1987_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1902
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1902 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1902 = NULL;

	if ( ! pFnF1902 )
		pFnF1902 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1902" );

	UBioAutoConditionals_execF1902_Parms F1902_Parms;
	F1902_Parms.bioWorld = bioWorld;
	F1902_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1902, &F1902_Parms, NULL );

	return F1902_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1901
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1901 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1901 = NULL;

	if ( ! pFnF1901 )
		pFnF1901 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1901" );

	UBioAutoConditionals_execF1901_Parms F1901_Parms;
	F1901_Parms.bioWorld = bioWorld;
	F1901_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1901, &F1901_Parms, NULL );

	return F1901_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1900
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1900 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1900 = NULL;

	if ( ! pFnF1900 )
		pFnF1900 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1900" );

	UBioAutoConditionals_execF1900_Parms F1900_Parms;
	F1900_Parms.bioWorld = bioWorld;
	F1900_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1900, &F1900_Parms, NULL );

	return F1900_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1899
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1899 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1899 = NULL;

	if ( ! pFnF1899 )
		pFnF1899 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1899" );

	UBioAutoConditionals_execF1899_Parms F1899_Parms;
	F1899_Parms.bioWorld = bioWorld;
	F1899_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1899, &F1899_Parms, NULL );

	return F1899_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1898
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1898 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1898 = NULL;

	if ( ! pFnF1898 )
		pFnF1898 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1898" );

	UBioAutoConditionals_execF1898_Parms F1898_Parms;
	F1898_Parms.bioWorld = bioWorld;
	F1898_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1898, &F1898_Parms, NULL );

	return F1898_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1897
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1897 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1897 = NULL;

	if ( ! pFnF1897 )
		pFnF1897 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1897" );

	UBioAutoConditionals_execF1897_Parms F1897_Parms;
	F1897_Parms.bioWorld = bioWorld;
	F1897_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1897, &F1897_Parms, NULL );

	return F1897_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1896
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1896 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1896 = NULL;

	if ( ! pFnF1896 )
		pFnF1896 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1896" );

	UBioAutoConditionals_execF1896_Parms F1896_Parms;
	F1896_Parms.bioWorld = bioWorld;
	F1896_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1896, &F1896_Parms, NULL );

	return F1896_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1895
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1895 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1895 = NULL;

	if ( ! pFnF1895 )
		pFnF1895 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1895" );

	UBioAutoConditionals_execF1895_Parms F1895_Parms;
	F1895_Parms.bioWorld = bioWorld;
	F1895_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1895, &F1895_Parms, NULL );

	return F1895_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1894
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1894 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1894 = NULL;

	if ( ! pFnF1894 )
		pFnF1894 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1894" );

	UBioAutoConditionals_execF1894_Parms F1894_Parms;
	F1894_Parms.bioWorld = bioWorld;
	F1894_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1894, &F1894_Parms, NULL );

	return F1894_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1893
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1893 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1893 = NULL;

	if ( ! pFnF1893 )
		pFnF1893 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1893" );

	UBioAutoConditionals_execF1893_Parms F1893_Parms;
	F1893_Parms.bioWorld = bioWorld;
	F1893_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1893, &F1893_Parms, NULL );

	return F1893_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1912
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1912 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1912 = NULL;

	if ( ! pFnF1912 )
		pFnF1912 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1912" );

	UBioAutoConditionals_execF1912_Parms F1912_Parms;
	F1912_Parms.bioWorld = bioWorld;
	F1912_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1912, &F1912_Parms, NULL );

	return F1912_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1911
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1911 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1911 = NULL;

	if ( ! pFnF1911 )
		pFnF1911 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1911" );

	UBioAutoConditionals_execF1911_Parms F1911_Parms;
	F1911_Parms.bioWorld = bioWorld;
	F1911_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1911, &F1911_Parms, NULL );

	return F1911_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1910
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1910 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1910 = NULL;

	if ( ! pFnF1910 )
		pFnF1910 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1910" );

	UBioAutoConditionals_execF1910_Parms F1910_Parms;
	F1910_Parms.bioWorld = bioWorld;
	F1910_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1910, &F1910_Parms, NULL );

	return F1910_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1909
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1909 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1909 = NULL;

	if ( ! pFnF1909 )
		pFnF1909 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1909" );

	UBioAutoConditionals_execF1909_Parms F1909_Parms;
	F1909_Parms.bioWorld = bioWorld;
	F1909_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1909, &F1909_Parms, NULL );

	return F1909_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1908
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1908 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1908 = NULL;

	if ( ! pFnF1908 )
		pFnF1908 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1908" );

	UBioAutoConditionals_execF1908_Parms F1908_Parms;
	F1908_Parms.bioWorld = bioWorld;
	F1908_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1908, &F1908_Parms, NULL );

	return F1908_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1907
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1907 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1907 = NULL;

	if ( ! pFnF1907 )
		pFnF1907 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1907" );

	UBioAutoConditionals_execF1907_Parms F1907_Parms;
	F1907_Parms.bioWorld = bioWorld;
	F1907_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1907, &F1907_Parms, NULL );

	return F1907_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1906
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1906 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1906 = NULL;

	if ( ! pFnF1906 )
		pFnF1906 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1906" );

	UBioAutoConditionals_execF1906_Parms F1906_Parms;
	F1906_Parms.bioWorld = bioWorld;
	F1906_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1906, &F1906_Parms, NULL );

	return F1906_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1905
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1905 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1905 = NULL;

	if ( ! pFnF1905 )
		pFnF1905 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1905" );

	UBioAutoConditionals_execF1905_Parms F1905_Parms;
	F1905_Parms.bioWorld = bioWorld;
	F1905_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1905, &F1905_Parms, NULL );

	return F1905_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1904
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1904 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1904 = NULL;

	if ( ! pFnF1904 )
		pFnF1904 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1904" );

	UBioAutoConditionals_execF1904_Parms F1904_Parms;
	F1904_Parms.bioWorld = bioWorld;
	F1904_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1904, &F1904_Parms, NULL );

	return F1904_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1903
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1903 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1903 = NULL;

	if ( ! pFnF1903 )
		pFnF1903 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1903" );

	UBioAutoConditionals_execF1903_Parms F1903_Parms;
	F1903_Parms.bioWorld = bioWorld;
	F1903_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1903, &F1903_Parms, NULL );

	return F1903_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1922
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1922 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1922 = NULL;

	if ( ! pFnF1922 )
		pFnF1922 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1922" );

	UBioAutoConditionals_execF1922_Parms F1922_Parms;
	F1922_Parms.bioWorld = bioWorld;
	F1922_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1922, &F1922_Parms, NULL );

	return F1922_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1921
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1921 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1921 = NULL;

	if ( ! pFnF1921 )
		pFnF1921 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1921" );

	UBioAutoConditionals_execF1921_Parms F1921_Parms;
	F1921_Parms.bioWorld = bioWorld;
	F1921_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1921, &F1921_Parms, NULL );

	return F1921_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1920
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1920 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1920 = NULL;

	if ( ! pFnF1920 )
		pFnF1920 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1920" );

	UBioAutoConditionals_execF1920_Parms F1920_Parms;
	F1920_Parms.bioWorld = bioWorld;
	F1920_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1920, &F1920_Parms, NULL );

	return F1920_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1919
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1919 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1919 = NULL;

	if ( ! pFnF1919 )
		pFnF1919 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1919" );

	UBioAutoConditionals_execF1919_Parms F1919_Parms;
	F1919_Parms.bioWorld = bioWorld;
	F1919_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1919, &F1919_Parms, NULL );

	return F1919_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1918
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1918 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1918 = NULL;

	if ( ! pFnF1918 )
		pFnF1918 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1918" );

	UBioAutoConditionals_execF1918_Parms F1918_Parms;
	F1918_Parms.bioWorld = bioWorld;
	F1918_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1918, &F1918_Parms, NULL );

	return F1918_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1917
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1917 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1917 = NULL;

	if ( ! pFnF1917 )
		pFnF1917 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1917" );

	UBioAutoConditionals_execF1917_Parms F1917_Parms;
	F1917_Parms.bioWorld = bioWorld;
	F1917_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1917, &F1917_Parms, NULL );

	return F1917_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1916
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1916 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1916 = NULL;

	if ( ! pFnF1916 )
		pFnF1916 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1916" );

	UBioAutoConditionals_execF1916_Parms F1916_Parms;
	F1916_Parms.bioWorld = bioWorld;
	F1916_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1916, &F1916_Parms, NULL );

	return F1916_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1915
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1915 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1915 = NULL;

	if ( ! pFnF1915 )
		pFnF1915 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1915" );

	UBioAutoConditionals_execF1915_Parms F1915_Parms;
	F1915_Parms.bioWorld = bioWorld;
	F1915_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1915, &F1915_Parms, NULL );

	return F1915_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1914
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1914 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1914 = NULL;

	if ( ! pFnF1914 )
		pFnF1914 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1914" );

	UBioAutoConditionals_execF1914_Parms F1914_Parms;
	F1914_Parms.bioWorld = bioWorld;
	F1914_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1914, &F1914_Parms, NULL );

	return F1914_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1913
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1913 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1913 = NULL;

	if ( ! pFnF1913 )
		pFnF1913 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1913" );

	UBioAutoConditionals_execF1913_Parms F1913_Parms;
	F1913_Parms.bioWorld = bioWorld;
	F1913_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1913, &F1913_Parms, NULL );

	return F1913_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1892
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1892 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1892 = NULL;

	if ( ! pFnF1892 )
		pFnF1892 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1892" );

	UBioAutoConditionals_execF1892_Parms F1892_Parms;
	F1892_Parms.bioWorld = bioWorld;
	F1892_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1892, &F1892_Parms, NULL );

	return F1892_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1891
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1891 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1891 = NULL;

	if ( ! pFnF1891 )
		pFnF1891 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1891" );

	UBioAutoConditionals_execF1891_Parms F1891_Parms;
	F1891_Parms.bioWorld = bioWorld;
	F1891_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1891, &F1891_Parms, NULL );

	return F1891_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1890
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1890 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1890 = NULL;

	if ( ! pFnF1890 )
		pFnF1890 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1890" );

	UBioAutoConditionals_execF1890_Parms F1890_Parms;
	F1890_Parms.bioWorld = bioWorld;
	F1890_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1890, &F1890_Parms, NULL );

	return F1890_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1889
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1889 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1889 = NULL;

	if ( ! pFnF1889 )
		pFnF1889 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1889" );

	UBioAutoConditionals_execF1889_Parms F1889_Parms;
	F1889_Parms.bioWorld = bioWorld;
	F1889_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1889, &F1889_Parms, NULL );

	return F1889_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1888
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1888 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1888 = NULL;

	if ( ! pFnF1888 )
		pFnF1888 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1888" );

	UBioAutoConditionals_execF1888_Parms F1888_Parms;
	F1888_Parms.bioWorld = bioWorld;
	F1888_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1888, &F1888_Parms, NULL );

	return F1888_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1887
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1887 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1887 = NULL;

	if ( ! pFnF1887 )
		pFnF1887 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1887" );

	UBioAutoConditionals_execF1887_Parms F1887_Parms;
	F1887_Parms.bioWorld = bioWorld;
	F1887_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1887, &F1887_Parms, NULL );

	return F1887_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1886
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1886 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1886 = NULL;

	if ( ! pFnF1886 )
		pFnF1886 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1886" );

	UBioAutoConditionals_execF1886_Parms F1886_Parms;
	F1886_Parms.bioWorld = bioWorld;
	F1886_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1886, &F1886_Parms, NULL );

	return F1886_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1885
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1885 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1885 = NULL;

	if ( ! pFnF1885 )
		pFnF1885 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1885" );

	UBioAutoConditionals_execF1885_Parms F1885_Parms;
	F1885_Parms.bioWorld = bioWorld;
	F1885_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1885, &F1885_Parms, NULL );

	return F1885_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1884
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1884 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1884 = NULL;

	if ( ! pFnF1884 )
		pFnF1884 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1884" );

	UBioAutoConditionals_execF1884_Parms F1884_Parms;
	F1884_Parms.bioWorld = bioWorld;
	F1884_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1884, &F1884_Parms, NULL );

	return F1884_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1882
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1882 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1882 = NULL;

	if ( ! pFnF1882 )
		pFnF1882 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1882" );

	UBioAutoConditionals_execF1882_Parms F1882_Parms;
	F1882_Parms.bioWorld = bioWorld;
	F1882_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1882, &F1882_Parms, NULL );

	return F1882_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1997
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1997 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1997 = NULL;

	if ( ! pFnF1997 )
		pFnF1997 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1997" );

	UBioAutoConditionals_execF1997_Parms F1997_Parms;
	F1997_Parms.bioWorld = bioWorld;
	F1997_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1997, &F1997_Parms, NULL );

	return F1997_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1950
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1950 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1950 = NULL;

	if ( ! pFnF1950 )
		pFnF1950 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1950" );

	UBioAutoConditionals_execF1950_Parms F1950_Parms;
	F1950_Parms.bioWorld = bioWorld;
	F1950_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1950, &F1950_Parms, NULL );

	return F1950_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1924
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1924 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1924 = NULL;

	if ( ! pFnF1924 )
		pFnF1924 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1924" );

	UBioAutoConditionals_execF1924_Parms F1924_Parms;
	F1924_Parms.bioWorld = bioWorld;
	F1924_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1924, &F1924_Parms, NULL );

	return F1924_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1923
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1923 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1923 = NULL;

	if ( ! pFnF1923 )
		pFnF1923 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1923" );

	UBioAutoConditionals_execF1923_Parms F1923_Parms;
	F1923_Parms.bioWorld = bioWorld;
	F1923_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1923, &F1923_Parms, NULL );

	return F1923_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1975
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1975 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1975 = NULL;

	if ( ! pFnF1975 )
		pFnF1975 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1975" );

	UBioAutoConditionals_execF1975_Parms F1975_Parms;
	F1975_Parms.bioWorld = bioWorld;
	F1975_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1975, &F1975_Parms, NULL );

	return F1975_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1998
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1998 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1998 = NULL;

	if ( ! pFnF1998 )
		pFnF1998 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1998" );

	UBioAutoConditionals_execF1998_Parms F1998_Parms;
	F1998_Parms.bioWorld = bioWorld;
	F1998_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1998, &F1998_Parms, NULL );

	return F1998_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1870
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1870 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1870 = NULL;

	if ( ! pFnF1870 )
		pFnF1870 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1870" );

	UBioAutoConditionals_execF1870_Parms F1870_Parms;
	F1870_Parms.bioWorld = bioWorld;
	F1870_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1870, &F1870_Parms, NULL );

	return F1870_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1869
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1869 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1869 = NULL;

	if ( ! pFnF1869 )
		pFnF1869 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1869" );

	UBioAutoConditionals_execF1869_Parms F1869_Parms;
	F1869_Parms.bioWorld = bioWorld;
	F1869_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1869, &F1869_Parms, NULL );

	return F1869_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1868
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1868 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1868 = NULL;

	if ( ! pFnF1868 )
		pFnF1868 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1868" );

	UBioAutoConditionals_execF1868_Parms F1868_Parms;
	F1868_Parms.bioWorld = bioWorld;
	F1868_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1868, &F1868_Parms, NULL );

	return F1868_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1867
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1867 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1867 = NULL;

	if ( ! pFnF1867 )
		pFnF1867 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1867" );

	UBioAutoConditionals_execF1867_Parms F1867_Parms;
	F1867_Parms.bioWorld = bioWorld;
	F1867_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1867, &F1867_Parms, NULL );

	return F1867_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1866
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1866 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1866 = NULL;

	if ( ! pFnF1866 )
		pFnF1866 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1866" );

	UBioAutoConditionals_execF1866_Parms F1866_Parms;
	F1866_Parms.bioWorld = bioWorld;
	F1866_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1866, &F1866_Parms, NULL );

	return F1866_Parms.ReturnValue;
};

// Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1865
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1865 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1865 = NULL;

	if ( ! pFnF1865 )
		pFnF1865 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_EXP_Part01.BioAutoConditionals.F1865" );

	UBioAutoConditionals_execF1865_Parms F1865_Parms;
	F1865_Parms.bioWorld = bioWorld;
	F1865_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1865, &F1865_Parms, NULL );

	return F1865_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif