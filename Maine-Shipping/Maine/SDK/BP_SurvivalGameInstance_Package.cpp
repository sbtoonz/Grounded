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
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.GetCurrentNightUIThemeInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGlobalColorTheme_Base_C*                    Instance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::GetCurrentNightUIThemeInstance(class UGlobalColorTheme_Base_C** Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.GetCurrentNightUIThemeInstance");
		
		UBP_SurvivalGameInstance_C_GetCurrentNightUIThemeInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instance != nullptr)
			*Instance = params.Instance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.GetCurrentUIThemeInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGlobalColorTheme_Base_C*                    Instance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::GetCurrentUIThemeInstance(class UGlobalColorTheme_Base_C** Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.GetCurrentUIThemeInstance");
		
		UBP_SurvivalGameInstance_C_GetCurrentUIThemeInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instance != nullptr)
			*Instance = params.Instance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnFailure_4E51F35E4A9471FE5AD0B7BE74317409
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::OnFailure_4E51F35E4A9471FE5AD0B7BE74317409(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnFailure_4E51F35E4A9471FE5AD0B7BE74317409");
		
		UBP_SurvivalGameInstance_C_OnFailure_4E51F35E4A9471FE5AD0B7BE74317409_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnSuccess_4E51F35E4A9471FE5AD0B7BE74317409
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::OnSuccess_4E51F35E4A9471FE5AD0B7BE74317409(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnSuccess_4E51F35E4A9471FE5AD0B7BE74317409");
		
		UBP_SurvivalGameInstance_C_OnSuccess_4E51F35E4A9471FE5AD0B7BE74317409_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnFailure_EC380EAC42E15B600864FDA296D727FC
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::OnFailure_EC380EAC42E15B600864FDA296D727FC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnFailure_EC380EAC42E15B600864FDA296D727FC");
		
		UBP_SurvivalGameInstance_C_OnFailure_EC380EAC42E15B600864FDA296D727FC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnSuccess_EC380EAC42E15B600864FDA296D727FC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeOffsetSec                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NetworkDelaySec                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::OnSuccess_EC380EAC42E15B600864FDA296D727FC(float TimeOffsetSec, float NetworkDelaySec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnSuccess_EC380EAC42E15B600864FDA296D727FC");
		
		UBP_SurvivalGameInstance_C_OnSuccess_EC380EAC42E15B600864FDA296D727FC_Params params {};
		params.TimeOffsetSec = TimeOffsetSec;
		params.NetworkDelaySec = NetworkDelaySec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ReceiveInit");
		
		UBP_SurvivalGameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ReceiveShutdown
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::ReceiveShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ReceiveShutdown");
		
		UBP_SurvivalGameInstance_C_ReceiveShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.LogIntoAnalytics
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::LogIntoAnalytics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.LogIntoAnalytics");
		
		UBP_SurvivalGameInstance_C_LogIntoAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleSetIsSinglePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SinglePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SurvivalGameInstance_C::HandleSetIsSinglePlayer(bool SinglePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleSetIsSinglePlayer");
		
		UBP_SurvivalGameInstance_C_HandleSetIsSinglePlayer_Params params {};
		params.SinglePlayer = SinglePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SurvivalGameInstance_C::OnInviteReceived(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnInviteReceived");
		
		UBP_SurvivalGameInstance_C_OnInviteReceived_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleAcceptedInvite
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::HandleAcceptedInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleAcceptedInvite");
		
		UBP_SurvivalGameInstance_C_HandleAcceptedInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleDismissInvite
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::HandleDismissInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleDismissInvite");
		
		UBP_SurvivalGameInstance_C_HandleDismissInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.CloseCurrentInviteWindow
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::CloseCurrentInviteWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.CloseCurrentInviteWindow");
		
		UBP_SurvivalGameInstance_C_CloseCurrentInviteWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleJoinGameFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoinSessionFailureResult                          Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::HandleJoinGameFailure(EJoinSessionFailureResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleJoinGameFailure");
		
		UBP_SurvivalGameInstance_C_HandleJoinGameFailure_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.AskForInviteGamePassword
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::AskForInviteGamePassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.AskForInviteGamePassword");
		
		UBP_SurvivalGameInstance_C_AskForInviteGamePassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnPasswordEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UserText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::OnPasswordEntered(const class FString& UserText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnPasswordEntered");
		
		UBP_SurvivalGameInstance_C_OnPasswordEntered_Params params {};
		params.UserText = UserText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnCancel
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::OnCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.OnCancel");
		
		UBP_SurvivalGameInstance_C_OnCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleJoinOnlineInvite
	 * 		Flags  -> ()
	 */
	void UBP_SurvivalGameInstance_C::HandleJoinOnlineInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleJoinOnlineInvite");
		
		UBP_SurvivalGameInstance_C_HandleJoinOnlineInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleAcceptTCUIInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SurvivalGameInstance_C::HandleAcceptTCUIInvite(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.HandleAcceptTCUIInvite");
		
		UBP_SurvivalGameInstance_C_HandleAcceptTCUIInvite_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ExecuteUbergraph_BP_SurvivalGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SurvivalGameInstance_C::ExecuteUbergraph_BP_SurvivalGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameInstance.BP_SurvivalGameInstance_C.ExecuteUbergraph_BP_SurvivalGameInstance");
		
		UBP_SurvivalGameInstance_C_ExecuteUbergraph_BP_SurvivalGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SurvivalGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SurvivalGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivalGameInstance.BP_SurvivalGameInstance_C");
		return ptr;
	}

}


