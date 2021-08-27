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

// Function ShockerGrenade.ShockerGrenade_C.UserConstructionScript
struct AShockerGrenade_C_UserConstructionScript_Params
{
};

// Function ShockerGrenade.ShockerGrenade_C.OnWeaponThrown
struct AShockerGrenade_C_OnWeaponThrown_Params
{
	class APawn**                                      ThrowerPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShockerGrenade.ShockerGrenade_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
struct AShockerGrenade_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
