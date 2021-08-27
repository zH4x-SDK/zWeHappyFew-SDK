
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

// Function JoyCrash.JoyCrash_C.OnVomit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSucceeded                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UJoyCrash_C::OnVomit(bool* bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyCrash.JoyCrash_C.OnVomit");

	UJoyCrash_C_OnVomit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSucceeded != nullptr)
		*bSucceeded = params.bSucceeded;
}


// Function JoyCrash.JoyCrash_C.ApplyVomiting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void UJoyCrash_C::ApplyVomiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyCrash.JoyCrash_C.ApplyVomiting");

	UJoyCrash_C_ApplyVomiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyCrash.JoyCrash_C.OnApply
// (Event, Protected, BlueprintEvent)

void UJoyCrash_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyCrash.JoyCrash_C.OnApply");

	UJoyCrash_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyCrash.JoyCrash_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UJoyCrash_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyCrash.JoyCrash_C.OnRemove");

	UJoyCrash_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyCrash.JoyCrash_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UJoyCrash_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyCrash.JoyCrash_C.OnTick");

	UJoyCrash_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
