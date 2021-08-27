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

// BlueprintGeneratedClass AtomizerSleeptite.AtomizerSleeptite_C
// 0x000F (0x0C48 - 0x0C39)
class AAtomizerSleeptite_C : public AAtomizer_DONOTUSE_C
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x0C39(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AtomizerSleeptite.AtomizerSleeptite_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Spray();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
