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

// BlueprintGeneratedClass DSIR.DSIR_C
// 0x01BA (0x06AA - 0x04F0)
class UDSIR_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x1BA];                                     // 0x04F0(0x01BA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DSIR.DSIR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
