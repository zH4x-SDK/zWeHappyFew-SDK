
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

// Function LoadSlot_Header.LoadSlot_Header_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadSlot_Header_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadSlot_Header.LoadSlot_Header_C.Construct");

	ULoadSlot_Header_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadSlot_Header.LoadSlot_Header_C.RefreshWidget
// (Event, Public, BlueprintEvent)

void ULoadSlot_Header_C::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadSlot_Header.LoadSlot_Header_C.RefreshWidget");

	ULoadSlot_Header_C_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadSlot_Header.LoadSlot_Header_C.SetHighlighted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsHighlighted                  (Parm, ZeroConstructor, IsPlainOldData)

void ULoadSlot_Header_C::SetHighlighted(bool* IsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadSlot_Header.LoadSlot_Header_C.SetHighlighted");

	ULoadSlot_Header_C_SetHighlighted_Params params;
	params.IsHighlighted = IsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadSlot_Header.LoadSlot_Header_C.ExecuteUbergraph_LoadSlot_Header
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULoadSlot_Header_C::ExecuteUbergraph_LoadSlot_Header(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadSlot_Header.LoadSlot_Header_C.ExecuteUbergraph_LoadSlot_Header");

	ULoadSlot_Header_C_ExecuteUbergraph_LoadSlot_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
