
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

// Function SleepingBed_Base.SleepingBed_Base_C.OnCanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInteractionResult> ASleepingBed_Base_C::OnCanInteract(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBed_Base.SleepingBed_Base_C.OnCanInteract");

	ASleepingBed_Base_C_OnCanInteract_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SleepingBed_Base.SleepingBed_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASleepingBed_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SleepingBed_Base.SleepingBed_Base_C.UserConstructionScript");

	ASleepingBed_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
