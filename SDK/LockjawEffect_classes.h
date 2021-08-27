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

// BlueprintGeneratedClass LockjawEffect.LockjawEffect_C
// 0x0014 (0x02AC - 0x0298)
class ULockjawEffect_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0298(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LockjawEffect.LockjawEffect_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
