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

// WidgetBlueprintGeneratedClass InGameTipWidget.InGameTipWidget_C
// 0x0018 (0x0278 - 0x0260)
class UInGameTipWidget_C : public UGlimpseInGameTip
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0260(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InGameTipWidget.InGameTipWidget_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_InGameTipWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
