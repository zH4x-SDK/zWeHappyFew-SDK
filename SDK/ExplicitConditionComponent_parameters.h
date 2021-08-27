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

// Function ExplicitConditionComponent.ExplicitConditionComponent_C.GetCondition
struct UExplicitConditionComponent_C_GetCondition_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExplicitConditionComponent.ExplicitConditionComponent_C.EnableCondition
struct UExplicitConditionComponent_C_EnableCondition_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplicitConditionComponent.ExplicitConditionComponent_C.IsConditionMet
struct UExplicitConditionComponent_C_IsConditionMet_Params
{
	class AGlimpsePlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
