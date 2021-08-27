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

// BlueprintGeneratedClass InteractiveDoor_ElectroShockLock.InteractiveDoor_ElectroShockLock_C
// 0x0039 (0x0952 - 0x0919)
class AInteractiveDoor_ElectroShockLock_C : public AInteractiveDoor_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x39];                                      // 0x0919(0x0039) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractiveDoor_ElectroShockLock.InteractiveDoor_ElectroShockLock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
