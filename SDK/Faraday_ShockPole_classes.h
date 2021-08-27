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

// BlueprintGeneratedClass Faraday_ShockPole.Faraday_ShockPole_C
// 0x0040 (0x0470 - 0x0430)
class AFaraday_ShockPole_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0430(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Faraday_ShockPole.Faraday_ShockPole_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
