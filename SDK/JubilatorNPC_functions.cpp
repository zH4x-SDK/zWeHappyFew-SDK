
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

// Function JubilatorNPC.JubilatorNPC_C.OnLivenessPhysicsDisable
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)

void AJubilatorNPC_C::OnLivenessPhysicsDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function JubilatorNPC.JubilatorNPC_C.OnLivenessPhysicsDisable");

	AJubilatorNPC_C_OnLivenessPhysicsDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JubilatorNPC.JubilatorNPC_C.OnLivenessPhysicsEnable
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)

void AJubilatorNPC_C::OnLivenessPhysicsEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function JubilatorNPC.JubilatorNPC_C.OnLivenessPhysicsEnable");

	AJubilatorNPC_C_OnLivenessPhysicsEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JubilatorNPC.JubilatorNPC_C.CanInterruptAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  AttackName                     (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseCharacter**      Attacker                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGlimpseDamageCategory>* DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitDirection                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AJubilatorNPC_C::CanInterruptAttack(struct FName* AttackName, class AGlimpseCharacter** Attacker, TEnumAsByte<EGlimpseDamageCategory>* DamageType, struct FVector* HitDirection, struct FVector* HitLocation, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JubilatorNPC.JubilatorNPC_C.CanInterruptAttack");

	AJubilatorNPC_C_CanInterruptAttack_Params params;
	params.AttackName = AttackName;
	params.Attacker = Attacker;
	params.DamageType = DamageType;
	params.HitDirection = HitDirection;
	params.HitLocation = HitLocation;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
