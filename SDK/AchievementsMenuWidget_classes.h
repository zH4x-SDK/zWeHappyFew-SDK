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

// WidgetBlueprintGeneratedClass AchievementsMenuWidget.AchievementsMenuWidget_C
// 0x0028 (0x05F8 - 0x05D0)
class UAchievementsMenuWidget_C : public UGlimpseAchievementsMenu
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x05D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AchievementsMenuWidget.AchievementsMenuWidget_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_AchievementsMenuWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
