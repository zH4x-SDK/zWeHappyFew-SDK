
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

// Function StaminaBar.StaminaBar_C.Get_PenaltyBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStaminaBar_C::Get_PenaltyBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaminaBar.StaminaBar_C.Get_PenaltyBar_Percent_1");

	UStaminaBar_C_Get_PenaltyBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StaminaBar.StaminaBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStaminaBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaminaBar.StaminaBar_C.Construct");

	UStaminaBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaminaBar.StaminaBar_C.OnBuffChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInBuffed                      (Parm, ZeroConstructor, IsPlainOldData)

void UStaminaBar_C::OnBuffChanged(bool* bInBuffed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaminaBar.StaminaBar_C.OnBuffChanged");

	UStaminaBar_C_OnBuffChanged_Params params;
	params.bInBuffed = bInBuffed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaminaBar.StaminaBar_C.OnDebuffChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInDebuffed                    (Parm, ZeroConstructor, IsPlainOldData)

void UStaminaBar_C::OnDebuffChanged(bool* bInDebuffed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaminaBar.StaminaBar_C.OnDebuffChanged");

	UStaminaBar_C_OnDebuffChanged_Params params;
	params.bInDebuffed = bInDebuffed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaminaBar.StaminaBar_C.ExecuteUbergraph_StaminaBar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStaminaBar_C::ExecuteUbergraph_StaminaBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaminaBar.StaminaBar_C.ExecuteUbergraph_StaminaBar");

	UStaminaBar_C_ExecuteUbergraph_StaminaBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
