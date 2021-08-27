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

// Function ArmyBoots.ArmyBoots_C.UserConstructionScript
struct AArmyBoots_C_UserConstructionScript_Params
{
};

// Function ArmyBoots.ArmyBoots_C.ReceiveBeginPlay
struct AArmyBoots_C_ReceiveBeginPlay_Params
{
};

// Function ArmyBoots.ArmyBoots_C.OnEquip_Event_1
struct AArmyBoots_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArmyBoots.ArmyBoots_C.OnUnequip_Event_1
struct AArmyBoots_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArmyBoots.ArmyBoots_C.ReceiveTick
struct AArmyBoots_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
