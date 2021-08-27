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

// BlueprintGeneratedClass FlamingLeadPipe.FlamingLeadPipe_C
// 0x0040 (0x0C30 - 0x0BF0)
class AFlamingLeadPipe_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0BF0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlamingLeadPipe.FlamingLeadPipe_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTrailActivated();
	void OnTrailDeactivated();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void ReceiveBeginPlay();
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
