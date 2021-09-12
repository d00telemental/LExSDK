/*
#############################################################################################
# Mass Effect 2 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentDLC_UPD_Patch03_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContentDLC_UPD_Patch03.SFXSeqAct_LegacyDataCallbackPatch03
// 0x0008 (0x0118 - 0x0110)
class USFXSeqAct_LegacyDataCallbackPatch03 : public UBioSequenceLatentAction
{
public:
	class ABioWorldInfo*                               BWI;                                              		// 0x0110 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void ApplyCanonPlotStates ( );
	void ME2ImportPlotState ( );
	bool eventUpdateOp ( float DeltaTime );
	void eventActivated ( );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif