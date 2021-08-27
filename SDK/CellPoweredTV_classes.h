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

// BlueprintGeneratedClass CellPoweredTV.CellPoweredTV_C
// 0x00CB (0x0540 - 0x0475)
class ACellPoweredTV_C : public AAVBroadcaster_C
{
public:
	unsigned char                                      UnknownData00[0xCB];                                      // 0x0475(0x00CB) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CellPoweredTV.CellPoweredTV_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
