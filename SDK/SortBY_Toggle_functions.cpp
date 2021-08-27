
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

// Function SortBY_Toggle.SortBY_Toggle_C.Get_InputBindingDisplay_18_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> USortBY_Toggle_C::Get_InputBindingDisplay_18_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.Get_InputBindingDisplay_18_Visibility_1");

	USortBY_Toggle_C_Get_InputBindingDisplay_18_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USortBY_Toggle_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnKeyUp");

	USortBY_Toggle_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USortBY_Toggle_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnKeyDown");

	USortBY_Toggle_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SortBY_Toggle.SortBY_Toggle_C.ReleaseReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USortBY_Toggle_C::ReleaseReaction(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.ReleaseReaction");

	USortBY_Toggle_C_ReleaseReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function SortBY_Toggle.SortBY_Toggle_C.PressReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USortBY_Toggle_C::PressReaction(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.PressReaction");

	USortBY_Toggle_C_PressReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function SortBY_Toggle.SortBY_Toggle_C.UnHoverReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USortBY_Toggle_C::UnHoverReaction(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.UnHoverReaction");

	USortBY_Toggle_C_UnHoverReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USortBY_Toggle_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonDoubleClick");

	USortBY_Toggle_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SortBY_Toggle.SortBY_Toggle_C.HoverReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USortBY_Toggle_C::HoverReaction(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.HoverReaction");

	USortBY_Toggle_C_HoverReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USortBY_Toggle_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnFocusReceived");

	USortBY_Toggle_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USortBY_Toggle_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonUp");

	USortBY_Toggle_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USortBY_Toggle_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonDown");

	USortBY_Toggle_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SortBY_Toggle.SortBY_Toggle_C.SetSortedByWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SortByWeight                   (Parm, ZeroConstructor, IsPlainOldData)

void USortBY_Toggle_C::SetSortedByWeight(bool SortByWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.SetSortedByWeight");

	USortBY_Toggle_C_SetSortedByWeight_Params params;
	params.SortByWeight = SortByWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void USortBY_Toggle_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnMouseEnter");

	USortBY_Toggle_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void USortBY_Toggle_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnMouseLeave");

	USortBY_Toggle_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortBY_Toggle.SortBY_Toggle_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (Parm)

void USortBY_Toggle_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.OnFocusLost");

	USortBY_Toggle_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortBY_Toggle.SortBY_Toggle_C.ExecuteUbergraph_SortBY_Toggle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USortBY_Toggle_C::ExecuteUbergraph_SortBY_Toggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.ExecuteUbergraph_SortBY_Toggle");

	USortBY_Toggle_C_ExecuteUbergraph_SortBY_Toggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortBY_Toggle.SortBY_Toggle_C.FocusHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USortBY_Toggle_C::FocusHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.FocusHovered__DelegateSignature");

	USortBY_Toggle_C_FocusHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SortBY_Toggle.SortBY_Toggle_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USortBY_Toggle_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SortBY_Toggle.SortBY_Toggle_C.Clicked__DelegateSignature");

	USortBY_Toggle_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
