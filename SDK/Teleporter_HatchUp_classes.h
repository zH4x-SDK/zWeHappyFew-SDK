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

// BlueprintGeneratedClass Teleporter_HatchUp.Teleporter_HatchUp_C
// 0x0018 (0x0590 - 0x0578)
class ATeleporter_HatchUp_C : public ATeleporter_Base_C
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0578(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Teleporter_HatchUp.Teleporter_HatchUp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
