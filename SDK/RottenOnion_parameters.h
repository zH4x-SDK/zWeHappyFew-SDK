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

// Function RottenOnion.RottenOnion_C.UserConstructionScript
struct ARottenOnion_C_UserConstructionScript_Params
{
};

// Function RottenOnion.RottenOnion_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
struct ARottenOnion_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RottenOnion.RottenOnion_C.ReceiveOnCompleteUse
struct ARottenOnion_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
