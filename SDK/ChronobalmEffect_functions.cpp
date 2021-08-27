
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

// Function ChronobalmEffect.ChronobalmEffect_C.ResetTimeDilation
// (Public, BlueprintCallable, BlueprintEvent)

void UChronobalmEffect_C::ResetTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.ResetTimeDilation");

	UChronobalmEffect_C_ResetTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.StartTimeDilation
// (Public, BlueprintCallable, BlueprintEvent)

void UChronobalmEffect_C::StartTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.StartTimeDilation");

	UChronobalmEffect_C_StartTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.OnApply");

	UChronobalmEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.OnRemove");

	UChronobalmEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.OnResume
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_C::OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.OnResume");

	UChronobalmEffect_C_OnResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.OnSuspend
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_C::OnSuspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.OnSuspend");

	UChronobalmEffect_C_OnSuspend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.OnCharacterStartCutscene
// (BlueprintCallable, BlueprintEvent)

void UChronobalmEffect_C::OnCharacterStartCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.OnCharacterStartCutscene");

	UChronobalmEffect_C_OnCharacterStartCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.OnCharacterStopCutscene
// (BlueprintCallable, BlueprintEvent)

void UChronobalmEffect_C::OnCharacterStopCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.OnCharacterStopCutscene");

	UChronobalmEffect_C_OnCharacterStopCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect.ChronobalmEffect_C.ExecuteUbergraph_ChronobalmEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChronobalmEffect_C::ExecuteUbergraph_ChronobalmEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect.ChronobalmEffect_C.ExecuteUbergraph_ChronobalmEffect");

	UChronobalmEffect_C_ExecuteUbergraph_ChronobalmEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
