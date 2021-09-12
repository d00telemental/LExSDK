/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: PlotManagerDLC_HEN_VT_functions.cpp
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
			pClassPointer = UObject::FindClass ( "Class PlotManagerDLC_HEN_VT.BioAutoConditionals" );

		return pClassPointer;
	};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1666
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1666 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1666 = NULL;

	if ( ! pFnF1666 )
		pFnF1666 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1666" );

	UBioAutoConditionals_execF1666_Parms F1666_Parms;
	F1666_Parms.bioWorld = bioWorld;
	F1666_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1666, &F1666_Parms, NULL );

	return F1666_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1665
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1665 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1665 = NULL;

	if ( ! pFnF1665 )
		pFnF1665 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1665" );

	UBioAutoConditionals_execF1665_Parms F1665_Parms;
	F1665_Parms.bioWorld = bioWorld;
	F1665_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1665, &F1665_Parms, NULL );

	return F1665_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1656
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1656 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1656 = NULL;

	if ( ! pFnF1656 )
		pFnF1656 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1656" );

	UBioAutoConditionals_execF1656_Parms F1656_Parms;
	F1656_Parms.bioWorld = bioWorld;
	F1656_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1656, &F1656_Parms, NULL );

	return F1656_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1655
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1655 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1655 = NULL;

	if ( ! pFnF1655 )
		pFnF1655 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1655" );

	UBioAutoConditionals_execF1655_Parms F1655_Parms;
	F1655_Parms.bioWorld = bioWorld;
	F1655_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1655, &F1655_Parms, NULL );

	return F1655_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1650
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1650 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1650 = NULL;

	if ( ! pFnF1650 )
		pFnF1650 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1650" );

	UBioAutoConditionals_execF1650_Parms F1650_Parms;
	F1650_Parms.bioWorld = bioWorld;
	F1650_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1650, &F1650_Parms, NULL );

	return F1650_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1649
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1649 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1649 = NULL;

	if ( ! pFnF1649 )
		pFnF1649 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1649" );

	UBioAutoConditionals_execF1649_Parms F1649_Parms;
	F1649_Parms.bioWorld = bioWorld;
	F1649_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1649, &F1649_Parms, NULL );

	return F1649_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1648
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1648 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1648 = NULL;

	if ( ! pFnF1648 )
		pFnF1648 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1648" );

	UBioAutoConditionals_execF1648_Parms F1648_Parms;
	F1648_Parms.bioWorld = bioWorld;
	F1648_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1648, &F1648_Parms, NULL );

	return F1648_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1647
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1647 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1647 = NULL;

	if ( ! pFnF1647 )
		pFnF1647 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1647" );

	UBioAutoConditionals_execF1647_Parms F1647_Parms;
	F1647_Parms.bioWorld = bioWorld;
	F1647_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1647, &F1647_Parms, NULL );

	return F1647_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1646
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1646 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1646 = NULL;

	if ( ! pFnF1646 )
		pFnF1646 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1646" );

	UBioAutoConditionals_execF1646_Parms F1646_Parms;
	F1646_Parms.bioWorld = bioWorld;
	F1646_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1646, &F1646_Parms, NULL );

	return F1646_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1645
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1645 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1645 = NULL;

	if ( ! pFnF1645 )
		pFnF1645 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1645" );

	UBioAutoConditionals_execF1645_Parms F1645_Parms;
	F1645_Parms.bioWorld = bioWorld;
	F1645_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1645, &F1645_Parms, NULL );

	return F1645_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1644
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1644 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1644 = NULL;

	if ( ! pFnF1644 )
		pFnF1644 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1644" );

	UBioAutoConditionals_execF1644_Parms F1644_Parms;
	F1644_Parms.bioWorld = bioWorld;
	F1644_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1644, &F1644_Parms, NULL );

	return F1644_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1643
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1643 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1643 = NULL;

	if ( ! pFnF1643 )
		pFnF1643 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1643" );

	UBioAutoConditionals_execF1643_Parms F1643_Parms;
	F1643_Parms.bioWorld = bioWorld;
	F1643_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1643, &F1643_Parms, NULL );

	return F1643_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1654
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1654 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1654 = NULL;

	if ( ! pFnF1654 )
		pFnF1654 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1654" );

	UBioAutoConditionals_execF1654_Parms F1654_Parms;
	F1654_Parms.bioWorld = bioWorld;
	F1654_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1654, &F1654_Parms, NULL );

	return F1654_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1653
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1653 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1653 = NULL;

	if ( ! pFnF1653 )
		pFnF1653 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1653" );

	UBioAutoConditionals_execF1653_Parms F1653_Parms;
	F1653_Parms.bioWorld = bioWorld;
	F1653_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1653, &F1653_Parms, NULL );

	return F1653_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1652
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1652 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1652 = NULL;

	if ( ! pFnF1652 )
		pFnF1652 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1652" );

	UBioAutoConditionals_execF1652_Parms F1652_Parms;
	F1652_Parms.bioWorld = bioWorld;
	F1652_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1652, &F1652_Parms, NULL );

	return F1652_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1651
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1651 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1651 = NULL;

	if ( ! pFnF1651 )
		pFnF1651 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1651" );

	UBioAutoConditionals_execF1651_Parms F1651_Parms;
	F1651_Parms.bioWorld = bioWorld;
	F1651_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1651, &F1651_Parms, NULL );

	return F1651_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1639
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1639 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1639 = NULL;

	if ( ! pFnF1639 )
		pFnF1639 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1639" );

	UBioAutoConditionals_execF1639_Parms F1639_Parms;
	F1639_Parms.bioWorld = bioWorld;
	F1639_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1639, &F1639_Parms, NULL );

	return F1639_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1492
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1492 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1492 = NULL;

	if ( ! pFnF1492 )
		pFnF1492 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1492" );

	UBioAutoConditionals_execF1492_Parms F1492_Parms;
	F1492_Parms.bioWorld = bioWorld;
	F1492_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1492, &F1492_Parms, NULL );

	return F1492_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1690
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1690 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1690 = NULL;

	if ( ! pFnF1690 )
		pFnF1690 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1690" );

	UBioAutoConditionals_execF1690_Parms F1690_Parms;
	F1690_Parms.bioWorld = bioWorld;
	F1690_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1690, &F1690_Parms, NULL );

	return F1690_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1616
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1616 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1616 = NULL;

	if ( ! pFnF1616 )
		pFnF1616 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1616" );

	UBioAutoConditionals_execF1616_Parms F1616_Parms;
	F1616_Parms.bioWorld = bioWorld;
	F1616_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1616, &F1616_Parms, NULL );

	return F1616_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1578
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1578 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1578 = NULL;

	if ( ! pFnF1578 )
		pFnF1578 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1578" );

	UBioAutoConditionals_execF1578_Parms F1578_Parms;
	F1578_Parms.bioWorld = bioWorld;
	F1578_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1578, &F1578_Parms, NULL );

	return F1578_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1575
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1575 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1575 = NULL;

	if ( ! pFnF1575 )
		pFnF1575 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1575" );

	UBioAutoConditionals_execF1575_Parms F1575_Parms;
	F1575_Parms.bioWorld = bioWorld;
	F1575_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1575, &F1575_Parms, NULL );

	return F1575_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1554
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1554 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1554 = NULL;

	if ( ! pFnF1554 )
		pFnF1554 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1554" );

	UBioAutoConditionals_execF1554_Parms F1554_Parms;
	F1554_Parms.bioWorld = bioWorld;
	F1554_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1554, &F1554_Parms, NULL );

	return F1554_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1676
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1676 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1676 = NULL;

	if ( ! pFnF1676 )
		pFnF1676 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1676" );

	UBioAutoConditionals_execF1676_Parms F1676_Parms;
	F1676_Parms.bioWorld = bioWorld;
	F1676_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1676, &F1676_Parms, NULL );

	return F1676_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1640
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1640 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1640 = NULL;

	if ( ! pFnF1640 )
		pFnF1640 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1640" );

	UBioAutoConditionals_execF1640_Parms F1640_Parms;
	F1640_Parms.bioWorld = bioWorld;
	F1640_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1640, &F1640_Parms, NULL );

	return F1640_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1552
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1552 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1552 = NULL;

	if ( ! pFnF1552 )
		pFnF1552 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1552" );

	UBioAutoConditionals_execF1552_Parms F1552_Parms;
	F1552_Parms.bioWorld = bioWorld;
	F1552_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1552, &F1552_Parms, NULL );

	return F1552_Parms.ReturnValue;
};

// Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1494
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ABioWorldInfo*           bioWorld                       ( CPF_Parm )
// int                            Argument                       ( CPF_Parm )

bool UBioAutoConditionals::F1494 ( class ABioWorldInfo* bioWorld, int Argument )
{
	static UFunction* pFnF1494 = NULL;

	if ( ! pFnF1494 )
		pFnF1494 = UObject::FindObject< UFunction > ( "Function PlotManagerDLC_HEN_VT.BioAutoConditionals.F1494" );

	UBioAutoConditionals_execF1494_Parms F1494_Parms;
	F1494_Parms.bioWorld = bioWorld;
	F1494_Parms.Argument = Argument;

	this->ProcessEvent ( pFnF1494, &F1494_Parms, NULL );

	return F1494_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif