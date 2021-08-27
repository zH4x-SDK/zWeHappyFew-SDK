#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ItemDetailWidget.ItemDetailWidget_C.Construct
struct UItemDetailWidget_C_Construct_Params
{
};

// Function ItemDetailWidget.ItemDetailWidget_C.RefreshWidget
struct UItemDetailWidget_C_RefreshWidget_Params
{
	class AGlimpsePickup**                             Pickup;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemDetailWidget.ItemDetailWidget_C.OnShow
struct UItemDetailWidget_C_OnShow_Params
{
};

// Function ItemDetailWidget.ItemDetailWidget_C.ExecuteUbergraph_ItemDetailWidget
struct UItemDetailWidget_C_ExecuteUbergraph_ItemDetailWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
