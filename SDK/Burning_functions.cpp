
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

// Function Burning.Burning_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBurning_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Burning.Burning_C.OnTick");

	UBurning_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Burning.Burning_C.OnApply
// (Event, Protected, BlueprintEvent)

void UBurning_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Burning.Burning_C.OnApply");

	UBurning_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Burning.Burning_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UBurning_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Burning.Burning_C.OnRemove");

	UBurning_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Burning.Burning_C.ExecuteUbergraph_Burning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBurning_C::ExecuteUbergraph_Burning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Burning.Burning_C.ExecuteUbergraph_Burning");

	UBurning_C_ExecuteUbergraph_Burning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
