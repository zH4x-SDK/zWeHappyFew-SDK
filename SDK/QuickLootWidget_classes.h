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

// WidgetBlueprintGeneratedClass QuickLootWidget.QuickLootWidget_C
// 0x0008 (0x1398 - 0x1390)
class UQuickLootWidget_C : public UQuickLoot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickLootWidget.QuickLootWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
