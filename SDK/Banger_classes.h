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

// BlueprintGeneratedClass Banger.Banger_C
// 0x0034 (0x0C24 - 0x0BF0)
class ABanger_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0BF0(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Banger.Banger_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveOnHitThrow(class APawn** InstigatorPawn);
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature(class AGlimpsePickup* Pickup);
	void ExecuteUbergraph_Banger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
