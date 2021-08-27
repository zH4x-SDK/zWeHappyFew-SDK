
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WaypointWidget.WaypointWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWaypointWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointWidget.WaypointWidget_C.Construct");

	UWaypointWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointWidget.WaypointWidget_C.SetAngleVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          showAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UWaypointWidget_C::SetAngleVisibility(bool* showAngle, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointWidget.WaypointWidget_C.SetAngleVisibility");

	UWaypointWidget_C_SetAngleVisibility_Params params;
	params.showAngle = showAngle;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointWidget.WaypointWidget_C.SetIsAreaWaypoint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          areaWaypoint                   (Parm, ZeroConstructor, IsPlainOldData)

void UWaypointWidget_C::SetIsAreaWaypoint(bool* areaWaypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointWidget.WaypointWidget_C.SetIsAreaWaypoint");

	UWaypointWidget_C_SetIsAreaWaypoint_Params params;
	params.areaWaypoint = areaWaypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointWidget.WaypointWidget_C.ExecuteUbergraph_WaypointWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWaypointWidget_C::ExecuteUbergraph_WaypointWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointWidget.WaypointWidget_C.ExecuteUbergraph_WaypointWidget");

	UWaypointWidget_C_ExecuteUbergraph_WaypointWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
