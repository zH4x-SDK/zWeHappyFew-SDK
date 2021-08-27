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

// Function Gift_TEMPLATE.Gift_TEMPLATE_C.UserConstructionScript
struct AGift_TEMPLATE_C_UserConstructionScript_Params
{
};

// Function Gift_TEMPLATE.Gift_TEMPLATE_C.ReceiveBeginPlay
struct AGift_TEMPLATE_C_ReceiveBeginPlay_Params
{
};

// Function Gift_TEMPLATE.Gift_TEMPLATE_C.OnGiftedEvent
struct AGift_TEMPLATE_C_OnGiftedEvent_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Giver;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gift_TEMPLATE.Gift_TEMPLATE_C.ExecuteUbergraph_Gift_TEMPLATE
struct AGift_TEMPLATE_C_ExecuteUbergraph_Gift_TEMPLATE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
