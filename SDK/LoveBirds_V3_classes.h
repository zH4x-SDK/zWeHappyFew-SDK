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

// BlueprintGeneratedClass LoveBirds_V3.LoveBirds_V3_C
// 0x00CB (0x05BB - 0x04F0)
class ULoveBirds_V3_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0xCB];                                      // 0x04F0(0x00CB) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LoveBirds_V3.LoveBirds_V3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
