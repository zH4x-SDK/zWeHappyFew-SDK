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

// Function Banger.Banger_C.UserConstructionScript
struct ABanger_C_UserConstructionScript_Params
{
};

// Function Banger.Banger_C.ReceiveOnHitThrow
struct ABanger_C_ReceiveOnHitThrow_Params
{
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Banger.Banger_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
struct ABanger_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Banger.Banger_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature
struct ABanger_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Banger.Banger_C.ExecuteUbergraph_Banger
struct ABanger_C_ExecuteUbergraph_Banger_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
