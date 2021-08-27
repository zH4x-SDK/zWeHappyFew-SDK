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

// BlueprintGeneratedClass HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C
// 0x0028 (0x02C0 - 0x0298)
class UHallucinogenicMushroomEffect_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0298(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HallucinogenicMushroomEffect.HallucinogenicMushroomEffect_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
	void OnTick(float* DeltaTime);
	void OnSuspend();
	void OnResume();
	void ExecuteUbergraph_HallucinogenicMushroomEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
