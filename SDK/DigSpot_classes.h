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

// BlueprintGeneratedClass DigSpot.DigSpot_C
// 0x0180 (0x05B0 - 0x0430)
class ADigSpot_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0430(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DigSpot.DigSpot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
