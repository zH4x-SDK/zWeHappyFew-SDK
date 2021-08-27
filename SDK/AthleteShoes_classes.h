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

// BlueprintGeneratedClass AthleteShoes.AthleteShoes_C
// 0x000C (0x07BC - 0x07B0)
class AAthleteShoes_C : public AGlimpsePickupOutfit
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x07B0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthleteShoes.AthleteShoes_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void ReceiveTick(float* DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
