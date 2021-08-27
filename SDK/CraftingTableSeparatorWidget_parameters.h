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

// Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.OnSetup
struct UCraftingTableSeparatorWidget_C_OnSetup_Params
{
	TEnumAsByte<ECraftingStation>*                     InCraftingStation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.OnCraftingTableAvailable
struct UCraftingTableSeparatorWidget_C_OnCraftingTableAvailable_Params
{
	bool*                                              bAvailablehil;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.ExecuteUbergraph_CraftingTableSeparatorWidget
struct UCraftingTableSeparatorWidget_C_ExecuteUbergraph_CraftingTableSeparatorWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
