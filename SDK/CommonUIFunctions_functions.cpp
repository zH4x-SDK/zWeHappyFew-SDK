
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CommonUIFunctions.CommonUIFunctions_C.GetItemDisplayTierColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Tier                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             NewParam1                      (Parm, OutParm)

void UCommonUIFunctions_C::STATIC_GetItemDisplayTierColor(int Tier, class UObject* __WorldContext, struct FSlateColor* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUIFunctions.CommonUIFunctions_C.GetItemDisplayTierColor");

	UCommonUIFunctions_C_GetItemDisplayTierColor_Params params;
	params.Tier = Tier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function CommonUIFunctions.CommonUIFunctions_C.SetButtonNormalImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Image                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonUIFunctions_C::STATIC_SetButtonNormalImage(class UButton* Button, class UObject* Image, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUIFunctions.CommonUIFunctions_C.SetButtonNormalImage");

	UCommonUIFunctions_C_SetButtonNormalImage_Params params;
	params.Button = Button;
	params.Image = Image;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUIFunctions.CommonUIFunctions_C.MakeMaxMargin
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FMargin                 Margin1                        (Parm)
// struct FMargin                 Margin2                        (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FMargin                 MaxMargin                      (Parm, OutParm)

void UCommonUIFunctions_C::STATIC_MakeMaxMargin(const struct FMargin& Margin1, const struct FMargin& Margin2, class UObject* __WorldContext, struct FMargin* MaxMargin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUIFunctions.CommonUIFunctions_C.MakeMaxMargin");

	UCommonUIFunctions_C_MakeMaxMargin_Params params;
	params.Margin1 = Margin1;
	params.Margin2 = Margin2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxMargin != nullptr)
		*MaxMargin = params.MaxMargin;
}


// Function CommonUIFunctions.CommonUIFunctions_C.GetSafeZoneMargin
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               BaseScreenSize                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FMargin                 SafeZoneMargin                 (Parm, OutParm)

void UCommonUIFunctions_C::STATIC_GetSafeZoneMargin(class UObject* WorldContextObject, const struct FVector2D& BaseScreenSize, class UObject* __WorldContext, struct FMargin* SafeZoneMargin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUIFunctions.CommonUIFunctions_C.GetSafeZoneMargin");

	UCommonUIFunctions_C_GetSafeZoneMargin_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BaseScreenSize = BaseScreenSize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SafeZoneMargin != nullptr)
		*SafeZoneMargin = params.SafeZoneMargin;
}


// Function CommonUIFunctions.CommonUIFunctions_C.SetArrayVisibility
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>     Widgets                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ESlateVisibility>  Visibility                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonUIFunctions_C::STATIC_SetArrayVisibility(TEnumAsByte<ESlateVisibility> Visibility, class UObject* __WorldContext, TArray<class UUserWidget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUIFunctions.CommonUIFunctions_C.SetArrayVisibility");

	UCommonUIFunctions_C_SetArrayVisibility_Params params;
	params.Visibility = Visibility;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function CommonUIFunctions.CommonUIFunctions_C.SetBrushColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (Parm)
// struct FSlateColor             Color                          (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             NewBrush                       (Parm, OutParm)

void UCommonUIFunctions_C::STATIC_SetBrushColor(const struct FSlateBrush& Brush, const struct FSlateColor& Color, class UObject* __WorldContext, struct FSlateBrush* NewBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUIFunctions.CommonUIFunctions_C.SetBrushColor");

	UCommonUIFunctions_C_SetBrushColor_Params params;
	params.Brush = Brush;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewBrush != nullptr)
		*NewBrush = params.NewBrush;
}


// Function CommonUIFunctions.CommonUIFunctions_C.SetImageColor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonUIFunctions_C::STATIC_SetImageColor(class UImage* Image, const struct FSlateColor& Color, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUIFunctions.CommonUIFunctions_C.SetImageColor");

	UCommonUIFunctions_C_SetImageColor_Params params;
	params.Image = Image;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
