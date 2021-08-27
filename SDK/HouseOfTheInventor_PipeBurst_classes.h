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

// BlueprintGeneratedClass HouseOfTheInventor_PipeBurst.HouseOfTheInventor_PipeBurst_C
// 0x0082 (0x04B2 - 0x0430)
class AHouseOfTheInventor_PipeBurst_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x82];                                      // 0x0430(0x0082) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HouseOfTheInventor_PipeBurst.HouseOfTheInventor_PipeBurst_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
