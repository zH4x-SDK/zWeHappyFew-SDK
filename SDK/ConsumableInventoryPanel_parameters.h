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

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.PlaySwitchSFX
struct UConsumableInventoryPanel_C_PlaySwitchSFX_Params
{
};

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.ShowEmpty
struct UConsumableInventoryPanel_C_ShowEmpty_Params
{
};

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.MoveDetails
struct UConsumableInventoryPanel_C_MoveDetails_Params
{
};

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.Construct
struct UConsumableInventoryPanel_C_Construct_Params
{
};

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.Tick
struct UConsumableInventoryPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.RefreshWidget
struct UConsumableInventoryPanel_C_RefreshWidget_Params
{
	class AGlimpsePickup**                             Pickup;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableInventoryPanel.ConsumableInventoryPanel_C.ExecuteUbergraph_ConsumableInventoryPanel
struct UConsumableInventoryPanel_C_ExecuteUbergraph_ConsumableInventoryPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
