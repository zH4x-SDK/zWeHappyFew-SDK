
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

// Function NoSuspicion.NoSuspicion_C.OnApply
// (Event, Protected, BlueprintEvent)

void UNoSuspicion_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoSuspicion.NoSuspicion_C.OnApply");

	UNoSuspicion_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NoSuspicion.NoSuspicion_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UNoSuspicion_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function NoSuspicion.NoSuspicion_C.OnRemove");

	UNoSuspicion_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
