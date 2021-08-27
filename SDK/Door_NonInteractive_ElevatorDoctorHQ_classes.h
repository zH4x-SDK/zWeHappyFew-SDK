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

// BlueprintGeneratedClass Door_NonInteractive_ElevatorDoctorHQ.Door_NonInteractive_ElevatorDoctorHQ_C
// 0x00B0 (0x05C0 - 0x0510)
class ADoor_NonInteractive_ElevatorDoctorHQ_C : public ADoor_NonInteractive_C
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0510(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_NonInteractive_ElevatorDoctorHQ.Door_NonInteractive_ElevatorDoctorHQ_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
