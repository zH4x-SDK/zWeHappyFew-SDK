
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

// Function DLCMenuWidget.DLCMenuWidget_C.Get_TXT_DLCDescription_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDLCMenuWidget_C::Get_TXT_DLCDescription_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.Get_TXT_DLCDescription_Text_1");

	UDLCMenuWidget_C_Get_TXT_DLCDescription_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DLCMenuWidget.DLCMenuWidget_C.SetDLCRepresentationState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDLCIcon_C*              IconWidget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NavigatingState                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCTypeUI>        DLCType                        (Parm, ZeroConstructor, IsPlainOldData)

void UDLCMenuWidget_C::SetDLCRepresentationState(class UDLCIcon_C* IconWidget, bool Selected, bool NavigatingState, TEnumAsByte<EDLCTypeUI> DLCType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.SetDLCRepresentationState");

	UDLCMenuWidget_C_SetDLCRepresentationState_Params params;
	params.IconWidget = IconWidget;
	params.Selected = Selected;
	params.NavigatingState = NavigatingState;
	params.DLCType = DLCType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.RefreshMenu
// (Event, Protected, BlueprintEvent)

void UDLCMenuWidget_C::RefreshMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.RefreshMenu");

	UDLCMenuWidget_C_RefreshMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__NewGameStartButton_115_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDLCMenuWidget_C::BndEvt__NewGameStartButton_115_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__NewGameStartButton_115_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature");

	UDLCMenuWidget_C_BndEvt__NewGameStartButton_115_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Nick_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature
// (BlueprintEvent)

void UDLCMenuWidget_C::BndEvt__WGT_Nick_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Nick_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature");

	UDLCMenuWidget_C_BndEvt__WGT_Nick_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Houseboys_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature
// (BlueprintEvent)

void UDLCMenuWidget_C::BndEvt__WGT_Houseboys_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Houseboys_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature");

	UDLCMenuWidget_C_BndEvt__WGT_Houseboys_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Victoria_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature
// (BlueprintEvent)

void UDLCMenuWidget_C::BndEvt__WGT_Victoria_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Victoria_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature");

	UDLCMenuWidget_C_BndEvt__WGT_Victoria_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.OnDLCConfirmAttempt
// (Event, Protected, BlueprintEvent)

void UDLCMenuWidget_C::OnDLCConfirmAttempt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.OnDLCConfirmAttempt");

	UDLCMenuWidget_C_OnDLCConfirmAttempt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLCMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.Construct");

	UDLCMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLCMenuWidget.DLCMenuWidget_C.ExecuteUbergraph_DLCMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLCMenuWidget_C::ExecuteUbergraph_DLCMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLCMenuWidget.DLCMenuWidget_C.ExecuteUbergraph_DLCMenuWidget");

	UDLCMenuWidget_C_ExecuteUbergraph_DLCMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
