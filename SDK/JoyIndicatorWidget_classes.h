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

// WidgetBlueprintGeneratedClass JoyIndicatorWidget.JoyIndicatorWidget_C
// 0x0050 (0x05D0 - 0x0580)
class UJoyIndicatorWidget_C : public UJoyHUDIndicator
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0580(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JoyIndicatorWidget.JoyIndicatorWidget_C");
		return ptr;
	}


	void Construct();
	void OnSetToxicityFill(float* progress);
	void OnSetJoyFill(float* progress);
	void OnSetIndicatorMode(TEnumAsByte<EHUDJoyIndicatorState>* Mode);
	void ExecuteUbergraph_JoyIndicatorWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
