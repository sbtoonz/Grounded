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
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SequenceEvent__ENTRYPOINTUI_BulkRecipeUnlockNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_BulkRecipeUnlockNotification_C::SequenceEvent__ENTRYPOINTUI_BulkRecipeUnlockNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SequenceEvent__ENTRYPOINTUI_BulkRecipeUnlockNotification_1");
		
		UUI_BulkRecipeUnlockNotification_C_SequenceEvent__ENTRYPOINTUI_BulkRecipeUnlockNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_BulkRecipeUnlockNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.GetIcon");
		
		UUI_BulkRecipeUnlockNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.IsReadyForOutro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReady                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BulkRecipeUnlockNotification_C::IsReadyForOutro(bool* IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.IsReadyForOutro");
		
		UUI_BulkRecipeUnlockNotification_C_IsReadyForOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsReady != nullptr)
			*IsReady = params.IsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SetPlayerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERecipeUnlockSource                                RecipeUnlockSource                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BulkRecipeUnlockNotification_C::SetPlayerText(class APlayerState* Player, ERecipeUnlockSource RecipeUnlockSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SetPlayerText");
		
		UUI_BulkRecipeUnlockNotification_C_SetPlayerText_Params params {};
		params.Player = Player;
		params.RecipeUnlockSource = RecipeUnlockSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Get_Text_ShadowColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BulkRecipeUnlockNotification_C::Get_Text_ShadowColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Get_Text_ShadowColorAndOpacity_1");
		
		UUI_BulkRecipeUnlockNotification_C_Get_Text_ShadowColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Get_PlayerNameBG_BrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BulkRecipeUnlockNotification_C::Get_PlayerNameBG_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Get_PlayerNameBG_BrushColor_1");
		
		UUI_BulkRecipeUnlockNotification_C_Get_PlayerNameBG_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERecipeUnlockSource                                UnlockSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_BulkRecipeUnlockNotification_C::SetData(ERecipeUnlockSource UnlockSource, class ASurvivalPlayerState* SurvivalPlayerState, TArray<struct FDataTableRowHandle>* RecipesLearned, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SetData");
		
		UUI_BulkRecipeUnlockNotification_C_SetData_Params params {};
		params.UnlockSource = UnlockSource;
		params.SurvivalPlayerState = SurvivalPlayerState;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecipesLearned != nullptr)
			*RecipesLearned = params.RecipesLearned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_BulkRecipeUnlockNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.PlayIntroduction");
		
		UUI_BulkRecipeUnlockNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_BulkRecipeUnlockNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.PlayOutro");
		
		UUI_BulkRecipeUnlockNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BulkRecipeUnlockNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.OnGlobalColorChange");
		
		UUI_BulkRecipeUnlockNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_BulkRecipeUnlockNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.SequenceEvent_1");
		
		UUI_BulkRecipeUnlockNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BulkRecipeUnlockNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.Construct");
		
		UUI_BulkRecipeUnlockNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.ExecuteUbergraph_UI_BulkRecipeUnlockNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BulkRecipeUnlockNotification_C::ExecuteUbergraph_UI_BulkRecipeUnlockNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C.ExecuteUbergraph_UI_BulkRecipeUnlockNotification");
		
		UUI_BulkRecipeUnlockNotification_C_ExecuteUbergraph_UI_BulkRecipeUnlockNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BulkRecipeUnlockNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BulkRecipeUnlockNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C");
		return ptr;
	}

}


