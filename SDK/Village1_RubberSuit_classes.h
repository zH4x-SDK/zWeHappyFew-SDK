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

// BlueprintGeneratedClass Village1_RubberSuit.Village1_RubberSuit_C
// 0x0008 (0x1FF8 - 0x1FF0)
class AVillage1_RubberSuit_C : public AGlimpseWorkerNPC_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1FF0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Village1_RubberSuit.Village1_RubberSuit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
