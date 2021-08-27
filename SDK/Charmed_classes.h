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

// BlueprintGeneratedClass Charmed.Charmed_C
// 0x0010 (0x0298 - 0x0288)
class UCharmed_C : public UGlimpseStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Charmed.Charmed_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
