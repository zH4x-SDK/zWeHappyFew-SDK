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

// BlueprintGeneratedClass BTTask_InflictDamageFromPlayer.BTTask_InflictDamageFromPlayer_C
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_InflictDamageFromPlayer_C : public UBTTask_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_InflictDamageFromPlayer.BTTask_InflictDamageFromPlayer_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
