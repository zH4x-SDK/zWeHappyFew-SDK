
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

// Function FrenzyEffect.FrenzyEffect_C.ShouldAutoRemove
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent** Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrenzyEffect_C::ShouldAutoRemove(class UStatusEffectComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrenzyEffect.FrenzyEffect_C.ShouldAutoRemove");

	UFrenzyEffect_C_ShouldAutoRemove_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FrenzyEffect.FrenzyEffect_C.ShouldAutoApply
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent** Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrenzyEffect_C::ShouldAutoApply(class UStatusEffectComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrenzyEffect.FrenzyEffect_C.ShouldAutoApply");

	UFrenzyEffect_C_ShouldAutoApply_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
