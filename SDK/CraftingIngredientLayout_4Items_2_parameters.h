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

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.ChopLocationString
struct UCraftingIngredientLayout_4Items_1_C_ChopLocationString_Params
{
	struct FText                                       InText;                                                   // (Parm)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetupIngredient
struct UCraftingIngredientLayout_4Items_1_C_SetupIngredient_Params
{
	TArray<class UWidget*>                             ElementsArray;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FIngredientInfo                             IngredientInfo;                                           // (Parm)
	class UTextBlock*                                  NameWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  AmountsWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      IconWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BagroundWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LineCanCraft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LineCannotCraft;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BackgroundCannotWidget;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Location;                                                 // (Parm)
	class UTextBlock*                                  LocationWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     Border_Ingredient;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetElementsVisible
struct UCraftingIngredientLayout_4Items_1_C_SetElementsVisible_Params
{
	TArray<class UWidget*>                             ElementArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ESlateVisibility>                      Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.Construct
struct UCraftingIngredientLayout_4Items_1_C_Construct_Params
{
};

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetCanCraft
struct UCraftingIngredientLayout_4Items_1_C_SetCanCraft_Params
{
	bool*                                              bCanCraft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetItems
struct UCraftingIngredientLayout_4Items_1_C_SetItems_Params
{
	TArray<struct FIngredientInfo>*                    IngredientList;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.ExecuteUbergraph_CraftingIngredientLayout_4Items_2
struct UCraftingIngredientLayout_4Items_1_C_ExecuteUbergraph_CraftingIngredientLayout_4Items_2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
