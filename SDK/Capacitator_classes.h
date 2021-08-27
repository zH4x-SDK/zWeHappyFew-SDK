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

// BlueprintGeneratedClass Capacitator.Capacitator_C
// 0x00B1 (0x0511 - 0x0460)
class ACapacitator_C : public AGlimpseSecurityButton
{
public:
	unsigned char                                      UnknownData00[0xB1];                                      // 0x0460(0x00B1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Capacitator.Capacitator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
