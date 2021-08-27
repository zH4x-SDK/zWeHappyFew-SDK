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

// BlueprintGeneratedClass Door_NonInteractive_DoubleSlidingDoor.Door_NonInteractive_DoubleSlidingDoor_C
// 0x0028 (0x0538 - 0x0510)
class ADoor_NonInteractive_DoubleSlidingDoor_C : public ADoor_NonInteractive_C
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0510(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_NonInteractive_DoubleSlidingDoor.Door_NonInteractive_DoubleSlidingDoor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
