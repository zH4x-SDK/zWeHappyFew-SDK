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

// BlueprintGeneratedClass LiliesOfTheField.LiliesOfTheField_C
// 0x00B8 (0x05A8 - 0x04F0)
class ULiliesOfTheField_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x04F0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LiliesOfTheField.LiliesOfTheField_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
