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

// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.SetAlignment
struct UNEW_QuickLoot_Items_C_SetAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InAlignment;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.SetupDisplay
struct UNEW_QuickLoot_Items_C_SetupDisplay_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.RefreshWidget
struct UNEW_QuickLoot_Items_C_RefreshWidget_Params
{
	class AGlimpsePickup**                             Pickup;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.ExecuteUbergraph_NEW_QuickLoot_Items
struct UNEW_QuickLoot_Items_C_ExecuteUbergraph_NEW_QuickLoot_Items_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
