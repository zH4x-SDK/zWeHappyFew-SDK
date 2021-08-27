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

// Function CustomWaypointWidget.CustomWaypointWidget_C.SetAngleVisibility
struct UCustomWaypointWidget_C_SetAngleVisibility_Params
{
	bool*                                              showAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomWaypointWidget.CustomWaypointWidget_C.ExecuteUbergraph_CustomWaypointWidget
struct UCustomWaypointWidget_C_ExecuteUbergraph_CustomWaypointWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
