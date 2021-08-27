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

// WidgetBlueprintGeneratedClass CraftingButton.CraftingButton_C
// 0x05B8 (0x0C48 - 0x0690)
class UCraftingButton_C : public UCraftingButton
{
public:
	unsigned char                                      UnknownData00[0x5B8];                                     // 0x0690(0x05B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingButton.CraftingButton_C");
		return ptr;
	}


	void IsCrafting(bool* IsCrafting);
	void Construct();
	void UpdateCanCraft(bool* bInCanCraft);
	void OnCraftingError();
	void ExecuteUbergraph_CraftingButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
