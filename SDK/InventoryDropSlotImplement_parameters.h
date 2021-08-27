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

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnDragDetected
struct UInventoryDropSlotImplement_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.Construct
struct UInventoryDropSlotImplement_C_Construct_Params
{
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.SetDisplayImage
struct UInventoryDropSlotImplement_C_SetDisplayImage_Params
{
	class UTexture2D**                                 newTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnSlotUnMatchSelected
struct UInventoryDropSlotImplement_C_OnSlotUnMatchSelected_Params
{
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnNonSlottableSelected
struct UInventoryDropSlotImplement_C_OnNonSlottableSelected_Params
{
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.OnSlotMatchesSelected
struct UInventoryDropSlotImplement_C_OnSlotMatchesSelected_Params
{
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.SetPickup
struct UInventoryDropSlotImplement_C_SetPickup_Params
{
	class AGlimpsePickup**                             Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.UpdateFocusHighlight
struct UInventoryDropSlotImplement_C_UpdateFocusHighlight_Params
{
	bool*                                              Highlighted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.ExecuteUbergraph_InventoryDropSlotImplement
struct UInventoryDropSlotImplement_C_ExecuteUbergraph_InventoryDropSlotImplement_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.HideHighlight__DelegateSignature
struct UInventoryDropSlotImplement_C_HideHighlight__DelegateSignature_Params
{
};

// Function InventoryDropSlotImplement.InventoryDropSlotImplement_C.ShowHighlight__DelegateSignature
struct UInventoryDropSlotImplement_C_ShowHighlight__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
