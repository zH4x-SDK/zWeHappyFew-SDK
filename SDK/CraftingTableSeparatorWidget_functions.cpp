
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

// Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.OnSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECraftingStation>* InCraftingStation              (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingTableSeparatorWidget_C::OnSetup(TEnumAsByte<ECraftingStation>* InCraftingStation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.OnSetup");

	UCraftingTableSeparatorWidget_C_OnSetup_Params params;
	params.InCraftingStation = InCraftingStation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.OnCraftingTableAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bAvailablehil                  (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingTableSeparatorWidget_C::OnCraftingTableAvailable(bool* bAvailablehil)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.OnCraftingTableAvailable");

	UCraftingTableSeparatorWidget_C_OnCraftingTableAvailable_Params params;
	params.bAvailablehil = bAvailablehil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.ExecuteUbergraph_CraftingTableSeparatorWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingTableSeparatorWidget_C::ExecuteUbergraph_CraftingTableSeparatorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingTableSeparatorWidget.CraftingTableSeparatorWidget_C.ExecuteUbergraph_CraftingTableSeparatorWidget");

	UCraftingTableSeparatorWidget_C_ExecuteUbergraph_CraftingTableSeparatorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
