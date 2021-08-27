
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

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBuySellButton_Widget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnFocusReceived");

	UBuySellButton_Widget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.UnHoverReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuySellButton_Widget_C::UnHoverReaction(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.UnHoverReaction");

	UBuySellButton_Widget_C_UnHoverReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.HoverReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuySellButton_Widget_C::HoverReaction(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.HoverReaction");

	UBuySellButton_Widget_C_HoverReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.ReleaseReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuySellButton_Widget_C::ReleaseReaction(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.ReleaseReaction");

	UBuySellButton_Widget_C_ReleaseReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.PressReaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuySellButton_Widget_C::PressReaction(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.PressReaction");

	UBuySellButton_Widget_C_PressReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBuySellButton_Widget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnKeyUp");

	UBuySellButton_Widget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBuySellButton_Widget_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonDoubleClick");

	UBuySellButton_Widget_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBuySellButton_Widget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnKeyDown");

	UBuySellButton_Widget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBuySellButton_Widget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonDown");

	UBuySellButton_Widget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBuySellButton_Widget_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonUp");

	UBuySellButton_Widget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   BuyText                        (Parm)
// struct FText                   SellText                       (Parm)

void UBuySellButton_Widget_C::SetButtonText(const struct FText& BuyText, const struct FText& SellText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.SetButtonText");

	UBuySellButton_Widget_C_SetButtonText_Params params;
	params.BuyText = BuyText;
	params.SellText = SellText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBeBuyState               (Parm, ZeroConstructor, IsPlainOldData)

void UBuySellButton_Widget_C::SetButtonState(bool ShouldBeBuyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.SetButtonState");

	UBuySellButton_Widget_C_SetButtonState_Params params;
	params.ShouldBeBuyState = ShouldBeBuyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (Parm)

void UBuySellButton_Widget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnFocusLost");

	UBuySellButton_Widget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UBuySellButton_Widget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseLeave");

	UBuySellButton_Widget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UBuySellButton_Widget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseEnter");

	UBuySellButton_Widget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.ExecuteUbergraph_BuySellButton_Widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuySellButton_Widget_C::ExecuteUbergraph_BuySellButton_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.ExecuteUbergraph_BuySellButton_Widget");

	UBuySellButton_Widget_C_ExecuteUbergraph_BuySellButton_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuySellButton_Widget.BuySellButton_Widget_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBuySellButton_Widget_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuySellButton_Widget.BuySellButton_Widget_C.Clicked__DelegateSignature");

	UBuySellButton_Widget_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
