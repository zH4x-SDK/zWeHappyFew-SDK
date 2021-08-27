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

// BlueprintGeneratedClass ElectroBaton.ElectroBaton_C
// 0x0020 (0x0C10 - 0x0BF0)
class AElectroBaton_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0BF0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectroBaton.ElectroBaton_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void ReceiveBeginPlay();
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void ExecuteUbergraph_ElectroBaton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
