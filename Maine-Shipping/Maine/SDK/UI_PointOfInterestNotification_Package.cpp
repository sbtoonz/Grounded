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
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SequenceEvent__ENTRYPOINTUI_PointOfInterestNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotification_C::SequenceEvent__ENTRYPOINTUI_PointOfInterestNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SequenceEvent__ENTRYPOINTUI_PointOfInterestNotification_1");
		
		UUI_PointOfInterestNotification_C_SequenceEvent__ENTRYPOINTUI_PointOfInterestNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetItemTextShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotification_C::GetItemTextShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetItemTextShadowColor");
		
		UUI_PointOfInterestNotification_C_GetItemTextShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetNameBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotification_C::GetNameBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetNameBGColor");
		
		UUI_PointOfInterestNotification_C_GetNameBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetAttentionSpinColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotification_C::GetAttentionSpinColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetAttentionSpinColor");
		
		UUI_PointOfInterestNotification_C_GetAttentionSpinColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_PointOfInterestNotification_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetTextColor");
		
		UUI_PointOfInterestNotification_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PointOfInterestNotification_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.GetBGColor");
		
		UUI_PointOfInterestNotification_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPointOfInterestDataAsset*                   PointOfInterest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterestNotification_C::SetData(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* SurvivalPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SetData");
		
		UUI_PointOfInterestNotification_C_SetData_Params params {};
		params.PointOfInterest = PointOfInterest;
		params.SurvivalPlayerState = SurvivalPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.OnLoaded_ED7E05EC4C218C9F8AFA50BC31BBE923
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterestNotification_C::OnLoaded_ED7E05EC4C218C9F8AFA50BC31BBE923(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.OnLoaded_ED7E05EC4C218C9F8AFA50BC31BBE923");
		
		UUI_PointOfInterestNotification_C_OnLoaded_ED7E05EC4C218C9F8AFA50BC31BBE923_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SequenceEvent_1
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotification_C::SequenceEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.SequenceEvent_1");
		
		UUI_PointOfInterestNotification_C_SequenceEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.PlayOutro
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotification_C::PlayOutro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.PlayOutro");
		
		UUI_PointOfInterestNotification_C_PlayOutro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotification_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.PlayIntroduction");
		
		UUI_PointOfInterestNotification_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PointOfInterestNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.OnGlobalColorChange");
		
		UUI_PointOfInterestNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.ExecuteUbergraph_UI_PointOfInterestNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PointOfInterestNotification_C::ExecuteUbergraph_UI_PointOfInterestNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PointOfInterestNotification.UI_PointOfInterestNotification_C.ExecuteUbergraph_UI_PointOfInterestNotification");
		
		UUI_PointOfInterestNotification_C_ExecuteUbergraph_UI_PointOfInterestNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PointOfInterestNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PointOfInterestNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PointOfInterestNotification.UI_PointOfInterestNotification_C");
		return ptr;
	}

}


