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

// BlueprintGeneratedClass JubilatorNPCBoss.JubilatorNPCBoss_C
// 0x000C (0x20E0 - 0x20D4)
class AJubilatorNPCBoss_C : public AJubilatorNPC_C
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x20D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JubilatorNPCBoss.JubilatorNPCBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
