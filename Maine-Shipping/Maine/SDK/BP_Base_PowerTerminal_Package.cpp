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
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.RedrawScreen
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::RedrawScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.RedrawScreen");
		
		ABP_Base_PowerTerminal_C_RedrawScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.GetInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PowerTerminal_C::GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.GetInteractionText");
		
		ABP_Base_PowerTerminal_C_GetInteractionText_Params params {};
		params.Channel = Channel;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.IsInteractionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInteractionState ABP_Base_PowerTerminal_C::IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.IsInteractionEnabled");
		
		ABP_Base_PowerTerminal_C_IsInteractionEnabled_Params params {};
		params.Channel = Channel;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.UserConstructionScript");
		
		ABP_Base_PowerTerminal_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_HandleRot__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::Timeline_HandleRot__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_HandleRot__FinishedFunc");
		
		ABP_Base_PowerTerminal_C_Timeline_HandleRot__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_HandleRot__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::Timeline_HandleRot__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_HandleRot__UpdateFunc");
		
		ABP_Base_PowerTerminal_C_Timeline_HandleRot__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_SFX_PItch__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::Timeline_SFX_PItch__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_SFX_PItch__FinishedFunc");
		
		ABP_Base_PowerTerminal_C_Timeline_SFX_PItch__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_SFX_PItch__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::Timeline_SFX_PItch__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.Timeline_SFX_PItch__UpdateFunc");
		
		ABP_Base_PowerTerminal_C_Timeline_SFX_PItch__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.OnOpenStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ActorInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PowerTerminal_C::OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.OnOpenStateChanged");
		
		ABP_Base_PowerTerminal_C_OnOpenStateChanged_Params params {};
		params.IsOpen = IsOpen;
		params.ActorInstigator = ActorInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.EnableScreenDraw
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::EnableScreenDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.EnableScreenDraw");
		
		ABP_Base_PowerTerminal_C_EnableScreenDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.DisableScreenDraw
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::DisableScreenDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.DisableScreenDraw");
		
		ABP_Base_PowerTerminal_C_DisableScreenDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.MakeScreenDMI
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::MakeScreenDMI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.MakeScreenDMI");
		
		ABP_Base_PowerTerminal_C_MakeScreenDMI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HideAllScreens
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::HideAllScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HideAllScreens");
		
		ABP_Base_PowerTerminal_C_HideAllScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.SetUserWidgetObjectReference
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::SetUserWidgetObjectReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.SetUserWidgetObjectReference");
		
		ABP_Base_PowerTerminal_C_SetUserWidgetObjectReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowStart
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::ShowStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowStart");
		
		ABP_Base_PowerTerminal_C_ShowStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowLocked
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::ShowLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowLocked");
		
		ABP_Base_PowerTerminal_C_ShowLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowLockedFlash
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::ShowLockedFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowLockedFlash");
		
		ABP_Base_PowerTerminal_C_ShowLockedFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowUnlocked
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::ShowUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowUnlocked");
		
		ABP_Base_PowerTerminal_C_ShowUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ReceiveBeginPlay");
		
		ABP_Base_PowerTerminal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowWaiting
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::ShowWaiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ShowWaiting");
		
		ABP_Base_PowerTerminal_C_ShowWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.OnUpdateVisualState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_PowerTerminal_C::OnUpdateVisualState(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.OnUpdateVisualState");
		
		ABP_Base_PowerTerminal_C_OnUpdateVisualState_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HandleOpenAudio
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::HandleOpenAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HandleOpenAudio");
		
		ABP_Base_PowerTerminal_C_HandleOpenAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HandleClosedAudio
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::HandleClosedAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.HandleClosedAudio");
		
		ABP_Base_PowerTerminal_C_HandleClosedAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.TimelineFinished
	 * 		Flags  -> ()
	 */
	void ABP_Base_PowerTerminal_C::TimelineFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.TimelineFinished");
		
		ABP_Base_PowerTerminal_C_TimelineFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PowerTerminal_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ReceiveTick");
		
		ABP_Base_PowerTerminal_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_BatteryBackUp_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_PowerTerminal_C::BndEvt__ConditionalToggle_BatteryBackUp_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_BatteryBackUp_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Base_PowerTerminal_C_BndEvt__ConditionalToggle_BatteryBackUp_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_PowerTerminal_C::BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Base_PowerTerminal_C_BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_HousePowerDiverted_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_PowerTerminal_C::BndEvt__ConditionalToggle_HousePowerDiverted_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.BndEvt__ConditionalToggle_HousePowerDiverted_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Base_PowerTerminal_C_BndEvt__ConditionalToggle_HousePowerDiverted_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ExecuteUbergraph_BP_Base_PowerTerminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PowerTerminal_C::ExecuteUbergraph_BP_Base_PowerTerminal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PowerTerminal.BP_Base_PowerTerminal_C.ExecuteUbergraph_BP_Base_PowerTerminal");
		
		ABP_Base_PowerTerminal_C_ExecuteUbergraph_BP_Base_PowerTerminal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_PowerTerminal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_PowerTerminal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_PowerTerminal.BP_Base_PowerTerminal_C");
		return ptr;
	}

}


