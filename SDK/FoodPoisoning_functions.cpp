
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

// Function FoodPoisoning.FoodPoisoning_C.ApplyBlackout
// (Public, BlueprintCallable, BlueprintEvent)

void UFoodPoisoning_C::ApplyBlackout()
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.ApplyBlackout");

	UFoodPoisoning_C_ApplyBlackout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.ApplyBlurryVision
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UFoodPoisoning_C::ApplyBlurryVision(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.ApplyBlurryVision");

	UFoodPoisoning_C_ApplyBlurryVision_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.ApplyVomiting
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDry                         (Parm, ZeroConstructor, IsPlainOldData)

void UFoodPoisoning_C::ApplyVomiting(bool bIsDry)
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.ApplyVomiting");

	UFoodPoisoning_C_ApplyVomiting_Params params;
	params.bIsDry = bIsDry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.OnApply
// (Event, Protected, BlueprintEvent)

void UFoodPoisoning_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.OnApply");

	UFoodPoisoning_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.OnDizziness
// (Event, Protected, BlueprintEvent)

void UFoodPoisoning_C::OnDizziness()
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.OnDizziness");

	UFoodPoisoning_C_OnDizziness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.OnVomiting
// (Event, Protected, BlueprintEvent)

void UFoodPoisoning_C::OnVomiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.OnVomiting");

	UFoodPoisoning_C_OnVomiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.OnDryHeaving
// (Event, Protected, BlueprintEvent)

void UFoodPoisoning_C::OnDryHeaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.OnDryHeaving");

	UFoodPoisoning_C_OnDryHeaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.OnBlackout
// (Event, Protected, BlueprintEvent)

void UFoodPoisoning_C::OnBlackout()
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.OnBlackout");

	UFoodPoisoning_C_OnBlackout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoodPoisoning.FoodPoisoning_C.ExecuteUbergraph_FoodPoisoning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFoodPoisoning_C::ExecuteUbergraph_FoodPoisoning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FoodPoisoning.FoodPoisoning_C.ExecuteUbergraph_FoodPoisoning");

	UFoodPoisoning_C_ExecuteUbergraph_FoodPoisoning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
