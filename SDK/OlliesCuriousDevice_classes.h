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

// BlueprintGeneratedClass OlliesCuriousDevice.OlliesCuriousDevice_C
// 0x0060 (0x0C50 - 0x0BF0)
class AOlliesCuriousDevice_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0BF0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OlliesCuriousDevice.OlliesCuriousDevice_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
