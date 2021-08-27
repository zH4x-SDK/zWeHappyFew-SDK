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

// BlueprintGeneratedClass Village2_SimonSaysWellie.Village2_SimonSaysWellie_C
// 0x0014 (0x2004 - 0x1FF0)
class AVillage2_SimonSaysWellie_C : public AGlimpseWorkerNPC_C
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x1FF0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Village2_SimonSaysWellie.Village2_SimonSaysWellie_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
