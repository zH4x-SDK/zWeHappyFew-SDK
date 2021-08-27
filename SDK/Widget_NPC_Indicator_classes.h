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

// WidgetBlueprintGeneratedClass Widget_NPC_Indicator.Widget_NPC_Indicator_C
// 0x0128 (0x07B8 - 0x0690)
class UWidget_NPC_Indicator_C : public UNPCIndicator
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0690(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_NPC_Indicator.Widget_NPC_Indicator_C");
		return ptr;
	}


	void InitializeNativeVariables();
	void UpdateCriticalHealthStatus();
	void UpdateTiers(int NewTier);
	void ConvertAreaToHeightOfTriangle(float InAreaFill, float InTheta, float* OutFillHeight);
	void ShouldShowHealthAndArmour(bool* Show);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnSetSuspicionProgress(float* progress);
	void OnSetAgressionProgress(float* progress);
	void OnSetIndicatorMode(TEnumAsByte<ENPCIndicatorState>* Mode);
	void OnSetNPCOffscreen(bool* offscreen, float* Angle);
	void OnSetNPCDistance(float* Distance);
	void OnSetNPCHealthAmount(float* normalisedHealth, float* actualHealth, int* InTier);
	void ExecuteUbergraph_Widget_NPC_Indicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
