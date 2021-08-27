
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

// Function PlayerHard.PlayerHard_C.ChangeDifficultyTiers
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHard_C::ChangeDifficultyTiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHard.PlayerHard_C.ChangeDifficultyTiers");

	UPlayerHard_C_ChangeDifficultyTiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHard.PlayerHard_C.OnApply
// (Event, Protected, BlueprintEvent)

void UPlayerHard_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHard.PlayerHard_C.OnApply");

	UPlayerHard_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHard.PlayerHard_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UPlayerHard_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHard.PlayerHard_C.OnRemove");

	UPlayerHard_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
