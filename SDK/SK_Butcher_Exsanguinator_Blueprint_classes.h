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

// BlueprintGeneratedClass SK_Butcher_Exsanguinator_Blueprint.SK_Butcher_Exsanguinator_Blueprint_C
// 0x0062 (0x0512 - 0x04B0)
class ASK_Butcher_Exsanguinator_Blueprint_C : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x62];                                      // 0x04B0(0x0062) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SK_Butcher_Exsanguinator_Blueprint.SK_Butcher_Exsanguinator_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
