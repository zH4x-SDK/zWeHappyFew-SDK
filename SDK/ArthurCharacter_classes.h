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

// BlueprintGeneratedClass ArthurCharacter.ArthurCharacter_C
// 0x002E (0x2048 - 0x201A)
class AArthurCharacter_C : public ADefaultPlayerCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x2E];                                      // 0x201A(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArthurCharacter.ArthurCharacter_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
