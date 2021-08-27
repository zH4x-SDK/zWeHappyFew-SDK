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

// BlueprintGeneratedClass GoldenScourge.GoldenScourge_C
// 0x0018 (0x0C08 - 0x0BF0)
class AGoldenScourge_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0BF0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GoldenScourge.GoldenScourge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEquipVO(class AGlimpseCharacter* CharacterOwner);
	void OnUnequipVO(class AGlimpseCharacter* CharacterOwner);
	void PlayVO();
	void ExecuteUbergraph_GoldenScourge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
