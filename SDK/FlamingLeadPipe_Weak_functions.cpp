
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

// Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFlamingLeadPipe_Weak_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.UserConstructionScript");

	AFlamingLeadPipe_Weak_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnTrailActivated
// (Event, Public, BlueprintEvent)

void AFlamingLeadPipe_Weak_C::OnTrailActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnTrailActivated");

	AFlamingLeadPipe_Weak_C_OnTrailActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnTrailDeactivated
// (Event, Public, BlueprintEvent)

void AFlamingLeadPipe_Weak_C::OnTrailDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnTrailDeactivated");

	AFlamingLeadPipe_Weak_C_OnTrailDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnEquip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AFlamingLeadPipe_Weak_C::OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnEquip_Event_1");

	AFlamingLeadPipe_Weak_C_OnEquip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AFlamingLeadPipe_Weak_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.ReceiveBeginPlay");

	AFlamingLeadPipe_Weak_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnUnequip_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AFlamingLeadPipe_Weak_C::OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlamingLeadPipe_Weak.FlamingLeadPipe_Weak_C.OnUnequip_Event_1");

	AFlamingLeadPipe_Weak_C_OnUnequip_Event_1_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
