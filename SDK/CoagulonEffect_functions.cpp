
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

// Function CoagulonEffect.CoagulonEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UCoagulonEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function CoagulonEffect.CoagulonEffect_C.OnApply");

	UCoagulonEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
