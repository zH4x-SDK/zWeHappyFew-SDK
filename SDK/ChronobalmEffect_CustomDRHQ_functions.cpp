
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

// Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnApply
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_CustomDRHQ_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnApply");

	UChronobalmEffect_CustomDRHQ_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_CustomDRHQ_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnRemove");

	UChronobalmEffect_CustomDRHQ_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnSuspend
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_CustomDRHQ_C::OnSuspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnSuspend");

	UChronobalmEffect_CustomDRHQ_C_OnSuspend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnResume
// (Event, Protected, BlueprintEvent)

void UChronobalmEffect_CustomDRHQ_C::OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.OnResume");

	UChronobalmEffect_CustomDRHQ_C_OnResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.ExecuteUbergraph_ChronobalmEffect_CustomDRHQ
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChronobalmEffect_CustomDRHQ_C::ExecuteUbergraph_ChronobalmEffect_CustomDRHQ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChronobalmEffect_CustomDRHQ.ChronobalmEffect_CustomDRHQ_C.ExecuteUbergraph_ChronobalmEffect_CustomDRHQ");

	UChronobalmEffect_CustomDRHQ_C_ExecuteUbergraph_ChronobalmEffect_CustomDRHQ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
