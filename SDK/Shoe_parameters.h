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

// Function Shoe.Shoe_C.UserConstructionScript
struct AShoe_C_UserConstructionScript_Params
{
};

// Function Shoe.Shoe_C.ReceiveBeginPlay
struct AShoe_C_ReceiveBeginPlay_Params
{
};

// Function Shoe.Shoe_C.OnEquip_Event_1
struct AShoe_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shoe.Shoe_C.OnUnequip_Event_1
struct AShoe_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shoe.Shoe_C.ReceiveTick
struct AShoe_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
