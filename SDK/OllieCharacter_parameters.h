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

// Function OllieCharacter.OllieCharacter_C.UserConstructionScript
struct AOllieCharacter_C_UserConstructionScript_Params
{
};

// Function OllieCharacter.OllieCharacter_C.ReceiveBeginPlay
struct AOllieCharacter_C_ReceiveBeginPlay_Params
{
};

// Function OllieCharacter.OllieCharacter_C.ReceivePossessed
struct AOllieCharacter_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
