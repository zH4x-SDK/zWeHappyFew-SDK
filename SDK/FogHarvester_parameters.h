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

// Function FogHarvester.FogHarvester_C.UserConstructionScript
struct AFogHarvester_C_UserConstructionScript_Params
{
};

// Function FogHarvester.FogHarvester_C.OnEquip_Event_1
struct AFogHarvester_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FogHarvester.FogHarvester_C.OnUnequip_Event_1
struct AFogHarvester_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FogHarvester.FogHarvester_C.ReceiveBeginPlay
struct AFogHarvester_C_ReceiveBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
