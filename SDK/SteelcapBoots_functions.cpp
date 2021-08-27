
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

// Function SteelcapBoots.SteelcapBoots_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASteelcapBoots_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelcapBoots.SteelcapBoots_C.UserConstructionScript");

	ASteelcapBoots_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelcapBoots.SteelcapBoots_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASteelcapBoots_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelcapBoots.SteelcapBoots_C.ReceiveBeginPlay");

	ASteelcapBoots_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelcapBoots.SteelcapBoots_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void ASteelcapBoots_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelcapBoots.SteelcapBoots_C.OnEquip_Event_1");

	ASteelcapBoots_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelcapBoots.SteelcapBoots_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void ASteelcapBoots_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelcapBoots.SteelcapBoots_C.OnUnequip_Event_1");

	ASteelcapBoots_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteelcapBoots.SteelcapBoots_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASteelcapBoots_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteelcapBoots.SteelcapBoots_C.ReceiveTick");

	ASteelcapBoots_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
