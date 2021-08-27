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

// Function CrashSyringe.CrashSyringe_C.UserConstructionScript
struct ACrashSyringe_C_UserConstructionScript_Params
{
};

// Function CrashSyringe.CrashSyringe_C.ReceiveOnCompleteUse
struct ACrashSyringe_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
