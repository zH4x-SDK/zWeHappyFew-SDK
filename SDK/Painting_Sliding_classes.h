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

// BlueprintGeneratedClass Painting_Sliding.Painting_Sliding_C
// 0x0018 (0x0528 - 0x0510)
class APainting_Sliding_C : public ADoor_NonInteractive_C
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0510(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Painting_Sliding.Painting_Sliding_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
