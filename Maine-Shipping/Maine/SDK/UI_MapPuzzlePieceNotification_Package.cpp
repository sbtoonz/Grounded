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
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SequenceEvent__ENTRYPOINTUI_MapPuzzlePieceNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_MapPuzzlePieceNotification_C::SequenceEvent__ENTRYPOINTUI_MapPuzzlePieceNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SequenceEvent__ENTRYPOINTUI_MapPuzzlePieceNotification_1");
		
		UUI_MapPuzzlePieceNotification_C_SequenceEvent__ENTRYPOINTUI_MapPuzzlePieceNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 IconBrush                                                  (Parm, OutParm)
	 */
	void UUI_MapPuzzlePieceNotification_C::GetIcon(class UObject** Image, struct FSlateBrush* IconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetIcon");
		
		UUI_MapPuzzlePieceNotification_C_GetIcon_Params params {};
		
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
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetItemTextShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_MapPuzzlePieceNotification_C::GetItemTextShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetItemTextShadowColor");
		
		UUI_MapPuzzlePieceNotification_C_GetItemTextShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetNameBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_MapPuzzlePieceNotification_C::GetNameBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetNameBGColor");
		
		UUI_MapPuzzlePieceNotification_C_GetNameBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetAttentionSpinColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_MapPuzzlePieceNotification_C::GetAttentionSpinColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetAttentionSpinColor");
		
		UUI_MapPuzzlePieceNotification_C_GetAttentionSpinColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_MapPuzzlePieceNotification_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetTextColor");
		
		UUI_MapPuzzlePieceNotification_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_MapPuzzlePieceNotification_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.GetBGColor");
		
		UUI_MapPuzzlePieceNotification_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         MapRegion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPuzzlePieceNotification_C::SetData(const struct FDataTableRowHandle& MapRegion, class ASurvivalPlayerState* SurvivalPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SetData");
		
		UUI_MapPuzzlePieceNotification_C_SetData_Params params {};
		params.MapRegion = MapRegion;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SequenceEvent_2
	 * 		Flags  -> ()
	 */
	void UUI_MapPuzzlePieceNotification_C::SequenceEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.SequenceEvent_2");
		
		UUI_MapPuzzlePieceNotification_C_SequenceEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_MapPuzzlePieceNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.PlayOutro");
		
		UUI_MapPuzzlePieceNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_MapPuzzlePieceNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.PlayIntroduction");
		
		UUI_MapPuzzlePieceNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MapPuzzlePieceNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.OnGlobalColorChange");
		
		UUI_MapPuzzlePieceNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.ExecuteUbergraph_UI_MapPuzzlePieceNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPuzzlePieceNotification_C::ExecuteUbergraph_UI_MapPuzzlePieceNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C.ExecuteUbergraph_UI_MapPuzzlePieceNotification");
		
		UUI_MapPuzzlePieceNotification_C_ExecuteUbergraph_UI_MapPuzzlePieceNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapPuzzlePieceNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapPuzzlePieceNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapPuzzlePieceNotification.UI_MapPuzzlePieceNotification_C");
		return ptr;
	}

}


