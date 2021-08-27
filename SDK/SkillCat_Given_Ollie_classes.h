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

// WidgetBlueprintGeneratedClass SkillCat_Given_Ollie.SkillCat_Given_Ollie_C
// 0x0048 (0x06F8 - 0x06B0)
class USkillCat_Given_Ollie_C : public USkillTreeCategory
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x06B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillCat_Given_Ollie.SkillCat_Given_Ollie_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_SkillCat_Given_Ollie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
