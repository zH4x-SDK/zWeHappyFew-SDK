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

// BlueprintGeneratedClass GileadPetal.GileadPetal_C
// 0x0008 (0x0788 - 0x0780)
class AGileadPetal_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GileadPetal.GileadPetal_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPicked(class APawn* PickupSource);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GileadPetal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
