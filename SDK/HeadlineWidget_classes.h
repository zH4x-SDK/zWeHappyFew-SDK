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

// WidgetBlueprintGeneratedClass HeadlineWidget.HeadlineWidget_C
// 0x0040 (0x0770 - 0x0730)
class UHeadlineWidget_C : public UGlimpseDeathMenu
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0730(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeadlineWidget.HeadlineWidget_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> GetVisibility_1();
	TEnumAsByte<ESlateVisibility> Get_Border_0_Visibility_1();
	void Construct();
	void ExecuteUbergraph_HeadlineWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
