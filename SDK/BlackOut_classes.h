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

// BlueprintGeneratedClass BlackOut.BlackOut_C
// 0x0024 (0x02BC - 0x0298)
class UBlackOut_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0298(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlackOut.BlackOut_C");
		return ptr;
	}


	void EndVomitingBout();
	void BeginVomitingBout(float Duration, const struct FName& ParticleSocketName);
	void OnApply();
	void OnRemove();
	void OnTick(float* DeltaTime);
	void ExecuteUbergraph_BlackOut(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
