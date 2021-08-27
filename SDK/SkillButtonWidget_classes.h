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

// WidgetBlueprintGeneratedClass SkillButtonWidget.SkillButtonWidget_C
// 0x007C (0x06CC - 0x0650)
class USkillButtonWidget_C : public USkillButton
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0650(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillButtonWidget.SkillButtonWidget_C");
		return ptr;
	}


	void UpdateSelectedDisplay();
	void OnSetupSkillDisplay(struct FSlateBrush* SkillBrush, bool* InSkillAvailable, bool* InSkillBought);
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void OnSelectionChanged(bool* bSelected);
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SkillButtonWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
