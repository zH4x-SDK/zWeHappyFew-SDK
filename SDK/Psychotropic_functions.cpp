
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

// Function Psychotropic.Psychotropic_C.ShouldAutoRemove
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent** Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPsychotropic_C::ShouldAutoRemove(class UStatusEffectComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Psychotropic.Psychotropic_C.ShouldAutoRemove");

	UPsychotropic_C_ShouldAutoRemove_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Psychotropic.Psychotropic_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UPsychotropic_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Psychotropic.Psychotropic_C.OnTick");

	UPsychotropic_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Psychotropic.Psychotropic_C.OnApply
// (Event, Protected, BlueprintEvent)

void UPsychotropic_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Psychotropic.Psychotropic_C.OnApply");

	UPsychotropic_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Psychotropic.Psychotropic_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UPsychotropic_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Psychotropic.Psychotropic_C.OnRemove");

	UPsychotropic_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
