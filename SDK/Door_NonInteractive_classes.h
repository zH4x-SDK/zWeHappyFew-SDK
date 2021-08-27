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

// BlueprintGeneratedClass Door_NonInteractive.Door_NonInteractive_C
// 0x00E0 (0x0510 - 0x0430)
class ADoor_NonInteractive_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0430(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_NonInteractive.Door_NonInteractive_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
