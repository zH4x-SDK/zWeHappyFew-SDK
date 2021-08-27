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

// BlueprintGeneratedClass NakedSuitEffect.NakedSuitEffect_C
// 0x0009 (0x0291 - 0x0288)
class UNakedSuitEffect_C : public UNakedSuitEffectBase
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0288(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NakedSuitEffect.NakedSuitEffect_C");
		return ptr;
	}


	bool ShouldAutoRemove_1(class UStatusEffectComponent* Component);
	bool ShouldAutoApply_1(class UStatusEffectComponent* Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
