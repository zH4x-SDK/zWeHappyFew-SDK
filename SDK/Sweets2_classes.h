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

// BlueprintGeneratedClass Sweets2.Sweets2_C
// 0x0051 (0x0541 - 0x04F0)
class USweets2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x04F0(0x0051) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sweets2.Sweets2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
