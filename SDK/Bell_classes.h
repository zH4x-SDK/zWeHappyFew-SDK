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

// BlueprintGeneratedClass Bell.Bell_C
// 0x0079 (0x04A9 - 0x0430)
class ABell_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x79];                                      // 0x0430(0x0079) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bell.Bell_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
