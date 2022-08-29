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
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.IsInteractionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInteractionState ABP_Pond_Breaker_Switch_Base_C::IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.IsInteractionEnabled");
		
		ABP_Pond_Breaker_Switch_Base_C_IsInteractionEnabled_Params params {};
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
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.GetInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.GetInteractionText");
		
		ABP_Pond_Breaker_Switch_Base_C_GetInteractionText_Params params {};
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
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.UserConstructionScript");
		
		ABP_Pond_Breaker_Switch_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Anim_InnerDialRotation__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::Anim_InnerDialRotation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Anim_InnerDialRotation__FinishedFunc");
		
		ABP_Pond_Breaker_Switch_Base_C_Anim_InnerDialRotation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Anim_InnerDialRotation__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::Anim_InnerDialRotation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Anim_InnerDialRotation__UpdateFunc");
		
		ABP_Pond_Breaker_Switch_Base_C_Anim_InnerDialRotation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Light Off
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::Light_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.Light Off");
		
		ABP_Pond_Breaker_Switch_Base_C_Light_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.LightOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::LightOn(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.LightOn");
		
		ABP_Pond_Breaker_Switch_Base_C_LightOn_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.OnOpenStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ActorInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.OnOpenStateChanged");
		
		ABP_Pond_Breaker_Switch_Base_C_OnOpenStateChanged_Params params {};
		params.IsOpen = IsOpen;
		params.ActorInstigator = ActorInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ReceiveBeginPlay");
		
		ABP_Pond_Breaker_Switch_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.BndEvt__ConditionalToggle_IsOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::BndEvt__ConditionalToggle_IsOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.BndEvt__ConditionalToggle_IsOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Pond_Breaker_Switch_Base_C_BndEvt__ConditionalToggle_IsOn_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ToggleConnectedFans
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToggleOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::ToggleConnectedFans(bool ToggleOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ToggleConnectedFans");
		
		ABP_Pond_Breaker_Switch_Base_C_ToggleConnectedFans_Params params {};
		params.ToggleOn = ToggleOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ToggleIsOnGlobalVariableImplementation
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::ToggleIsOnGlobalVariableImplementation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ToggleIsOnGlobalVariableImplementation");
		
		ABP_Pond_Breaker_Switch_Base_C_ToggleIsOnGlobalVariableImplementation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.BndEvt__ConditionalToggle_Vis_PostPowerSurge_Off_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::BndEvt__ConditionalToggle_Vis_PostPowerSurge_Off_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.BndEvt__ConditionalToggle_Vis_PostPowerSurge_Off_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Pond_Breaker_Switch_Base_C_BndEvt__ConditionalToggle_Vis_PostPowerSurge_Off_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveOn
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::PanelEmissiveOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveOn");
		
		ABP_Pond_Breaker_Switch_Base_C_PanelEmissiveOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveEnabled
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::PanelEmissiveEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveEnabled");
		
		ABP_Pond_Breaker_Switch_Base_C_PanelEmissiveEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveDisabled
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::PanelEmissiveDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PanelEmissiveDisabled");
		
		ABP_Pond_Breaker_Switch_Base_C_PanelEmissiveDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.OnUpdateVisualState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::OnUpdateVisualState(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.OnUpdateVisualState");
		
		ABP_Pond_Breaker_Switch_Base_C_OnUpdateVisualState_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PlayOpenSound
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::PlayOpenSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.PlayOpenSound");
		
		ABP_Pond_Breaker_Switch_Base_C_PlayOpenSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.EvaluatePanelVFX
	 * 		Flags  -> ()
	 */
	void ABP_Pond_Breaker_Switch_Base_C::EvaluatePanelVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.EvaluatePanelVFX");
		
		ABP_Pond_Breaker_Switch_Base_C_EvaluatePanelVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ExecuteUbergraph_BP_Pond_Breaker_Switch_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pond_Breaker_Switch_Base_C::ExecuteUbergraph_BP_Pond_Breaker_Switch_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C.ExecuteUbergraph_BP_Pond_Breaker_Switch_Base");
		
		ABP_Pond_Breaker_Switch_Base_C_ExecuteUbergraph_BP_Pond_Breaker_Switch_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Pond_Breaker_Switch_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Pond_Breaker_Switch_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pond_Breaker_Switch_Base.BP_Pond_Breaker_Switch_Base_C");
		return ptr;
	}

}


