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

// WidgetBlueprintGeneratedClass StatusEffectDetailsWidget.StatusEffectDetailsWidget_C
// 0x00A3 (0x0873 - 0x07D0)
class UStatusEffectDetailsWidget_C : public UStatusEffectDetailsBase
{
public:
	unsigned char                                      UnknownData00[0xA3];                                      // 0x07D0(0x00A3) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusEffectDetailsWidget.StatusEffectDetailsWidget_C");
		return ptr;
	}


	void UpdateBackground();
	TEnumAsByte<ESlateVisibility> Get_NotificationIcon_Visibility_1();
	void UpdateSelected(bool Selected);
	void UpdateStatusDisplay(TEnumAsByte<EStatusEffectType> StatusType);
	void UpdateText();
	void Construct();
	void OnIconChanged(struct FSlateBrush* InIcon, bool* bInHasIcon);
	void OnNameChanged(struct FText* InEffectName);
	void OnDescriptionChanged(struct FText* InEffectDescription);
	void OnStatusChanged(TEnumAsByte<EStatusEffectType>* InStatusType);
	void SetSelected(bool* bInSelected);
	void BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InvisibleOverlayButton_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_StatusEffectDetailsWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
