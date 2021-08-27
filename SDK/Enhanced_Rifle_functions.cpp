
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

// Function Enhanced_Rifle.Enhanced_Rifle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnhanced_Rifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enhanced_Rifle.Enhanced_Rifle_C.UserConstructionScript");

	AEnhanced_Rifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enhanced_Rifle.Enhanced_Rifle_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AEnhanced_Rifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enhanced_Rifle.Enhanced_Rifle_C.ReceiveBeginPlay");

	AEnhanced_Rifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enhanced_Rifle.Enhanced_Rifle_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AEnhanced_Rifle_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enhanced_Rifle.Enhanced_Rifle_C.OnEquip_Event_1");

	AEnhanced_Rifle_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enhanced_Rifle.Enhanced_Rifle_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AEnhanced_Rifle_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enhanced_Rifle.Enhanced_Rifle_C.OnUnequip_Event_1");

	AEnhanced_Rifle_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
