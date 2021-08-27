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

// BlueprintGeneratedClass HallucinogenicCaltropEffect.HallucinogenicCaltropEffect_C
// 0x0008 (0x02A8 - 0x02A0)
class UHallucinogenicCaltropEffect_C : public UCaltropEffect_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HallucinogenicCaltropEffect.HallucinogenicCaltropEffect_C");
		return ptr;
	}


	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
