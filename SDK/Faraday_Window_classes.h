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

// BlueprintGeneratedClass Faraday_Window.Faraday_Window_C
// 0x0017 (0x0478 - 0x0461)
class AFaraday_Window_C : public ASimpleInteractiveActor_C
{
public:
	unsigned char                                      UnknownData00[0x17];                                      // 0x0461(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Faraday_Window.Faraday_Window_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
