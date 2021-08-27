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

// BlueprintGeneratedClass BridgePassPhrase.BridgePassPhrase_C
// 0x0029 (0x0519 - 0x04F0)
class UBridgePassPhrase_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x29];                                      // 0x04F0(0x0029) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BridgePassPhrase.BridgePassPhrase_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
