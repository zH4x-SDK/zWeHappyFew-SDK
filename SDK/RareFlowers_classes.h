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

// BlueprintGeneratedClass RareFlowers.RareFlowers_C
// 0x008C (0x0AB0 - 0x0A24)
class ARareFlowers_C : public ALootablePlant_C
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0A24(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RareFlowers.RareFlowers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
