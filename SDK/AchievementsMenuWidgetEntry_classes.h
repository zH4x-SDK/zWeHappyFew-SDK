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

// WidgetBlueprintGeneratedClass AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C
// 0x0030 (0x0610 - 0x05E0)
class UAchievementsMenuWidgetEntry_C : public UGlimpseAchievementsListEntry
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x05E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C");
		return ptr;
	}


	void Construct();
	void BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void SetupEntry(struct FText* AchievementName, struct FText* AchievementDescription, class UTexture2D** AchievementIcon);
	void ExecuteUbergraph_AchievementsMenuWidgetEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
