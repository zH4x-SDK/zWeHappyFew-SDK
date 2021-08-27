
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

// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.SetAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InAlignment                    (Parm, ZeroConstructor, IsPlainOldData)

void UNEW_QuickLoot_Items_C::SetAlignment(TEnumAsByte<EHorizontalAlignment> InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.SetAlignment");

	UNEW_QuickLoot_Items_C_SetAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.SetupDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePickup*          Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void UNEW_QuickLoot_Items_C::SetupDisplay(class AGlimpsePickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.SetupDisplay");

	UNEW_QuickLoot_Items_C_SetupDisplay_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.RefreshWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePickup**         Pickup                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNEW_QuickLoot_Items_C::RefreshWidget(class AGlimpsePickup** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.RefreshWidget");

	UNEW_QuickLoot_Items_C_RefreshWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.ExecuteUbergraph_NEW_QuickLoot_Items
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNEW_QuickLoot_Items_C::ExecuteUbergraph_NEW_QuickLoot_Items(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NEW_QuickLoot_Items.NEW_QuickLoot_Items_C.ExecuteUbergraph_NEW_QuickLoot_Items");

	UNEW_QuickLoot_Items_C_ExecuteUbergraph_NEW_QuickLoot_Items_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
