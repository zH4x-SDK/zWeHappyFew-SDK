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

// Function RecipelistItem.RecipeListItem_C.Get_TutorialGlow_Visibility_1
struct URecipeListItem_C_Get_TutorialGlow_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RecipelistItem.RecipeListItem_C.Construct
struct URecipeListItem_C_Construct_Params
{
};

// Function RecipelistItem.RecipeListItem_C.Tick
struct URecipeListItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecipelistItem.RecipeListItem_C.SetupWidgets
struct URecipeListItem_C_SetupWidgets_Params
{
};

// Function RecipelistItem.RecipeListItem_C.UpdateItem
struct URecipeListItem_C_UpdateItem_Params
{
	class UTexture2D**                                 ItemIcon;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              CanCraft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecipelistItem.RecipeListItem_C.UpdateUnread
struct URecipeListItem_C_UpdateUnread_Params
{
	bool*                                              bUnread;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecipelistItem.RecipeListItem_C.UpdateInteractionState
struct URecipeListItem_C_UpdateInteractionState_Params
{
	TEnumAsByte<EInteractionState>*                    State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RecipelistItem.RecipeListItem_C.ExecuteUbergraph_RecipeListItem
struct URecipeListItem_C_ExecuteUbergraph_RecipeListItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
