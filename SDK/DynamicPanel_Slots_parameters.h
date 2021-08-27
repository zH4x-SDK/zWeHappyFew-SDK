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

// Function DynamicPanel_Slots.DynamicPanel_Slots_C.ShowEquippableSlot
struct UDynamicPanel_Slots_C_ShowEquippableSlot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicPanel_Slots.DynamicPanel_Slots_C.ShowHighlightedSlot
struct UDynamicPanel_Slots_C_ShowHighlightedSlot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InFocus;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicPanel_Slots.DynamicPanel_Slots_C.Construct
struct UDynamicPanel_Slots_C_Construct_Params
{
};

// Function DynamicPanel_Slots.DynamicPanel_Slots_C.ExecuteUbergraph_DynamicPanel_Slots
struct UDynamicPanel_Slots_C_ExecuteUbergraph_DynamicPanel_Slots_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
