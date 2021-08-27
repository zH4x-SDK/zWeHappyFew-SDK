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

// BlueprintGeneratedClass AntichokeEffect.AntichokeEffect_C
// 0x0018 (0x02B0 - 0x0298)
class UAntichokeEffect_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0298(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AntichokeEffect.AntichokeEffect_C");
		return ptr;
	}


	void OnTick(float* DeltaTime);
	void OnApply();
	void ExecuteUbergraph_AntichokeEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
