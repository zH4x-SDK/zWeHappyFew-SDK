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

// BlueprintGeneratedClass FogHarvester.FogHarvester_C
// 0x0020 (0x0C10 - 0x0BF0)
class AFogHarvester_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0BF0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FogHarvester.FogHarvester_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
