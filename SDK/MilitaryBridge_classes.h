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

// BlueprintGeneratedClass MilitaryBridge.MilitaryBridge_C
// 0x00A2 (0x0592 - 0x04F0)
class UMilitaryBridge_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xA2];                                      // 0x04F0(0x00A2) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MilitaryBridge.MilitaryBridge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
