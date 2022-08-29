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
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandlePartyKeyItemObtained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         QuestItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalGameState_C::HandlePartyKeyItemObtained(const struct FDataTableRowHandle& QuestItem, class ASurvivalPlayerState* AcquirerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandlePartyKeyItemObtained");
		
		ABP_SurvivalGameState_C_HandlePartyKeyItemObtained_Params params {};
		params.QuestItem = QuestItem;
		params.AcquirerPlayerState = AcquirerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalGameState_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.ReceiveBeginPlay");
		
		ABP_SurvivalGameState_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.OnKeyItemObtained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         KeyItemRowHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_SurvivalGameState_C::OnKeyItemObtained(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.OnKeyItemObtained");
		
		ABP_SurvivalGameState_C_OnKeyItemObtained_Params params {};
		params.KeyItemRowHandle = KeyItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.MulticastHandleEndOfDemo
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalGameState_C::MulticastHandleEndOfDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.MulticastHandleEndOfDemo");
		
		ABP_SurvivalGameState_C_MulticastHandleEndOfDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalGameState_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.ReceiveEndPlay");
		
		ABP_SurvivalGameState_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.OnHourChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalGameState_C::OnHourChanged(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.OnHourChanged");
		
		ABP_SurvivalGameState_C_OnHourChanged_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandleEndEarlyAccessConent
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalGameState_C::HandleEndEarlyAccessConent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandleEndEarlyAccessConent");
		
		ABP_SurvivalGameState_C_HandleEndEarlyAccessConent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.EndOfEarlyAccessContentConfirmationWindow_Accept
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalGameState_C::EndOfEarlyAccessContentConfirmationWindow_Accept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.EndOfEarlyAccessContentConfirmationWindow_Accept");
		
		ABP_SurvivalGameState_C_EndOfEarlyAccessContentConfirmationWindow_Accept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandlePatchSaveGameRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameVersion                                LoadedVersion                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		EGamePackageType                                   GamePackageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalGameState_C::HandlePatchSaveGameRepair(const struct FGameVersion& LoadedVersion, EGamePackageType GamePackageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.HandlePatchSaveGameRepair");
		
		ABP_SurvivalGameState_C_HandlePatchSaveGameRepair_Params params {};
		params.LoadedVersion = LoadedVersion;
		params.GamePackageType = GamePackageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.BndEvt__BP_SurvivalGameState_PartyComponent_K2Node_ComponentBoundEvent_0_OnKeyItemObtainedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         KeyItemRowHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_SurvivalGameState_C::BndEvt__BP_SurvivalGameState_PartyComponent_K2Node_ComponentBoundEvent_0_OnKeyItemObtainedDelegate__DelegateSignature(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.BndEvt__BP_SurvivalGameState_PartyComponent_K2Node_ComponentBoundEvent_0_OnKeyItemObtainedDelegate__DelegateSignature");
		
		ABP_SurvivalGameState_C_BndEvt__BP_SurvivalGameState_PartyComponent_K2Node_ComponentBoundEvent_0_OnKeyItemObtainedDelegate__DelegateSignature_Params params {};
		params.KeyItemRowHandle = KeyItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalGameState.BP_SurvivalGameState_C.ExecuteUbergraph_BP_SurvivalGameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalGameState_C::ExecuteUbergraph_BP_SurvivalGameState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalGameState.BP_SurvivalGameState_C.ExecuteUbergraph_BP_SurvivalGameState");
		
		ABP_SurvivalGameState_C_ExecuteUbergraph_BP_SurvivalGameState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SurvivalGameState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SurvivalGameState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivalGameState.BP_SurvivalGameState_C");
		return ptr;
	}

}


