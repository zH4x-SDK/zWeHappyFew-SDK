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

// BlueprintGeneratedClass CoagulonEffect.CoagulonEffect_C
// 0x0010 (0x02A8 - 0x0298)
class UCoagulonEffect_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CoagulonEffect.CoagulonEffect_C");
		return ptr;
	}


	void OnApply();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
