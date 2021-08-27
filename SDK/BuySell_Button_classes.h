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

// WidgetBlueprintGeneratedClass BuySell_Button.BuySell_Button_C
// 0x00DD (0x0315 - 0x0238)
class UBuySell_Button_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xDD];                                      // 0x0238(0x00DD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuySell_Button.BuySell_Button_C");
		return ptr;
	}


	void SetHidden(bool Hidden);
	void SetPressed(bool Pressed);
	void UpdateDisplay();
	void SetEnabled(bool Enabled);
	void PushButton();
	void SetBuySellText(const struct FText& ButtonText);
	void SetIsCurrentCategory(bool IsCurrent);
	void SetImage(class UTexture2D* Image);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_BuySell_Button(int EntryPoint);
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
