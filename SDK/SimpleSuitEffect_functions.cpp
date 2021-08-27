
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

// Function SimpleSuitEffect.SimpleSuitEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void USimpleSuitEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSuitEffect.SimpleSuitEffect_C.OnApply");

	USimpleSuitEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSuitEffect.SimpleSuitEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void USimpleSuitEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSuitEffect.SimpleSuitEffect_C.OnRemove");

	USimpleSuitEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
