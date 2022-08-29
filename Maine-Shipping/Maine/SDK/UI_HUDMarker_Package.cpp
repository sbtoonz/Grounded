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
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.GetArrowColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HUDMarker_C::GetArrowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.GetArrowColor");
		
		UUI_HUDMarker_C_GetArrowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.ShouldTintIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldLock                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDMarker_C::ShouldTintIcon(bool* ShouldLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.ShouldTintIcon");
		
		UUI_HUDMarker_C_ShouldTintIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldLock != nullptr)
			*ShouldLock = params.ShouldLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.UsesCustomIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldLock                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDMarker_C::UsesCustomIcon(bool* ShouldLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.UsesCustomIcon");
		
		UUI_HUDMarker_C_UsesCustomIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldLock != nullptr)
			*ShouldLock = params.ShouldLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.EvaluateToggleVisibility
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::EvaluateToggleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.EvaluateToggleVisibility");
		
		UUI_HUDMarker_C_EvaluateToggleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.TriggerShowAnimation
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::TriggerShowAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.TriggerShowAnimation");
		
		UUI_HUDMarker_C_TriggerShowAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.GetArrowOffsetAdjustment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOnScreen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector2D UUI_HUDMarker_C::GetArrowOffsetAdjustment(bool IsOnScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.GetArrowOffsetAdjustment");
		
		UUI_HUDMarker_C_GetArrowOffsetAdjustment_Params params {};
		params.IsOnScreen = IsOnScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.UpdateQuestVisibility
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::UpdateQuestVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.UpdateQuestVisibility");
		
		UUI_HUDMarker_C_UpdateQuestVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.GetMarkerColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HUDMarker_C::GetMarkerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.GetMarkerColor");
		
		UUI_HUDMarker_C_GetMarkerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.SetHUDMarkerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDMarker_C::SetHUDMarkerData(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.SetHUDMarkerData");
		
		UUI_HUDMarker_C_SetHUDMarkerData_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.GetLifetimeFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDMarker_C::GetLifetimeFade(float* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.GetLifetimeFade");
		
		UUI_HUDMarker_C_GetLifetimeFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.GetDistanceVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUDMarker_C::GetDistanceVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.GetDistanceVisibility");
		
		UUI_HUDMarker_C_GetDistanceVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.SetMarkerIcon
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::SetMarkerIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.SetMarkerIcon");
		
		UUI_HUDMarker_C_SetMarkerIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.Construct");
		
		UUI_HUDMarker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::OnHUDMarkerChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerChanged");
		
		UUI_HUDMarker_C_OnHUDMarkerChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerObjectiveReferenceChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::OnHUDMarkerObjectiveReferenceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerObjectiveReferenceChanged");
		
		UUI_HUDMarker_C_OnHUDMarkerObjectiveReferenceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnGlobalColorChange");
		
		UUI_HUDMarker_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.UpdateColor
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::UpdateColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.UpdateColor");
		
		UUI_HUDMarker_C_UpdateColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.Destruct");
		
		UUI_HUDMarker_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDMarker_C::OnQuestComplete(class UQuest* QuestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnQuestComplete");
		
		UUI_HUDMarker_C_OnQuestComplete_Params params {};
		params.QuestData = QuestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnShowFarHUDMarkersChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDMarker_C::OnShowFarHUDMarkersChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnShowFarHUDMarkersChanged");
		
		UUI_HUDMarker_C_OnShowFarHUDMarkersChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnPlayerStateAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDMarker_C::OnPlayerStateAdded(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnPlayerStateAdded");
		
		UUI_HUDMarker_C_OnPlayerStateAdded_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnPlayerStateGuidChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDMarker_C::OnPlayerStateGuidChanged(class ASurvivalPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnPlayerStateGuidChanged");
		
		UUI_HUDMarker_C_OnPlayerStateGuidChanged_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerToggleStateChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::OnHUDMarkerToggleStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.OnHUDMarkerToggleStateChanged");
		
		UUI_HUDMarker_C_OnHUDMarkerToggleStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.HandleStickiedQuestChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUDMarker_C::HandleStickiedQuestChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.HandleStickiedQuestChanged");
		
		UUI_HUDMarker_C_HandleStickiedQuestChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDMarker.UI_HUDMarker_C.ExecuteUbergraph_UI_HUDMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDMarker_C::ExecuteUbergraph_UI_HUDMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDMarker.UI_HUDMarker_C.ExecuteUbergraph_UI_HUDMarker");
		
		UUI_HUDMarker_C_ExecuteUbergraph_UI_HUDMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDMarker.UI_HUDMarker_C");
		return ptr;
	}

}


