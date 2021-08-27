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

// BlueprintGeneratedClass LorePickup_Base.LorePickup_Base_C
// 0x0018 (0x07C8 - 0x07B0)
class ALorePickup_Base_C : public ALorePickup
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LorePickup_Base.LorePickup_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void PickedUp(class APawn* PickupSource);
	void ReceiveBeginPlay();
	void BndEvt__InstantRead_K2Node_ComponentBoundEvent_1_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void ExecuteUbergraph_LorePickup_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
