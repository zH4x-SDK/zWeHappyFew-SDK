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

// BlueprintGeneratedClass Teleporter_Locked.Teleporter_Locked_C
// 0x001B (0x04E3 - 0x04C8)
class ATeleporter_Locked_C : public ATeleporter_C
{
public:
	unsigned char                                      UnknownData00[0x1B];                                      // 0x04C8(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Teleporter_Locked.Teleporter_Locked_C");
		return ptr;
	}


	void SetLocked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
