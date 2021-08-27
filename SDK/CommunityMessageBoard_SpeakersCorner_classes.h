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

// BlueprintGeneratedClass CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C
// 0x0051 (0x0481 - 0x0430)
class ACommunityMessageBoard_SpeakersCorner_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x0430(0x0051) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
