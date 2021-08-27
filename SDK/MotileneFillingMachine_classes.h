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

// BlueprintGeneratedClass MotileneFillingMachine.MotileneFillingMachine_C
// 0x0120 (0x0550 - 0x0430)
class AMotileneFillingMachine_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0430(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MotileneFillingMachine.MotileneFillingMachine_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
