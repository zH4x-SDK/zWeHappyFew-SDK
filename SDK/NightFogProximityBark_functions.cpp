
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

// Function NightFogProximityBark.NightFogProximityBark_C.OnApply
// (Event, Protected, BlueprintEvent)

void UNightFogProximityBark_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightFogProximityBark.NightFogProximityBark_C.OnApply");

	UNightFogProximityBark_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightFogProximityBark.NightFogProximityBark_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNightFogProximityBark_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightFogProximityBark.NightFogProximityBark_C.OnTick");

	UNightFogProximityBark_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
