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

// BlueprintGeneratedClass Faraday_MeshesToShow_Blueprint.Faraday_MeshesToShow_Blueprint_C
// 0x0020 (0x0450 - 0x0430)
class AFaraday_MeshesToShow_Blueprint_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Faraday_MeshesToShow_Blueprint.Faraday_MeshesToShow_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
