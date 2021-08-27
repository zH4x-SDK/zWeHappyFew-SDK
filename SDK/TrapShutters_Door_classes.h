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

// BlueprintGeneratedClass TrapShutters_Door.TrapShutters_Door_C
// 0x0027 (0x0598 - 0x0571)
class ATrapShutters_Door_C : public ATrapShutters_C
{
public:
	unsigned char                                      UnknownData00[0x27];                                      // 0x0571(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrapShutters_Door.TrapShutters_Door_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
