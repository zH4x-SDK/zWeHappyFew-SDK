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

// Function QuickSlots.QuickSlots_C.SetNewQuickslotPickupAndActive
struct UQuickSlots_C_SetNewQuickslotPickupAndActive_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActiveSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                slotNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSlots.QuickSlots_C.UpdateDurability
struct UQuickSlots_C_UpdateDurability_Params
{
};

// Function QuickSlots.QuickSlots_C.OnGetPlayerController_1
struct UQuickSlots_C_OnGetPlayerController_1_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuickSlots.QuickSlots_C.Construct
struct UQuickSlots_C_Construct_Params
{
};

// Function QuickSlots.QuickSlots_C.Tick
struct UQuickSlots_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSlots.QuickSlots_C.OnRefresh
struct UQuickSlots_C_OnRefresh_Params
{
};

// Function QuickSlots.QuickSlots_C.OnQuickslotCycled
struct UQuickSlots_C_OnQuickslotCycled_Params
{
	int*                                               I;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickSlots.QuickSlots_C.OnQuickslotUseStart
struct UQuickSlots_C_OnQuickslotUseStart_Params
{
};

// Function QuickSlots.QuickSlots_C.OnSwitchActiveSlot
struct UQuickSlots_C_OnSwitchActiveSlot_Params
{
};

// Function QuickSlots.QuickSlots_C.ExecuteUbergraph_QuickSlots
struct UQuickSlots_C_ExecuteUbergraph_QuickSlots_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
