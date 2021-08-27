
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

// Function DiabetesHealthTick.DiabetesHealthTick_C.ResetInfectionTime
// (Public, BlueprintCallable, BlueprintEvent)

void UDiabetesHealthTick_C::ResetInfectionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiabetesHealthTick.DiabetesHealthTick_C.ResetInfectionTime");

	UDiabetesHealthTick_C_ResetInfectionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiabetesHealthTick.DiabetesHealthTick_C.TickInfection
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDiabetesHealthTick_C::TickInfection(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiabetesHealthTick.DiabetesHealthTick_C.TickInfection");

	UDiabetesHealthTick_C_TickInfection_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiabetesHealthTick.DiabetesHealthTick_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UDiabetesHealthTick_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiabetesHealthTick.DiabetesHealthTick_C.OnTick");

	UDiabetesHealthTick_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiabetesHealthTick.DiabetesHealthTick_C.OnApply
// (Event, Protected, BlueprintEvent)

void UDiabetesHealthTick_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiabetesHealthTick.DiabetesHealthTick_C.OnApply");

	UDiabetesHealthTick_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
