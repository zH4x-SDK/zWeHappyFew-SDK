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

// BlueprintGeneratedClass PatrolBase_Better.PatrolBase_Better_C
// 0x0020 (0x0470 - 0x0450)
class APatrolBase_Better_C : public APatrolBase_C
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0450(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PatrolBase_Better.PatrolBase_Better_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
