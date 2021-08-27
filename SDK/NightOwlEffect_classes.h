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

// BlueprintGeneratedClass NightOwlEffect.NightOwlEffect_C
// 0x0000 (0x0288 - 0x0288)
class UNightOwlEffect_C : public UGlimpseStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightOwlEffect.NightOwlEffect_C");
		return ptr;
	}


	bool ShouldAutoRemove(class UStatusEffectComponent** Component);
	bool ShouldAutoApply(class UStatusEffectComponent** Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
