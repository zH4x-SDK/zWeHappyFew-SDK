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

// BlueprintGeneratedClass LoveBirds_V2.LoveBirds_V2_C
// 0x0110 (0x0600 - 0x04F0)
class ULoveBirds_V2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x04F0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LoveBirds_V2.LoveBirds_V2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
