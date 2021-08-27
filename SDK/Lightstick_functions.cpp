
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

// Function Lightstick.Lightstick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALightstick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightstick.Lightstick_C.UserConstructionScript");

	ALightstick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightstick.Lightstick_C.OnTrailActivated
// (Event, Public, BlueprintEvent)

void ALightstick_C::OnTrailActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightstick.Lightstick_C.OnTrailActivated");

	ALightstick_C_OnTrailActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightstick.Lightstick_C.OnTrailDeactivated
// (Event, Public, BlueprintEvent)

void ALightstick_C::OnTrailDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightstick.Lightstick_C.OnTrailDeactivated");

	ALightstick_C_OnTrailDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightstick.Lightstick_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ALightstick_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightstick.Lightstick_C.ReceiveBeginPlay");

	ALightstick_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
