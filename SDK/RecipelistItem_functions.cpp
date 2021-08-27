
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

// Function RecipelistItem.RecipeListItem_C.Get_TutorialGlow_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> URecipeListItem_C::Get_TutorialGlow_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.Get_TutorialGlow_Visibility_1");

	URecipeListItem_C_Get_TutorialGlow_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RecipelistItem.RecipeListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URecipeListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.Construct");

	URecipeListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipelistItem.RecipeListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void URecipeListItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.Tick");

	URecipeListItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipelistItem.RecipeListItem_C.SetupWidgets
// (Event, Public, BlueprintEvent)

void URecipeListItem_C::SetupWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.SetupWidgets");

	URecipeListItem_C_SetupWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipelistItem.RecipeListItem_C.UpdateItem
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UTexture2D**             ItemIcon                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  ItemName                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          CanCraft                       (Parm, ZeroConstructor, IsPlainOldData)

void URecipeListItem_C::UpdateItem(class UTexture2D** ItemIcon, struct FText* ItemName, bool* CanCraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.UpdateItem");

	URecipeListItem_C_UpdateItem_Params params;
	params.ItemIcon = ItemIcon;
	params.ItemName = ItemName;
	params.CanCraft = CanCraft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipelistItem.RecipeListItem_C.UpdateUnread
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bUnread                        (Parm, ZeroConstructor, IsPlainOldData)

void URecipeListItem_C::UpdateUnread(bool* bUnread)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.UpdateUnread");

	URecipeListItem_C_UpdateUnread_Params params;
	params.bUnread = bUnread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipelistItem.RecipeListItem_C.UpdateInteractionState
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInteractionState>* State                          (Parm, ZeroConstructor, IsPlainOldData)

void URecipeListItem_C::UpdateInteractionState(TEnumAsByte<EInteractionState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.UpdateInteractionState");

	URecipeListItem_C_UpdateInteractionState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipelistItem.RecipeListItem_C.ExecuteUbergraph_RecipeListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URecipeListItem_C::ExecuteUbergraph_RecipeListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipelistItem.RecipeListItem_C.ExecuteUbergraph_RecipeListItem");

	URecipeListItem_C_ExecuteUbergraph_RecipeListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
