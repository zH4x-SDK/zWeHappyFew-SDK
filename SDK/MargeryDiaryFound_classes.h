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

// BlueprintGeneratedClass MargeryDiaryFound.MargeryDiaryFound_C
// 0x0008 (0x04F8 - 0x04F0)
class UMargeryDiaryFound_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MargeryDiaryFound.MargeryDiaryFound_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
