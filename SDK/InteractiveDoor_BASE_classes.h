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

// BlueprintGeneratedClass InteractiveDoor_BASE.InteractiveDoor_BASE_C
// 0x00A9 (0x0919 - 0x0870)
class AInteractiveDoor_BASE_C : public AGlimpseLockable
{
public:
	unsigned char                                      UnknownData00[0xA9];                                      // 0x0870(0x00A9) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractiveDoor_BASE.InteractiveDoor_BASE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
