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

// BlueprintGeneratedClass ParadeShelter_HappyMeter.ParadeShelter_HappyMeter_C
// 0x0090 (0x04C0 - 0x0430)
class AParadeShelter_HappyMeter_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0430(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ParadeShelter_HappyMeter.ParadeShelter_HappyMeter_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
