
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

// Function CustomWaypointWidget.CustomWaypointWidget_C.SetAngleVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          showAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UCustomWaypointWidget_C::SetAngleVisibility(bool* showAngle, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomWaypointWidget.CustomWaypointWidget_C.SetAngleVisibility");

	UCustomWaypointWidget_C_SetAngleVisibility_Params params;
	params.showAngle = showAngle;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomWaypointWidget.CustomWaypointWidget_C.ExecuteUbergraph_CustomWaypointWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCustomWaypointWidget_C::ExecuteUbergraph_CustomWaypointWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomWaypointWidget.CustomWaypointWidget_C.ExecuteUbergraph_CustomWaypointWidget");

	UCustomWaypointWidget_C_ExecuteUbergraph_CustomWaypointWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
