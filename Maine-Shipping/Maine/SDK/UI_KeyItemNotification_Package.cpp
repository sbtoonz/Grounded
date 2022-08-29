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
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.SequenceEvent__ENTRYPOINTUI_KeyItemNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_KeyItemNotification_C::SequenceEvent__ENTRYPOINTUI_KeyItemNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.SequenceEvent__ENTRYPOINTUI_KeyItemNotification_1");
		
		UUI_KeyItemNotification_C_SequenceEvent__ENTRYPOINTUI_KeyItemNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.IsReadyForOutro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_KeyItemNotification_C::IsReadyForOutro(bool* IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.IsReadyForOutro");
		
		UUI_KeyItemNotification_C_IsReadyForOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsReady != nullptr)
			*IsReady = params.IsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_KeyItemNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetIcon");
		
		UUI_KeyItemNotification_C_GetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
		if (IconBrush != nullptr)
			*IconBrush = params.IconBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetAssociatedItemRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, OutParm, NoDestructor)
	 */
	void UUI_KeyItemNotification_C::GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetAssociatedItemRow");
		
		UUI_KeyItemNotification_C_GetAssociatedItemRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowHandle != nullptr)
			*RowHandle = params.RowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetItemTextShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_KeyItemNotification_C::GetItemTextShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetItemTextShadowColor");
		
		UUI_KeyItemNotification_C_GetItemTextShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetNameBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_KeyItemNotification_C::GetNameBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetNameBGColor");
		
		UUI_KeyItemNotification_C_GetNameBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetAttentionSpinColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_KeyItemNotification_C::GetAttentionSpinColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetAttentionSpinColor");
		
		UUI_KeyItemNotification_C_GetAttentionSpinColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_KeyItemNotification_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetTextColor");
		
		UUI_KeyItemNotification_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_KeyItemNotification_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.GetBGColor");
		
		UUI_KeyItemNotification_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemAquired                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_KeyItemNotification_C::SetData(const struct FDataTableRowHandle& ItemAquired, class ASurvivalPlayerState* SurvivalPlayerState, TArray<struct FDataTableRowHandle>* RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.SetData");
		
		UUI_KeyItemNotification_C_SetData_Params params {};
		params.ItemAquired = ItemAquired;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecipesLearned != nullptr)
			*RecipesLearned = params.RecipesLearned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_KeyItemNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.SequenceEvent_1");
		
		UUI_KeyItemNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_KeyItemNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.PlayIntroduction");
		
		UUI_KeyItemNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_KeyItemNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.PlayOutro");
		
		UUI_KeyItemNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_KeyItemNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.OnGlobalColorChange");
		
		UUI_KeyItemNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemNotification.UI_KeyItemNotification_C.ExecuteUbergraph_UI_KeyItemNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItemNotification_C::ExecuteUbergraph_UI_KeyItemNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemNotification.UI_KeyItemNotification_C.ExecuteUbergraph_UI_KeyItemNotification");
		
		UUI_KeyItemNotification_C_ExecuteUbergraph_UI_KeyItemNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KeyItemNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KeyItemNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KeyItemNotification.UI_KeyItemNotification_C");
		return ptr;
	}

}


