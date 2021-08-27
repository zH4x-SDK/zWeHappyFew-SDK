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

// BlueprintGeneratedClass Tripwire_Alarm.Tripwire_Alarm_C
// 0x0036 (0x0550 - 0x051A)
class ATripwire_Alarm_C : public ATripwireBase_C
{
public:
	unsigned char                                      UnknownData00[0x36];                                      // 0x051A(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tripwire_Alarm.Tripwire_Alarm_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
