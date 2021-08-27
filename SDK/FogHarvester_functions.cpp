
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

// Function FogHarvester.FogHarvester_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFogHarvester_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FogHarvester.FogHarvester_C.UserConstructionScript");

	AFogHarvester_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogHarvester.FogHarvester_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AFogHarvester_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FogHarvester.FogHarvester_C.OnEquip_Event_1");

	AFogHarvester_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogHarvester.FogHarvester_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AFogHarvester_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FogHarvester.FogHarvester_C.OnUnequip_Event_1");

	AFogHarvester_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FogHarvester.FogHarvester_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AFogHarvester_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FogHarvester.FogHarvester_C.ReceiveBeginPlay");

	AFogHarvester_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
