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

// BlueprintGeneratedClass Jubilator_panel.Jubilator_panel_C
// 0x0018 (0x0888 - 0x0870)
class AJubilator_panel_C : public AGlimpseLockable
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0870(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Jubilator_panel.Jubilator_panel_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
