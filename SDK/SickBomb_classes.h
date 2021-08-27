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

// BlueprintGeneratedClass SickBomb.SickBomb_C
// 0x0010 (0x0C00 - 0x0BF0)
class ASickBomb_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BF0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SickBomb.SickBomb_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnContinuousEffect(class APawn** Thrower, class AGlimpseCharacter** AffectedCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
