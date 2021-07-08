/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlotManagerDLC_UNC_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1798
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1798 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1798 = NULL;

	if ( ! pFnF1798 )
		pFnF1798 = (UFunction*) UObject::GObjObjects()->Data[ 82718 ];

	UBioAutoConditionals_execF1798_Parms F1798_Parms;
	F1798_Parms.bioWorld = bioWorld;
	F1798_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1798, &F1798_Parms, NULL );

	return F1798_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1826
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1826 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1826 = NULL;

	if ( ! pFnF1826 )
		pFnF1826 = (UFunction*) UObject::GObjObjects()->Data[ 82713 ];

	UBioAutoConditionals_execF1826_Parms F1826_Parms;
	F1826_Parms.bioWorld = bioWorld;
	F1826_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1826, &F1826_Parms, NULL );

	return F1826_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1824
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1824 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1824 = NULL;

	if ( ! pFnF1824 )
		pFnF1824 = (UFunction*) UObject::GObjObjects()->Data[ 82708 ];

	UBioAutoConditionals_execF1824_Parms F1824_Parms;
	F1824_Parms.bioWorld = bioWorld;
	F1824_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1824, &F1824_Parms, NULL );

	return F1824_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1823
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1823 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1823 = NULL;

	if ( ! pFnF1823 )
		pFnF1823 = (UFunction*) UObject::GObjObjects()->Data[ 82703 ];

	UBioAutoConditionals_execF1823_Parms F1823_Parms;
	F1823_Parms.bioWorld = bioWorld;
	F1823_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1823, &F1823_Parms, NULL );

	return F1823_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1822
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1822 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1822 = NULL;

	if ( ! pFnF1822 )
		pFnF1822 = (UFunction*) UObject::GObjObjects()->Data[ 82698 ];

	UBioAutoConditionals_execF1822_Parms F1822_Parms;
	F1822_Parms.bioWorld = bioWorld;
	F1822_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1822, &F1822_Parms, NULL );

	return F1822_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1816
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1816 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1816 = NULL;

	if ( ! pFnF1816 )
		pFnF1816 = (UFunction*) UObject::GObjObjects()->Data[ 82693 ];

	UBioAutoConditionals_execF1816_Parms F1816_Parms;
	F1816_Parms.bioWorld = bioWorld;
	F1816_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1816, &F1816_Parms, NULL );

	return F1816_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1815
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1815 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1815 = NULL;

	if ( ! pFnF1815 )
		pFnF1815 = (UFunction*) UObject::GObjObjects()->Data[ 82688 ];

	UBioAutoConditionals_execF1815_Parms F1815_Parms;
	F1815_Parms.bioWorld = bioWorld;
	F1815_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1815, &F1815_Parms, NULL );

	return F1815_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1814
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1814 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1814 = NULL;

	if ( ! pFnF1814 )
		pFnF1814 = (UFunction*) UObject::GObjObjects()->Data[ 82683 ];

	UBioAutoConditionals_execF1814_Parms F1814_Parms;
	F1814_Parms.bioWorld = bioWorld;
	F1814_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1814, &F1814_Parms, NULL );

	return F1814_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1813
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1813 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1813 = NULL;

	if ( ! pFnF1813 )
		pFnF1813 = (UFunction*) UObject::GObjObjects()->Data[ 82678 ];

	UBioAutoConditionals_execF1813_Parms F1813_Parms;
	F1813_Parms.bioWorld = bioWorld;
	F1813_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1813, &F1813_Parms, NULL );

	return F1813_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1808
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1808 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1808 = NULL;

	if ( ! pFnF1808 )
		pFnF1808 = (UFunction*) UObject::GObjObjects()->Data[ 82673 ];

	UBioAutoConditionals_execF1808_Parms F1808_Parms;
	F1808_Parms.bioWorld = bioWorld;
	F1808_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1808, &F1808_Parms, NULL );

	return F1808_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1807
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1807 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1807 = NULL;

	if ( ! pFnF1807 )
		pFnF1807 = (UFunction*) UObject::GObjObjects()->Data[ 82668 ];

	UBioAutoConditionals_execF1807_Parms F1807_Parms;
	F1807_Parms.bioWorld = bioWorld;
	F1807_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1807, &F1807_Parms, NULL );

	return F1807_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1806
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1806 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1806 = NULL;

	if ( ! pFnF1806 )
		pFnF1806 = (UFunction*) UObject::GObjObjects()->Data[ 82663 ];

	UBioAutoConditionals_execF1806_Parms F1806_Parms;
	F1806_Parms.bioWorld = bioWorld;
	F1806_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1806, &F1806_Parms, NULL );

	return F1806_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1805
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1805 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1805 = NULL;

	if ( ! pFnF1805 )
		pFnF1805 = (UFunction*) UObject::GObjObjects()->Data[ 82658 ];

	UBioAutoConditionals_execF1805_Parms F1805_Parms;
	F1805_Parms.bioWorld = bioWorld;
	F1805_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1805, &F1805_Parms, NULL );

	return F1805_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1804
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1804 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1804 = NULL;

	if ( ! pFnF1804 )
		pFnF1804 = (UFunction*) UObject::GObjObjects()->Data[ 82653 ];

	UBioAutoConditionals_execF1804_Parms F1804_Parms;
	F1804_Parms.bioWorld = bioWorld;
	F1804_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1804, &F1804_Parms, NULL );

	return F1804_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1803
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1803 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1803 = NULL;

	if ( ! pFnF1803 )
		pFnF1803 = (UFunction*) UObject::GObjObjects()->Data[ 82648 ];

	UBioAutoConditionals_execF1803_Parms F1803_Parms;
	F1803_Parms.bioWorld = bioWorld;
	F1803_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1803, &F1803_Parms, NULL );

	return F1803_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1802
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1802 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1802 = NULL;

	if ( ! pFnF1802 )
		pFnF1802 = (UFunction*) UObject::GObjObjects()->Data[ 82643 ];

	UBioAutoConditionals_execF1802_Parms F1802_Parms;
	F1802_Parms.bioWorld = bioWorld;
	F1802_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1802, &F1802_Parms, NULL );

	return F1802_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1801
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1801 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1801 = NULL;

	if ( ! pFnF1801 )
		pFnF1801 = (UFunction*) UObject::GObjObjects()->Data[ 82638 ];

	UBioAutoConditionals_execF1801_Parms F1801_Parms;
	F1801_Parms.bioWorld = bioWorld;
	F1801_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1801, &F1801_Parms, NULL );

	return F1801_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1799
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1799 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1799 = NULL;

	if ( ! pFnF1799 )
		pFnF1799 = (UFunction*) UObject::GObjObjects()->Data[ 82633 ];

	UBioAutoConditionals_execF1799_Parms F1799_Parms;
	F1799_Parms.bioWorld = bioWorld;
	F1799_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1799, &F1799_Parms, NULL );

	return F1799_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F2017
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2017 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2017 = NULL;

	if ( ! pFnF2017 )
		pFnF2017 = (UFunction*) UObject::GObjObjects()->Data[ 82628 ];

	UBioAutoConditionals_execF2017_Parms F2017_Parms;
	F2017_Parms.bioWorld = bioWorld;
	F2017_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2017, &F2017_Parms, NULL );

	return F2017_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F2016
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2016 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2016 = NULL;

	if ( ! pFnF2016 )
		pFnF2016 = (UFunction*) UObject::GObjObjects()->Data[ 82623 ];

	UBioAutoConditionals_execF2016_Parms F2016_Parms;
	F2016_Parms.bioWorld = bioWorld;
	F2016_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2016, &F2016_Parms, NULL );

	return F2016_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F2015
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F2015 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF2015 = NULL;

	if ( ! pFnF2015 )
		pFnF2015 = (UFunction*) UObject::GObjObjects()->Data[ 82618 ];

	UBioAutoConditionals_execF2015_Parms F2015_Parms;
	F2015_Parms.bioWorld = bioWorld;
	F2015_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF2015, &F2015_Parms, NULL );

	return F2015_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1828
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1828 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1828 = NULL;

	if ( ! pFnF1828 )
		pFnF1828 = (UFunction*) UObject::GObjObjects()->Data[ 82613 ];

	UBioAutoConditionals_execF1828_Parms F1828_Parms;
	F1828_Parms.bioWorld = bioWorld;
	F1828_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1828, &F1828_Parms, NULL );

	return F1828_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1827
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1827 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1827 = NULL;

	if ( ! pFnF1827 )
		pFnF1827 = (UFunction*) UObject::GObjObjects()->Data[ 82608 ];

	UBioAutoConditionals_execF1827_Parms F1827_Parms;
	F1827_Parms.bioWorld = bioWorld;
	F1827_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1827, &F1827_Parms, NULL );

	return F1827_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1789
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1789 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1789 = NULL;

	if ( ! pFnF1789 )
		pFnF1789 = (UFunction*) UObject::GObjObjects()->Data[ 82603 ];

	UBioAutoConditionals_execF1789_Parms F1789_Parms;
	F1789_Parms.bioWorld = bioWorld;
	F1789_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1789, &F1789_Parms, NULL );

	return F1789_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1790
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1790 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1790 = NULL;

	if ( ! pFnF1790 )
		pFnF1790 = (UFunction*) UObject::GObjObjects()->Data[ 82598 ];

	UBioAutoConditionals_execF1790_Parms F1790_Parms;
	F1790_Parms.bioWorld = bioWorld;
	F1790_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1790, &F1790_Parms, NULL );

	return F1790_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1791
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1791 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1791 = NULL;

	if ( ! pFnF1791 )
		pFnF1791 = (UFunction*) UObject::GObjObjects()->Data[ 82593 ];

	UBioAutoConditionals_execF1791_Parms F1791_Parms;
	F1791_Parms.bioWorld = bioWorld;
	F1791_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1791, &F1791_Parms, NULL );

	return F1791_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1797
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1797 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1797 = NULL;

	if ( ! pFnF1797 )
		pFnF1797 = (UFunction*) UObject::GObjObjects()->Data[ 82588 ];

	UBioAutoConditionals_execF1797_Parms F1797_Parms;
	F1797_Parms.bioWorld = bioWorld;
	F1797_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1797, &F1797_Parms, NULL );

	return F1797_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1796
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1796 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1796 = NULL;

	if ( ! pFnF1796 )
		pFnF1796 = (UFunction*) UObject::GObjObjects()->Data[ 82583 ];

	UBioAutoConditionals_execF1796_Parms F1796_Parms;
	F1796_Parms.bioWorld = bioWorld;
	F1796_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1796, &F1796_Parms, NULL );

	return F1796_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1795
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1795 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1795 = NULL;

	if ( ! pFnF1795 )
		pFnF1795 = (UFunction*) UObject::GObjObjects()->Data[ 82578 ];

	UBioAutoConditionals_execF1795_Parms F1795_Parms;
	F1795_Parms.bioWorld = bioWorld;
	F1795_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1795, &F1795_Parms, NULL );

	return F1795_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1794
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1794 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1794 = NULL;

	if ( ! pFnF1794 )
		pFnF1794 = (UFunction*) UObject::GObjObjects()->Data[ 82573 ];

	UBioAutoConditionals_execF1794_Parms F1794_Parms;
	F1794_Parms.bioWorld = bioWorld;
	F1794_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1794, &F1794_Parms, NULL );

	return F1794_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1793
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1793 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1793 = NULL;

	if ( ! pFnF1793 )
		pFnF1793 = (UFunction*) UObject::GObjObjects()->Data[ 82568 ];

	UBioAutoConditionals_execF1793_Parms F1793_Parms;
	F1793_Parms.bioWorld = bioWorld;
	F1793_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1793, &F1793_Parms, NULL );

	return F1793_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1792
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1792 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1792 = NULL;

	if ( ! pFnF1792 )
		pFnF1792 = (UFunction*) UObject::GObjObjects()->Data[ 82563 ];

	UBioAutoConditionals_execF1792_Parms F1792_Parms;
	F1792_Parms.bioWorld = bioWorld;
	F1792_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1792, &F1792_Parms, NULL );

	return F1792_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1809
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1809 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1809 = NULL;

	if ( ! pFnF1809 )
		pFnF1809 = (UFunction*) UObject::GObjObjects()->Data[ 82558 ];

	UBioAutoConditionals_execF1809_Parms F1809_Parms;
	F1809_Parms.bioWorld = bioWorld;
	F1809_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1809, &F1809_Parms, NULL );

	return F1809_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1800
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1800 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1800 = NULL;

	if ( ! pFnF1800 )
		pFnF1800 = (UFunction*) UObject::GObjObjects()->Data[ 82553 ];

	UBioAutoConditionals_execF1800_Parms F1800_Parms;
	F1800_Parms.bioWorld = bioWorld;
	F1800_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1800, &F1800_Parms, NULL );

	return F1800_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1812
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1812 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1812 = NULL;

	if ( ! pFnF1812 )
		pFnF1812 = (UFunction*) UObject::GObjObjects()->Data[ 82548 ];

	UBioAutoConditionals_execF1812_Parms F1812_Parms;
	F1812_Parms.bioWorld = bioWorld;
	F1812_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1812, &F1812_Parms, NULL );

	return F1812_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1811
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1811 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1811 = NULL;

	if ( ! pFnF1811 )
		pFnF1811 = (UFunction*) UObject::GObjObjects()->Data[ 82543 ];

	UBioAutoConditionals_execF1811_Parms F1811_Parms;
	F1811_Parms.bioWorld = bioWorld;
	F1811_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1811, &F1811_Parms, NULL );

	return F1811_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1810
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1810 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1810 = NULL;

	if ( ! pFnF1810 )
		pFnF1810 = (UFunction*) UObject::GObjObjects()->Data[ 82538 ];

	UBioAutoConditionals_execF1810_Parms F1810_Parms;
	F1810_Parms.bioWorld = bioWorld;
	F1810_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1810, &F1810_Parms, NULL );

	return F1810_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1821
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1821 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1821 = NULL;

	if ( ! pFnF1821 )
		pFnF1821 = (UFunction*) UObject::GObjObjects()->Data[ 82533 ];

	UBioAutoConditionals_execF1821_Parms F1821_Parms;
	F1821_Parms.bioWorld = bioWorld;
	F1821_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1821, &F1821_Parms, NULL );

	return F1821_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1820
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1820 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1820 = NULL;

	if ( ! pFnF1820 )
		pFnF1820 = (UFunction*) UObject::GObjObjects()->Data[ 82528 ];

	UBioAutoConditionals_execF1820_Parms F1820_Parms;
	F1820_Parms.bioWorld = bioWorld;
	F1820_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1820, &F1820_Parms, NULL );

	return F1820_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1819
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1819 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1819 = NULL;

	if ( ! pFnF1819 )
		pFnF1819 = (UFunction*) UObject::GObjObjects()->Data[ 82523 ];

	UBioAutoConditionals_execF1819_Parms F1819_Parms;
	F1819_Parms.bioWorld = bioWorld;
	F1819_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1819, &F1819_Parms, NULL );

	return F1819_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1818
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1818 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1818 = NULL;

	if ( ! pFnF1818 )
		pFnF1818 = (UFunction*) UObject::GObjObjects()->Data[ 82518 ];

	UBioAutoConditionals_execF1818_Parms F1818_Parms;
	F1818_Parms.bioWorld = bioWorld;
	F1818_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1818, &F1818_Parms, NULL );

	return F1818_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1817
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1817 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1817 = NULL;

	if ( ! pFnF1817 )
		pFnF1817 = (UFunction*) UObject::GObjObjects()->Data[ 82513 ];

	UBioAutoConditionals_execF1817_Parms F1817_Parms;
	F1817_Parms.bioWorld = bioWorld;
	F1817_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1817, &F1817_Parms, NULL );

	return F1817_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1832
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1832 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1832 = NULL;

	if ( ! pFnF1832 )
		pFnF1832 = (UFunction*) UObject::GObjObjects()->Data[ 82508 ];

	UBioAutoConditionals_execF1832_Parms F1832_Parms;
	F1832_Parms.bioWorld = bioWorld;
	F1832_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1832, &F1832_Parms, NULL );

	return F1832_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1831
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1831 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1831 = NULL;

	if ( ! pFnF1831 )
		pFnF1831 = (UFunction*) UObject::GObjObjects()->Data[ 82503 ];

	UBioAutoConditionals_execF1831_Parms F1831_Parms;
	F1831_Parms.bioWorld = bioWorld;
	F1831_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1831, &F1831_Parms, NULL );

	return F1831_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1825
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1825 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1825 = NULL;

	if ( ! pFnF1825 )
		pFnF1825 = (UFunction*) UObject::GObjObjects()->Data[ 82498 ];

	UBioAutoConditionals_execF1825_Parms F1825_Parms;
	F1825_Parms.bioWorld = bioWorld;
	F1825_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1825, &F1825_Parms, NULL );

	return F1825_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1830
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1830 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1830 = NULL;

	if ( ! pFnF1830 )
		pFnF1830 = (UFunction*) UObject::GObjObjects()->Data[ 82493 ];

	UBioAutoConditionals_execF1830_Parms F1830_Parms;
	F1830_Parms.bioWorld = bioWorld;
	F1830_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1830, &F1830_Parms, NULL );

	return F1830_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1829
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1829 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1829 = NULL;

	if ( ! pFnF1829 )
		pFnF1829 = (UFunction*) UObject::GObjObjects()->Data[ 82488 ];

	UBioAutoConditionals_execF1829_Parms F1829_Parms;
	F1829_Parms.bioWorld = bioWorld;
	F1829_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1829, &F1829_Parms, NULL );

	return F1829_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1779
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1779 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1779 = NULL;

	if ( ! pFnF1779 )
		pFnF1779 = (UFunction*) UObject::GObjObjects()->Data[ 82483 ];

	UBioAutoConditionals_execF1779_Parms F1779_Parms;
	F1779_Parms.bioWorld = bioWorld;
	F1779_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1779, &F1779_Parms, NULL );

	return F1779_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1778
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1778 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1778 = NULL;

	if ( ! pFnF1778 )
		pFnF1778 = (UFunction*) UObject::GObjObjects()->Data[ 82478 ];

	UBioAutoConditionals_execF1778_Parms F1778_Parms;
	F1778_Parms.bioWorld = bioWorld;
	F1778_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1778, &F1778_Parms, NULL );

	return F1778_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1777
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1777 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1777 = NULL;

	if ( ! pFnF1777 )
		pFnF1777 = (UFunction*) UObject::GObjObjects()->Data[ 82473 ];

	UBioAutoConditionals_execF1777_Parms F1777_Parms;
	F1777_Parms.bioWorld = bioWorld;
	F1777_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1777, &F1777_Parms, NULL );

	return F1777_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1780
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1780 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1780 = NULL;

	if ( ! pFnF1780 )
		pFnF1780 = (UFunction*) UObject::GObjObjects()->Data[ 82468 ];

	UBioAutoConditionals_execF1780_Parms F1780_Parms;
	F1780_Parms.bioWorld = bioWorld;
	F1780_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1780, &F1780_Parms, NULL );

	return F1780_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1781
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1781 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1781 = NULL;

	if ( ! pFnF1781 )
		pFnF1781 = (UFunction*) UObject::GObjObjects()->Data[ 82463 ];

	UBioAutoConditionals_execF1781_Parms F1781_Parms;
	F1781_Parms.bioWorld = bioWorld;
	F1781_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1781, &F1781_Parms, NULL );

	return F1781_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1776
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1776 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1776 = NULL;

	if ( ! pFnF1776 )
		pFnF1776 = (UFunction*) UObject::GObjObjects()->Data[ 82459 ];

	UBioAutoConditionals_execF1776_Parms F1776_Parms;
	F1776_Parms.bioWorld = bioWorld;
	F1776_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1776, &F1776_Parms, NULL );

	return F1776_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1775
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1775 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1775 = NULL;

	if ( ! pFnF1775 )
		pFnF1775 = (UFunction*) UObject::GObjObjects()->Data[ 82454 ];

	UBioAutoConditionals_execF1775_Parms F1775_Parms;
	F1775_Parms.bioWorld = bioWorld;
	F1775_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1775, &F1775_Parms, NULL );

	return F1775_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1774
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1774 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1774 = NULL;

	if ( ! pFnF1774 )
		pFnF1774 = (UFunction*) UObject::GObjObjects()->Data[ 82449 ];

	UBioAutoConditionals_execF1774_Parms F1774_Parms;
	F1774_Parms.bioWorld = bioWorld;
	F1774_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1774, &F1774_Parms, NULL );

	return F1774_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1773
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1773 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1773 = NULL;

	if ( ! pFnF1773 )
		pFnF1773 = (UFunction*) UObject::GObjObjects()->Data[ 82444 ];

	UBioAutoConditionals_execF1773_Parms F1773_Parms;
	F1773_Parms.bioWorld = bioWorld;
	F1773_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1773, &F1773_Parms, NULL );

	return F1773_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1772
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1772 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1772 = NULL;

	if ( ! pFnF1772 )
		pFnF1772 = (UFunction*) UObject::GObjObjects()->Data[ 82439 ];

	UBioAutoConditionals_execF1772_Parms F1772_Parms;
	F1772_Parms.bioWorld = bioWorld;
	F1772_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1772, &F1772_Parms, NULL );

	return F1772_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1771
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1771 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1771 = NULL;

	if ( ! pFnF1771 )
		pFnF1771 = (UFunction*) UObject::GObjObjects()->Data[ 82434 ];

	UBioAutoConditionals_execF1771_Parms F1771_Parms;
	F1771_Parms.bioWorld = bioWorld;
	F1771_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1771, &F1771_Parms, NULL );

	return F1771_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1770
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1770 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1770 = NULL;

	if ( ! pFnF1770 )
		pFnF1770 = (UFunction*) UObject::GObjObjects()->Data[ 82429 ];

	UBioAutoConditionals_execF1770_Parms F1770_Parms;
	F1770_Parms.bioWorld = bioWorld;
	F1770_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1770, &F1770_Parms, NULL );

	return F1770_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1769
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1769 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1769 = NULL;

	if ( ! pFnF1769 )
		pFnF1769 = (UFunction*) UObject::GObjObjects()->Data[ 82424 ];

	UBioAutoConditionals_execF1769_Parms F1769_Parms;
	F1769_Parms.bioWorld = bioWorld;
	F1769_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1769, &F1769_Parms, NULL );

	return F1769_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1768
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1768 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1768 = NULL;

	if ( ! pFnF1768 )
		pFnF1768 = (UFunction*) UObject::GObjObjects()->Data[ 82419 ];

	UBioAutoConditionals_execF1768_Parms F1768_Parms;
	F1768_Parms.bioWorld = bioWorld;
	F1768_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1768, &F1768_Parms, NULL );

	return F1768_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1767
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1767 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1767 = NULL;

	if ( ! pFnF1767 )
		pFnF1767 = (UFunction*) UObject::GObjObjects()->Data[ 82414 ];

	UBioAutoConditionals_execF1767_Parms F1767_Parms;
	F1767_Parms.bioWorld = bioWorld;
	F1767_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1767, &F1767_Parms, NULL );

	return F1767_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1766
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1766 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1766 = NULL;

	if ( ! pFnF1766 )
		pFnF1766 = (UFunction*) UObject::GObjObjects()->Data[ 82409 ];

	UBioAutoConditionals_execF1766_Parms F1766_Parms;
	F1766_Parms.bioWorld = bioWorld;
	F1766_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1766, &F1766_Parms, NULL );

	return F1766_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1765
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1765 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1765 = NULL;

	if ( ! pFnF1765 )
		pFnF1765 = (UFunction*) UObject::GObjObjects()->Data[ 82404 ];

	UBioAutoConditionals_execF1765_Parms F1765_Parms;
	F1765_Parms.bioWorld = bioWorld;
	F1765_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1765, &F1765_Parms, NULL );

	return F1765_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1764
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1764 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1764 = NULL;

	if ( ! pFnF1764 )
		pFnF1764 = (UFunction*) UObject::GObjObjects()->Data[ 82399 ];

	UBioAutoConditionals_execF1764_Parms F1764_Parms;
	F1764_Parms.bioWorld = bioWorld;
	F1764_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1764, &F1764_Parms, NULL );

	return F1764_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1763
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1763 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1763 = NULL;

	if ( ! pFnF1763 )
		pFnF1763 = (UFunction*) UObject::GObjObjects()->Data[ 82394 ];

	UBioAutoConditionals_execF1763_Parms F1763_Parms;
	F1763_Parms.bioWorld = bioWorld;
	F1763_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1763, &F1763_Parms, NULL );

	return F1763_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1762
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1762 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1762 = NULL;

	if ( ! pFnF1762 )
		pFnF1762 = (UFunction*) UObject::GObjObjects()->Data[ 82389 ];

	UBioAutoConditionals_execF1762_Parms F1762_Parms;
	F1762_Parms.bioWorld = bioWorld;
	F1762_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1762, &F1762_Parms, NULL );

	return F1762_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1761
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1761 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1761 = NULL;

	if ( ! pFnF1761 )
		pFnF1761 = (UFunction*) UObject::GObjObjects()->Data[ 82384 ];

	UBioAutoConditionals_execF1761_Parms F1761_Parms;
	F1761_Parms.bioWorld = bioWorld;
	F1761_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1761, &F1761_Parms, NULL );

	return F1761_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1758
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1758 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1758 = NULL;

	if ( ! pFnF1758 )
		pFnF1758 = (UFunction*) UObject::GObjObjects()->Data[ 82379 ];

	UBioAutoConditionals_execF1758_Parms F1758_Parms;
	F1758_Parms.bioWorld = bioWorld;
	F1758_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1758, &F1758_Parms, NULL );

	return F1758_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1755
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1755 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1755 = NULL;

	if ( ! pFnF1755 )
		pFnF1755 = (UFunction*) UObject::GObjObjects()->Data[ 82374 ];

	UBioAutoConditionals_execF1755_Parms F1755_Parms;
	F1755_Parms.bioWorld = bioWorld;
	F1755_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1755, &F1755_Parms, NULL );

	return F1755_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC.BioAutoConditionals.F1754
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1754 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1754 = NULL;

	if ( ! pFnF1754 )
		pFnF1754 = (UFunction*) UObject::GObjObjects()->Data[ 82369 ];

	UBioAutoConditionals_execF1754_Parms F1754_Parms;
	F1754_Parms.bioWorld = bioWorld;
	F1754_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1754, &F1754_Parms, NULL );

	return F1754_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif