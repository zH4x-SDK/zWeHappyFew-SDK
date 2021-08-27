
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

// Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UHallucinogenicMushroomEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnApply");

	UHallucinogenicMushroomEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UHallucinogenicMushroomEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnRemove");

	UHallucinogenicMushroomEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHallucinogenicMushroomEffect_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnTick");

	UHallucinogenicMushroomEffect_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnSuspend
// (Event, Protected, BlueprintEvent)

void UHallucinogenicMushroomEffect_C::OnSuspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnSuspend");

	UHallucinogenicMushroomEffect_C_OnSuspend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnResume
// (Event, Protected, BlueprintEvent)

void UHallucinogenicMushroomEffect_C::OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.OnResume");

	UHallucinogenicMushroomEffect_C_OnResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.ExecuteUbergraph_HallucinogenicMushroomEffect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHallucinogenicMushroomEffect_C::ExecuteUbergraph_HallucinogenicMushroomEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C.ExecuteUbergraph_HallucinogenicMushroomEffect");

	UHallucinogenicMushroomEffect_C_ExecuteUbergraph_HallucinogenicMushroomEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
