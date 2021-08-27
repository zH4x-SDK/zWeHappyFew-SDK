
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

// Function AthleteShoes.AthleteShoes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthleteShoes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthleteShoes.AthleteShoes_C.UserConstructionScript");

	AAthleteShoes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthleteShoes.AthleteShoes_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAthleteShoes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthleteShoes.AthleteShoes_C.ReceiveBeginPlay");

	AAthleteShoes_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthleteShoes.AthleteShoes_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AAthleteShoes_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthleteShoes.AthleteShoes_C.OnEquip_Event_1");

	AAthleteShoes_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthleteShoes.AthleteShoes_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AAthleteShoes_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthleteShoes.AthleteShoes_C.OnUnequip_Event_1");

	AAthleteShoes_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthleteShoes.AthleteShoes_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AAthleteShoes_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthleteShoes.AthleteShoes_C.ReceiveTick");

	AAthleteShoes_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
