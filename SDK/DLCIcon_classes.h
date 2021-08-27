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

// WidgetBlueprintGeneratedClass DLCIcon.DLCIcon_C
// 0x0193 (0x03CB - 0x0238)
class UDLCIcon_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0238(0x0193) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DLCIcon.DLCIcon_C");
		return ptr;
	}


	void SetIconColourOpacity(const struct FLinearColor& Colour);
	void SetImage(const struct FSlateBrush& Brush);
	void SetStatusText(const struct FText& StatusText);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnSelected(bool IsSelected);
	void ChangeIconState();
	void ExecuteUbergraph_DLCIcon(int EntryPoint);
	void OnIconClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
