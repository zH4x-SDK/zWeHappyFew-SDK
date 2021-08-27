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

// BlueprintGeneratedClass 45RPMRecord.45RPMRecord_C
// 0x0008 (0x0788 - 0x0780)
class A45RPMRecord_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 45RPMRecord.45RPMRecord_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature(class APawn* InteractSource);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
