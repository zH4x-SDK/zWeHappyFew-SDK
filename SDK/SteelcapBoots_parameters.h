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

// Function SteelcapBoots.SteelcapBoots_C.UserConstructionScript
struct ASteelcapBoots_C_UserConstructionScript_Params
{
};

// Function SteelcapBoots.SteelcapBoots_C.ReceiveBeginPlay
struct ASteelcapBoots_C_ReceiveBeginPlay_Params
{
};

// Function SteelcapBoots.SteelcapBoots_C.OnEquip_Event_1
struct ASteelcapBoots_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteelcapBoots.SteelcapBoots_C.OnUnequip_Event_1
struct ASteelcapBoots_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteelcapBoots.SteelcapBoots_C.ReceiveTick
struct ASteelcapBoots_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
