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
	 * 		Name   -> Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.SetDisabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  ItemText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     RecipeButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Craftable_C::SetDisabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.SetDisabledStyle");
		
		UUI_RecipeListItem_Craftable_C_SetDisabledStyle_Params params {};
		
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
	 * 		Name   -> Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.SetEnabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  ItemText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     RecipeButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Craftable_C::SetEnabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.SetEnabledStyle");
		
		UUI_RecipeListItem_Craftable_C_SetEnabledStyle_Params params {};
		
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
	 * 		Name   -> Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeListItem_Craftable_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.PreConstruct");
		
		UUI_RecipeListItem_Craftable_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.ExecuteUbergraph_UI_RecipeListItem_Craftable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeListItem_Craftable_C::ExecuteUbergraph_UI_RecipeListItem_Craftable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C.ExecuteUbergraph_UI_RecipeListItem_Craftable");
		
		UUI_RecipeListItem_Craftable_C_ExecuteUbergraph_UI_RecipeListItem_Craftable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RecipeListItem_Craftable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RecipeListItem_Craftable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C");
		return ptr;
	}

}


