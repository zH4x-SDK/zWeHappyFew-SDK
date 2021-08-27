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

// BlueprintGeneratedClass RottenPotato.RottenPotato_C
// 0x0008 (0x0878 - 0x0870)
class ARottenPotato_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0870(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RottenPotato.RottenPotato_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource);
	void ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget);
	void ExecuteUbergraph_RottenPotato(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
