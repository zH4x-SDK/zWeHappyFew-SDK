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

// WidgetBlueprintGeneratedClass SkillSpecs.SkillSpecs_C
// 0x0028 (0x05A8 - 0x0580)
class USkillSpecs_C : public USkillInfoSpecEntry
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0580(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillSpecs.SkillSpecs_C");
		return ptr;
	}


	class AGlimpsePlayerController* On_SpecInfoText_GetPlayerController_1();
	struct FText Get_SpecInfoText_Text_1();
	void DisplayInfo(struct FText* InfoText);
	void ExecuteUbergraph_SkillSpecs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
