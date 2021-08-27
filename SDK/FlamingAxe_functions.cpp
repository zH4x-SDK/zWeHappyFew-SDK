
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

// Function FlamingAxe.FlamingAxe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFlamingAxe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingAxe.FlamingAxe_C.UserConstructionScript");

	AFlamingAxe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingAxe.FlamingAxe_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AFlamingAxe_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingAxe.FlamingAxe_C.OnEquip_Event_1");

	AFlamingAxe_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingAxe.FlamingAxe_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AFlamingAxe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingAxe.FlamingAxe_C.ReceiveBeginPlay");

	AFlamingAxe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingAxe.FlamingAxe_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AFlamingAxe_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingAxe.FlamingAxe_C.OnUnequip_Event_1");

	AFlamingAxe_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingAxe.FlamingAxe_C.OnTrailActivated
// (Event, Public, BlueprintEvent)

void AFlamingAxe_C::OnTrailActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingAxe.FlamingAxe_C.OnTrailActivated");

	AFlamingAxe_C_OnTrailActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingAxe.FlamingAxe_C.OnTrailDeactivated
// (Event, Public, BlueprintEvent)

void AFlamingAxe_C::OnTrailDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingAxe.FlamingAxe_C.OnTrailDeactivated");

	AFlamingAxe_C_OnTrailDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
