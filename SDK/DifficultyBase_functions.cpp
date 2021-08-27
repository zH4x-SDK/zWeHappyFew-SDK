
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

// Function DifficultyBase.DifficultyBase_C.ShouldAutoRemove_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent*  Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDifficultyBase_C::ShouldAutoRemove_1(class UStatusEffectComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyBase.DifficultyBase_C.ShouldAutoRemove_1");

	UDifficultyBase_C_ShouldAutoRemove_1_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DifficultyBase.DifficultyBase_C.ShouldAutoApply_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent*  Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDifficultyBase_C::ShouldAutoApply_1(class UStatusEffectComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyBase.DifficultyBase_C.ShouldAutoApply_1");

	UDifficultyBase_C_ShouldAutoApply_1_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DifficultyBase.DifficultyBase_C.SetAutoNatives
// (Event, Protected, BlueprintEvent)

void UDifficultyBase_C::SetAutoNatives()
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyBase.DifficultyBase_C.SetAutoNatives");

	UDifficultyBase_C_SetAutoNatives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DifficultyBase.DifficultyBase_C.ExecuteUbergraph_DifficultyBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDifficultyBase_C::ExecuteUbergraph_DifficultyBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DifficultyBase.DifficultyBase_C.ExecuteUbergraph_DifficultyBase");

	UDifficultyBase_C_ExecuteUbergraph_DifficultyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
