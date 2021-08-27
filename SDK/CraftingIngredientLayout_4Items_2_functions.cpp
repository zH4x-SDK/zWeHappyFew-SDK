
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.ChopLocationString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm)
// struct FText                   OutText                        (Parm, OutParm)

void UCraftingIngredientLayout_4Items_1_C::ChopLocationString(const struct FText& InText, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.ChopLocationString");

	UCraftingIngredientLayout_4Items_1_C_ChopLocationString_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetupIngredient
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         ElementsArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FIngredientInfo         IngredientInfo                 (Parm)
// class UTextBlock*              NameWidget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              AmountsWidget                  (Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  IconWidget                     (Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  BagroundWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  LineCanCraft                   (Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  LineCannotCraft                (Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  BackgroundCannotWidget         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Location                       (Parm)
// class UTextBlock*              LocationWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBorder*                 Border_Ingredient              (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingIngredientLayout_4Items_1_C::SetupIngredient(const struct FIngredientInfo& IngredientInfo, class UTextBlock* NameWidget, class UTextBlock* AmountsWidget, class UImage* IconWidget, class UImage* BagroundWidget, class UImage* LineCanCraft, class UImage* LineCannotCraft, class UImage* BackgroundCannotWidget, const struct FText& Location, class UTextBlock* LocationWidget, class UBorder* Border_Ingredient, TArray<class UWidget*>* ElementsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetupIngredient");

	UCraftingIngredientLayout_4Items_1_C_SetupIngredient_Params params;
	params.IngredientInfo = IngredientInfo;
	params.NameWidget = NameWidget;
	params.AmountsWidget = AmountsWidget;
	params.IconWidget = IconWidget;
	params.BagroundWidget = BagroundWidget;
	params.LineCanCraft = LineCanCraft;
	params.LineCannotCraft = LineCannotCraft;
	params.BackgroundCannotWidget = BackgroundCannotWidget;
	params.Location = Location;
	params.LocationWidget = LocationWidget;
	params.Border_Ingredient = Border_Ingredient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementsArray != nullptr)
		*ElementsArray = params.ElementsArray;
}


// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetElementsVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         ElementArray                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ESlateVisibility>  Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingIngredientLayout_4Items_1_C::SetElementsVisible(TEnumAsByte<ESlateVisibility> Visible, TArray<class UWidget*>* ElementArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetElementsVisible");

	UCraftingIngredientLayout_4Items_1_C_SetElementsVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementArray != nullptr)
		*ElementArray = params.ElementArray;
}


// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftingIngredientLayout_4Items_1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.Construct");

	UCraftingIngredientLayout_4Items_1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetCanCraft
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanCraft                      (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingIngredientLayout_4Items_1_C::SetCanCraft(bool* bCanCraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetCanCraft");

	UCraftingIngredientLayout_4Items_1_C_SetCanCraft_Params params;
	params.bCanCraft = bCanCraft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetItems
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FIngredientInfo>* IngredientList                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCraftingIngredientLayout_4Items_1_C::SetItems(TArray<struct FIngredientInfo>* IngredientList)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.SetItems");

	UCraftingIngredientLayout_4Items_1_C_SetItems_Params params;
	params.IngredientList = IngredientList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.ExecuteUbergraph_CraftingIngredientLayout_4Items_2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingIngredientLayout_4Items_1_C::ExecuteUbergraph_CraftingIngredientLayout_4Items_2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredientLayout_4Items_2.CraftingIngredientLayout_4Items_1_C.ExecuteUbergraph_CraftingIngredientLayout_4Items_2");

	UCraftingIngredientLayout_4Items_1_C_ExecuteUbergraph_CraftingIngredientLayout_4Items_2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
