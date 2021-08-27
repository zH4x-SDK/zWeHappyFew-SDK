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

// BlueprintGeneratedClass GlimpseCrier.GlimpseCrier_C
// 0x0009 (0x1F99 - 0x1F90)
class AGlimpseCrier_C : public AGlimpseAICharacter
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x1F90(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlimpseCrier.GlimpseCrier_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent_1(TEnumAsByte<EAISuspicionState> OldState, TEnumAsByte<EAISuspicionState> NewState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
