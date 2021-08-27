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

// Function BeeCloudProjectile.BeeCloudProjectile_C.UserConstructionScript
struct ABeeCloudProjectile_C_UserConstructionScript_Params
{
};

// Function BeeCloudProjectile.BeeCloudProjectile_C.ReceiveBeginPlay
struct ABeeCloudProjectile_C_ReceiveBeginPlay_Params
{
};

// Function BeeCloudProjectile.BeeCloudProjectile_C.ReceiveHit
struct ABeeCloudProjectile_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
