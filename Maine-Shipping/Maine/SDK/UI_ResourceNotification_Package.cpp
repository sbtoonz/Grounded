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
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.SequenceEvent__ENTRYPOINTUI_ResourceNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_ResourceNotification_C::SequenceEvent__ENTRYPOINTUI_ResourceNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.SequenceEvent__ENTRYPOINTUI_ResourceNotification_1");
		
		UUI_ResourceNotification_C_SequenceEvent__ENTRYPOINTUI_ResourceNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_ResourceNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.GetIcon");
		
		UUI_ResourceNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.IsReadyForOutro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ResourceNotification_C::IsReadyForOutro(bool* IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.IsReadyForOutro");
		
		UUI_ResourceNotification_C_IsReadyForOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsReady != nullptr)
			*IsReady = params.IsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.GetAssociatedItemRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, OutParm, NoDestructor)
	 */
	void UUI_ResourceNotification_C::GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.GetAssociatedItemRow");
		
		UUI_ResourceNotification_C_GetAssociatedItemRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowHandle != nullptr)
			*RowHandle = params.RowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.SetPlayerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRecipeUnlock                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ResourceNotification_C::SetPlayerText(class APlayerState* Player, bool IsRecipeUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.SetPlayerText");
		
		UUI_ResourceNotification_C_SetPlayerText_Params params {};
		params.Player = Player;
		params.IsRecipeUnlock = IsRecipeUnlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.Get_Text_ShadowColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ResourceNotification_C::Get_Text_ShadowColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.Get_Text_ShadowColorAndOpacity_1");
		
		UUI_ResourceNotification_C_Get_Text_ShadowColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.Get_PlayerNameBG_BrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ResourceNotification_C::Get_PlayerNameBG_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.Get_PlayerNameBG_BrushColor_1");
		
		UUI_ResourceNotification_C_Get_PlayerNameBG_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.Get_NewItemBG_ColorAndOpacity_2
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ResourceNotification_C::Get_NewItemBG_ColorAndOpacity_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.Get_NewItemBG_ColorAndOpacity_2");
		
		UUI_ResourceNotification_C_Get_NewItemBG_ColorAndOpacity_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.Get_Text_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ResourceNotification_C::Get_Text_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.Get_Text_ColorAndOpacity_1");
		
		UUI_ResourceNotification_C_Get_Text_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.GetResourceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ResourceNotification_C::GetResourceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.GetResourceColor");
		
		UUI_ResourceNotification_C_GetResourceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemAquired                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_ResourceNotification_C::SetData(const struct FDataTableRowHandle& ItemAquired, class ASurvivalPlayerState* SurvivalPlayerState, TArray<struct FDataTableRowHandle>* RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.SetData");
		
		UUI_ResourceNotification_C_SetData_Params params {};
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
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_ResourceNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.PlayIntroduction");
		
		UUI_ResourceNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_ResourceNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.PlayOutro");
		
		UUI_ResourceNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ResourceNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.OnGlobalColorChange");
		
		UUI_ResourceNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_ResourceNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.SequenceEvent_1");
		
		UUI_ResourceNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ResourceNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.Construct");
		
		UUI_ResourceNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ResourceNotification.UI_ResourceNotification_C.ExecuteUbergraph_UI_ResourceNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ResourceNotification_C::ExecuteUbergraph_UI_ResourceNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ResourceNotification.UI_ResourceNotification_C.ExecuteUbergraph_UI_ResourceNotification");
		
		UUI_ResourceNotification_C_ExecuteUbergraph_UI_ResourceNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ResourceNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ResourceNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ResourceNotification.UI_ResourceNotification_C");
		return ptr;
	}

}


