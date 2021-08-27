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

// BlueprintGeneratedClass Church_DoubleDoor.Church_DoubleDoor_C
// 0x003F (0x0958 - 0x0919)
class AChurch_DoubleDoor_C : public AInteractiveDoor_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0919(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Church_DoubleDoor.Church_DoubleDoor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
