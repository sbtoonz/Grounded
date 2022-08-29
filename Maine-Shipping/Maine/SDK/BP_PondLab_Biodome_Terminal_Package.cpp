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
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.GetInteractionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PondLab_Biodome_Terminal_C::GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.GetInteractionText");
		
		ABP_PondLab_Biodome_Terminal_C_GetInteractionText_Params params {};
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
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.IsInteractionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInteractionState ABP_PondLab_Biodome_Terminal_C::IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.IsInteractionEnabled");
		
		ABP_PondLab_Biodome_Terminal_C_IsInteractionEnabled_Params params {};
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
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.PartyHasAllPasswordPieces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PartyHasAllPasswordPieces                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PondLab_Biodome_Terminal_C::PartyHasAllPasswordPieces(bool* PartyHasAllPasswordPieces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.PartyHasAllPasswordPieces");
		
		ABP_PondLab_Biodome_Terminal_C_PartyHasAllPasswordPieces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PartyHasAllPasswordPieces != nullptr)
			*PartyHasAllPasswordPieces = params.PartyHasAllPasswordPieces;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.OnOpenStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ActorInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PondLab_Biodome_Terminal_C::OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.OnOpenStateChanged");
		
		ABP_PondLab_Biodome_Terminal_C_OnOpenStateChanged_Params params {};
		params.IsOpen = IsOpen;
		params.ActorInstigator = ActorInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.EnableScreenDraw
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::EnableScreenDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.EnableScreenDraw");
		
		ABP_PondLab_Biodome_Terminal_C_EnableScreenDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.DisableScreenDraw
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::DisableScreenDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.DisableScreenDraw");
		
		ABP_PondLab_Biodome_Terminal_C_DisableScreenDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.MakeScreenDMI
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::MakeScreenDMI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.MakeScreenDMI");
		
		ABP_PondLab_Biodome_Terminal_C_MakeScreenDMI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.HideAllScreens
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::HideAllScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.HideAllScreens");
		
		ABP_PondLab_Biodome_Terminal_C_HideAllScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.SetUserWidgetObjectReference
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::SetUserWidgetObjectReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.SetUserWidgetObjectReference");
		
		ABP_PondLab_Biodome_Terminal_C_SetUserWidgetObjectReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowStart
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::ShowStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowStart");
		
		ABP_PondLab_Biodome_Terminal_C_ShowStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowLocked
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::ShowLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowLocked");
		
		ABP_PondLab_Biodome_Terminal_C_ShowLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowLockedFlash
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::ShowLockedFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowLockedFlash");
		
		ABP_PondLab_Biodome_Terminal_C_ShowLockedFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowUnlocked
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::ShowUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowUnlocked");
		
		ABP_PondLab_Biodome_Terminal_C_ShowUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ReceiveBeginPlay");
		
		ABP_PondLab_Biodome_Terminal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowWaiting
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::ShowWaiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ShowWaiting");
		
		ABP_PondLab_Biodome_Terminal_C_ShowWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PondLab_Biodome_Terminal_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ReceiveTick");
		
		ABP_PondLab_Biodome_Terminal_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PondLab_Biodome_Terminal_C::BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature");
		
		ABP_PondLab_Biodome_Terminal_C_BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BndEvt__ConditionalToggle_Vis_UnlockScreen_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PondLab_Biodome_Terminal_C::BndEvt__ConditionalToggle_Vis_UnlockScreen_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BndEvt__ConditionalToggle_Vis_UnlockScreen_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature");
		
		ABP_PondLab_Biodome_Terminal_C_BndEvt__ConditionalToggle_Vis_UnlockScreen_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.RedrawScreen
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::RedrawScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.RedrawScreen");
		
		ABP_PondLab_Biodome_Terminal_C_RedrawScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ExecuteUbergraph_BP_PondLab_Biodome_Terminal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PondLab_Biodome_Terminal_C::ExecuteUbergraph_BP_PondLab_Biodome_Terminal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.ExecuteUbergraph_BP_PondLab_Biodome_Terminal");
		
		ABP_PondLab_Biodome_Terminal_C_ExecuteUbergraph_BP_PondLab_Biodome_Terminal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BiodomeOpen__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PondLab_Biodome_Terminal_C::BiodomeOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C.BiodomeOpen__DelegateSignature");
		
		ABP_PondLab_Biodome_Terminal_C_BiodomeOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PondLab_Biodome_Terminal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PondLab_Biodome_Terminal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C");
		return ptr;
	}

}


