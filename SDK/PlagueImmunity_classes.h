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

// BlueprintGeneratedClass PlagueImmunity.PlagueImmunity_C
// 0x003C (0x02EC - 0x02B0)
class UPlagueImmunity_C : public UGlimpseStatusEffectTiered
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x02B0(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlagueImmunity.PlagueImmunity_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
