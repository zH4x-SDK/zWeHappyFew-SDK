
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

// Function PlayerMenuWidget.PlayerMenuWidget_C.GetNumUnreadNotesText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerMenuWidget_C::GetNumUnreadNotesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.GetNumUnreadNotesText");

	UPlayerMenuWidget_C_GetNumUnreadNotesText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.GetNumSkillPointsText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerMenuWidget_C::GetNumSkillPointsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.GetNumSkillPointsText");

	UPlayerMenuWidget_C_GetNumSkillPointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.SafeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerMenuWidget_C::SafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.SafeZone");

	UPlayerMenuWidget_C_SafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.OnClosePlayerMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPlayerMenuWidget_C::OnClosePlayerMenu(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.OnClosePlayerMenu");

	UPlayerMenuWidget_C_OnClosePlayerMenu_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.Construct");

	UPlayerMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.Tick");

	UPlayerMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_547_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_547_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_547_OnButtonClickedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_547_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_564_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_564_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_564_OnButtonClickedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_564_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_581_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_581_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_581_OnButtonClickedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_581_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_355_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_355_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_355_OnButtonClickedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_355_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.OnSubMenuChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerMenu>*      MenuType                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMenuWidget_C::OnSubMenuChanged(TEnumAsByte<EPlayerMenu>* MenuType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.OnSubMenuChanged");

	UPlayerMenuWidget_C_OnSubMenuChanged_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.OnViewportResize_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMenuWidget_C::OnViewportResize_Event_1(const struct FVector2D& NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.OnViewportResize_Event_1");

	UPlayerMenuWidget_C_OnViewportResize_Event_1_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_upgrade_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerMenuWidget_C::BndEvt__Icon_Button_upgrade_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_upgrade_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature");

	UPlayerMenuWidget_C_BndEvt__Icon_Button_upgrade_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerMenuWidget.PlayerMenuWidget_C.ExecuteUbergraph_PlayerMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMenuWidget_C::ExecuteUbergraph_PlayerMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerMenuWidget.PlayerMenuWidget_C.ExecuteUbergraph_PlayerMenuWidget");

	UPlayerMenuWidget_C_ExecuteUbergraph_PlayerMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
