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

// BlueprintGeneratedClass Village_BasicWindow.Village_BasicWindow_C
// 0x0050 (0x08C0 - 0x0870)
class AVillage_BasicWindow_C : public AGlimpseLockable
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0870(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Village_BasicWindow.Village_BasicWindow_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
