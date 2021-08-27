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

// WidgetBlueprintGeneratedClass SkillCat_Unlock_Arthur.SkillCat_Unlock_Arthur_C
// 0x0040 (0x06F0 - 0x06B0)
class USkillCat_Unlock_Arthur_C : public USkillTreeCategory
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x06B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillCat_Unlock_Arthur.SkillCat_Unlock_Arthur_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_SkillCat_Unlock_Arthur(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
