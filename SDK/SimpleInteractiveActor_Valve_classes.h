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

// BlueprintGeneratedClass SimpleInteractiveActor_Valve.SimpleInteractiveActor_Valve_C
// 0x0087 (0x04E8 - 0x0461)
class ASimpleInteractiveActor_Valve_C : public ASimpleInteractiveActor_C
{
public:
	unsigned char                                      UnknownData00[0x87];                                      // 0x0461(0x0087) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SimpleInteractiveActor_Valve.SimpleInteractiveActor_Valve_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
