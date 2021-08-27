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

// Function RunningShoes.RunningShoes_C.UserConstructionScript
struct ARunningShoes_C_UserConstructionScript_Params
{
};

// Function RunningShoes.RunningShoes_C.ReceiveBeginPlay
struct ARunningShoes_C_ReceiveBeginPlay_Params
{
};

// Function RunningShoes.RunningShoes_C.OnEquip_Event_1
struct ARunningShoes_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RunningShoes.RunningShoes_C.OnUnequip_Event_1
struct ARunningShoes_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RunningShoes.RunningShoes_C.ReceiveTick
struct ARunningShoes_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
