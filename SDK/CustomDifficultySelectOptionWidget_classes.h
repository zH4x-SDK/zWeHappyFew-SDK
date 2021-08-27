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

// WidgetBlueprintGeneratedClass CustomDifficultySelectOptionWidget.CustomDifficultySelectOptionWidget_C
// 0x007A (0x074A - 0x06D0)
class UCustomDifficultySelectOptionWidget_C : public UNewGameOptionEnum
{
public:
	unsigned char                                      UnknownData00[0x7A];                                      // 0x06D0(0x007A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomDifficultySelectOptionWidget.CustomDifficultySelectOptionWidget_C");
		return ptr;
	}


	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__RightSelectButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
	void OnSetActiveOption(bool* bActive);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_87_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_111_OnButtonHoverEvent__DelegateSignature();
	void UpdateHighlightState();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LeftSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CustomDifficultySelectOptionWidget(int EntryPoint);
	void OnOptionHighlighted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
