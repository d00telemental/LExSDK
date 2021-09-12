/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_UNC_Hammer01_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_UNC_Hammer01.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1677
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1677 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1677 = NULL;

	if ( ! pFnF1677 )
		pFnF1677 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1677" );

	UBioAutoConditionals_execF1677_Parms F1677_Parms;
	F1677_Parms.bioWorld = bioWorld;
	F1677_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1677, &F1677_Parms, NULL );

	return F1677_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1675
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1675 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1675 = NULL;

	if ( ! pFnF1675 )
		pFnF1675 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1675" );

	UBioAutoConditionals_execF1675_Parms F1675_Parms;
	F1675_Parms.bioWorld = bioWorld;
	F1675_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1675, &F1675_Parms, NULL );

	return F1675_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1674
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1674 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1674 = NULL;

	if ( ! pFnF1674 )
		pFnF1674 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1674" );

	UBioAutoConditionals_execF1674_Parms F1674_Parms;
	F1674_Parms.bioWorld = bioWorld;
	F1674_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1674, &F1674_Parms, NULL );

	return F1674_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1673
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1673 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1673 = NULL;

	if ( ! pFnF1673 )
		pFnF1673 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1673" );

	UBioAutoConditionals_execF1673_Parms F1673_Parms;
	F1673_Parms.bioWorld = bioWorld;
	F1673_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1673, &F1673_Parms, NULL );

	return F1673_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1672
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1672 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1672 = NULL;

	if ( ! pFnF1672 )
		pFnF1672 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1672" );

	UBioAutoConditionals_execF1672_Parms F1672_Parms;
	F1672_Parms.bioWorld = bioWorld;
	F1672_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1672, &F1672_Parms, NULL );

	return F1672_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1671
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1671 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1671 = NULL;

	if ( ! pFnF1671 )
		pFnF1671 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1671" );

	UBioAutoConditionals_execF1671_Parms F1671_Parms;
	F1671_Parms.bioWorld = bioWorld;
	F1671_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1671, &F1671_Parms, NULL );

	return F1671_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1670
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1670 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1670 = NULL;

	if ( ! pFnF1670 )
		pFnF1670 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1670" );

	UBioAutoConditionals_execF1670_Parms F1670_Parms;
	F1670_Parms.bioWorld = bioWorld;
	F1670_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1670, &F1670_Parms, NULL );

	return F1670_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1636
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1636 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1636 = NULL;

	if ( ! pFnF1636 )
		pFnF1636 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1636" );

	UBioAutoConditionals_execF1636_Parms F1636_Parms;
	F1636_Parms.bioWorld = bioWorld;
	F1636_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1636, &F1636_Parms, NULL );

	return F1636_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1700
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1700 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1700 = NULL;

	if ( ! pFnF1700 )
		pFnF1700 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1700" );

	UBioAutoConditionals_execF1700_Parms F1700_Parms;
	F1700_Parms.bioWorld = bioWorld;
	F1700_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1700, &F1700_Parms, NULL );

	return F1700_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1699
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1699 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1699 = NULL;

	if ( ! pFnF1699 )
		pFnF1699 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1699" );

	UBioAutoConditionals_execF1699_Parms F1699_Parms;
	F1699_Parms.bioWorld = bioWorld;
	F1699_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1699, &F1699_Parms, NULL );

	return F1699_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1698
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1698 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1698 = NULL;

	if ( ! pFnF1698 )
		pFnF1698 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1698" );

	UBioAutoConditionals_execF1698_Parms F1698_Parms;
	F1698_Parms.bioWorld = bioWorld;
	F1698_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1698, &F1698_Parms, NULL );

	return F1698_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1697
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1697 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1697 = NULL;

	if ( ! pFnF1697 )
		pFnF1697 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1697" );

	UBioAutoConditionals_execF1697_Parms F1697_Parms;
	F1697_Parms.bioWorld = bioWorld;
	F1697_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1697, &F1697_Parms, NULL );

	return F1697_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1696
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1696 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1696 = NULL;

	if ( ! pFnF1696 )
		pFnF1696 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1696" );

	UBioAutoConditionals_execF1696_Parms F1696_Parms;
	F1696_Parms.bioWorld = bioWorld;
	F1696_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1696, &F1696_Parms, NULL );

	return F1696_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1695
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1695 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1695 = NULL;

	if ( ! pFnF1695 )
		pFnF1695 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1695" );

	UBioAutoConditionals_execF1695_Parms F1695_Parms;
	F1695_Parms.bioWorld = bioWorld;
	F1695_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1695, &F1695_Parms, NULL );

	return F1695_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1694
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1694 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1694 = NULL;

	if ( ! pFnF1694 )
		pFnF1694 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1694" );

	UBioAutoConditionals_execF1694_Parms F1694_Parms;
	F1694_Parms.bioWorld = bioWorld;
	F1694_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1694, &F1694_Parms, NULL );

	return F1694_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1693
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1693 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1693 = NULL;

	if ( ! pFnF1693 )
		pFnF1693 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1693" );

	UBioAutoConditionals_execF1693_Parms F1693_Parms;
	F1693_Parms.bioWorld = bioWorld;
	F1693_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1693, &F1693_Parms, NULL );

	return F1693_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1692
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1692 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1692 = NULL;

	if ( ! pFnF1692 )
		pFnF1692 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1692" );

	UBioAutoConditionals_execF1692_Parms F1692_Parms;
	F1692_Parms.bioWorld = bioWorld;
	F1692_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1692, &F1692_Parms, NULL );

	return F1692_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1691
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1691 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1691 = NULL;

	if ( ! pFnF1691 )
		pFnF1691 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1691" );

	UBioAutoConditionals_execF1691_Parms F1691_Parms;
	F1691_Parms.bioWorld = bioWorld;
	F1691_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1691, &F1691_Parms, NULL );

	return F1691_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1568
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1568 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1568 = NULL;

	if ( ! pFnF1568 )
		pFnF1568 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1568" );

	UBioAutoConditionals_execF1568_Parms F1568_Parms;
	F1568_Parms.bioWorld = bioWorld;
	F1568_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1568, &F1568_Parms, NULL );

	return F1568_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1567
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1567 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1567 = NULL;

	if ( ! pFnF1567 )
		pFnF1567 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1567" );

	UBioAutoConditionals_execF1567_Parms F1567_Parms;
	F1567_Parms.bioWorld = bioWorld;
	F1567_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1567, &F1567_Parms, NULL );

	return F1567_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1566
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1566 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1566 = NULL;

	if ( ! pFnF1566 )
		pFnF1566 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1566" );

	UBioAutoConditionals_execF1566_Parms F1566_Parms;
	F1566_Parms.bioWorld = bioWorld;
	F1566_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1566, &F1566_Parms, NULL );

	return F1566_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1565
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1565 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1565 = NULL;

	if ( ! pFnF1565 )
		pFnF1565 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1565" );

	UBioAutoConditionals_execF1565_Parms F1565_Parms;
	F1565_Parms.bioWorld = bioWorld;
	F1565_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1565, &F1565_Parms, NULL );

	return F1565_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1564
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1564 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1564 = NULL;

	if ( ! pFnF1564 )
		pFnF1564 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1564" );

	UBioAutoConditionals_execF1564_Parms F1564_Parms;
	F1564_Parms.bioWorld = bioWorld;
	F1564_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1564, &F1564_Parms, NULL );

	return F1564_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1563
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1563 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1563 = NULL;

	if ( ! pFnF1563 )
		pFnF1563 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1563" );

	UBioAutoConditionals_execF1563_Parms F1563_Parms;
	F1563_Parms.bioWorld = bioWorld;
	F1563_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1563, &F1563_Parms, NULL );

	return F1563_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1562
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1562 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1562 = NULL;

	if ( ! pFnF1562 )
		pFnF1562 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1562" );

	UBioAutoConditionals_execF1562_Parms F1562_Parms;
	F1562_Parms.bioWorld = bioWorld;
	F1562_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1562, &F1562_Parms, NULL );

	return F1562_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1561
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1561 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1561 = NULL;

	if ( ! pFnF1561 )
		pFnF1561 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1561" );

	UBioAutoConditionals_execF1561_Parms F1561_Parms;
	F1561_Parms.bioWorld = bioWorld;
	F1561_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1561, &F1561_Parms, NULL );

	return F1561_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1560
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1560 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1560 = NULL;

	if ( ! pFnF1560 )
		pFnF1560 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1560" );

	UBioAutoConditionals_execF1560_Parms F1560_Parms;
	F1560_Parms.bioWorld = bioWorld;
	F1560_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1560, &F1560_Parms, NULL );

	return F1560_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1559
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1559 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1559 = NULL;

	if ( ! pFnF1559 )
		pFnF1559 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1559" );

	UBioAutoConditionals_execF1559_Parms F1559_Parms;
	F1559_Parms.bioWorld = bioWorld;
	F1559_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1559, &F1559_Parms, NULL );

	return F1559_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1391
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1391 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1391 = NULL;

	if ( ! pFnF1391 )
		pFnF1391 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1391" );

	UBioAutoConditionals_execF1391_Parms F1391_Parms;
	F1391_Parms.bioWorld = bioWorld;
	F1391_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1391, &F1391_Parms, NULL );

	return F1391_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1382
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1382 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1382 = NULL;

	if ( ! pFnF1382 )
		pFnF1382 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1382" );

	UBioAutoConditionals_execF1382_Parms F1382_Parms;
	F1382_Parms.bioWorld = bioWorld;
	F1382_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1382, &F1382_Parms, NULL );

	return F1382_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1198
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1198 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1198 = NULL;

	if ( ! pFnF1198 )
		pFnF1198 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1198" );

	UBioAutoConditionals_execF1198_Parms F1198_Parms;
	F1198_Parms.bioWorld = bioWorld;
	F1198_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1198, &F1198_Parms, NULL );

	return F1198_Parms.ReturnValue;
};

// Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1233
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1233 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1233 = NULL;

	if ( ! pFnF1233 )
		pFnF1233 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_UNC_Hammer01.BioAutoConditionals.F1233" );

	UBioAutoConditionals_execF1233_Parms F1233_Parms;
	F1233_Parms.bioWorld = bioWorld;
	F1233_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1233, &F1233_Parms, NULL );

	return F1233_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif