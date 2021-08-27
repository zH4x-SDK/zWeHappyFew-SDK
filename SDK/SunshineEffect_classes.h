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

// BlueprintGeneratedClass SunshineEffect.SunshineEffect_C
// 0x0009 (0x0291 - 0x0288)
class USunshineEffect_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0288(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SunshineEffect.SunshineEffect_C");
		return ptr;
	}


	float OnGetCustomPercent();
	bool ShouldAutoRemove(class UStatusEffectComponent** Component);
	void OnApply();
	void OnRemove();
	void ExecuteUbergraph_SunshineEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
