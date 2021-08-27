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

// BlueprintGeneratedClass Enhanced_Rifle.Enhanced_Rifle_C
// 0x0048 (0x0C38 - 0x0BF0)
class AEnhanced_Rifle_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0BF0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Enhanced_Rifle.Enhanced_Rifle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
