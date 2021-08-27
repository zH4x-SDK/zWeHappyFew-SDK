
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

// Function ToxicWasteEffect.ToxicWasteEffect_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UToxicWasteEffect_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToxicWasteEffect.ToxicWasteEffect_C.OnTick");

	UToxicWasteEffect_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToxicWasteEffect.ToxicWasteEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UToxicWasteEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToxicWasteEffect.ToxicWasteEffect_C.OnApply");

	UToxicWasteEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToxicWasteEffect.ToxicWasteEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UToxicWasteEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToxicWasteEffect.ToxicWasteEffect_C.OnRemove");

	UToxicWasteEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToxicWasteEffect.ToxicWasteEffect_C.OwnerPlayerStartFastTravel
// (BlueprintCallable, BlueprintEvent)

void UToxicWasteEffect_C::OwnerPlayerStartFastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToxicWasteEffect.ToxicWasteEffect_C.OwnerPlayerStartFastTravel");

	UToxicWasteEffect_C_OwnerPlayerStartFastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToxicWasteEffect.ToxicWasteEffect_C.ExecuteUbergraph_ToxicWasteEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UToxicWasteEffect_C::ExecuteUbergraph_ToxicWasteEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToxicWasteEffect.ToxicWasteEffect_C.ExecuteUbergraph_ToxicWasteEffect");

	UToxicWasteEffect_C_ExecuteUbergraph_ToxicWasteEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
