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

// WidgetBlueprintGeneratedClass SkillCat_SurvivalOllie.SkillCat_SurvivalOllie_C
// 0x0088 (0x0738 - 0x06B0)
class USkillCat_SurvivalOllie_C : public USkillTreeCategory
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x06B0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillCat_SurvivalOllie.SkillCat_SurvivalOllie_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_SkillCat_SurvivalOllie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
