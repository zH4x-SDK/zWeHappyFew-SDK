
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

// Function JoyOverdose.JoyOverdose_C.OnApply
// (Event, Protected, BlueprintEvent)

void UJoyOverdose_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyOverdose.JoyOverdose_C.OnApply");

	UJoyOverdose_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyOverdose.JoyOverdose_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UJoyOverdose_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyOverdose.JoyOverdose_C.OnRemove");

	UJoyOverdose_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
