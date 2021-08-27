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

// BlueprintGeneratedClass FrenzyEffect.FrenzyEffect_C
// 0x0004 (0x028C - 0x0288)
class UFrenzyEffect_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0288(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrenzyEffect.FrenzyEffect_C");
		return ptr;
	}


	bool ShouldAutoRemove(class UStatusEffectComponent** Component);
	bool ShouldAutoApply(class UStatusEffectComponent** Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
