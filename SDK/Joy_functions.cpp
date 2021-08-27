
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

// Function Joy.Joy_C.OnApply
// (Event, Protected, BlueprintEvent)

void UJoy_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Joy.Joy_C.OnApply");

	UJoy_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Joy.Joy_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UJoy_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Joy.Joy_C.OnRemove");

	UJoy_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
