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

// BlueprintGeneratedClass TieredStaminaBoost.TieredStaminaBoost_C
// 0x0008 (0x02B8 - 0x02B0)
class UTieredStaminaBoost_C : public UGlimpseStatusEffectTiered
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TieredStaminaBoost.TieredStaminaBoost_C");
		return ptr;
	}


	void OnApply();
	void OnTierChanged(int* LastTier, int* NewTier);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
