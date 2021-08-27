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

// BlueprintGeneratedClass DigSpot_Walkabout.DigSpot_Walkabout_C
// 0x0048 (0x0478 - 0x0430)
class ADigSpot_Walkabout_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0430(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DigSpot_Walkabout.DigSpot_Walkabout_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
