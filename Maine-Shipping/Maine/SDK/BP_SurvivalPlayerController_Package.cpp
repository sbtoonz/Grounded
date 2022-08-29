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
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.StopLoadingScreenOnClient
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::StopLoadingScreenOnClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.StopLoadingScreenOnClient");
		
		ABP_SurvivalPlayerController_C_StopLoadingScreenOnClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.HandleGameModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            GameModeSelection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameMode                                          GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::HandleGameModeChanged(int32_t GameModeSelection, EGameMode GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.HandleGameModeChanged");
		
		ABP_SurvivalPlayerController_C_HandleGameModeChanged_Params params {};
		params.GameModeSelection = GameModeSelection;
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::InpActEvt_VoiceChat_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_4");
		
		ABP_SurvivalPlayerController_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::InpActEvt_VoiceChat_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_3");
		
		ABP_SurvivalPlayerController_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_Alt_U_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::InpActEvt_Alt_U_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_Alt_U_K2Node_InputKeyEvent_1");
		
		ABP_SurvivalPlayerController_C_InpActEvt_Alt_U_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_MainePhoto_ToggleUI_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::InpActEvt_MainePhoto_ToggleUI_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_MainePhoto_ToggleUI_K2Node_InputActionEvent_2");
		
		ABP_SurvivalPlayerController_C_InpActEvt_MainePhoto_ToggleUI_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_MainePhoto_ToggleSettings_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::InpActEvt_MainePhoto_ToggleSettings_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.InpActEvt_MainePhoto_ToggleSettings_K2Node_InputActionEvent_1");
		
		ABP_SurvivalPlayerController_C_InpActEvt_MainePhoto_ToggleSettings_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ServerSpawnAsPlayer
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::ServerSpawnAsPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ServerSpawnAsPlayer");
		
		ABP_SurvivalPlayerController_C_ServerSpawnAsPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.IdentityCheck
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::IdentityCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.IdentityCheck");
		
		ABP_SurvivalPlayerController_C_IdentityCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ServerToggleSpectatorMode
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::ServerToggleSpectatorMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ServerToggleSpectatorMode");
		
		ABP_SurvivalPlayerController_C_ServerToggleSpectatorMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ReceiveBeginPlay");
		
		ABP_SurvivalPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.BroadcastGameModeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameMode                                          GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::BroadcastGameModeChange(EGameMode GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.BroadcastGameModeChange");
		
		ABP_SurvivalPlayerController_C_BroadcastGameModeChange_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.UpdateSelectedGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameMode                                          GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::UpdateSelectedGameMode(EGameMode GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.UpdateSelectedGameMode");
		
		ABP_SurvivalPlayerController_C_UpdateSelectedGameMode_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.StopLoadingScreen
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::StopLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.StopLoadingScreen");
		
		ABP_SurvivalPlayerController_C_StopLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.HandlePhotoModeUnallowedInMP
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::HandlePhotoModeUnallowedInMP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.HandlePhotoModeUnallowedInMP");
		
		ABP_SurvivalPlayerController_C_HandlePhotoModeUnallowedInMP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.OnPhotoModeExitedAudio
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerController_C::OnPhotoModeExitedAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.OnPhotoModeExitedAudio");
		
		ABP_SurvivalPlayerController_C_OnPhotoModeExitedAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ExecuteUbergraph_BP_SurvivalPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerController_C::ExecuteUbergraph_BP_SurvivalPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerController.BP_SurvivalPlayerController_C.ExecuteUbergraph_BP_SurvivalPlayerController");
		
		ABP_SurvivalPlayerController_C_ExecuteUbergraph_BP_SurvivalPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SurvivalPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SurvivalPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivalPlayerController.BP_SurvivalPlayerController_C");
		return ptr;
	}

}


