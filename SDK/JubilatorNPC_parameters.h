#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function JubilatorNPC.JubilatorNPC_C.OnLivenessPhysicsDisable
struct AJubilatorNPC_C_OnLivenessPhysicsDisable_Params
{
};

// Function JubilatorNPC.JubilatorNPC_C.OnLivenessPhysicsEnable
struct AJubilatorNPC_C_OnLivenessPhysicsEnable_Params
{
};

// Function JubilatorNPC.JubilatorNPC_C.CanInterruptAttack
struct AJubilatorNPC_C_CanInterruptAttack_Params
{
	struct FName*                                      AttackName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter**                          Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseDamageCategory>*               DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
