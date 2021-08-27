
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

// Function PlayerEasy.PlayerEasy_C.ChangeDifficultyTiers
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerEasy_C::ChangeDifficultyTiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEasy.PlayerEasy_C.ChangeDifficultyTiers");

	UPlayerEasy_C_ChangeDifficultyTiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEasy.PlayerEasy_C.OnApply
// (Event, Protected, BlueprintEvent)

void UPlayerEasy_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEasy.PlayerEasy_C.OnApply");

	UPlayerEasy_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEasy.PlayerEasy_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UPlayerEasy_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEasy.PlayerEasy_C.OnRemove");

	UPlayerEasy_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEasy.PlayerEasy_C.ExecuteUbergraph_PlayerEasy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEasy_C::ExecuteUbergraph_PlayerEasy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEasy.PlayerEasy_C.ExecuteUbergraph_PlayerEasy");

	UPlayerEasy_C_ExecuteUbergraph_PlayerEasy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
