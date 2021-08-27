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

// Function GlimpseCrier.GlimpseCrier_C.UserConstructionScript
struct AGlimpseCrier_C_UserConstructionScript_Params
{
};

// Function GlimpseCrier.GlimpseCrier_C.ReceiveBeginPlay
struct AGlimpseCrier_C_ReceiveBeginPlay_Params
{
};

// Function GlimpseCrier.GlimpseCrier_C.CustomEvent_1
struct AGlimpseCrier_C_CustomEvent_1_Params
{
	TEnumAsByte<EAISuspicionState>                     OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
