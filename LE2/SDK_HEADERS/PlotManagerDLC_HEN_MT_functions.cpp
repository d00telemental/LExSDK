/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_HEN_MT_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_HEN_MT.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1833
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1833 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1833 = NULL;

	if ( ! pFnF1833 )
		pFnF1833 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1833" );

	UBioAutoConditionals_execF1833_Parms F1833_Parms;
	F1833_Parms.bioWorld = bioWorld;
	F1833_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1833, &F1833_Parms, NULL );

	return F1833_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1832
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1832 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1832 = NULL;

	if ( ! pFnF1832 )
		pFnF1832 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1832" );

	UBioAutoConditionals_execF1832_Parms F1832_Parms;
	F1832_Parms.bioWorld = bioWorld;
	F1832_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1832, &F1832_Parms, NULL );

	return F1832_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1831
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1831 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1831 = NULL;

	if ( ! pFnF1831 )
		pFnF1831 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1831" );

	UBioAutoConditionals_execF1831_Parms F1831_Parms;
	F1831_Parms.bioWorld = bioWorld;
	F1831_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1831, &F1831_Parms, NULL );

	return F1831_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1830
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1830 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1830 = NULL;

	if ( ! pFnF1830 )
		pFnF1830 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1830" );

	UBioAutoConditionals_execF1830_Parms F1830_Parms;
	F1830_Parms.bioWorld = bioWorld;
	F1830_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1830, &F1830_Parms, NULL );

	return F1830_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1829
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1829 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1829 = NULL;

	if ( ! pFnF1829 )
		pFnF1829 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1829" );

	UBioAutoConditionals_execF1829_Parms F1829_Parms;
	F1829_Parms.bioWorld = bioWorld;
	F1829_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1829, &F1829_Parms, NULL );

	return F1829_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1828
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1828 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1828 = NULL;

	if ( ! pFnF1828 )
		pFnF1828 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1828" );

	UBioAutoConditionals_execF1828_Parms F1828_Parms;
	F1828_Parms.bioWorld = bioWorld;
	F1828_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1828, &F1828_Parms, NULL );

	return F1828_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1827
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1827 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1827 = NULL;

	if ( ! pFnF1827 )
		pFnF1827 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1827" );

	UBioAutoConditionals_execF1827_Parms F1827_Parms;
	F1827_Parms.bioWorld = bioWorld;
	F1827_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1827, &F1827_Parms, NULL );

	return F1827_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1826
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1826 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1826 = NULL;

	if ( ! pFnF1826 )
		pFnF1826 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1826" );

	UBioAutoConditionals_execF1826_Parms F1826_Parms;
	F1826_Parms.bioWorld = bioWorld;
	F1826_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1826, &F1826_Parms, NULL );

	return F1826_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1825
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1825 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1825 = NULL;

	if ( ! pFnF1825 )
		pFnF1825 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1825" );

	UBioAutoConditionals_execF1825_Parms F1825_Parms;
	F1825_Parms.bioWorld = bioWorld;
	F1825_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1825, &F1825_Parms, NULL );

	return F1825_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1824
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1824 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1824 = NULL;

	if ( ! pFnF1824 )
		pFnF1824 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1824" );

	UBioAutoConditionals_execF1824_Parms F1824_Parms;
	F1824_Parms.bioWorld = bioWorld;
	F1824_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1824, &F1824_Parms, NULL );

	return F1824_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1823
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1823 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1823 = NULL;

	if ( ! pFnF1823 )
		pFnF1823 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1823" );

	UBioAutoConditionals_execF1823_Parms F1823_Parms;
	F1823_Parms.bioWorld = bioWorld;
	F1823_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1823, &F1823_Parms, NULL );

	return F1823_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1822
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1822 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1822 = NULL;

	if ( ! pFnF1822 )
		pFnF1822 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1822" );

	UBioAutoConditionals_execF1822_Parms F1822_Parms;
	F1822_Parms.bioWorld = bioWorld;
	F1822_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1822, &F1822_Parms, NULL );

	return F1822_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1821
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1821 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1821 = NULL;

	if ( ! pFnF1821 )
		pFnF1821 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1821" );

	UBioAutoConditionals_execF1821_Parms F1821_Parms;
	F1821_Parms.bioWorld = bioWorld;
	F1821_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1821, &F1821_Parms, NULL );

	return F1821_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1820
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1820 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1820 = NULL;

	if ( ! pFnF1820 )
		pFnF1820 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1820" );

	UBioAutoConditionals_execF1820_Parms F1820_Parms;
	F1820_Parms.bioWorld = bioWorld;
	F1820_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1820, &F1820_Parms, NULL );

	return F1820_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1819
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1819 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1819 = NULL;

	if ( ! pFnF1819 )
		pFnF1819 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1819" );

	UBioAutoConditionals_execF1819_Parms F1819_Parms;
	F1819_Parms.bioWorld = bioWorld;
	F1819_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1819, &F1819_Parms, NULL );

	return F1819_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1818
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1818 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1818 = NULL;

	if ( ! pFnF1818 )
		pFnF1818 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1818" );

	UBioAutoConditionals_execF1818_Parms F1818_Parms;
	F1818_Parms.bioWorld = bioWorld;
	F1818_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1818, &F1818_Parms, NULL );

	return F1818_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1817
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1817 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1817 = NULL;

	if ( ! pFnF1817 )
		pFnF1817 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1817" );

	UBioAutoConditionals_execF1817_Parms F1817_Parms;
	F1817_Parms.bioWorld = bioWorld;
	F1817_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1817, &F1817_Parms, NULL );

	return F1817_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1816
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1816 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1816 = NULL;

	if ( ! pFnF1816 )
		pFnF1816 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1816" );

	UBioAutoConditionals_execF1816_Parms F1816_Parms;
	F1816_Parms.bioWorld = bioWorld;
	F1816_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1816, &F1816_Parms, NULL );

	return F1816_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1815
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1815 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1815 = NULL;

	if ( ! pFnF1815 )
		pFnF1815 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1815" );

	UBioAutoConditionals_execF1815_Parms F1815_Parms;
	F1815_Parms.bioWorld = bioWorld;
	F1815_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1815, &F1815_Parms, NULL );

	return F1815_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1814
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1814 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1814 = NULL;

	if ( ! pFnF1814 )
		pFnF1814 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1814" );

	UBioAutoConditionals_execF1814_Parms F1814_Parms;
	F1814_Parms.bioWorld = bioWorld;
	F1814_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1814, &F1814_Parms, NULL );

	return F1814_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1813
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1813 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1813 = NULL;

	if ( ! pFnF1813 )
		pFnF1813 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1813" );

	UBioAutoConditionals_execF1813_Parms F1813_Parms;
	F1813_Parms.bioWorld = bioWorld;
	F1813_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1813, &F1813_Parms, NULL );

	return F1813_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1812
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1812 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1812 = NULL;

	if ( ! pFnF1812 )
		pFnF1812 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1812" );

	UBioAutoConditionals_execF1812_Parms F1812_Parms;
	F1812_Parms.bioWorld = bioWorld;
	F1812_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1812, &F1812_Parms, NULL );

	return F1812_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1811
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1811 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1811 = NULL;

	if ( ! pFnF1811 )
		pFnF1811 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1811" );

	UBioAutoConditionals_execF1811_Parms F1811_Parms;
	F1811_Parms.bioWorld = bioWorld;
	F1811_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1811, &F1811_Parms, NULL );

	return F1811_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1810
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1810 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1810 = NULL;

	if ( ! pFnF1810 )
		pFnF1810 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1810" );

	UBioAutoConditionals_execF1810_Parms F1810_Parms;
	F1810_Parms.bioWorld = bioWorld;
	F1810_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1810, &F1810_Parms, NULL );

	return F1810_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1809
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1809 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1809 = NULL;

	if ( ! pFnF1809 )
		pFnF1809 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1809" );

	UBioAutoConditionals_execF1809_Parms F1809_Parms;
	F1809_Parms.bioWorld = bioWorld;
	F1809_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1809, &F1809_Parms, NULL );

	return F1809_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1808
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1808 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1808 = NULL;

	if ( ! pFnF1808 )
		pFnF1808 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1808" );

	UBioAutoConditionals_execF1808_Parms F1808_Parms;
	F1808_Parms.bioWorld = bioWorld;
	F1808_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1808, &F1808_Parms, NULL );

	return F1808_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1807
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1807 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1807 = NULL;

	if ( ! pFnF1807 )
		pFnF1807 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1807" );

	UBioAutoConditionals_execF1807_Parms F1807_Parms;
	F1807_Parms.bioWorld = bioWorld;
	F1807_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1807, &F1807_Parms, NULL );

	return F1807_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1806
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1806 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1806 = NULL;

	if ( ! pFnF1806 )
		pFnF1806 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1806" );

	UBioAutoConditionals_execF1806_Parms F1806_Parms;
	F1806_Parms.bioWorld = bioWorld;
	F1806_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1806, &F1806_Parms, NULL );

	return F1806_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1805
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1805 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1805 = NULL;

	if ( ! pFnF1805 )
		pFnF1805 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1805" );

	UBioAutoConditionals_execF1805_Parms F1805_Parms;
	F1805_Parms.bioWorld = bioWorld;
	F1805_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1805, &F1805_Parms, NULL );

	return F1805_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1804
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1804 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1804 = NULL;

	if ( ! pFnF1804 )
		pFnF1804 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1804" );

	UBioAutoConditionals_execF1804_Parms F1804_Parms;
	F1804_Parms.bioWorld = bioWorld;
	F1804_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1804, &F1804_Parms, NULL );

	return F1804_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1803
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1803 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1803 = NULL;

	if ( ! pFnF1803 )
		pFnF1803 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1803" );

	UBioAutoConditionals_execF1803_Parms F1803_Parms;
	F1803_Parms.bioWorld = bioWorld;
	F1803_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1803, &F1803_Parms, NULL );

	return F1803_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1802
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1802 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1802 = NULL;

	if ( ! pFnF1802 )
		pFnF1802 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1802" );

	UBioAutoConditionals_execF1802_Parms F1802_Parms;
	F1802_Parms.bioWorld = bioWorld;
	F1802_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1802, &F1802_Parms, NULL );

	return F1802_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1801
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1801 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1801 = NULL;

	if ( ! pFnF1801 )
		pFnF1801 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1801" );

	UBioAutoConditionals_execF1801_Parms F1801_Parms;
	F1801_Parms.bioWorld = bioWorld;
	F1801_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1801, &F1801_Parms, NULL );

	return F1801_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1800
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1800 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1800 = NULL;

	if ( ! pFnF1800 )
		pFnF1800 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1800" );

	UBioAutoConditionals_execF1800_Parms F1800_Parms;
	F1800_Parms.bioWorld = bioWorld;
	F1800_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1800, &F1800_Parms, NULL );

	return F1800_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1789
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1789 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1789 = NULL;

	if ( ! pFnF1789 )
		pFnF1789 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1789" );

	UBioAutoConditionals_execF1789_Parms F1789_Parms;
	F1789_Parms.bioWorld = bioWorld;
	F1789_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1789, &F1789_Parms, NULL );

	return F1789_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1788
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1788 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1788 = NULL;

	if ( ! pFnF1788 )
		pFnF1788 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1788" );

	UBioAutoConditionals_execF1788_Parms F1788_Parms;
	F1788_Parms.bioWorld = bioWorld;
	F1788_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1788, &F1788_Parms, NULL );

	return F1788_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1838
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1838 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1838 = NULL;

	if ( ! pFnF1838 )
		pFnF1838 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1838" );

	UBioAutoConditionals_execF1838_Parms F1838_Parms;
	F1838_Parms.bioWorld = bioWorld;
	F1838_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1838, &F1838_Parms, NULL );

	return F1838_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1799
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1799 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1799 = NULL;

	if ( ! pFnF1799 )
		pFnF1799 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1799" );

	UBioAutoConditionals_execF1799_Parms F1799_Parms;
	F1799_Parms.bioWorld = bioWorld;
	F1799_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1799, &F1799_Parms, NULL );

	return F1799_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1798
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1798 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1798 = NULL;

	if ( ! pFnF1798 )
		pFnF1798 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1798" );

	UBioAutoConditionals_execF1798_Parms F1798_Parms;
	F1798_Parms.bioWorld = bioWorld;
	F1798_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1798, &F1798_Parms, NULL );

	return F1798_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1797
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1797 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1797 = NULL;

	if ( ! pFnF1797 )
		pFnF1797 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1797" );

	UBioAutoConditionals_execF1797_Parms F1797_Parms;
	F1797_Parms.bioWorld = bioWorld;
	F1797_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1797, &F1797_Parms, NULL );

	return F1797_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1796
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1796 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1796 = NULL;

	if ( ! pFnF1796 )
		pFnF1796 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1796" );

	UBioAutoConditionals_execF1796_Parms F1796_Parms;
	F1796_Parms.bioWorld = bioWorld;
	F1796_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1796, &F1796_Parms, NULL );

	return F1796_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1795
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1795 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1795 = NULL;

	if ( ! pFnF1795 )
		pFnF1795 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1795" );

	UBioAutoConditionals_execF1795_Parms F1795_Parms;
	F1795_Parms.bioWorld = bioWorld;
	F1795_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1795, &F1795_Parms, NULL );

	return F1795_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1794
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1794 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1794 = NULL;

	if ( ! pFnF1794 )
		pFnF1794 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1794" );

	UBioAutoConditionals_execF1794_Parms F1794_Parms;
	F1794_Parms.bioWorld = bioWorld;
	F1794_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1794, &F1794_Parms, NULL );

	return F1794_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1793
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1793 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1793 = NULL;

	if ( ! pFnF1793 )
		pFnF1793 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1793" );

	UBioAutoConditionals_execF1793_Parms F1793_Parms;
	F1793_Parms.bioWorld = bioWorld;
	F1793_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1793, &F1793_Parms, NULL );

	return F1793_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1787
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1787 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1787 = NULL;

	if ( ! pFnF1787 )
		pFnF1787 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1787" );

	UBioAutoConditionals_execF1787_Parms F1787_Parms;
	F1787_Parms.bioWorld = bioWorld;
	F1787_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1787, &F1787_Parms, NULL );

	return F1787_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1755
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1755 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1755 = NULL;

	if ( ! pFnF1755 )
		pFnF1755 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1755" );

	UBioAutoConditionals_execF1755_Parms F1755_Parms;
	F1755_Parms.bioWorld = bioWorld;
	F1755_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1755, &F1755_Parms, NULL );

	return F1755_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1763
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1763 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1763 = NULL;

	if ( ! pFnF1763 )
		pFnF1763 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1763" );

	UBioAutoConditionals_execF1763_Parms F1763_Parms;
	F1763_Parms.bioWorld = bioWorld;
	F1763_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1763, &F1763_Parms, NULL );

	return F1763_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1837
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1837 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1837 = NULL;

	if ( ! pFnF1837 )
		pFnF1837 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1837" );

	UBioAutoConditionals_execF1837_Parms F1837_Parms;
	F1837_Parms.bioWorld = bioWorld;
	F1837_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1837, &F1837_Parms, NULL );

	return F1837_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1836
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1836 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1836 = NULL;

	if ( ! pFnF1836 )
		pFnF1836 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1836" );

	UBioAutoConditionals_execF1836_Parms F1836_Parms;
	F1836_Parms.bioWorld = bioWorld;
	F1836_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1836, &F1836_Parms, NULL );

	return F1836_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1835
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1835 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1835 = NULL;

	if ( ! pFnF1835 )
		pFnF1835 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1835" );

	UBioAutoConditionals_execF1835_Parms F1835_Parms;
	F1835_Parms.bioWorld = bioWorld;
	F1835_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1835, &F1835_Parms, NULL );

	return F1835_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1834
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1834 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1834 = NULL;

	if ( ! pFnF1834 )
		pFnF1834 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1834" );

	UBioAutoConditionals_execF1834_Parms F1834_Parms;
	F1834_Parms.bioWorld = bioWorld;
	F1834_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1834, &F1834_Parms, NULL );

	return F1834_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1735
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1735 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1735 = NULL;

	if ( ! pFnF1735 )
		pFnF1735 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1735" );

	UBioAutoConditionals_execF1735_Parms F1735_Parms;
	F1735_Parms.bioWorld = bioWorld;
	F1735_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1735, &F1735_Parms, NULL );

	return F1735_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1734
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1734 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1734 = NULL;

	if ( ! pFnF1734 )
		pFnF1734 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1734" );

	UBioAutoConditionals_execF1734_Parms F1734_Parms;
	F1734_Parms.bioWorld = bioWorld;
	F1734_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1734, &F1734_Parms, NULL );

	return F1734_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1733
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1733 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1733 = NULL;

	if ( ! pFnF1733 )
		pFnF1733 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1733" );

	UBioAutoConditionals_execF1733_Parms F1733_Parms;
	F1733_Parms.bioWorld = bioWorld;
	F1733_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1733, &F1733_Parms, NULL );

	return F1733_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1731
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1731 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1731 = NULL;

	if ( ! pFnF1731 )
		pFnF1731 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1731" );

	UBioAutoConditionals_execF1731_Parms F1731_Parms;
	F1731_Parms.bioWorld = bioWorld;
	F1731_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1731, &F1731_Parms, NULL );

	return F1731_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1730
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1730 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1730 = NULL;

	if ( ! pFnF1730 )
		pFnF1730 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1730" );

	UBioAutoConditionals_execF1730_Parms F1730_Parms;
	F1730_Parms.bioWorld = bioWorld;
	F1730_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1730, &F1730_Parms, NULL );

	return F1730_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1855
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1855 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1855 = NULL;

	if ( ! pFnF1855 )
		pFnF1855 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1855" );

	UBioAutoConditionals_execF1855_Parms F1855_Parms;
	F1855_Parms.bioWorld = bioWorld;
	F1855_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1855, &F1855_Parms, NULL );

	return F1855_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1852
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1852 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1852 = NULL;

	if ( ! pFnF1852 )
		pFnF1852 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1852" );

	UBioAutoConditionals_execF1852_Parms F1852_Parms;
	F1852_Parms.bioWorld = bioWorld;
	F1852_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1852, &F1852_Parms, NULL );

	return F1852_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1792
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1792 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1792 = NULL;

	if ( ! pFnF1792 )
		pFnF1792 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1792" );

	UBioAutoConditionals_execF1792_Parms F1792_Parms;
	F1792_Parms.bioWorld = bioWorld;
	F1792_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1792, &F1792_Parms, NULL );

	return F1792_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1724
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1724 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1724 = NULL;

	if ( ! pFnF1724 )
		pFnF1724 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1724" );

	UBioAutoConditionals_execF1724_Parms F1724_Parms;
	F1724_Parms.bioWorld = bioWorld;
	F1724_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1724, &F1724_Parms, NULL );

	return F1724_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1723
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1723 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1723 = NULL;

	if ( ! pFnF1723 )
		pFnF1723 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1723" );

	UBioAutoConditionals_execF1723_Parms F1723_Parms;
	F1723_Parms.bioWorld = bioWorld;
	F1723_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1723, &F1723_Parms, NULL );

	return F1723_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1712
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1712 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1712 = NULL;

	if ( ! pFnF1712 )
		pFnF1712 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1712" );

	UBioAutoConditionals_execF1712_Parms F1712_Parms;
	F1712_Parms.bioWorld = bioWorld;
	F1712_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1712, &F1712_Parms, NULL );

	return F1712_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1756
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1756 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1756 = NULL;

	if ( ! pFnF1756 )
		pFnF1756 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1756" );

	UBioAutoConditionals_execF1756_Parms F1756_Parms;
	F1756_Parms.bioWorld = bioWorld;
	F1756_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1756, &F1756_Parms, NULL );

	return F1756_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1732
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1732 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1732 = NULL;

	if ( ! pFnF1732 )
		pFnF1732 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1732" );

	UBioAutoConditionals_execF1732_Parms F1732_Parms;
	F1732_Parms.bioWorld = bioWorld;
	F1732_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1732, &F1732_Parms, NULL );

	return F1732_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1729
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1729 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1729 = NULL;

	if ( ! pFnF1729 )
		pFnF1729 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1729" );

	UBioAutoConditionals_execF1729_Parms F1729_Parms;
	F1729_Parms.bioWorld = bioWorld;
	F1729_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1729, &F1729_Parms, NULL );

	return F1729_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1728
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1728 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1728 = NULL;

	if ( ! pFnF1728 )
		pFnF1728 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1728" );

	UBioAutoConditionals_execF1728_Parms F1728_Parms;
	F1728_Parms.bioWorld = bioWorld;
	F1728_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1728, &F1728_Parms, NULL );

	return F1728_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1727
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1727 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1727 = NULL;

	if ( ! pFnF1727 )
		pFnF1727 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1727" );

	UBioAutoConditionals_execF1727_Parms F1727_Parms;
	F1727_Parms.bioWorld = bioWorld;
	F1727_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1727, &F1727_Parms, NULL );

	return F1727_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1678
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1678 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1678 = NULL;

	if ( ! pFnF1678 )
		pFnF1678 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1678" );

	UBioAutoConditionals_execF1678_Parms F1678_Parms;
	F1678_Parms.bioWorld = bioWorld;
	F1678_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1678, &F1678_Parms, NULL );

	return F1678_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1664
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1664 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1664 = NULL;

	if ( ! pFnF1664 )
		pFnF1664 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1664" );

	UBioAutoConditionals_execF1664_Parms F1664_Parms;
	F1664_Parms.bioWorld = bioWorld;
	F1664_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1664, &F1664_Parms, NULL );

	return F1664_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1637
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1637 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1637 = NULL;

	if ( ! pFnF1637 )
		pFnF1637 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_MT.BioAutoConditionals.F1637" );

	UBioAutoConditionals_execF1637_Parms F1637_Parms;
	F1637_Parms.bioWorld = bioWorld;
	F1637_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1637, &F1637_Parms, NULL );

	return F1637_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif