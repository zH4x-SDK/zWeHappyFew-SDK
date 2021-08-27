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

// BlueprintGeneratedClass IndividualCaltrop.IndividualCaltrop_C
// 0x0008 (0x0438 - 0x0430)
class AIndividualCaltrop_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndividualCaltrop.IndividualCaltrop_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
