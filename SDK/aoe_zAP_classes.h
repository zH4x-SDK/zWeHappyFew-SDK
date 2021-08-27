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

// BlueprintGeneratedClass aoe_zAP.AOE_Zap_C
// 0x00E1 (0x0511 - 0x0430)
class AAOE_Zap_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE1];                                      // 0x0430(0x00E1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass aoe_zAP.AOE_Zap_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
