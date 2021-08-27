
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

// Function LootablePlant.LootablePlant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALootablePlant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootablePlant.LootablePlant_C.UserConstructionScript");

	ALootablePlant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootablePlant.LootablePlant_C.OnLoot
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController** PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ALootablePlant_C::OnLoot(class AGlimpsePlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootablePlant.LootablePlant_C.OnLoot");

	ALootablePlant_C_OnLoot_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootablePlant.LootablePlant_C.UpdateLootableState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsLooted                      (Parm, ZeroConstructor, IsPlainOldData)

void ALootablePlant_C::UpdateLootableState(bool* bIsLooted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootablePlant.LootablePlant_C.UpdateLootableState");

	ALootablePlant_C_UpdateLootableState_Params params;
	params.bIsLooted = bIsLooted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
