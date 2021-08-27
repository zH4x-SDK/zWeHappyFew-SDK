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

// BlueprintGeneratedClass ElectroBaton_Child_TheTickler.ElectroBaton_Child_TheTickler_C
// 0x0030 (0x0C20 - 0x0BF0)
class AElectroBaton_Child_TheTickler_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0BF0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectroBaton_Child_TheTickler.ElectroBaton_Child_TheTickler_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnEquip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void ReceiveBeginPlay();
	void OnUnequip_Event_1(class AGlimpseCharacter* CharacterOwner);
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void ExecuteUbergraph_ElectroBaton_Child_TheTickler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
