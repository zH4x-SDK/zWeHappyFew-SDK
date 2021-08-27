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

// BlueprintGeneratedClass POI_Crier_Chair.POI_Crier_Chair_C
// 0x0038 (0x0518 - 0x04E0)
class APOI_Crier_Chair_C : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x04E0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_Crier_Chair.POI_Crier_Chair_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
