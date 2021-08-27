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

// BlueprintGeneratedClass LootablePlant.LootablePlant_C
// 0x0024 (0x0A24 - 0x0A00)
class ALootablePlant_C : public AGlimpseLootable
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0A00(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootablePlant.LootablePlant_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoot(class AGlimpsePlayerController** PlayerController);
	void UpdateLootableState(bool* bIsLooted);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
