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

// BlueprintGeneratedClass MushroomLog3.MushroomLog3_C
// 0x01B8 (0x06A8 - 0x04F0)
class UMushroomLog3_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x04F0(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MushroomLog3.MushroomLog3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
