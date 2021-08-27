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

// BlueprintGeneratedClass BlendSuitEffect.BlendSuitEffect_C
// 0x0008 (0x0290 - 0x0288)
class UBlendSuitEffect_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlendSuitEffect.BlendSuitEffect_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
	void ExecuteUbergraph_BlendSuitEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
