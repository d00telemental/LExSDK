/*
#############################################################################################
# Mass Effect 1 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXStrategicAI_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct SFXStrategicAI.BioBaseSquadDesign.WaypointRoute
// 0x001D
struct FWaypointRoute
{
	class ABioWaypointSet*                             Route;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       AssignedSquadMember;                              		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       oCurrentlyAssignedMember;                         		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      LowAgitation : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      HighAgitation : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      SpeedRun : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      RouteType;                                        		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXStrategicAI.BioBaseSquadDesign.LockedPoint
// 0x0010
struct FLockedPoint
{
	class ANavigationPoint*                            oPoint;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    oLockedBy;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif