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

// BlueprintGeneratedClass GhostWaitAtGravePOI.GhostWaitAtGravePOI_C
// 0x0018 (0x0448 - 0x0430)
class AGhostWaitAtGravePOI_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0430(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GhostWaitAtGravePOI.GhostWaitAtGravePOI_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
