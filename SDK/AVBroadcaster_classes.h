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

// BlueprintGeneratedClass AVBroadcaster.AVBroadcaster_C
// 0x0045 (0x0475 - 0x0430)
class AAVBroadcaster_C : public AGlimpseDecoratorActor
{
public:
	unsigned char                                      UnknownData00[0x45];                                      // 0x0430(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AVBroadcaster.AVBroadcaster_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
