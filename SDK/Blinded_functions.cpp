
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

// Function Blinded.Blinded_C.OnApply
// (Event, Protected, BlueprintEvent)

void UBlinded_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Blinded.Blinded_C.OnApply");

	UBlinded_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blinded.Blinded_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UBlinded_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Blinded.Blinded_C.OnRemove");

	UBlinded_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
