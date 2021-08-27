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

// BlueprintGeneratedClass HallucinogenicMushroomEffect_CustomDRHQ.HallucinogenicMushroomEffect_CustomDRHQ_C
// 0x0028 (0x02C0 - 0x0298)
class UHallucinogenicMushroomEffect_CustomDRHQ_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0298(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HallucinogenicMushroomEffect_CustomDRHQ.HallucinogenicMushroomEffect_CustomDRHQ_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
	void OnTick(float* DeltaTime);
	void OnSuspend();
	void OnResume();
	void ExecuteUbergraph_HallucinogenicMushroomEffect_CustomDRHQ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
