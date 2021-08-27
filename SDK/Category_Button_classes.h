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

// WidgetBlueprintGeneratedClass Category_Button.Category_Button_C
// 0x00B8 (0x02F0 - 0x0238)
class UCategory_Button_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0238(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Category_Button.Category_Button_C");
		return ptr;
	}


	void Button_push();
	void SetIsCurrentCategory(bool IsCurrent);
	void SetImage(class UTexture2D* Image);
	void Unhovered();
	void Unclicked();
	void Clicked();
	void Hovered();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_Category_Button(int EntryPoint);
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
