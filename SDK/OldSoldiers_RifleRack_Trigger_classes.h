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

// BlueprintGeneratedClass OldSoldiers_RifleRack_Trigger.OldSoldiers_RifleRack_Trigger_C
// 0x0070 (0x04A0 - 0x0430)
class AOldSoldiers_RifleRack_Trigger_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0430(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OldSoldiers_RifleRack_Trigger.OldSoldiers_RifleRack_Trigger_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
