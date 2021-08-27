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

// BlueprintGeneratedClass PituitaryExtractor.PituitaryExtractor_C
// 0x0020 (0x0820 - 0x0800)
class APituitaryExtractor_C : public AGlimpsePickupUsable
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0800(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PituitaryExtractor.PituitaryExtractor_C");
		return ptr;
	}


	TEnumAsByte<EUsageDeniedReason> ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget);
	void UserConstructionScript();
	void ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget);
	void ReceiveTick(float* DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
