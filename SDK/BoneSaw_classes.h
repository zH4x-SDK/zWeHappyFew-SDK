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

// BlueprintGeneratedClass BoneSaw.BoneSaw_C
// 0x0088 (0x0C78 - 0x0BF0)
class ABoneSaw_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0BF0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneSaw.BoneSaw_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
