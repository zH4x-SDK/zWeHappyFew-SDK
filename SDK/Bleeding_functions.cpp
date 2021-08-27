
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

// Function Bleeding.Bleeding_C.ResetInfectionTime
// (Public, BlueprintCallable, BlueprintEvent)

void UBleeding_C::ResetInfectionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bleeding.Bleeding_C.ResetInfectionTime");

	UBleeding_C_ResetInfectionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bleeding.Bleeding_C.TickInfection
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBleeding_C::TickInfection(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bleeding.Bleeding_C.TickInfection");

	UBleeding_C_TickInfection_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bleeding.Bleeding_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBleeding_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bleeding.Bleeding_C.OnTick");

	UBleeding_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bleeding.Bleeding_C.OnApply
// (Event, Protected, BlueprintEvent)

void UBleeding_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bleeding.Bleeding_C.OnApply");

	UBleeding_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bleeding.Bleeding_C.ExecuteUbergraph_Bleeding
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBleeding_C::ExecuteUbergraph_Bleeding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bleeding.Bleeding_C.ExecuteUbergraph_Bleeding");

	UBleeding_C_ExecuteUbergraph_Bleeding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
