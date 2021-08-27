
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

// Function Drunk.Drunk_C.ShouldAutoRemove
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStatusEffectComponent** Component                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDrunk_C::ShouldAutoRemove(class UStatusEffectComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drunk.Drunk_C.ShouldAutoRemove");

	UDrunk_C_ShouldAutoRemove_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Drunk.Drunk_C.OnApply
// (Event, Protected, BlueprintEvent)

void UDrunk_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drunk.Drunk_C.OnApply");

	UDrunk_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drunk.Drunk_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UDrunk_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drunk.Drunk_C.OnRemove");

	UDrunk_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
