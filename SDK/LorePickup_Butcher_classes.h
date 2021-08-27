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

// BlueprintGeneratedClass LorePickup_Butcher.LorePickup_Butcher_C
// 0x0031 (0x07F9 - 0x07C8)
class ALorePickup_Butcher_C : public ALorePickup_Base_C
{
public:
	unsigned char                                      UnknownData00[0x31];                                      // 0x07C8(0x0031) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LorePickup_Butcher.LorePickup_Butcher_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
