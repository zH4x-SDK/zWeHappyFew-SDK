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

// BlueprintGeneratedClass OllieCharacter.OllieCharacter_C
// 0x003E (0x2058 - 0x201A)
class AOllieCharacter_C : public ADefaultPlayerCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x3E];                                      // 0x201A(0x003E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OllieCharacter.OllieCharacter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController** NewController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
