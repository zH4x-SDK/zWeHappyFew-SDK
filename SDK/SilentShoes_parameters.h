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

// Function SilentShoes.SilentShoes_C.UserConstructionScript
struct ASilentShoes_C_UserConstructionScript_Params
{
};

// Function SilentShoes.SilentShoes_C.ReceiveBeginPlay
struct ASilentShoes_C_ReceiveBeginPlay_Params
{
};

// Function SilentShoes.SilentShoes_C.OnEquip_Event_1
struct ASilentShoes_C_OnEquip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SilentShoes.SilentShoes_C.OnUnequip_Event_1
struct ASilentShoes_C_OnUnequip_Event_1_Params
{
	class AGlimpseCharacter*                           CharacterOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SilentShoes.SilentShoes_C.ReceiveTick
struct ASilentShoes_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SilentShoes.SilentShoes_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
struct ASilentShoes_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SilentShoes.SilentShoes_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature
struct ASilentShoes_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SilentShoes.SilentShoes_C.ExecuteUbergraph_SilentShoes
struct ASilentShoes_C_ExecuteUbergraph_SilentShoes_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
