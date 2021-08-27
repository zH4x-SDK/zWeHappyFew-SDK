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

// BlueprintGeneratedClass SimpleKeyCard02Bridge.SimpleKeyCard02Bridge_C
// 0x002A (0x051A - 0x04F0)
class USimpleKeyCard02Bridge_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x2A];                                      // 0x04F0(0x002A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SimpleKeyCard02Bridge.SimpleKeyCard02Bridge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
