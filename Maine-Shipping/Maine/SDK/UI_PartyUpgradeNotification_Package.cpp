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
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SequenceEvent__ENTRYPOINTUI_PartyUpgradeNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_PartyUpgradeNotification_C::SequenceEvent__ENTRYPOINTUI_PartyUpgradeNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SequenceEvent__ENTRYPOINTUI_PartyUpgradeNotification_1");
		
		UUI_PartyUpgradeNotification_C_SequenceEvent__ENTRYPOINTUI_PartyUpgradeNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetUpgradeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PartyUpgradeNotification_C::GetUpgradeIcon(const struct FGameplayTag& GameplayTag, class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetUpgradeIcon");
		
		UUI_PartyUpgradeNotification_C_GetUpgradeIcon_Params params {};
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetUpgradeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_PartyUpgradeNotification_C::GetUpgradeName(const struct FGameplayTag& GameplayTag, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetUpgradeName");
		
		UUI_PartyUpgradeNotification_C_GetUpgradeName_Params params {};
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_PartyUpgradeNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetIcon");
		
		UUI_PartyUpgradeNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetAssociatedItemRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (Parm, OutParm, NoDestructor)
	 */
	void UUI_PartyUpgradeNotification_C::GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetAssociatedItemRow");
		
		UUI_PartyUpgradeNotification_C_GetAssociatedItemRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowHandle != nullptr)
			*RowHandle = params.RowHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SetPlayerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRecipeUnlock                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PartyUpgradeNotification_C::SetPlayerText(class APlayerState* Player, bool IsRecipeUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SetPlayerText");
		
		UUI_PartyUpgradeNotification_C_SetPlayerText_Params params {};
		params.Player = Player;
		params.IsRecipeUnlock = IsRecipeUnlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemStackTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PartyUpgradeNotification_C::SetData(const struct FGameplayTag& ItemStackTag, class ASurvivalPlayerState* SurvivalPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SetData");
		
		UUI_PartyUpgradeNotification_C_SetData_Params params {};
		params.ItemStackTag = ItemStackTag;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_Text_ShadowColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PartyUpgradeNotification_C::Get_Text_ShadowColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_Text_ShadowColorAndOpacity_1");
		
		UUI_PartyUpgradeNotification_C_Get_Text_ShadowColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_PlayerNameBG_BrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PartyUpgradeNotification_C::Get_PlayerNameBG_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_PlayerNameBG_BrushColor_1");
		
		UUI_PartyUpgradeNotification_C_Get_PlayerNameBG_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_NewItemBG_ColorAndOpacity_2
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PartyUpgradeNotification_C::Get_NewItemBG_ColorAndOpacity_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_NewItemBG_ColorAndOpacity_2");
		
		UUI_PartyUpgradeNotification_C_Get_NewItemBG_ColorAndOpacity_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_NewItemBG_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PartyUpgradeNotification_C::Get_NewItemBG_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_NewItemBG_ColorAndOpacity_1");
		
		UUI_PartyUpgradeNotification_C_Get_NewItemBG_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_ExclamitoryIcon_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PartyUpgradeNotification_C::Get_ExclamitoryIcon_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_ExclamitoryIcon_ColorAndOpacity_1");
		
		UUI_PartyUpgradeNotification_C_Get_ExclamitoryIcon_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_Text_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PartyUpgradeNotification_C::Get_Text_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.Get_Text_ColorAndOpacity_1");
		
		UUI_PartyUpgradeNotification_C_Get_Text_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetResourceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PartyUpgradeNotification_C::GetResourceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.GetResourceColor");
		
		UUI_PartyUpgradeNotification_C_GetResourceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_PartyUpgradeNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.SequenceEvent_1");
		
		UUI_PartyUpgradeNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_PartyUpgradeNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.PlayIntroduction");
		
		UUI_PartyUpgradeNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_PartyUpgradeNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.PlayOutro");
		
		UUI_PartyUpgradeNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.ExecuteUbergraph_UI_PartyUpgradeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PartyUpgradeNotification_C::ExecuteUbergraph_UI_PartyUpgradeNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C.ExecuteUbergraph_UI_PartyUpgradeNotification");
		
		UUI_PartyUpgradeNotification_C_ExecuteUbergraph_UI_PartyUpgradeNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PartyUpgradeNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PartyUpgradeNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C");
		return ptr;
	}

}


