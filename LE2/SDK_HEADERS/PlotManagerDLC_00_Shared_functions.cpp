/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_00_Shared_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_00_Shared.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1863
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1863 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1863 = NULL;

	if ( ! pFnF1863 )
		pFnF1863 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1863" );

	UBioAutoConditionals_execF1863_Parms F1863_Parms;
	F1863_Parms.bioWorld = bioWorld;
	F1863_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1863, &F1863_Parms, NULL );

	return F1863_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1862
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1862 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1862 = NULL;

	if ( ! pFnF1862 )
		pFnF1862 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1862" );

	UBioAutoConditionals_execF1862_Parms F1862_Parms;
	F1862_Parms.bioWorld = bioWorld;
	F1862_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1862, &F1862_Parms, NULL );

	return F1862_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1861
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1861 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1861 = NULL;

	if ( ! pFnF1861 )
		pFnF1861 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1861" );

	UBioAutoConditionals_execF1861_Parms F1861_Parms;
	F1861_Parms.bioWorld = bioWorld;
	F1861_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1861, &F1861_Parms, NULL );

	return F1861_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1860
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1860 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1860 = NULL;

	if ( ! pFnF1860 )
		pFnF1860 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1860" );

	UBioAutoConditionals_execF1860_Parms F1860_Parms;
	F1860_Parms.bioWorld = bioWorld;
	F1860_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1860, &F1860_Parms, NULL );

	return F1860_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1859
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1859 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1859 = NULL;

	if ( ! pFnF1859 )
		pFnF1859 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1859" );

	UBioAutoConditionals_execF1859_Parms F1859_Parms;
	F1859_Parms.bioWorld = bioWorld;
	F1859_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1859, &F1859_Parms, NULL );

	return F1859_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1858
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1858 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1858 = NULL;

	if ( ! pFnF1858 )
		pFnF1858 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1858" );

	UBioAutoConditionals_execF1858_Parms F1858_Parms;
	F1858_Parms.bioWorld = bioWorld;
	F1858_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1858, &F1858_Parms, NULL );

	return F1858_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1881
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1881 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1881 = NULL;

	if ( ! pFnF1881 )
		pFnF1881 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1881" );

	UBioAutoConditionals_execF1881_Parms F1881_Parms;
	F1881_Parms.bioWorld = bioWorld;
	F1881_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1881, &F1881_Parms, NULL );

	return F1881_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1880
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1880 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1880 = NULL;

	if ( ! pFnF1880 )
		pFnF1880 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1880" );

	UBioAutoConditionals_execF1880_Parms F1880_Parms;
	F1880_Parms.bioWorld = bioWorld;
	F1880_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1880, &F1880_Parms, NULL );

	return F1880_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1972
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1972 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1972 = NULL;

	if ( ! pFnF1972 )
		pFnF1972 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1972" );

	UBioAutoConditionals_execF1972_Parms F1972_Parms;
	F1972_Parms.bioWorld = bioWorld;
	F1972_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1972, &F1972_Parms, NULL );

	return F1972_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1971
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1971 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1971 = NULL;

	if ( ! pFnF1971 )
		pFnF1971 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1971" );

	UBioAutoConditionals_execF1971_Parms F1971_Parms;
	F1971_Parms.bioWorld = bioWorld;
	F1971_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1971, &F1971_Parms, NULL );

	return F1971_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1970
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1970 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1970 = NULL;

	if ( ! pFnF1970 )
		pFnF1970 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1970" );

	UBioAutoConditionals_execF1970_Parms F1970_Parms;
	F1970_Parms.bioWorld = bioWorld;
	F1970_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1970, &F1970_Parms, NULL );

	return F1970_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1840
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1840 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1840 = NULL;

	if ( ! pFnF1840 )
		pFnF1840 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1840" );

	UBioAutoConditionals_execF1840_Parms F1840_Parms;
	F1840_Parms.bioWorld = bioWorld;
	F1840_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1840, &F1840_Parms, NULL );

	return F1840_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1839
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1839 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1839 = NULL;

	if ( ! pFnF1839 )
		pFnF1839 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1839" );

	UBioAutoConditionals_execF1839_Parms F1839_Parms;
	F1839_Parms.bioWorld = bioWorld;
	F1839_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1839, &F1839_Parms, NULL );

	return F1839_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1762
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1762 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1762 = NULL;

	if ( ! pFnF1762 )
		pFnF1762 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1762" );

	UBioAutoConditionals_execF1762_Parms F1762_Parms;
	F1762_Parms.bioWorld = bioWorld;
	F1762_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1762, &F1762_Parms, NULL );

	return F1762_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1760
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1760 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1760 = NULL;

	if ( ! pFnF1760 )
		pFnF1760 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1760" );

	UBioAutoConditionals_execF1760_Parms F1760_Parms;
	F1760_Parms.bioWorld = bioWorld;
	F1760_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1760, &F1760_Parms, NULL );

	return F1760_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1759
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1759 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1759 = NULL;

	if ( ! pFnF1759 )
		pFnF1759 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1759" );

	UBioAutoConditionals_execF1759_Parms F1759_Parms;
	F1759_Parms.bioWorld = bioWorld;
	F1759_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1759, &F1759_Parms, NULL );

	return F1759_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1758
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1758 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1758 = NULL;

	if ( ! pFnF1758 )
		pFnF1758 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1758" );

	UBioAutoConditionals_execF1758_Parms F1758_Parms;
	F1758_Parms.bioWorld = bioWorld;
	F1758_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1758, &F1758_Parms, NULL );

	return F1758_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1757
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1757 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1757 = NULL;

	if ( ! pFnF1757 )
		pFnF1757 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1757" );

	UBioAutoConditionals_execF1757_Parms F1757_Parms;
	F1757_Parms.bioWorld = bioWorld;
	F1757_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1757, &F1757_Parms, NULL );

	return F1757_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1722
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1722 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1722 = NULL;

	if ( ! pFnF1722 )
		pFnF1722 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1722" );

	UBioAutoConditionals_execF1722_Parms F1722_Parms;
	F1722_Parms.bioWorld = bioWorld;
	F1722_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1722, &F1722_Parms, NULL );

	return F1722_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1721
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1721 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1721 = NULL;

	if ( ! pFnF1721 )
		pFnF1721 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1721" );

	UBioAutoConditionals_execF1721_Parms F1721_Parms;
	F1721_Parms.bioWorld = bioWorld;
	F1721_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1721, &F1721_Parms, NULL );

	return F1721_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1720
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1720 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1720 = NULL;

	if ( ! pFnF1720 )
		pFnF1720 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1720" );

	UBioAutoConditionals_execF1720_Parms F1720_Parms;
	F1720_Parms.bioWorld = bioWorld;
	F1720_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1720, &F1720_Parms, NULL );

	return F1720_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1719
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1719 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1719 = NULL;

	if ( ! pFnF1719 )
		pFnF1719 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1719" );

	UBioAutoConditionals_execF1719_Parms F1719_Parms;
	F1719_Parms.bioWorld = bioWorld;
	F1719_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1719, &F1719_Parms, NULL );

	return F1719_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1718
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1718 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1718 = NULL;

	if ( ! pFnF1718 )
		pFnF1718 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1718" );

	UBioAutoConditionals_execF1718_Parms F1718_Parms;
	F1718_Parms.bioWorld = bioWorld;
	F1718_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1718, &F1718_Parms, NULL );

	return F1718_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1717
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1717 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1717 = NULL;

	if ( ! pFnF1717 )
		pFnF1717 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1717" );

	UBioAutoConditionals_execF1717_Parms F1717_Parms;
	F1717_Parms.bioWorld = bioWorld;
	F1717_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1717, &F1717_Parms, NULL );

	return F1717_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1716
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1716 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1716 = NULL;

	if ( ! pFnF1716 )
		pFnF1716 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1716" );

	UBioAutoConditionals_execF1716_Parms F1716_Parms;
	F1716_Parms.bioWorld = bioWorld;
	F1716_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1716, &F1716_Parms, NULL );

	return F1716_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1715
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1715 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1715 = NULL;

	if ( ! pFnF1715 )
		pFnF1715 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1715" );

	UBioAutoConditionals_execF1715_Parms F1715_Parms;
	F1715_Parms.bioWorld = bioWorld;
	F1715_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1715, &F1715_Parms, NULL );

	return F1715_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1714
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1714 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1714 = NULL;

	if ( ! pFnF1714 )
		pFnF1714 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1714" );

	UBioAutoConditionals_execF1714_Parms F1714_Parms;
	F1714_Parms.bioWorld = bioWorld;
	F1714_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1714, &F1714_Parms, NULL );

	return F1714_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1713
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1713 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1713 = NULL;

	if ( ! pFnF1713 )
		pFnF1713 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1713" );

	UBioAutoConditionals_execF1713_Parms F1713_Parms;
	F1713_Parms.bioWorld = bioWorld;
	F1713_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1713, &F1713_Parms, NULL );

	return F1713_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F2029
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2029 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2029 = NULL;

	if ( ! pFnF2029 )
		pFnF2029 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F2029" );

	UBioAutoConditionals_execF2029_Parms F2029_Parms;
	F2029_Parms.bioWorld = bioWorld;
	F2029_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2029, &F2029_Parms, NULL );

	return F2029_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1973
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1973 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1973 = NULL;

	if ( ! pFnF1973 )
		pFnF1973 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1973" );

	UBioAutoConditionals_execF1973_Parms F1973_Parms;
	F1973_Parms.bioWorld = bioWorld;
	F1973_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1973, &F1973_Parms, NULL );

	return F1973_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1761
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1761 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1761 = NULL;

	if ( ! pFnF1761 )
		pFnF1761 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1761" );

	UBioAutoConditionals_execF1761_Parms F1761_Parms;
	F1761_Parms.bioWorld = bioWorld;
	F1761_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1761, &F1761_Parms, NULL );

	return F1761_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1736
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1736 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1736 = NULL;

	if ( ! pFnF1736 )
		pFnF1736 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1736" );

	UBioAutoConditionals_execF1736_Parms F1736_Parms;
	F1736_Parms.bioWorld = bioWorld;
	F1736_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1736, &F1736_Parms, NULL );

	return F1736_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1710
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1710 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1710 = NULL;

	if ( ! pFnF1710 )
		pFnF1710 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1710" );

	UBioAutoConditionals_execF1710_Parms F1710_Parms;
	F1710_Parms.bioWorld = bioWorld;
	F1710_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1710, &F1710_Parms, NULL );

	return F1710_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1709
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1709 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1709 = NULL;

	if ( ! pFnF1709 )
		pFnF1709 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1709" );

	UBioAutoConditionals_execF1709_Parms F1709_Parms;
	F1709_Parms.bioWorld = bioWorld;
	F1709_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1709, &F1709_Parms, NULL );

	return F1709_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1708
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1708 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1708 = NULL;

	if ( ! pFnF1708 )
		pFnF1708 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1708" );

	UBioAutoConditionals_execF1708_Parms F1708_Parms;
	F1708_Parms.bioWorld = bioWorld;
	F1708_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1708, &F1708_Parms, NULL );

	return F1708_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1707
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1707 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1707 = NULL;

	if ( ! pFnF1707 )
		pFnF1707 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1707" );

	UBioAutoConditionals_execF1707_Parms F1707_Parms;
	F1707_Parms.bioWorld = bioWorld;
	F1707_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1707, &F1707_Parms, NULL );

	return F1707_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1706
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1706 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1706 = NULL;

	if ( ! pFnF1706 )
		pFnF1706 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1706" );

	UBioAutoConditionals_execF1706_Parms F1706_Parms;
	F1706_Parms.bioWorld = bioWorld;
	F1706_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1706, &F1706_Parms, NULL );

	return F1706_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1705
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1705 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1705 = NULL;

	if ( ! pFnF1705 )
		pFnF1705 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1705" );

	UBioAutoConditionals_execF1705_Parms F1705_Parms;
	F1705_Parms.bioWorld = bioWorld;
	F1705_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1705, &F1705_Parms, NULL );

	return F1705_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1704
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1704 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1704 = NULL;

	if ( ! pFnF1704 )
		pFnF1704 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1704" );

	UBioAutoConditionals_execF1704_Parms F1704_Parms;
	F1704_Parms.bioWorld = bioWorld;
	F1704_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1704, &F1704_Parms, NULL );

	return F1704_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1703
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1703 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1703 = NULL;

	if ( ! pFnF1703 )
		pFnF1703 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1703" );

	UBioAutoConditionals_execF1703_Parms F1703_Parms;
	F1703_Parms.bioWorld = bioWorld;
	F1703_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1703, &F1703_Parms, NULL );

	return F1703_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1702
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1702 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1702 = NULL;

	if ( ! pFnF1702 )
		pFnF1702 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1702" );

	UBioAutoConditionals_execF1702_Parms F1702_Parms;
	F1702_Parms.bioWorld = bioWorld;
	F1702_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1702, &F1702_Parms, NULL );

	return F1702_Parms.ReturnValue;
};

// Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1701
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1701 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1701 = NULL;

	if ( ! pFnF1701 )
		pFnF1701 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_00_Shared.BioAutoConditionals.F1701" );

	UBioAutoConditionals_execF1701_Parms F1701_Parms;
	F1701_Parms.bioWorld = bioWorld;
	F1701_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1701, &F1701_Parms, NULL );

	return F1701_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif