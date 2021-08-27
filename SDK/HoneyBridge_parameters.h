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

// Function HoneyBridge.HoneyBridge_C.ReceiveQuestUpdated
struct UHoneyBridge_C_ReceiveQuestUpdated_Params
{
	class AGlimpsePlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>*                         status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
