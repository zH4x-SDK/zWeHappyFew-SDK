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

// BlueprintGeneratedClass BoneSaw_Doctor.BoneSaw_Doctor_C
// 0x0019 (0x0C09 - 0x0BF0)
class ABoneSaw_Doctor_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0BF0(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneSaw_Doctor.BoneSaw_Doctor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
