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

// BlueprintGeneratedClass LightningRod.LightningRod_C
// 0x0054 (0x0C44 - 0x0BF0)
class ALightningRod_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x0BF0(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightningRod.LightningRod_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
