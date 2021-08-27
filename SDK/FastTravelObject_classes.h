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

// BlueprintGeneratedClass FastTravelObject.FastTravelObject_C
// 0x0168 (0x0648 - 0x04E0)
class AFastTravelObject_C : public AGlimpseFastTravelLocation
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x04E0(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FastTravelObject.FastTravelObject_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
