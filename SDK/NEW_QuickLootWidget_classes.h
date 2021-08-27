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

// WidgetBlueprintGeneratedClass NEW_QuickLootWidget.NEW_QuickLootWidget_C
// 0x0080 (0x1410 - 0x1390)
class UNEW_QuickLootWidget_C : public UQuickLoot
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x1390(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NEW_QuickLootWidget.NEW_QuickLootWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetVisibility_1();
	class AGlimpsePlayerController* OnGetPlayerController_1();
	void Construct();
	void ExecuteUbergraph_NEW_QuickLootWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
