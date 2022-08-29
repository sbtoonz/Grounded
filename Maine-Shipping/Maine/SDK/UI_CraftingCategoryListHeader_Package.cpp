/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Get Crafting Loc String from Subcategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  LocString                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingCategoryListHeader_C::Get_Crafting_Loc_String_from_Subcategory(struct FLocString* LocString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Get Crafting Loc String from Subcategory");
		
		UUI_CraftingCategoryListHeader_C_Get_Crafting_Loc_String_from_Subcategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocString != nullptr)
			*LocString = params.LocString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Get Building Loc String from Subcategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  String                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingCategoryListHeader_C::Get_Building_Loc_String_from_Subcategory(struct FLocString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Get Building Loc String from Subcategory");
		
		UUI_CraftingCategoryListHeader_C_Get_Building_Loc_String_from_Subcategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Subcategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingCategoryListHeader_C::Initialize(const struct FGameplayTag& Subcategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Initialize");
		
		UUI_CraftingCategoryListHeader_C_Initialize_Params params {};
		params.Subcategory = Subcategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.ExecuteUbergraph_UI_CraftingCategoryListHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingCategoryListHeader_C::ExecuteUbergraph_UI_CraftingCategoryListHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.ExecuteUbergraph_UI_CraftingCategoryListHeader");
		
		UUI_CraftingCategoryListHeader_C_ExecuteUbergraph_UI_CraftingCategoryListHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingCategoryListHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingCategoryListHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C");
		return ptr;
	}

}


