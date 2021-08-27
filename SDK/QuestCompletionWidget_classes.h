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

// WidgetBlueprintGeneratedClass QuestCompletionWidget.QuestCompletionWidget_C
// 0x0078 (0x1458 - 0x13E0)
class UQuestCompletionWidget_C : public UQuestCompletionWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x13E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestCompletionWidget.QuestCompletionWidget_C");
		return ptr;
	}


	void FadeInSoundEvent();
	void HasQuestRewards();
	class AGlimpsePlayerController* OnGetPlayerController_1();
	void Construct();
	void OnAnimationFinished(class UWidgetAnimation** Animation);
	void OnAnimationStarted(class UWidgetAnimation** Animation);
	void ExecuteUbergraph_QuestCompletionWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
