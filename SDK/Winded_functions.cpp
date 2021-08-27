
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

// Function Winded.Winded_C.ShouldAutoRemove_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent*  Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWinded_C::ShouldAutoRemove_1(class UStatusEffectComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Winded.Winded_C.ShouldAutoRemove_1");

	UWinded_C_ShouldAutoRemove_1_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Winded.Winded_C.ShouldAutoApply_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent*  Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWinded_C::ShouldAutoApply_1(class UStatusEffectComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Winded.Winded_C.ShouldAutoApply_1");

	UWinded_C_ShouldAutoApply_1_Params params;
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
