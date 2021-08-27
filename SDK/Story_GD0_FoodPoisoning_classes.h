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

// BlueprintGeneratedClass Story_GD0_FoodPoisoning.Story_GD0_FoodPoisoning_C
// 0x0040 (0x0530 - 0x04F0)
class UStory_GD0_FoodPoisoning_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x04F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Story_GD0_FoodPoisoning.Story_GD0_FoodPoisoning_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
