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

// BlueprintGeneratedClass Corpse_MysteriousPackage.Corpse_MysteriousPackage_C
// 0x0050 (0x2050 - 0x2000)
class ACorpse_MysteriousPackage_C : public AWastrel_C
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x2000(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Corpse_MysteriousPackage.Corpse_MysteriousPackage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
