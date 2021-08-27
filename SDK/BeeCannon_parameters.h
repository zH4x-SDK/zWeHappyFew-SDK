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

// Function BeeCannon.BeeCannon_C.UserConstructionScript
struct ABeeCannon_C_UserConstructionScript_Params
{
};

// Function BeeCannon.BeeCannon_C.OnChargeComplete
struct ABeeCannon_C_OnChargeComplete_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeCannon.BeeCannon_C.OnChargeCancelled
struct ABeeCannon_C_OnChargeCancelled_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeCannon.BeeCannon_C.OnCharging
struct ABeeCannon_C_OnCharging_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ChargePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BeeCannon.BeeCannon_C.OnChargeBegin
struct ABeeCannon_C_OnChargeBegin_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
