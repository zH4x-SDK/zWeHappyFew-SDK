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

// Function InventoryItemImplement.InventoryItemImplement_C.GetKeyboard
struct UInventoryItemImplement_C_GetKeyboard_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.GetPlayerController
struct UInventoryItemImplement_C_GetPlayerController_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.IsUseProgressVisible
struct UInventoryItemImplement_C_IsUseProgressVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.OnDragOver
struct UInventoryItemImplement_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.Get_EquippedBox_Visibility_1
struct UInventoryItemImplement_C_Get_EquippedBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.RefreshWidgetFunction
struct UInventoryItemImplement_C_RefreshWidgetFunction_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.FormatForDrag
struct UInventoryItemImplement_C_FormatForDrag_Params
{
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.OnDragDetected
struct UInventoryItemImplement_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.Tick
struct UInventoryItemImplement_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.RefreshWidget
struct UInventoryItemImplement_C_RefreshWidget_Params
{
	class AGlimpsePickup**                             Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.SetUseProgress
struct UInventoryItemImplement_C_SetUseProgress_Params
{
	float*                                             progress;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanCancelProgress;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryItemImplement.InventoryItemImplement_C.ItemBought
struct UInventoryItemImplement_C_ItemBought_Params
{
};

// Function InventoryItemImplement.InventoryItemImplement_C.ItemSold
struct UInventoryItemImplement_C_ItemSold_Params
{
};

// Function InventoryItemImplement.InventoryItemImplement_C.ItemDropped
struct UInventoryItemImplement_C_ItemDropped_Params
{
};

// Function InventoryItemImplement.InventoryItemImplement_C.ItemPlaced
struct UInventoryItemImplement_C_ItemPlaced_Params
{
};

// Function InventoryItemImplement.InventoryItemImplement_C.ItemTaken
struct UInventoryItemImplement_C_ItemTaken_Params
{
};

// Function InventoryItemImplement.InventoryItemImplement_C.ExecuteUbergraph_InventoryItemImplement
struct UInventoryItemImplement_C_ExecuteUbergraph_InventoryItemImplement_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
