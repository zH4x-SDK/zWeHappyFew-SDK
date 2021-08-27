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

// BlueprintGeneratedClass BeatUpPOI.BeatUpPOI_C
// 0x0010 (0x0440 - 0x0430)
class ABeatUpPOI_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeatUpPOI.BeatUpPOI_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
