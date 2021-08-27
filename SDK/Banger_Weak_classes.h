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

// BlueprintGeneratedClass Banger_Weak.Banger_Weak_C
// 0x000C (0x0C30 - 0x0C24)
class ABanger_Weak_C : public ABanger_C
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0C24(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Banger_Weak.Banger_Weak_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
