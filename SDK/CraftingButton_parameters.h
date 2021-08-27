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

// Function CraftingButton.CraftingButton_C.IsCrafting
struct UCraftingButton_C_IsCrafting_Params
{
	bool                                               IsCrafting;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingButton.CraftingButton_C.Construct
struct UCraftingButton_C_Construct_Params
{
};

// Function CraftingButton.CraftingButton_C.UpdateCanCraft
struct UCraftingButton_C_UpdateCanCraft_Params
{
	bool*                                              bInCanCraft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingButton.CraftingButton_C.OnCraftingError
struct UCraftingButton_C_OnCraftingError_Params
{
};

// Function CraftingButton.CraftingButton_C.ExecuteUbergraph_CraftingButton
struct UCraftingButton_C_ExecuteUbergraph_CraftingButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
