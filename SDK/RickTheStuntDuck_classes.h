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

// BlueprintGeneratedClass RickTheStuntDuck.RickTheStuntDuck_C
// 0x0078 (0x0C68 - 0x0BF0)
class ARickTheStuntDuck_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0BF0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RickTheStuntDuck.RickTheStuntDuck_C");
		return ptr;
	}


	void OnDurationComplete();
	void TickActiveEffect(float DeltaSeconds);
	void Activate(class APawn* Thrower);
	void Deactivate();
	void UserConstructionScript();
	void ReceiveOnHitThrow(class APawn** InstigatorPawn);
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_48_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void ExecuteUbergraph_RickTheStuntDuck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
