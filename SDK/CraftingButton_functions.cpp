
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

// Function CraftingButton.CraftingButton_C.IsCrafting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCrafting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCraftingButton_C::IsCrafting(bool* IsCrafting)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingButton.CraftingButton_C.IsCrafting");

	UCraftingButton_C_IsCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrafting != nullptr)
		*IsCrafting = params.IsCrafting;
}


// Function CraftingButton.CraftingButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftingButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingButton.CraftingButton_C.Construct");

	UCraftingButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingButton.CraftingButton_C.UpdateCanCraft
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInCanCraft                    (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingButton_C::UpdateCanCraft(bool* bInCanCraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingButton.CraftingButton_C.UpdateCanCraft");

	UCraftingButton_C_UpdateCanCraft_Params params;
	params.bInCanCraft = bInCanCraft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingButton.CraftingButton_C.OnCraftingError
// (Event, Public, BlueprintEvent)

void UCraftingButton_C::OnCraftingError()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingButton.CraftingButton_C.OnCraftingError");

	UCraftingButton_C_OnCraftingError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingButton.CraftingButton_C.ExecuteUbergraph_CraftingButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingButton_C::ExecuteUbergraph_CraftingButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingButton.CraftingButton_C.ExecuteUbergraph_CraftingButton");

	UCraftingButton_C_ExecuteUbergraph_CraftingButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
