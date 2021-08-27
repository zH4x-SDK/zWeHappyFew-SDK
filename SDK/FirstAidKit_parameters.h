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

// Function FirstAidKit.FirstAidKit_C.ReceiveCanBeUsed
struct AFirstAidKit_C_ReceiveCanBeUsed_Params
{
	class APawn**                                      UseSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FirstAidKit.FirstAidKit_C.UserConstructionScript
struct AFirstAidKit_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
