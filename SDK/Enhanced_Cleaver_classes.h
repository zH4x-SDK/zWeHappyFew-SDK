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

// BlueprintGeneratedClass Enhanced_Cleaver.Enhanced_Cleaver_C
// 0x0008 (0x0BF8 - 0x0BF0)
class AEnhanced_Cleaver_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BF0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Enhanced_Cleaver.Enhanced_Cleaver_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
