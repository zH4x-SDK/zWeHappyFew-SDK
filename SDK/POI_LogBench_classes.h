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

// BlueprintGeneratedClass POI_LogBench.POI_LogBench_C
// 0x0017 (0x0538 - 0x0521)
class APOI_LogBench_C : public AChairBench_Base_C
{
public:
	unsigned char                                      UnknownData00[0x17];                                      // 0x0521(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_LogBench.POI_LogBench_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
