/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_UNC_Pack01_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_UNC_Pack01.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1790
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1790 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1790 = NULL;

	if ( ! pFnF1790 )
		pFnF1790 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1790" );

	UBioAutoConditionals_execF1790_Parms F1790_Parms;
	F1790_Parms.bioWorld = bioWorld;
	F1790_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1790, &F1790_Parms, NULL );

	return F1790_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1864
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1864 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1864 = NULL;

	if ( ! pFnF1864 )
		pFnF1864 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1864" );

	UBioAutoConditionals_execF1864_Parms F1864_Parms;
	F1864_Parms.bioWorld = bioWorld;
	F1864_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1864, &F1864_Parms, NULL );

	return F1864_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1743
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1743 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1743 = NULL;

	if ( ! pFnF1743 )
		pFnF1743 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1743" );

	UBioAutoConditionals_execF1743_Parms F1743_Parms;
	F1743_Parms.bioWorld = bioWorld;
	F1743_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1743, &F1743_Parms, NULL );

	return F1743_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1849
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1849 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1849 = NULL;

	if ( ! pFnF1849 )
		pFnF1849 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1849" );

	UBioAutoConditionals_execF1849_Parms F1849_Parms;
	F1849_Parms.bioWorld = bioWorld;
	F1849_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1849, &F1849_Parms, NULL );

	return F1849_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1848
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1848 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1848 = NULL;

	if ( ! pFnF1848 )
		pFnF1848 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1848" );

	UBioAutoConditionals_execF1848_Parms F1848_Parms;
	F1848_Parms.bioWorld = bioWorld;
	F1848_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1848, &F1848_Parms, NULL );

	return F1848_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1786
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1786 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1786 = NULL;

	if ( ! pFnF1786 )
		pFnF1786 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1786" );

	UBioAutoConditionals_execF1786_Parms F1786_Parms;
	F1786_Parms.bioWorld = bioWorld;
	F1786_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1786, &F1786_Parms, NULL );

	return F1786_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1766
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1766 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1766 = NULL;

	if ( ! pFnF1766 )
		pFnF1766 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1766" );

	UBioAutoConditionals_execF1766_Parms F1766_Parms;
	F1766_Parms.bioWorld = bioWorld;
	F1766_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1766, &F1766_Parms, NULL );

	return F1766_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1853
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1853 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1853 = NULL;

	if ( ! pFnF1853 )
		pFnF1853 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1853" );

	UBioAutoConditionals_execF1853_Parms F1853_Parms;
	F1853_Parms.bioWorld = bioWorld;
	F1853_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1853, &F1853_Parms, NULL );

	return F1853_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1851
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1851 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1851 = NULL;

	if ( ! pFnF1851 )
		pFnF1851 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1851" );

	UBioAutoConditionals_execF1851_Parms F1851_Parms;
	F1851_Parms.bioWorld = bioWorld;
	F1851_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1851, &F1851_Parms, NULL );

	return F1851_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1850
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1850 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1850 = NULL;

	if ( ! pFnF1850 )
		pFnF1850 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1850" );

	UBioAutoConditionals_execF1850_Parms F1850_Parms;
	F1850_Parms.bioWorld = bioWorld;
	F1850_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1850, &F1850_Parms, NULL );

	return F1850_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1847
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1847 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1847 = NULL;

	if ( ! pFnF1847 )
		pFnF1847 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1847" );

	UBioAutoConditionals_execF1847_Parms F1847_Parms;
	F1847_Parms.bioWorld = bioWorld;
	F1847_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1847, &F1847_Parms, NULL );

	return F1847_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1846
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1846 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1846 = NULL;

	if ( ! pFnF1846 )
		pFnF1846 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1846" );

	UBioAutoConditionals_execF1846_Parms F1846_Parms;
	F1846_Parms.bioWorld = bioWorld;
	F1846_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1846, &F1846_Parms, NULL );

	return F1846_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1845
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1845 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1845 = NULL;

	if ( ! pFnF1845 )
		pFnF1845 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1845" );

	UBioAutoConditionals_execF1845_Parms F1845_Parms;
	F1845_Parms.bioWorld = bioWorld;
	F1845_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1845, &F1845_Parms, NULL );

	return F1845_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1844
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1844 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1844 = NULL;

	if ( ! pFnF1844 )
		pFnF1844 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1844" );

	UBioAutoConditionals_execF1844_Parms F1844_Parms;
	F1844_Parms.bioWorld = bioWorld;
	F1844_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1844, &F1844_Parms, NULL );

	return F1844_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1843
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1843 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1843 = NULL;

	if ( ! pFnF1843 )
		pFnF1843 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1843" );

	UBioAutoConditionals_execF1843_Parms F1843_Parms;
	F1843_Parms.bioWorld = bioWorld;
	F1843_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1843, &F1843_Parms, NULL );

	return F1843_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1842
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1842 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1842 = NULL;

	if ( ! pFnF1842 )
		pFnF1842 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1842" );

	UBioAutoConditionals_execF1842_Parms F1842_Parms;
	F1842_Parms.bioWorld = bioWorld;
	F1842_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1842, &F1842_Parms, NULL );

	return F1842_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1841
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1841 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1841 = NULL;

	if ( ! pFnF1841 )
		pFnF1841 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1841" );

	UBioAutoConditionals_execF1841_Parms F1841_Parms;
	F1841_Parms.bioWorld = bioWorld;
	F1841_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1841, &F1841_Parms, NULL );

	return F1841_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1785
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1785 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1785 = NULL;

	if ( ! pFnF1785 )
		pFnF1785 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1785" );

	UBioAutoConditionals_execF1785_Parms F1785_Parms;
	F1785_Parms.bioWorld = bioWorld;
	F1785_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1785, &F1785_Parms, NULL );

	return F1785_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1784
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1784 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1784 = NULL;

	if ( ! pFnF1784 )
		pFnF1784 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1784" );

	UBioAutoConditionals_execF1784_Parms F1784_Parms;
	F1784_Parms.bioWorld = bioWorld;
	F1784_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1784, &F1784_Parms, NULL );

	return F1784_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1783
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1783 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1783 = NULL;

	if ( ! pFnF1783 )
		pFnF1783 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1783" );

	UBioAutoConditionals_execF1783_Parms F1783_Parms;
	F1783_Parms.bioWorld = bioWorld;
	F1783_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1783, &F1783_Parms, NULL );

	return F1783_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1782
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1782 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1782 = NULL;

	if ( ! pFnF1782 )
		pFnF1782 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1782" );

	UBioAutoConditionals_execF1782_Parms F1782_Parms;
	F1782_Parms.bioWorld = bioWorld;
	F1782_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1782, &F1782_Parms, NULL );

	return F1782_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1781
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1781 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1781 = NULL;

	if ( ! pFnF1781 )
		pFnF1781 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1781" );

	UBioAutoConditionals_execF1781_Parms F1781_Parms;
	F1781_Parms.bioWorld = bioWorld;
	F1781_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1781, &F1781_Parms, NULL );

	return F1781_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1780
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1780 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1780 = NULL;

	if ( ! pFnF1780 )
		pFnF1780 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1780" );

	UBioAutoConditionals_execF1780_Parms F1780_Parms;
	F1780_Parms.bioWorld = bioWorld;
	F1780_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1780, &F1780_Parms, NULL );

	return F1780_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1779
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1779 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1779 = NULL;

	if ( ! pFnF1779 )
		pFnF1779 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1779" );

	UBioAutoConditionals_execF1779_Parms F1779_Parms;
	F1779_Parms.bioWorld = bioWorld;
	F1779_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1779, &F1779_Parms, NULL );

	return F1779_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1778
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1778 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1778 = NULL;

	if ( ! pFnF1778 )
		pFnF1778 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1778" );

	UBioAutoConditionals_execF1778_Parms F1778_Parms;
	F1778_Parms.bioWorld = bioWorld;
	F1778_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1778, &F1778_Parms, NULL );

	return F1778_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1777
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1777 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1777 = NULL;

	if ( ! pFnF1777 )
		pFnF1777 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1777" );

	UBioAutoConditionals_execF1777_Parms F1777_Parms;
	F1777_Parms.bioWorld = bioWorld;
	F1777_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1777, &F1777_Parms, NULL );

	return F1777_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1765
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1765 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1765 = NULL;

	if ( ! pFnF1765 )
		pFnF1765 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1765" );

	UBioAutoConditionals_execF1765_Parms F1765_Parms;
	F1765_Parms.bioWorld = bioWorld;
	F1765_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1765, &F1765_Parms, NULL );

	return F1765_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1857
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1857 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1857 = NULL;

	if ( ! pFnF1857 )
		pFnF1857 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1857" );

	UBioAutoConditionals_execF1857_Parms F1857_Parms;
	F1857_Parms.bioWorld = bioWorld;
	F1857_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1857, &F1857_Parms, NULL );

	return F1857_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1856
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1856 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1856 = NULL;

	if ( ! pFnF1856 )
		pFnF1856 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1856" );

	UBioAutoConditionals_execF1856_Parms F1856_Parms;
	F1856_Parms.bioWorld = bioWorld;
	F1856_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1856, &F1856_Parms, NULL );

	return F1856_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1776
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1776 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1776 = NULL;

	if ( ! pFnF1776 )
		pFnF1776 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1776" );

	UBioAutoConditionals_execF1776_Parms F1776_Parms;
	F1776_Parms.bioWorld = bioWorld;
	F1776_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1776, &F1776_Parms, NULL );

	return F1776_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1775
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1775 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1775 = NULL;

	if ( ! pFnF1775 )
		pFnF1775 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1775" );

	UBioAutoConditionals_execF1775_Parms F1775_Parms;
	F1775_Parms.bioWorld = bioWorld;
	F1775_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1775, &F1775_Parms, NULL );

	return F1775_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1774
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1774 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1774 = NULL;

	if ( ! pFnF1774 )
		pFnF1774 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1774" );

	UBioAutoConditionals_execF1774_Parms F1774_Parms;
	F1774_Parms.bioWorld = bioWorld;
	F1774_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1774, &F1774_Parms, NULL );

	return F1774_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1773
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1773 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1773 = NULL;

	if ( ! pFnF1773 )
		pFnF1773 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1773" );

	UBioAutoConditionals_execF1773_Parms F1773_Parms;
	F1773_Parms.bioWorld = bioWorld;
	F1773_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1773, &F1773_Parms, NULL );

	return F1773_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1772
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1772 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1772 = NULL;

	if ( ! pFnF1772 )
		pFnF1772 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1772" );

	UBioAutoConditionals_execF1772_Parms F1772_Parms;
	F1772_Parms.bioWorld = bioWorld;
	F1772_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1772, &F1772_Parms, NULL );

	return F1772_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1771
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1771 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1771 = NULL;

	if ( ! pFnF1771 )
		pFnF1771 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1771" );

	UBioAutoConditionals_execF1771_Parms F1771_Parms;
	F1771_Parms.bioWorld = bioWorld;
	F1771_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1771, &F1771_Parms, NULL );

	return F1771_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1770
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1770 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1770 = NULL;

	if ( ! pFnF1770 )
		pFnF1770 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1770" );

	UBioAutoConditionals_execF1770_Parms F1770_Parms;
	F1770_Parms.bioWorld = bioWorld;
	F1770_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1770, &F1770_Parms, NULL );

	return F1770_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1764
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1764 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1764 = NULL;

	if ( ! pFnF1764 )
		pFnF1764 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1764" );

	UBioAutoConditionals_execF1764_Parms F1764_Parms;
	F1764_Parms.bioWorld = bioWorld;
	F1764_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1764, &F1764_Parms, NULL );

	return F1764_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1769
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1769 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1769 = NULL;

	if ( ! pFnF1769 )
		pFnF1769 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1769" );

	UBioAutoConditionals_execF1769_Parms F1769_Parms;
	F1769_Parms.bioWorld = bioWorld;
	F1769_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1769, &F1769_Parms, NULL );

	return F1769_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1768
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1768 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1768 = NULL;

	if ( ! pFnF1768 )
		pFnF1768 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1768" );

	UBioAutoConditionals_execF1768_Parms F1768_Parms;
	F1768_Parms.bioWorld = bioWorld;
	F1768_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1768, &F1768_Parms, NULL );

	return F1768_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1767
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1767 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1767 = NULL;

	if ( ! pFnF1767 )
		pFnF1767 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1767" );

	UBioAutoConditionals_execF1767_Parms F1767_Parms;
	F1767_Parms.bioWorld = bioWorld;
	F1767_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1767, &F1767_Parms, NULL );

	return F1767_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1738
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1738 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1738 = NULL;

	if ( ! pFnF1738 )
		pFnF1738 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1738" );

	UBioAutoConditionals_execF1738_Parms F1738_Parms;
	F1738_Parms.bioWorld = bioWorld;
	F1738_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1738, &F1738_Parms, NULL );

	return F1738_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1737
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1737 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1737 = NULL;

	if ( ! pFnF1737 )
		pFnF1737 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1737" );

	UBioAutoConditionals_execF1737_Parms F1737_Parms;
	F1737_Parms.bioWorld = bioWorld;
	F1737_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1737, &F1737_Parms, NULL );

	return F1737_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1754
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1754 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1754 = NULL;

	if ( ! pFnF1754 )
		pFnF1754 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1754" );

	UBioAutoConditionals_execF1754_Parms F1754_Parms;
	F1754_Parms.bioWorld = bioWorld;
	F1754_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1754, &F1754_Parms, NULL );

	return F1754_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1753
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1753 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1753 = NULL;

	if ( ! pFnF1753 )
		pFnF1753 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1753" );

	UBioAutoConditionals_execF1753_Parms F1753_Parms;
	F1753_Parms.bioWorld = bioWorld;
	F1753_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1753, &F1753_Parms, NULL );

	return F1753_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1752
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1752 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1752 = NULL;

	if ( ! pFnF1752 )
		pFnF1752 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1752" );

	UBioAutoConditionals_execF1752_Parms F1752_Parms;
	F1752_Parms.bioWorld = bioWorld;
	F1752_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1752, &F1752_Parms, NULL );

	return F1752_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1751
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1751 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1751 = NULL;

	if ( ! pFnF1751 )
		pFnF1751 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1751" );

	UBioAutoConditionals_execF1751_Parms F1751_Parms;
	F1751_Parms.bioWorld = bioWorld;
	F1751_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1751, &F1751_Parms, NULL );

	return F1751_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1750
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1750 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1750 = NULL;

	if ( ! pFnF1750 )
		pFnF1750 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1750" );

	UBioAutoConditionals_execF1750_Parms F1750_Parms;
	F1750_Parms.bioWorld = bioWorld;
	F1750_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1750, &F1750_Parms, NULL );

	return F1750_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1749
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1749 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1749 = NULL;

	if ( ! pFnF1749 )
		pFnF1749 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1749" );

	UBioAutoConditionals_execF1749_Parms F1749_Parms;
	F1749_Parms.bioWorld = bioWorld;
	F1749_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1749, &F1749_Parms, NULL );

	return F1749_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1748
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1748 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1748 = NULL;

	if ( ! pFnF1748 )
		pFnF1748 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1748" );

	UBioAutoConditionals_execF1748_Parms F1748_Parms;
	F1748_Parms.bioWorld = bioWorld;
	F1748_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1748, &F1748_Parms, NULL );

	return F1748_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1747
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1747 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1747 = NULL;

	if ( ! pFnF1747 )
		pFnF1747 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1747" );

	UBioAutoConditionals_execF1747_Parms F1747_Parms;
	F1747_Parms.bioWorld = bioWorld;
	F1747_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1747, &F1747_Parms, NULL );

	return F1747_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1746
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1746 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1746 = NULL;

	if ( ! pFnF1746 )
		pFnF1746 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1746" );

	UBioAutoConditionals_execF1746_Parms F1746_Parms;
	F1746_Parms.bioWorld = bioWorld;
	F1746_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1746, &F1746_Parms, NULL );

	return F1746_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1745
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1745 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1745 = NULL;

	if ( ! pFnF1745 )
		pFnF1745 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1745" );

	UBioAutoConditionals_execF1745_Parms F1745_Parms;
	F1745_Parms.bioWorld = bioWorld;
	F1745_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1745, &F1745_Parms, NULL );

	return F1745_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1744
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1744 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1744 = NULL;

	if ( ! pFnF1744 )
		pFnF1744 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1744" );

	UBioAutoConditionals_execF1744_Parms F1744_Parms;
	F1744_Parms.bioWorld = bioWorld;
	F1744_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1744, &F1744_Parms, NULL );

	return F1744_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1740
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1740 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1740 = NULL;

	if ( ! pFnF1740 )
		pFnF1740 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Pack01.BioAutoConditionals.F1740" );

	UBioAutoConditionals_execF1740_Parms F1740_Parms;
	F1740_Parms.bioWorld = bioWorld;
	F1740_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1740, &F1740_Parms, NULL );

	return F1740_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif