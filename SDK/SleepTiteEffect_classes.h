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

// BlueprintGeneratedClass SleepTiteEffect.SleepTiteEffect_C
// 0x0018 (0x02A0 - 0x0288)
class USleepTiteEffect_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SleepTiteEffect.SleepTiteEffect_C");
		return ptr;
	}


	void OnApply();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
