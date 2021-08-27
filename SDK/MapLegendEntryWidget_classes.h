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

// WidgetBlueprintGeneratedClass MapLegendEntryWidget.MapLegendEntryWidget_C
// 0x0600 (0x0CE0 - 0x06E0)
class UMapLegendEntryWidget_C : public UMapLegendEntry
{
public:
	unsigned char                                      UnknownData00[0x600];                                     // 0x06E0(0x0600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapLegendEntryWidget.MapLegendEntryWidget_C");
		return ptr;
	}


	void SetEntryText(const struct FText& EntryText);
	void UpdateDisplayColors();
	void SetEnabled(bool Enabled);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SetupEntry(struct FText* EntryText, class UTexture2D** EntryIcon, class UTexture2D** SecondaryEntryIcon, bool* EntryEnabled);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void UpdateEntryEnabled(bool* bInEnabled);
	void UpdateSelected(bool* bInSelected);
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void OnCultureChanged(struct FText* EntryText);
	void ExecuteUbergraph_MapLegendEntryWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
