
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

// Function DynamicPanel_Slots.DynamicPanel_Slots_C.ShowEquippableSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPanel_Slots_C::ShowEquippableSlot(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicPanel_Slots.DynamicPanel_Slots_C.ShowEquippableSlot");

	UDynamicPanel_Slots_C_ShowEquippableSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicPanel_Slots.DynamicPanel_Slots_C.ShowHighlightedSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InFocus                        (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPanel_Slots_C::ShowHighlightedSlot(int Slot, bool InFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicPanel_Slots.DynamicPanel_Slots_C.ShowHighlightedSlot");

	UDynamicPanel_Slots_C_ShowHighlightedSlot_Params params;
	params.Slot = Slot;
	params.InFocus = InFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicPanel_Slots.DynamicPanel_Slots_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDynamicPanel_Slots_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicPanel_Slots.DynamicPanel_Slots_C.Construct");

	UDynamicPanel_Slots_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicPanel_Slots.DynamicPanel_Slots_C.ExecuteUbergraph_DynamicPanel_Slots
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPanel_Slots_C::ExecuteUbergraph_DynamicPanel_Slots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicPanel_Slots.DynamicPanel_Slots_C.ExecuteUbergraph_DynamicPanel_Slots");

	UDynamicPanel_Slots_C_ExecuteUbergraph_DynamicPanel_Slots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
