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

// Function CurePlagueSyringe.CurePlagueSyringe_C.ReceiveCanBeUsed
struct ACurePlagueSyringe_C_ReceiveCanBeUsed_Params
{
	class APawn**                                      UseSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CurePlagueSyringe.CurePlagueSyringe_C.UserConstructionScript
struct ACurePlagueSyringe_C_UserConstructionScript_Params
{
};

// Function CurePlagueSyringe.CurePlagueSyringe_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
struct ACurePlagueSyringe_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurePlagueSyringe.CurePlagueSyringe_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature
struct ACurePlagueSyringe_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
