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

// BlueprintGeneratedClass Burning.Burning_C
// 0x002C (0x02C4 - 0x0298)
class UBurning_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0298(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Burning.Burning_C");
		return ptr;
	}


	void OnTick(float* DeltaTime);
	void OnApply();
	void OnRemove();
	void ExecuteUbergraph_Burning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
