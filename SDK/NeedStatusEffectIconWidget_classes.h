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

// WidgetBlueprintGeneratedClass NeedStatusEffectIconWidget.NeedStatusEffectIconWidget_C
// 0x0040 (0x08D0 - 0x0890)
class UNeedStatusEffectIconWidget_C : public UStatusEffectIconBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0890(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NeedStatusEffectIconWidget.NeedStatusEffectIconWidget_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_NeedStatusEffectIconWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
