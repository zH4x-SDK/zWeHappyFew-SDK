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

// BlueprintGeneratedClass Peeper.Peeper_C
// 0x010F (0x209F - 0x1F90)
class APeeper_C : public AGlimpseAICharacter
{
public:
	unsigned char                                      UnknownData00[0x10F];                                     // 0x1F90(0x010F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Peeper.Peeper_C");
		return ptr;
	}


	TEnumAsByte<EGlimpseInquisitiveState> GetInquisitiveState(class AGlimpseCharacter** Target, float* DeltaSeconds);
	bool OnInquisitiveRequest(class AGlimpseCharacter** Target, TEnumAsByte<ESuspicionConformityRequest>* Request);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
