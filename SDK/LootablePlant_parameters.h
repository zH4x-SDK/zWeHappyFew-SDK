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

// Function LootablePlant.LootablePlant_C.UserConstructionScript
struct ALootablePlant_C_UserConstructionScript_Params
{
};

// Function LootablePlant.LootablePlant_C.OnLoot
struct ALootablePlant_C_OnLoot_Params
{
	class AGlimpsePlayerController**                   PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootablePlant.LootablePlant_C.UpdateLootableState
struct ALootablePlant_C_UpdateLootableState_Params
{
	bool*                                              bIsLooted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
