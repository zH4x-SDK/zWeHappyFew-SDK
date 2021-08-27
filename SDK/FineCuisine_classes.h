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

// BlueprintGeneratedClass FineCuisine.FineCuisine_C
// 0x00C9 (0x05B9 - 0x04F0)
class UFineCuisine_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xC9];                                      // 0x04F0(0x00C9) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FineCuisine.FineCuisine_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
