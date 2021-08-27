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

// WidgetBlueprintGeneratedClass MapWidget.MapWidget_C
// 0x00E0 (0x0B50 - 0x0A70)
class UMapWidget_C : public UGlimpseMapMenu
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0A70(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget.MapWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_SelectLegendEntryInputDisplay_Visibility_2();
	TEnumAsByte<ESlateVisibility> GetControllerVisibility();
	TEnumAsByte<ESlateVisibility> GetVisibility_1();
	TEnumAsByte<ESlateVisibility> Get_SelectLegendIconInputDisplay_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_SelectLegendEntryInputDisplay_Visibility_1();
	void UpdateSafeZone();
	struct FEventReply MapOverlayMapMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	TEnumAsByte<ESlateVisibility> Get_TravelInputParent_Visibility_1();
	struct FText Get_TextBlock_1_Text_1();
	TEnumAsByte<ESlateVisibility> Get_ScrollInputBox_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_SelectLocationBox_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_TravelInputBox_Visibility_1();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__MapZoomSlider_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void OnMapDisplayType(TEnumAsByte<EMapDisplayMode>* InDisplayMode);
	void OnFastTravelClickDenied(TEnumAsByte<EFastTravelDeniedReason>* Reason);
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void BndEvt__ZoomOut_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ZoomIn_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ZoomIn_K2Node_ComponentBoundEvent_63_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ZoomOut_K2Node_ComponentBoundEvent_80_OnButtonReleasedEvent__DelegateSignature();
	void OnMenuShown();
	void ExecuteUbergraph_MapWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
