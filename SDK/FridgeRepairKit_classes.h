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

// BlueprintGeneratedClass FridgeRepairKit.FridgeRepairKit_C
// 0x0008 (0x0788 - 0x0780)
class AFridgeRepairKit_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FridgeRepairKit.FridgeRepairKit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveOnCompleteUse(class APawn* UseSource, class AActor* UseTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
