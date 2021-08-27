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

// Function FastTravelWidget.FastTravelWidget_C.SetImageHeight
struct UFastTravelWidget_C_SetImageHeight_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelWidget.FastTravelWidget_C.SetExpanded
struct UFastTravelWidget_C_SetExpanded_Params
{
	bool                                               Expanded;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelWidget.FastTravelWidget_C.Construct
struct UFastTravelWidget_C_Construct_Params
{
};

// Function FastTravelWidget.FastTravelWidget_C.Tick
struct UFastTravelWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelWidget.FastTravelWidget_C.OnLocationSelectActive
struct UFastTravelWidget_C_OnLocationSelectActive_Params
{
	bool*                                              bInActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FastTravelWidget.FastTravelWidget_C.UpdateMapName
struct UFastTravelWidget_C_UpdateMapName_Params
{
	struct FText*                                      InMapName;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FastTravelWidget.FastTravelWidget_C.ExecuteUbergraph_FastTravelWidget
struct UFastTravelWidget_C_ExecuteUbergraph_FastTravelWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
