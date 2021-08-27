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

// Function RidingBoots.RidingBoots_C.UserConstructionScript
struct ARidingBoots_C_UserConstructionScript_Params
{
};

// Function RidingBoots.RidingBoots_C.ReceiveBeginPlay
struct ARidingBoots_C_ReceiveBeginPlay_Params
{
};

// Function RidingBoots.RidingBoots_C.OnEquip_Event_1
struct ARidingBoots_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RidingBoots.RidingBoots_C.OnUnequip_Event_1
struct ARidingBoots_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RidingBoots.RidingBoots_C.ReceiveTick
struct ARidingBoots_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
