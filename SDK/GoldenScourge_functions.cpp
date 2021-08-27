
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

// Function GoldenScourge.GoldenScourge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGoldenScourge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GoldenScourge.GoldenScourge_C.UserConstructionScript");

	AGoldenScourge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoldenScourge.GoldenScourge_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGoldenScourge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GoldenScourge.GoldenScourge_C.ReceiveBeginPlay");

	AGoldenScourge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoldenScourge.GoldenScourge_C.OnEquipVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AGoldenScourge_C::OnEquipVO(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoldenScourge.GoldenScourge_C.OnEquipVO");

	AGoldenScourge_C_OnEquipVO_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoldenScourge.GoldenScourge_C.OnUnequipVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       CharacterOwner                 (Parm, ZeroConstructor, IsPlainOldData)

void AGoldenScourge_C::OnUnequipVO(class AGlimpseCharacter* CharacterOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoldenScourge.GoldenScourge_C.OnUnequipVO");

	AGoldenScourge_C_OnUnequipVO_Params params;
	params.CharacterOwner = CharacterOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoldenScourge.GoldenScourge_C.PlayVO
// (BlueprintCallable, BlueprintEvent)

void AGoldenScourge_C::PlayVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function GoldenScourge.GoldenScourge_C.PlayVO");

	AGoldenScourge_C_PlayVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GoldenScourge.GoldenScourge_C.ExecuteUbergraph_GoldenScourge
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGoldenScourge_C::ExecuteUbergraph_GoldenScourge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoldenScourge.GoldenScourge_C.ExecuteUbergraph_GoldenScourge");

	AGoldenScourge_C_ExecuteUbergraph_GoldenScourge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
