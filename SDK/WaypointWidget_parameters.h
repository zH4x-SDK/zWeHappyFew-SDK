#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WaypointWidget.WaypointWidget_C.Construct
struct UWaypointWidget_C_Construct_Params
{
};

// Function WaypointWidget.WaypointWidget_C.SetAngleVisibility
struct UWaypointWidget_C_SetAngleVisibility_Params
{
	bool*                                              showAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaypointWidget.WaypointWidget_C.SetIsAreaWaypoint
struct UWaypointWidget_C_SetIsAreaWaypoint_Params
{
	bool*                                              areaWaypoint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaypointWidget.WaypointWidget_C.ExecuteUbergraph_WaypointWidget
struct UWaypointWidget_C_ExecuteUbergraph_WaypointWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
