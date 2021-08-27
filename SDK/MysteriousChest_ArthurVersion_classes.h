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

// BlueprintGeneratedClass MysteriousChest_ArthurVersion.MysteriousChest_ArthurVersion_C
// 0x0158 (0x09C8 - 0x0870)
class AMysteriousChest_ArthurVersion_C : public AGlimpseLockable
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0870(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MysteriousChest_ArthurVersion.MysteriousChest_ArthurVersion_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
