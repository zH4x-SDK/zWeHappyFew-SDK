
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

// Function QuickslotDisplay.QuickslotDisplay_C.SetHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HIGHLIGHT                      (Parm, ZeroConstructor, IsPlainOldData)

void UQuickslotDisplay_C::SetHighlighted(bool HIGHLIGHT)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickslotDisplay.QuickslotDisplay_C.SetHighlighted");

	UQuickslotDisplay_C_SetHighlighted_Params params;
	params.HIGHLIGHT = HIGHLIGHT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickslotDisplay.QuickslotDisplay_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)

void UQuickslotDisplay_C::SetImage(class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickslotDisplay.QuickslotDisplay_C.SetImage");

	UQuickslotDisplay_C_SetImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickslotDisplay.QuickslotDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickslotDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickslotDisplay.QuickslotDisplay_C.Construct");

	UQuickslotDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickslotDisplay.QuickslotDisplay_C.ExecuteUbergraph_QuickslotDisplay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuickslotDisplay_C::ExecuteUbergraph_QuickslotDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickslotDisplay.QuickslotDisplay_C.ExecuteUbergraph_QuickslotDisplay");

	UQuickslotDisplay_C_ExecuteUbergraph_QuickslotDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
