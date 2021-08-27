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

// Function LorePickup_Base.LorePickup_Base_C.UserConstructionScript
struct ALorePickup_Base_C_UserConstructionScript_Params
{
};

// Function LorePickup_Base.LorePickup_Base_C.PickedUp
struct ALorePickup_Base_C_PickedUp_Params
{
	class APawn*                                       PickupSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LorePickup_Base.LorePickup_Base_C.ReceiveBeginPlay
struct ALorePickup_Base_C_ReceiveBeginPlay_Params
{
};

// Function LorePickup_Base.LorePickup_Base_C.BndEvt__InstantRead_K2Node_ComponentBoundEvent_1_InteractionSignature__DelegateSignature
struct ALorePickup_Base_C_BndEvt__InstantRead_K2Node_ComponentBoundEvent_1_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LorePickup_Base.LorePickup_Base_C.ExecuteUbergraph_LorePickup_Base
struct ALorePickup_Base_C_ExecuteUbergraph_LorePickup_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
