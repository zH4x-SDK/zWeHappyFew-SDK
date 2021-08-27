
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

// Function ItemDetailWidget.ItemDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDetailWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailWidget.ItemDetailWidget_C.Construct");

	UItemDetailWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailWidget.ItemDetailWidget_C.RefreshWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePickup**         Pickup                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailWidget_C::RefreshWidget(class AGlimpsePickup** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailWidget.ItemDetailWidget_C.RefreshWidget");

	UItemDetailWidget_C_RefreshWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailWidget.ItemDetailWidget_C.OnShow
// (Event, Public, BlueprintEvent)

void UItemDetailWidget_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailWidget.ItemDetailWidget_C.OnShow");

	UItemDetailWidget_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailWidget.ItemDetailWidget_C.ExecuteUbergraph_ItemDetailWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailWidget_C::ExecuteUbergraph_ItemDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailWidget.ItemDetailWidget_C.ExecuteUbergraph_ItemDetailWidget");

	UItemDetailWidget_C_ExecuteUbergraph_ItemDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
