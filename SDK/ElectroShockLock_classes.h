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

// BlueprintGeneratedClass ElectroShockLock.ElectroShockLock_C
// 0x0038 (0x04D0 - 0x0498)
class AElectroShockLock_C : public ATrap_C
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0498(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectroShockLock.ElectroShockLock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
