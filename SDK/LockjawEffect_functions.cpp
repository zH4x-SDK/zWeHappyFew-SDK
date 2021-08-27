
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

// Function LockjawEffect.LockjawEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void ULockjawEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockjawEffect.LockjawEffect_C.OnApply");

	ULockjawEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LockjawEffect.LockjawEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void ULockjawEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function LockjawEffect.LockjawEffect_C.OnRemove");

	ULockjawEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
