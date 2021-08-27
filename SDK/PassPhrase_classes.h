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

// BlueprintGeneratedClass PassPhrase.PassPhrase_C
// 0x0008 (0x07D0 - 0x07C8)
class APassPhrase_C : public ALorePickup_Base_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassPhrase.PassPhrase_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
