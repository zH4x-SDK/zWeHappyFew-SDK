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

// BlueprintGeneratedClass TrashCan_Drum.TrashCan_Drum_C
// 0x00A0 (0x04D0 - 0x0430)
class ATrashCan_Drum_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0430(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrashCan_Drum.TrashCan_Drum_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
