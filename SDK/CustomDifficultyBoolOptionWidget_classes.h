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

// WidgetBlueprintGeneratedClass CustomDifficultyBoolOptionWidget.CustomDifficultyBoolOptionWidget_C
// 0x0092 (0x06C2 - 0x0630)
class UCustomDifficultyBoolOptionWidget_C : public UNewGameOptionBool
{
public:
	unsigned char                                      UnknownData00[0x92];                                      // 0x0630(0x0092) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomDifficultyBoolOptionWidget.CustomDifficultyBoolOptionWidget_C");
		return ptr;
	}


	void UpdateValueDisplay();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__YesButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature();
	void OnSetActiveOption(bool* bActive);
	void OnValueChanged();
	void BndEvt__NoButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_439_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonHoverEvent__DelegateSignature();
	void UpdateHighlightState();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CustomDifficultyBoolOptionWidget(int EntryPoint);
	void OnOptionHighlighted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
