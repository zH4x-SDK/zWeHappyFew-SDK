
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

// Function SleepTiteEffect.SleepTiteEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void USleepTiteEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepTiteEffect.SleepTiteEffect_C.OnApply");

	USleepTiteEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
