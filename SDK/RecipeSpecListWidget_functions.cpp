
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

// Function RecipeSpecListWidget.RecipeSpecListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URecipeSpecListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipeSpecListWidget.RecipeSpecListWidget_C.Construct");

	URecipeSpecListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RecipeSpecListWidget.RecipeSpecListWidget_C.ExecuteUbergraph_RecipeSpecListWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URecipeSpecListWidget_C::ExecuteUbergraph_RecipeSpecListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RecipeSpecListWidget.RecipeSpecListWidget_C.ExecuteUbergraph_RecipeSpecListWidget");

	URecipeSpecListWidget_C_ExecuteUbergraph_RecipeSpecListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
