
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

// Function BlendSuitEffect.BlendSuitEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UBlendSuitEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlendSuitEffect.BlendSuitEffect_C.OnApply");

	UBlendSuitEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlendSuitEffect.BlendSuitEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UBlendSuitEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlendSuitEffect.BlendSuitEffect_C.OnRemove");

	UBlendSuitEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlendSuitEffect.BlendSuitEffect_C.ExecuteUbergraph_BlendSuitEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBlendSuitEffect_C::ExecuteUbergraph_BlendSuitEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlendSuitEffect.BlendSuitEffect_C.ExecuteUbergraph_BlendSuitEffect");

	UBlendSuitEffect_C_ExecuteUbergraph_BlendSuitEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
