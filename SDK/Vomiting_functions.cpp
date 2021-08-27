
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

// Function Vomiting.Vomiting_C.EndVomitingBout
// (Public, BlueprintCallable, BlueprintEvent)

void UVomiting_C::EndVomitingBout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vomiting.Vomiting_C.EndVomitingBout");

	UVomiting_C_EndVomitingBout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vomiting.Vomiting_C.BeginVomitingBout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParticleSocketName             (Parm, ZeroConstructor, IsPlainOldData)

void UVomiting_C::BeginVomitingBout(float Duration, const struct FName& ParticleSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vomiting.Vomiting_C.BeginVomitingBout");

	UVomiting_C_BeginVomitingBout_Params params;
	params.Duration = Duration;
	params.ParticleSocketName = ParticleSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vomiting.Vomiting_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVomiting_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vomiting.Vomiting_C.OnTick");

	UVomiting_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vomiting.Vomiting_C.ExecuteUbergraph_Vomiting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVomiting_C::ExecuteUbergraph_Vomiting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vomiting.Vomiting_C.ExecuteUbergraph_Vomiting");

	UVomiting_C_ExecuteUbergraph_Vomiting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
