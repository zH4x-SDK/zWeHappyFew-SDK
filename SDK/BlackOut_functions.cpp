
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

// Function BlackOut.BlackOut_C.EndVomitingBout
// (Public, BlueprintCallable, BlueprintEvent)

void UBlackOut_C::EndVomitingBout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackOut.BlackOut_C.EndVomitingBout");

	UBlackOut_C_EndVomitingBout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackOut.BlackOut_C.BeginVomitingBout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParticleSocketName             (Parm, ZeroConstructor, IsPlainOldData)

void UBlackOut_C::BeginVomitingBout(float Duration, const struct FName& ParticleSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackOut.BlackOut_C.BeginVomitingBout");

	UBlackOut_C_BeginVomitingBout_Params params;
	params.Duration = Duration;
	params.ParticleSocketName = ParticleSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackOut.BlackOut_C.OnApply
// (Event, Protected, BlueprintEvent)

void UBlackOut_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackOut.BlackOut_C.OnApply");

	UBlackOut_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackOut.BlackOut_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UBlackOut_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackOut.BlackOut_C.OnRemove");

	UBlackOut_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackOut.BlackOut_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlackOut_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackOut.BlackOut_C.OnTick");

	UBlackOut_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlackOut.BlackOut_C.ExecuteUbergraph_BlackOut
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBlackOut_C::ExecuteUbergraph_BlackOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlackOut.BlackOut_C.ExecuteUbergraph_BlackOut");

	UBlackOut_C_ExecuteUbergraph_BlackOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
