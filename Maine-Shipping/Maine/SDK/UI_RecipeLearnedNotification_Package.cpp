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
	 * 		Name   -> Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.IsReadyForOutro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeLearnedNotification_C::IsReadyForOutro(bool* IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.IsReadyForOutro");
		
		UUI_RecipeLearnedNotification_C_IsReadyForOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsReady != nullptr)
			*IsReady = params.IsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_RecipeLearnedNotification_C::SetData(TArray<struct FDataTableRowHandle>* RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.SetData");
		
		UUI_RecipeLearnedNotification_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecipesLearned != nullptr)
			*RecipesLearned = params.RecipesLearned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.GetAssociatedItemRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, OutParm, NoDestructor)
	 */
	void UUI_RecipeLearnedNotification_C::GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.GetAssociatedItemRow");
		
		UUI_RecipeLearnedNotification_C_GetAssociatedItemRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowHandle != nullptr)
			*RowHandle = params.RowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_RecipeLearnedNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.PlayIntroduction");
		
		UUI_RecipeLearnedNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_RecipeLearnedNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.PlayOutro");
		
		UUI_RecipeLearnedNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RecipeLearnedNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.OnGlobalColorChange");
		
		UUI_RecipeLearnedNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.ExecuteUbergraph_UI_RecipeLearnedNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeLearnedNotification_C::ExecuteUbergraph_UI_RecipeLearnedNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C.ExecuteUbergraph_UI_RecipeLearnedNotification");
		
		UUI_RecipeLearnedNotification_C_ExecuteUbergraph_UI_RecipeLearnedNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RecipeLearnedNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RecipeLearnedNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RecipeLearnedNotification.UI_RecipeLearnedNotification_C");
		return ptr;
	}

}


