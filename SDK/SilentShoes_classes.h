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

// BlueprintGeneratedClass SilentShoes.SilentShoes_C
// 0x001C (0x07CC - 0x07B0)
class ASilentShoes_C : public AGlimpsePickupOutfit
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x07B0(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SilentShoes.SilentShoes_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_13_InventoryUpdateSignature__DelegateSignature(class AGlimpsePickup* Pickup);
	void ExecuteUbergraph_SilentShoes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
