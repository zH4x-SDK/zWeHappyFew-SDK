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

// WidgetBlueprintGeneratedClass MapLegendWidget.MapLegendWidget_C
// 0x008D (0x06DD - 0x0650)
class UMapLegendWidget_C : public UMapLegend
{
public:
	unsigned char                                      UnknownData00[0x8D];                                      // 0x0650(0x008D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapLegendWidget.MapLegendWidget_C");
		return ptr;
	}


	struct FEventReply OnMouseMove_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetImageHeight(class UImage* Image, float Height);
	void SetExpanded(bool Expanded, bool Force);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void OnLegendActive(bool* bInActive);
	void UpdateMapName(struct FText* InMapName);
	void OnAnimationFinished(class UWidgetAnimation** Animation);
	void CustomEvent_1();
	void BndEvt__LegendExpandButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_MapLegendWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
