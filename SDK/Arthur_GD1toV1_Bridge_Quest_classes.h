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

// BlueprintGeneratedClass Arthur_GD1toV1_Bridge_Quest.Arthur_GD1toV1_Bridge_Quest_C
// 0x0198 (0x0688 - 0x04F0)
class UArthur_GD1toV1_Bridge_Quest_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x04F0(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Arthur_GD1toV1_Bridge_Quest.Arthur_GD1toV1_Bridge_Quest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
