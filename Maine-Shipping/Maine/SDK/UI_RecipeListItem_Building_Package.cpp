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
	 * 		Name   -> Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.SetDisabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  ItemText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     RecipeButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Building_C::SetDisabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.SetDisabledStyle");
		
		UUI_RecipeListItem_Building_C_SetDisabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemText != nullptr)
			*ItemText = params.ItemText;
		if (RecipeButton != nullptr)
			*RecipeButton = params.RecipeButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.SetEnabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  ItemText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     RecipeButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Building_C::SetEnabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.SetEnabledStyle");
		
		UUI_RecipeListItem_Building_C_SetEnabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemText != nullptr)
			*ItemText = params.ItemText;
		if (RecipeButton != nullptr)
			*RecipeButton = params.RecipeButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeListItem_Building_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.PreConstruct");
		
		UUI_RecipeListItem_Building_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RecipeListItem_Building_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.Construct");
		
		UUI_RecipeListItem_Building_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.ExecuteUbergraph_UI_RecipeListItem_Building
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Building_C::ExecuteUbergraph_UI_RecipeListItem_Building(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.ExecuteUbergraph_UI_RecipeListItem_Building");
		
		UUI_RecipeListItem_Building_C_ExecuteUbergraph_UI_RecipeListItem_Building_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RecipeListItem_Building_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RecipeListItem_Building_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RecipeListItem_Building.UI_RecipeListItem_Building_C");
		return ptr;
	}

}


