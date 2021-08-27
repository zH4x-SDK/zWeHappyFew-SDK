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

// BlueprintGeneratedClass CommonUIFunctions.CommonUIFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UCommonUIFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CommonUIFunctions.CommonUIFunctions_C");
		return ptr;
	}


	void STATIC_GetItemDisplayTierColor(int Tier, class UObject* __WorldContext, struct FSlateColor* NewParam1);
	void STATIC_SetButtonNormalImage(class UButton* Button, class UObject* Image, class UObject* __WorldContext);
	void STATIC_MakeMaxMargin(const struct FMargin& Margin1, const struct FMargin& Margin2, class UObject* __WorldContext, struct FMargin* MaxMargin);
	void STATIC_GetSafeZoneMargin(class UObject* WorldContextObject, const struct FVector2D& BaseScreenSize, class UObject* __WorldContext, struct FMargin* SafeZoneMargin);
	void STATIC_SetArrayVisibility(TEnumAsByte<ESlateVisibility> Visibility, class UObject* __WorldContext, TArray<class UUserWidget*>* Widgets);
	void STATIC_SetBrushColor(const struct FSlateBrush& Brush, const struct FSlateColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush);
	void STATIC_SetImageColor(class UImage* Image, const struct FSlateColor& Color, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
