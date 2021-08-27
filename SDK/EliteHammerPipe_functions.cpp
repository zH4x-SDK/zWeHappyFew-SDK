
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

// Function EliteHammerPipe.EliteHammerPipe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEliteHammerPipe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliteHammerPipe.EliteHammerPipe_C.UserConstructionScript");

	AEliteHammerPipe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliteHammerPipe.EliteHammerPipe_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AEliteHammerPipe_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliteHammerPipe.EliteHammerPipe_C.OnEquip_Event_1");

	AEliteHammerPipe_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliteHammerPipe.EliteHammerPipe_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AEliteHammerPipe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EliteHammerPipe.EliteHammerPipe_C.ReceiveBeginPlay");

	AEliteHammerPipe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliteHammerPipe.EliteHammerPipe_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AEliteHammerPipe_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliteHammerPipe.EliteHammerPipe_C.OnUnequip_Event_1");

	AEliteHammerPipe_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EliteHammerPipe.EliteHammerPipe_C.ExecuteUbergraph_EliteHammerPipe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEliteHammerPipe_C::ExecuteUbergraph_EliteHammerPipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EliteHammerPipe.EliteHammerPipe_C.ExecuteUbergraph_EliteHammerPipe");

	AEliteHammerPipe_C_ExecuteUbergraph_EliteHammerPipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
