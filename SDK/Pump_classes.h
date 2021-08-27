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

// BlueprintGeneratedClass Pump.Pump_C
// 0x00E8 (0x0518 - 0x0430)
class APump_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0430(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pump.Pump_C");
		return ptr;
	}


	void Explode();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
