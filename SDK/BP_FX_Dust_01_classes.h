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

// BlueprintGeneratedClass BP_FX_Dust_01.BP_FX_Dust_01_C
// 0x0084 (0x04B4 - 0x0430)
class ABP_FX_Dust_01_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x0430(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_Dust_01.BP_FX_Dust_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
