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

// BlueprintGeneratedClass MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C
// 0x0080 (0x04C0 - 0x0440)
class AMSH_Butcher_Board_01_Blueprint_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0440(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
