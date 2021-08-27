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

// BlueprintGeneratedClass Gift_TEMPLATE.Gift_TEMPLATE_C
// 0x0008 (0x0788 - 0x0780)
class AGift_TEMPLATE_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gift_TEMPLATE.Gift_TEMPLATE_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnGiftedEvent(bool bSuccess, class AGlimpseCharacter* Giver, class AGlimpseCharacter* Receiver);
	void ExecuteUbergraph_Gift_TEMPLATE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
