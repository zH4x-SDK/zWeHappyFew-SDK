
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

// Function ExplicitConditionComponent.ExplicitConditionComponent_C.GetCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExplicitConditionComponent_C::GetCondition(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplicitConditionComponent.ExplicitConditionComponent_C.GetCondition");

	UExplicitConditionComponent_C_GetCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function ExplicitConditionComponent.ExplicitConditionComponent_C.EnableCondition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UExplicitConditionComponent_C::EnableCondition(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplicitConditionComponent.ExplicitConditionComponent_C.EnableCondition");

	UExplicitConditionComponent_C_EnableCondition_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplicitConditionComponent.ExplicitConditionComponent_C.IsConditionMet
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGlimpsePlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UExplicitConditionComponent_C::IsConditionMet(class AGlimpsePlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplicitConditionComponent.ExplicitConditionComponent_C.IsConditionMet");

	UExplicitConditionComponent_C_IsConditionMet_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
