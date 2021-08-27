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

// Function GoldenScourge.GoldenScourge_C.UserConstructionScript
struct AGoldenScourge_C_UserConstructionScript_Params
{
};

// Function GoldenScourge.GoldenScourge_C.ReceiveBeginPlay
struct AGoldenScourge_C_ReceiveBeginPlay_Params
{
};

// Function GoldenScourge.GoldenScourge_C.OnEquipVO
struct AGoldenScourge_C_OnEquipVO_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GoldenScourge.GoldenScourge_C.OnUnequipVO
struct AGoldenScourge_C_OnUnequipVO_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GoldenScourge.GoldenScourge_C.PlayVO
struct AGoldenScourge_C_PlayVO_Params
{
};

// Function GoldenScourge.GoldenScourge_C.ExecuteUbergraph_GoldenScourge
struct AGoldenScourge_C_ExecuteUbergraph_GoldenScourge_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
