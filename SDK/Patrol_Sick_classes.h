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

// BlueprintGeneratedClass Patrol_Sick.Patrol_Sick_C
// 0x0008 (0x0458 - 0x0450)
class APatrol_Sick_C : public APatrolBase_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0450(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Patrol_Sick.Patrol_Sick_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
