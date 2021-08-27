
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

// Function RecipeStatusEffectWidget.RecipeStatusEffectWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URecipeStatusEffectWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipeStatusEffectWidget.RecipeStatusEffectWidget_C.Construct");

	URecipeStatusEffectWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipeStatusEffectWidget.RecipeStatusEffectWidget_C.ExecuteUbergraph_RecipeStatusEffectWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URecipeStatusEffectWidget_C::ExecuteUbergraph_RecipeStatusEffectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipeStatusEffectWidget.RecipeStatusEffectWidget_C.ExecuteUbergraph_RecipeStatusEffectWidget");

	URecipeStatusEffectWidget_C_ExecuteUbergraph_RecipeStatusEffectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
