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

// BlueprintGeneratedClass PlaguedBridge.PlaguedBridge_C
// 0x0028 (0x0518 - 0x04F0)
class UPlaguedBridge_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlaguedBridge.PlaguedBridge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
