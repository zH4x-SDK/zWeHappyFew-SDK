#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerMenuWidget.PlayerMenuWidget_C
// 0x01F4 (0x0B34 - 0x0940)
class UPlayerMenuWidget_C : public UGlimpsePlayerMenu
{
public:
	unsigned char                                      UnknownData00[0x1F4];                                     // 0x0940(0x01F4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerMenuWidget.PlayerMenuWidget_C");
		return ptr;
	}


	struct FText GetNumUnreadNotesText();
	struct FText GetNumSkillPointsText();
	void SafeZone();
	struct FEventReply OnClosePlayerMenu(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_547_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_564_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_581_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_355_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void OnSubMenuChanged(TEnumAsByte<EPlayerMenu>* MenuType);
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Icon_Button_upgrade_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_PlayerMenuWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
