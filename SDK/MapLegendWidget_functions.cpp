
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

// Function MapLegendWidget.MapLegendWidget_C.OnMouseMove_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMapLegendWidget_C::OnMouseMove_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.OnMouseMove_1");

	UMapLegendWidget_C_OnMouseMove_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapLegendWidget.MapLegendWidget_C.SetImageHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendWidget_C::SetImageHeight(class UImage* Image, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.SetImageHeight");

	UMapLegendWidget_C_SetImageHeight_Params params;
	params.Image = Image;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.SetExpanded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Expanded                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendWidget_C::SetExpanded(bool Expanded, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.SetExpanded");

	UMapLegendWidget_C_SetExpanded_Params params;
	params.Expanded = Expanded;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapLegendWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.Construct");

	UMapLegendWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.Tick");

	UMapLegendWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapLegendWidget_C::BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UMapLegendWidget_C_BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.OnLegendActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInActive                      (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendWidget_C::OnLegendActive(bool* bInActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.OnLegendActive");

	UMapLegendWidget_C_OnLegendActive_Params params;
	params.bInActive = bInActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.UpdateMapName
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InMapName                      (ConstParm, Parm, OutParm, ReferenceParm)

void UMapLegendWidget_C::UpdateMapName(struct FText* InMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.UpdateMapName");

	UMapLegendWidget_C_UpdateMapName_Params params;
	params.InMapName = InMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.OnAnimationFinished");

	UMapLegendWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UMapLegendWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.CustomEvent_1");

	UMapLegendWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapLegendWidget_C::BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UMapLegendWidget_C_BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapLegendWidget.MapLegendWidget_C.ExecuteUbergraph_MapLegendWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapLegendWidget_C::ExecuteUbergraph_MapLegendWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapLegendWidget.MapLegendWidget_C.ExecuteUbergraph_MapLegendWidget");

	UMapLegendWidget_C_ExecuteUbergraph_MapLegendWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
