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

// BlueprintGeneratedClass Walkabout2.Walkabout2_C
// 0x0098 (0x0588 - 0x04F0)
class UWalkabout2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x04F0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Walkabout2.Walkabout2_C");
		return ptr;
	}


	void Deactivate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
