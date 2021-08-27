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

// BlueprintGeneratedClass DumpDoor.DumpDoor_C
// 0x002F (0x0948 - 0x0919)
class ADumpDoor_C : public AInteractiveDoor_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0919(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DumpDoor.DumpDoor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
