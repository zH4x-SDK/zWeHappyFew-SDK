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

// BlueprintGeneratedClass BobbyTank.BobbyTank_C
// 0x0010 (0x2051 - 0x2041)
class ABobbyTank_C : public AGlimpseBobby_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x2041(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BobbyTank.BobbyTank_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
