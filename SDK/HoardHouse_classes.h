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

// BlueprintGeneratedClass HoardHouse.HoardHouse_C
// 0x00A0 (0x0590 - 0x04F0)
class UHoardHouse_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x04F0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HoardHouse.HoardHouse_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
