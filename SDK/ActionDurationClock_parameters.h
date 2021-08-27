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

// Function ActionDurationClock.ActionDurationClock_C.UpdateSkullDisplay
struct UActionDurationClock_C_UpdateSkullDisplay_Params
{
};

// Function ActionDurationClock.ActionDurationClock_C.SetPendingDeath
struct UActionDurationClock_C_SetPendingDeath_Params
{
	bool                                               DeathIsPending;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationClock.ActionDurationClock_C.SetTime
struct UActionDurationClock_C_SetTime_Params
{
	float                                              CurrentTimeHours;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewTimeHours;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationClock.ActionDurationClock_C.Construct
struct UActionDurationClock_C_Construct_Params
{
};

// Function ActionDurationClock.ActionDurationClock_C.Tick
struct UActionDurationClock_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDurationClock.ActionDurationClock_C.ExecuteUbergraph_ActionDurationClock
struct UActionDurationClock_C_ExecuteUbergraph_ActionDurationClock_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
