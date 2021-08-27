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

// BlueprintGeneratedClass PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C
// 0x0011 (0x0091 - 0x0080)
class UPredicateSpawnerPickupPickedUp_C : public UQuestPredicateBlueprint
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0080(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PredicateSpawnerPickupPickedUp.PredicateSpawnerPickupPickedUp_C");
		return ptr;
	}


	bool ReceiveTest();
	void ReceiveBind();
	void ReceiveUnbind();
	void OnPickedUp(class APawn* PickupSource, class AGlimpsePickup* Pickup);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
