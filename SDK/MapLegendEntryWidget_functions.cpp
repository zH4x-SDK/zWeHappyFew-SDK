
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

// Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetEntryText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   EntryText                      (Parm)

void UMapLegendEntryWidget_C::SetEntryText(const struct FText& EntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetEntryText");

	UMapLegendEntryWidget_C_SetEntryText_Params params;
	params.EntryText = EntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateDisplayColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapLegendEntryWidget_C::UpdateDisplayColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateDisplayColors");

	UMapLegendEntryWidget_C_UpdateDisplayColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendEntryWidget_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetEnabled");

	UMapLegendEntryWidget_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapLegendEntryWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.Construct");

	UMapLegendEntryWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendEntryWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.Tick");

	UMapLegendEntryWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetupEntry
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  EntryText                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UTexture2D**             EntryIcon                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             SecondaryEntryIcon             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EntryEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendEntryWidget_C::SetupEntry(struct FText* EntryText, class UTexture2D** EntryIcon, class UTexture2D** SecondaryEntryIcon, bool* EntryEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.SetupEntry");

	UMapLegendEntryWidget_C_SetupEntry_Params params;
	params.EntryText = EntryText;
	params.EntryIcon = EntryIcon;
	params.SecondaryEntryIcon = SecondaryEntryIcon;
	params.EntryEnabled = EntryEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapLegendEntryWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UMapLegendEntryWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateEntryEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendEntryWidget_C::UpdateEntryEnabled(bool* bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateEntryEnabled");

	UMapLegendEntryWidget_C_UpdateEntryEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendEntryWidget_C::UpdateSelected(bool* bInSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.UpdateSelected");

	UMapLegendEntryWidget_C_UpdateSelected_Params params;
	params.bInSelected = bInSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapLegendEntryWidget_C::BndEvt__OverlayButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UMapLegendEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapLegendEntryWidget_C::BndEvt__OverlayButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.BndEvt__OverlayButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	UMapLegendEntryWidget_C_BndEvt__OverlayButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.OnCultureChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  EntryText                      (ConstParm, Parm, OutParm, ReferenceParm)

void UMapLegendEntryWidget_C::OnCultureChanged(struct FText* EntryText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.OnCultureChanged");

	UMapLegendEntryWidget_C_OnCultureChanged_Params params;
	params.EntryText = EntryText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendEntryWidget.MapLegendEntryWidget_C.ExecuteUbergraph_MapLegendEntryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendEntryWidget_C::ExecuteUbergraph_MapLegendEntryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendEntryWidget.MapLegendEntryWidget_C.ExecuteUbergraph_MapLegendEntryWidget");

	UMapLegendEntryWidget_C_ExecuteUbergraph_MapLegendEntryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
