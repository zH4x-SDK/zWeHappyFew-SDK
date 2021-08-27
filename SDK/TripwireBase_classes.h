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

// BlueprintGeneratedClass TripwireBase.TripwireBase_C
// 0x0082 (0x051A - 0x0498)
class ATripwireBase_C : public ATrap_C
{
public:
	unsigned char                                      UnknownData00[0x82];                                      // 0x0498(0x0082) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TripwireBase.TripwireBase_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
