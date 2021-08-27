
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

// Function LightningSpeedEffect.LightningSpeedEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void ULightningSpeedEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningSpeedEffect.LightningSpeedEffect_C.OnApply");

	ULightningSpeedEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningSpeedEffect.LightningSpeedEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void ULightningSpeedEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningSpeedEffect.LightningSpeedEffect_C.OnRemove");

	ULightningSpeedEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningSpeedEffect.LightningSpeedEffect_C.ExecuteUbergraph_LightningSpeedEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULightningSpeedEffect_C::ExecuteUbergraph_LightningSpeedEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningSpeedEffect.LightningSpeedEffect_C.ExecuteUbergraph_LightningSpeedEffect");

	ULightningSpeedEffect_C_ExecuteUbergraph_LightningSpeedEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
