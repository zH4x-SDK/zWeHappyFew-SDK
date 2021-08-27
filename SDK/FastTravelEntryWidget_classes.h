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

// WidgetBlueprintGeneratedClass FastTravelEntryWidget.FastTravelEntryWidget_C
// 0x06D0 (0x0C80 - 0x05B0)
class UFastTravelEntryWidget_C : public UFastTravelEntry
{
public:
	unsigned char                                      UnknownData00[0x6D0];                                     // 0x05B0(0x06D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FastTravelEntryWidget.FastTravelEntryWidget_C");
		return ptr;
	}


	void SetCheckboxHovered(bool Hovered);
	void SetHighlighted(bool Highlighted);
	void SetEnabled(bool Enabled);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void UpdateSelected(bool* bInSelected);
	void OnSetupEntry(struct FName* InDisplayName, bool* bInFound, bool* bInActive);
	void UpdateHighlighted(bool* bInHighlighted);
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_FastTravelEntryWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
