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

// BlueprintGeneratedClass Village_BasicDoor.Village_BasicDoor_C
// 0x001F (0x0938 - 0x0919)
class AVillage_BasicDoor_C : public AInteractiveDoor_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0919(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Village_BasicDoor.Village_BasicDoor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
