
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

// Function TieredHealthBoost.TieredHealthBoost_C.OnApply
// (Event, Protected, BlueprintEvent)

void UTieredHealthBoost_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function TieredHealthBoost.TieredHealthBoost_C.OnApply");

	UTieredHealthBoost_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TieredHealthBoost.TieredHealthBoost_C.OnTierChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           LastTier                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewTier                        (Parm, ZeroConstructor, IsPlainOldData)

void UTieredHealthBoost_C::OnTierChanged(int* LastTier, int* NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TieredHealthBoost.TieredHealthBoost_C.OnTierChanged");

	UTieredHealthBoost_C_OnTierChanged_Params params;
	params.LastTier = LastTier;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
