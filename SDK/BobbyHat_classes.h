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

// BlueprintGeneratedClass BobbyHat.BobbyHat_C
// 0x0058 (0x0808 - 0x07B0)
class ABobbyHat_C : public AGlimpsePickupOutfit
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x07B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BobbyHat.BobbyHat_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
