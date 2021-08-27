
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

// Function SunshineEffect.SunshineEffect_C.OnGetCustomPercent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USunshineEffect_C::OnGetCustomPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SunshineEffect.SunshineEffect_C.OnGetCustomPercent");

	USunshineEffect_C_OnGetCustomPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SunshineEffect.SunshineEffect_C.ShouldAutoRemove
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent** Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USunshineEffect_C::ShouldAutoRemove(class UStatusEffectComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function SunshineEffect.SunshineEffect_C.ShouldAutoRemove");

	USunshineEffect_C_ShouldAutoRemove_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SunshineEffect.SunshineEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void USunshineEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function SunshineEffect.SunshineEffect_C.OnApply");

	USunshineEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SunshineEffect.SunshineEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void USunshineEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function SunshineEffect.SunshineEffect_C.OnRemove");

	USunshineEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SunshineEffect.SunshineEffect_C.ExecuteUbergraph_SunshineEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USunshineEffect_C::ExecuteUbergraph_SunshineEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SunshineEffect.SunshineEffect_C.ExecuteUbergraph_SunshineEffect");

	USunshineEffect_C_ExecuteUbergraph_SunshineEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
