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

// WidgetBlueprintGeneratedClass CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C
// 0x0018 (0x05A8 - 0x0590)
class UCustomDifficultyOptionWidget_C : public UNewGameOptionEnumEntry
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0590(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomDifficultyOptionWidget.CustomDifficultyOptionWidget_C");
		return ptr;
	}


	void Construct();
	void OnUpdateOptionText(struct FText* OptionText);
	void OnUpdateWidth(float* Width);
	void ExecuteUbergraph_CustomDifficultyOptionWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
