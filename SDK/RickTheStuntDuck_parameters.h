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

// Function RickTheStuntDuck.RickTheStuntDuck_C.OnDurationComplete
struct ARickTheStuntDuck_C_OnDurationComplete_Params
{
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.TickActiveEffect
struct ARickTheStuntDuck_C_TickActiveEffect_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.Activate
struct ARickTheStuntDuck_C_Activate_Params
{
	class APawn*                                       Thrower;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.Deactivate
struct ARickTheStuntDuck_C_Deactivate_Params
{
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.UserConstructionScript
struct ARickTheStuntDuck_C_UserConstructionScript_Params
{
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.ReceiveOnHitThrow
struct ARickTheStuntDuck_C_ReceiveOnHitThrow_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.ReceiveTick
struct ARickTheStuntDuck_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_48_InteractionSignature__DelegateSignature
struct ARickTheStuntDuck_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_48_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RickTheStuntDuck.RickTheStuntDuck_C.ExecuteUbergraph_RickTheStuntDuck
struct ARickTheStuntDuck_C_ExecuteUbergraph_RickTheStuntDuck_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
