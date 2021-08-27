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

// BlueprintGeneratedClass HallucinexEffect.HallucinexEffect_C
// 0x0030 (0x02C8 - 0x0298)
class UHallucinexEffect_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0298(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HallucinexEffect.HallucinexEffect_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
