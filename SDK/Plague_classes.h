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

// BlueprintGeneratedClass Plague.Plague_C
// 0x007C (0x032C - 0x02B0)
class UPlague_C : public UGlimpseStatusEffectTiered
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x02B0(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Plague.Plague_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
