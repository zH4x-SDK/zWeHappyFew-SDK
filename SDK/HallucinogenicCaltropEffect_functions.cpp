
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

// Function HallucinogenicCaltropEffect.HallucinogenicCaltropEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UHallucinogenicCaltropEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicCaltropEffect.HallucinogenicCaltropEffect_C.OnRemove");

	UHallucinogenicCaltropEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
