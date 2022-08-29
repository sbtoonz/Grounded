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
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.SetNameAndIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeLearnedListItem_C::SetNameAndIcon(const class FString& Name, class UObject* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.SetNameAndIcon");
		
		UUI_RecipeLearnedListItem_C_SetNameAndIcon_Params params {};
		params.Name = Name;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.GetAssociatedItemRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, OutParm, NoDestructor)
	 */
	void UUI_RecipeLearnedListItem_C::GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.GetAssociatedItemRow");
		
		UUI_RecipeLearnedListItem_C_GetAssociatedItemRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowHandle != nullptr)
			*RowHandle = params.RowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_RecipeLearnedListItem_C::SetData(const struct FDataTableRowHandle& Recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.SetData");
		
		UUI_RecipeLearnedListItem_C_SetData_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_RecipeLearnedListItem_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PlayIntroduction");
		
		UUI_RecipeLearnedListItem_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_RecipeLearnedListItem_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PlayOutro");
		
		UUI_RecipeLearnedListItem_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RecipeLearnedListItem_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.OnGlobalColorChange");
		
		UUI_RecipeLearnedListItem_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.DetermineColors
	 * 		Flags  -> ()
	 */
	void UUI_RecipeLearnedListItem_C::DetermineColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.DetermineColors");
		
		UUI_RecipeLearnedListItem_C_DetermineColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeLearnedListItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.PreConstruct");
		
		UUI_RecipeLearnedListItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.ExecuteUbergraph_UI_RecipeLearnedListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeLearnedListItem_C::ExecuteUbergraph_UI_RecipeLearnedListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C.ExecuteUbergraph_UI_RecipeLearnedListItem");
		
		UUI_RecipeLearnedListItem_C_ExecuteUbergraph_UI_RecipeLearnedListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RecipeLearnedListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RecipeLearnedListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RecipeLearnedListItem.UI_RecipeLearnedListItem_C");
		return ptr;
	}

}


