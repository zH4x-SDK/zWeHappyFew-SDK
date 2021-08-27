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

// BlueprintGeneratedClass GD1_Shelterquest.GD1_Shelterquest_C
// 0x0061 (0x0551 - 0x04F0)
class UGD1_Shelterquest_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x61];                                      // 0x04F0(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GD1_Shelterquest.GD1_Shelterquest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
