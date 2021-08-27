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

// BlueprintGeneratedClass LightningSpeedEffect.LightningSpeedEffect_C
// 0x000C (0x0294 - 0x0288)
class ULightningSpeedEffect_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0288(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightningSpeedEffect.LightningSpeedEffect_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
	void ExecuteUbergraph_LightningSpeedEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
