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

// WidgetBlueprintGeneratedClass SkillConnectionWidget.SkillConnectionWidget_C
// 0x0019 (0x0629 - 0x0610)
class USkillConnectionWidget_C : public USkillConnection
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0610(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillConnectionWidget.SkillConnectionWidget_C");
		return ptr;
	}


	void OnUpdateDisplay(bool* ConnectedSkillAvailable, bool* ConnectedSkillBought);
	void ExecuteUbergraph_SkillConnectionWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
