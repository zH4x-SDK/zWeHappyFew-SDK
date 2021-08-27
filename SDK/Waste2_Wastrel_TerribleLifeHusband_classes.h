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

// BlueprintGeneratedClass Waste2_Wastrel_TerribleLifeHusband.Waste2_Wastrel_TerribleLifeHusband_C
// 0x0038 (0x2038 - 0x2000)
class AWaste2_Wastrel_TerribleLifeHusband_C : public AWaste2_Wastrel_C
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x2000(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Waste2_Wastrel_TerribleLifeHusband.Waste2_Wastrel_TerribleLifeHusband_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
