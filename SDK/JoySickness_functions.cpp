
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

// Function JoySickness.JoySickness_C.HandleVomit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UJoySickness_C::HandleVomit(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoySickness.JoySickness_C.HandleVomit");

	UJoySickness_C_HandleVomit_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoySickness.JoySickness_C.StartVomit
// (Public, BlueprintCallable, BlueprintEvent)

void UJoySickness_C::StartVomit()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoySickness.JoySickness_C.StartVomit");

	UJoySickness_C_StartVomit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoySickness.JoySickness_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UJoySickness_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoySickness.JoySickness_C.OnTick");

	UJoySickness_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoySickness.JoySickness_C.ExecuteUbergraph_JoySickness
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UJoySickness_C::ExecuteUbergraph_JoySickness(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoySickness.JoySickness_C.ExecuteUbergraph_JoySickness");

	UJoySickness_C_ExecuteUbergraph_JoySickness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
