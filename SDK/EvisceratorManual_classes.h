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

// BlueprintGeneratedClass EvisceratorManual.EvisceratorManual_C
// 0x0048 (0x0488 - 0x0440)
class AEvisceratorManual_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0440(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EvisceratorManual.EvisceratorManual_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
