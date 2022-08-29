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
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SequenceEvent__ENTRYPOINTUI_TechTreeUnlockedNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_TechTreeUnlockedNotification_C::SequenceEvent__ENTRYPOINTUI_TechTreeUnlockedNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SequenceEvent__ENTRYPOINTUI_TechTreeUnlockedNotification_1");
		
		UUI_TechTreeUnlockedNotification_C_SequenceEvent__ENTRYPOINTUI_TechTreeUnlockedNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_TechTreeUnlockedNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetIcon");
		
		UUI_TechTreeUnlockedNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetItemTextShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TechTreeUnlockedNotification_C::GetItemTextShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetItemTextShadowColor");
		
		UUI_TechTreeUnlockedNotification_C_GetItemTextShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetNameBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TechTreeUnlockedNotification_C::GetNameBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetNameBGColor");
		
		UUI_TechTreeUnlockedNotification_C_GetNameBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetAttentionSpinColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TechTreeUnlockedNotification_C::GetAttentionSpinColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetAttentionSpinColor");
		
		UUI_TechTreeUnlockedNotification_C_GetAttentionSpinColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TechTreeUnlockedNotification_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetTextColor");
		
		UUI_TechTreeUnlockedNotification_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TechTreeUnlockedNotification_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.GetBGColor");
		
		UUI_TechTreeUnlockedNotification_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TechTreeUnlocked                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TechTreeUnlockedNotification_C::SetData(const struct FDataTableRowHandle& TechTreeUnlocked, class ASurvivalPlayerState* SurvivalPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SetData");
		
		UUI_TechTreeUnlockedNotification_C_SetData_Params params {};
		params.TechTreeUnlocked = TechTreeUnlocked;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_TechTreeUnlockedNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.SequenceEvent_1");
		
		UUI_TechTreeUnlockedNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_TechTreeUnlockedNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.PlayIntroduction");
		
		UUI_TechTreeUnlockedNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_TechTreeUnlockedNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.PlayOutro");
		
		UUI_TechTreeUnlockedNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_TechTreeUnlockedNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.OnGlobalColorChange");
		
		UUI_TechTreeUnlockedNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.ExecuteUbergraph_UI_TechTreeUnlockedNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TechTreeUnlockedNotification_C::ExecuteUbergraph_UI_TechTreeUnlockedNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C.ExecuteUbergraph_UI_TechTreeUnlockedNotification");
		
		UUI_TechTreeUnlockedNotification_C_ExecuteUbergraph_UI_TechTreeUnlockedNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TechTreeUnlockedNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TechTreeUnlockedNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TechTreeUnlockedNotification.UI_TechTreeUnlockedNotification_C");
		return ptr;
	}

}


