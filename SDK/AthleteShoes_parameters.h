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

// Function AthleteShoes.AthleteShoes_C.UserConstructionScript
struct AAthleteShoes_C_UserConstructionScript_Params
{
};

// Function AthleteShoes.AthleteShoes_C.ReceiveBeginPlay
struct AAthleteShoes_C_ReceiveBeginPlay_Params
{
};

// Function AthleteShoes.AthleteShoes_C.OnEquip_Event_1
struct AAthleteShoes_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthleteShoes.AthleteShoes_C.OnUnequip_Event_1
struct AAthleteShoes_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthleteShoes.AthleteShoes_C.ReceiveTick
struct AAthleteShoes_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
