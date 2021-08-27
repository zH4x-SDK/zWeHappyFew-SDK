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

// Function RawMeat.RawMeat_C.UserConstructionScript
struct ARawMeat_C_UserConstructionScript_Params
{
};

// Function RawMeat.RawMeat_C.ReceiveOnCompleteUse
struct ARawMeat_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RawMeat.RawMeat_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
struct ARawMeat_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RawMeat.RawMeat_C.ExecuteUbergraph_RawMeat
struct ARawMeat_C_ExecuteUbergraph_RawMeat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
