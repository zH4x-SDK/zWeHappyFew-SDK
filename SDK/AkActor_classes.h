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

// BlueprintGeneratedClass AkActor.AkActor_C
// 0x0019 (0x0449 - 0x0430)
class AAkActor_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x19];                                      // 0x0430(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AkActor.AkActor_C");
		return ptr;
	}


	void PlaySound();
	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
