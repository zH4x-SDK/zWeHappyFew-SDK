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

// BlueprintGeneratedClass Quest_ThisPipeIsBroken.Quest_ThisPipeIsBroken_C
// 0x0098 (0x0588 - 0x04F0)
class UQuest_ThisPipeIsBroken_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x04F0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_ThisPipeIsBroken.Quest_ThisPipeIsBroken_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
