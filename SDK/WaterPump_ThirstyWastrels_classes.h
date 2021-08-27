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

// BlueprintGeneratedClass WaterPump_ThirstyWastrels.WaterPump_ThirstyWastrels_C
// 0x0028 (0x0558 - 0x0530)
class AWaterPump_ThirstyWastrels_C : public AWaterPump_C
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0530(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPump_ThirstyWastrels.WaterPump_ThirstyWastrels_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
