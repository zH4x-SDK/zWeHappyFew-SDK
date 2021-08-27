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

// BlueprintGeneratedClass BoneSawTargeting.BoneSawTargeting_C
// 0x0020 (0x07A0 - 0x0780)
class ABoneSawTargeting_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0780(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneSawTargeting.BoneSawTargeting_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
