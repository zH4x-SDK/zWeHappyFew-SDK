
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

// Function Shoe.Shoe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShoe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shoe.Shoe_C.UserConstructionScript");

	AShoe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shoe.Shoe_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AShoe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shoe.Shoe_C.ReceiveBeginPlay");

	AShoe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shoe.Shoe_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AShoe_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shoe.Shoe_C.OnEquip_Event_1");

	AShoe_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shoe.Shoe_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AShoe_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shoe.Shoe_C.OnUnequip_Event_1");

	AShoe_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shoe.Shoe_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShoe_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shoe.Shoe_C.ReceiveTick");

	AShoe_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
