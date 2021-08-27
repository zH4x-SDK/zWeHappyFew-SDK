
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

// Function Burning_orange.Burning_orange_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBurning_orange_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Burning_orange.Burning_orange_C.OnTick");

	UBurning_orange_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Burning_orange.Burning_orange_C.OnApply
// (Event, Protected, BlueprintEvent)

void UBurning_orange_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Burning_orange.Burning_orange_C.OnApply");

	UBurning_orange_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Burning_orange.Burning_orange_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UBurning_orange_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Burning_orange.Burning_orange_C.OnRemove");

	UBurning_orange_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
