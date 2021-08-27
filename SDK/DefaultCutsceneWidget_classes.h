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

// WidgetBlueprintGeneratedClass DefaultCutsceneWidget.DefaultCutsceneWidget_C
// 0x0038 (0x05C8 - 0x0590)
class UDefaultCutsceneWidget_C : public UCutsceneWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0590(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefaultCutsceneWidget.DefaultCutsceneWidget_C");
		return ptr;
	}


	void UpdateSkipProgress(float progress);
	void SetSkipProgress(float* progress);
	void ExecuteUbergraph_DefaultCutsceneWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
