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

// WidgetBlueprintGeneratedClass LightHUDWidget.LightHUDWidget_C
// 0x031C (0x0D7C - 0x0A60)
class ULightHUDWidget_C : public UGlimpseHUDWidget
{
public:
	unsigned char                                      UnknownData00[0x31C];                                     // 0x0A60(0x031C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LightHUDWidget.LightHUDWidget_C");
		return ptr;
	}


	void UpdateInteractionTextColor();
	TEnumAsByte<ESlateVisibility> Get_StatusEffectGrid_Visibility_1();
	TEnumAsByte<ESlateVisibility> Get_JoyIndicatorWidgetMade_Visibility_1();
	float Get_MainFillAndBase_Percent_1();
	void UpdateSafeZoneSizing();
	TEnumAsByte<ESlateVisibility> GetStealthVignetteVisibility();
	struct FSlateBrush Get_Level0_Brush_1();
	void Construct();
	void UpdateCountdownWidget(bool* Show, struct FText* TimeString, bool* danger);
	void UpdatePlayerVisibility(TEnumAsByte<EHUDPlayerVisibility>* CurrentVisibility);
	void UpdatePlayerLoudness(TEnumAsByte<EHUDPlayerLoudness>* CurrentLoudness);
	void UpdatePlayerSuspicion(TEnumAsByte<EHUDPlayerSuspicion>* CurrentSuspicion);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnViewportResize_Event_1(const struct FVector2D& NewSize);
	void ExecuteUbergraph_LightHUDWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
