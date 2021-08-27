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

// BlueprintGeneratedClass FlamingAxe.FlamingAxe_C
// 0x0030 (0x0C20 - 0x0BF0)
class AFlamingAxe_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0BF0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlamingAxe.FlamingAxe_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void ReceiveBeginPlay();
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void OnTrailActivated();
	void OnTrailDeactivated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
