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
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SequenceEvent__ENTRYPOINTUI_ColorThemeNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_ColorThemeNotification_C::SequenceEvent__ENTRYPOINTUI_ColorThemeNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SequenceEvent__ENTRYPOINTUI_ColorThemeNotification_1");
		
		UUI_ColorThemeNotification_C_SequenceEvent__ENTRYPOINTUI_ColorThemeNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_ColorThemeNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetIcon");
		
		UUI_ColorThemeNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetItemTextShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ColorThemeNotification_C::GetItemTextShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetItemTextShadowColor");
		
		UUI_ColorThemeNotification_C_GetItemTextShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetNameBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ColorThemeNotification_C::GetNameBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetNameBGColor");
		
		UUI_ColorThemeNotification_C_GetNameBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetAttentionSpinColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ColorThemeNotification_C::GetAttentionSpinColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetAttentionSpinColor");
		
		UUI_ColorThemeNotification_C_GetAttentionSpinColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ColorThemeNotification_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetTextColor");
		
		UUI_ColorThemeNotification_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ColorThemeNotification_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.GetBGColor");
		
		UUI_ColorThemeNotification_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ColorTheme                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ColorThemeNotification_C::SetData(class UClass* ColorTheme, class ASurvivalPlayerState* SurvivalPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SetData");
		
		UUI_ColorThemeNotification_C_SetData_Params params {};
		params.ColorTheme = ColorTheme;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_ColorThemeNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.SequenceEvent_1");
		
		UUI_ColorThemeNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_ColorThemeNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.PlayOutro");
		
		UUI_ColorThemeNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_ColorThemeNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.PlayIntroduction");
		
		UUI_ColorThemeNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.ExecuteUbergraph_UI_ColorThemeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ColorThemeNotification_C::ExecuteUbergraph_UI_ColorThemeNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ColorThemeNotification.UI_ColorThemeNotification_C.ExecuteUbergraph_UI_ColorThemeNotification");
		
		UUI_ColorThemeNotification_C_ExecuteUbergraph_UI_ColorThemeNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ColorThemeNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ColorThemeNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ColorThemeNotification.UI_ColorThemeNotification_C");
		return ptr;
	}

}


