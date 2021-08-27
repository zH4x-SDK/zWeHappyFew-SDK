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

// BlueprintGeneratedClass ValveWheel_Broken.ValveWheel_Broken_C
// 0x008B (0x04BB - 0x0430)
class AValveWheel_Broken_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8B];                                      // 0x0430(0x008B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ValveWheel_Broken.ValveWheel_Broken_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
