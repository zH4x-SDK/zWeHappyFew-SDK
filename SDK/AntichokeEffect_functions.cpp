
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

// Function AntichokeEffect.AntichokeEffect_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UAntichokeEffect_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AntichokeEffect.AntichokeEffect_C.OnTick");

	UAntichokeEffect_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AntichokeEffect.AntichokeEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UAntichokeEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function AntichokeEffect.AntichokeEffect_C.OnApply");

	UAntichokeEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AntichokeEffect.AntichokeEffect_C.ExecuteUbergraph_AntichokeEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAntichokeEffect_C::ExecuteUbergraph_AntichokeEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AntichokeEffect.AntichokeEffect_C.ExecuteUbergraph_AntichokeEffect");

	UAntichokeEffect_C_ExecuteUbergraph_AntichokeEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
