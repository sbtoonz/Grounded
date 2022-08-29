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
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.SequenceEvent__ENTRYPOINTUI_RecipeNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_RecipeNotification_C::SequenceEvent__ENTRYPOINTUI_RecipeNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.SequenceEvent__ENTRYPOINTUI_RecipeNotification_1");
		
		UUI_RecipeNotification_C_SequenceEvent__ENTRYPOINTUI_RecipeNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_RecipeNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.GetIcon");
		
		UUI_RecipeNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.GetAssociatedItemRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, OutParm, NoDestructor)
	 */
	void UUI_RecipeNotification_C::GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.GetAssociatedItemRow");
		
		UUI_RecipeNotification_C_GetAssociatedItemRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowHandle != nullptr)
			*RowHandle = params.RowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.SetPlayerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRecipeUnlock                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RecipeNotification_C::SetPlayerText(class APlayerState* Player, bool IsRecipeUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.SetPlayerText");
		
		UUI_RecipeNotification_C_SetPlayerText_Params params {};
		params.Player = Player;
		params.IsRecipeUnlock = IsRecipeUnlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeAquired                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeNotification_C::SetData(const struct FDataTableRowHandle& RecipeAquired, class ASurvivalPlayerState* SurvivalPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.SetData");
		
		UUI_RecipeNotification_C_SetData_Params params {};
		params.RecipeAquired = RecipeAquired;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.Get_Text_ShadowColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeNotification_C::Get_Text_ShadowColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.Get_Text_ShadowColorAndOpacity_1");
		
		UUI_RecipeNotification_C_Get_Text_ShadowColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.Get_PlayerNameBG_BrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeNotification_C::Get_PlayerNameBG_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.Get_PlayerNameBG_BrushColor_1");
		
		UUI_RecipeNotification_C_Get_PlayerNameBG_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.Get_NewItemBG_ColorAndOpacity_2
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeNotification_C::Get_NewItemBG_ColorAndOpacity_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.Get_NewItemBG_ColorAndOpacity_2");
		
		UUI_RecipeNotification_C_Get_NewItemBG_ColorAndOpacity_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.Get_NewItemBG_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeNotification_C::Get_NewItemBG_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.Get_NewItemBG_ColorAndOpacity_1");
		
		UUI_RecipeNotification_C_Get_NewItemBG_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.Get_ExclamitoryIcon_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeNotification_C::Get_ExclamitoryIcon_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.Get_ExclamitoryIcon_ColorAndOpacity_1");
		
		UUI_RecipeNotification_C_Get_ExclamitoryIcon_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.Get_Text_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_RecipeNotification_C::Get_Text_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.Get_Text_ColorAndOpacity_1");
		
		UUI_RecipeNotification_C_Get_Text_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.GetResourceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RecipeNotification_C::GetResourceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.GetResourceColor");
		
		UUI_RecipeNotification_C_GetResourceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_RecipeNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.SequenceEvent_1");
		
		UUI_RecipeNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_RecipeNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.PlayIntroduction");
		
		UUI_RecipeNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_RecipeNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.PlayOutro");
		
		UUI_RecipeNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RecipeNotification.UI_RecipeNotification_C.ExecuteUbergraph_UI_RecipeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RecipeNotification_C::ExecuteUbergraph_UI_RecipeNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RecipeNotification.UI_RecipeNotification_C.ExecuteUbergraph_UI_RecipeNotification");
		
		UUI_RecipeNotification_C_ExecuteUbergraph_UI_RecipeNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RecipeNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RecipeNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RecipeNotification.UI_RecipeNotification_C");
		return ptr;
	}

}


