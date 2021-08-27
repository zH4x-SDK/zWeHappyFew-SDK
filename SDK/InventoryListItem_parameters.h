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

// Function InventoryListItem.InventoryListItem_C.Grow
struct UInventoryListItem_C_Grow_Params
{
};

// Function InventoryListItem.InventoryListItem_C.Shrink
struct UInventoryListItem_C_Shrink_Params
{
};

// Function InventoryListItem.InventoryListItem_C.OnMouseButtonDown
struct UInventoryListItem_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function InventoryListItem.InventoryListItem_C.Tick
struct UInventoryListItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListItem.InventoryListItem_C.RefreshWidget
struct UInventoryListItem_C_RefreshWidget_Params
{
	class AGlimpsePickup**                             Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListItem.InventoryListItem_C.ItemSold
struct UInventoryListItem_C_ItemSold_Params
{
};

// Function InventoryListItem.InventoryListItem_C.ItemBought
struct UInventoryListItem_C_ItemBought_Params
{
};

// Function InventoryListItem.InventoryListItem_C.SetUseProgress
struct UInventoryListItem_C_SetUseProgress_Params
{
	float*                                             progress;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanCancelProgress;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryListItem.InventoryListItem_C.BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
struct UInventoryListItem_C_BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params
{
};

// Function InventoryListItem.InventoryListItem_C.BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_21_OnReleased__DelegateSignature
struct UInventoryListItem_C_BndEvt__BuySell_Button_K2Node_ComponentBoundEvent_21_OnReleased__DelegateSignature_Params
{
};

// Function InventoryListItem.InventoryListItem_C.ExecuteUbergraph_InventoryListItem
struct UInventoryListItem_C_ExecuteUbergraph_InventoryListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
