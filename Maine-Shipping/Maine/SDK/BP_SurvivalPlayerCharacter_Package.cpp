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
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.GetHeadMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ABP_SurvivalPlayerCharacter_C::GetHeadMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.GetHeadMesh");
		
		ABP_SurvivalPlayerCharacter_C_GetHeadMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.GetInteractHighlightLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInteractHighlightLevel ABP_SurvivalPlayerCharacter_C::GetInteractHighlightLevel(class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.GetInteractHighlightLevel");
		
		ABP_SurvivalPlayerCharacter_C_GetInteractHighlightLevel_Params params {};
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReattachCameraOverlapObj
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECameraDisplayMode                                 DisplayMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::ReattachCameraOverlapObj(ECameraDisplayMode DisplayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReattachCameraOverlapObj");
		
		ABP_SurvivalPlayerCharacter_C_ReattachCameraOverlapObj_Params params {};
		params.DisplayMode = DisplayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.DoesDamageTypeAllowsScreenEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AllowsScreenEffects                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SurvivalPlayerCharacter_C::DoesDamageTypeAllowsScreenEffects(class UClass* DamageTypeClass, bool* AllowsScreenEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.DoesDamageTypeAllowsScreenEffects");
		
		ABP_SurvivalPlayerCharacter_C_DoesDamageTypeAllowsScreenEffects_Params params {};
		params.DamageTypeClass = DamageTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowsScreenEffects != nullptr)
			*AllowsScreenEffects = params.AllowsScreenEffects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.LineTraceByChannelForActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::LineTraceByChannelForActor(class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.LineTraceByChannelForActor");
		
		ABP_SurvivalPlayerCharacter_C_LineTraceByChannelForActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.LineTraceForActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::LineTraceForActor(TArray<EObjectTypeQuery>* ObjectTypes, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.LineTraceForActor");
		
		ABP_SurvivalPlayerCharacter_C_LineTraceForActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectTypes != nullptr)
			*ObjectTypes = params.ObjectTypes;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UserConstructionScript");
		
		ABP_SurvivalPlayerCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BinoZoom__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::BinoZoom__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BinoZoom__FinishedFunc");
		
		ABP_SurvivalPlayerCharacter_C_BinoZoom__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BinoZoom__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::BinoZoom__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BinoZoom__UpdateFunc");
		
		ABP_SurvivalPlayerCharacter_C_BinoZoom__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RespawnCorpseVisuals__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::RespawnCorpseVisuals__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RespawnCorpseVisuals__FinishedFunc");
		
		ABP_SurvivalPlayerCharacter_C_RespawnCorpseVisuals__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RespawnCorpseVisuals__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::RespawnCorpseVisuals__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RespawnCorpseVisuals__UpdateFunc");
		
		ABP_SurvivalPlayerCharacter_C_RespawnCorpseVisuals__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FallingVelocity__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::FallingVelocity__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FallingVelocity__FinishedFunc");
		
		ABP_SurvivalPlayerCharacter_C_FallingVelocity__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FallingVelocity__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::FallingVelocity__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FallingVelocity__UpdateFunc");
		
		ABP_SurvivalPlayerCharacter_C_FallingVelocity__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HeartbeatSFX_Mod__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::HeartbeatSFX_Mod__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HeartbeatSFX_Mod__FinishedFunc");
		
		ABP_SurvivalPlayerCharacter_C_HeartbeatSFX_Mod__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HeartbeatSFX_Mod__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::HeartbeatSFX_Mod__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HeartbeatSFX_Mod__UpdateFunc");
		
		ABP_SurvivalPlayerCharacter_C_HeartbeatSFX_Mod__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.StarvationSFX__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::StarvationSFX__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.StarvationSFX__FinishedFunc");
		
		ABP_SurvivalPlayerCharacter_C_StarvationSFX__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.StarvationSFX__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::StarvationSFX__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.StarvationSFX__UpdateFunc");
		
		ABP_SurvivalPlayerCharacter_C_StarvationSFX__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_26
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_P_K2Node_InputKeyEvent_26(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_26");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_P_K2Node_InputKeyEvent_26_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_O_K2Node_InputKeyEvent_25
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_O_K2Node_InputKeyEvent_25(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_O_K2Node_InputKeyEvent_25");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_O_K2Node_InputKeyEvent_25_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_T_K2Node_InputKeyEvent_24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_T_K2Node_InputKeyEvent_24(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_T_K2Node_InputKeyEvent_24");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_T_K2Node_InputKeyEvent_24_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Shift_T_K2Node_InputKeyEvent_23
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Shift_T_K2Node_InputKeyEvent_23(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Shift_T_K2Node_InputKeyEvent_23");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Shift_T_K2Node_InputKeyEvent_23_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_G_K2Node_InputKeyEvent_22
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_G_K2Node_InputKeyEvent_22(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_G_K2Node_InputKeyEvent_22");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_G_K2Node_InputKeyEvent_22_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Y_K2Node_InputKeyEvent_21
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_Y_K2Node_InputKeyEvent_21(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Y_K2Node_InputKeyEvent_21");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Y_K2Node_InputKeyEvent_21_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_20
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_K_K2Node_InputKeyEvent_20(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_20");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_K_K2Node_InputKeyEvent_20_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Zero_K2Node_InputKeyEvent_19
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_Zero_K2Node_InputKeyEvent_19(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Zero_K2Node_InputKeyEvent_19");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Zero_K2Node_InputKeyEvent_19_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_18(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_18");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_18_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_H_K2Node_InputKeyEvent_17
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_H_K2Node_InputKeyEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_H_K2Node_InputKeyEvent_17");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_H_K2Node_InputKeyEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_J_K2Node_InputKeyEvent_16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_J_K2Node_InputKeyEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_J_K2Node_InputKeyEvent_16");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_J_K2Node_InputKeyEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_B_K2Node_InputKeyEvent_15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_B_K2Node_InputKeyEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_B_K2Node_InputKeyEvent_15");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_B_K2Node_InputKeyEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_R_K2Node_InputKeyEvent_14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_R_K2Node_InputKeyEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_R_K2Node_InputKeyEvent_14");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_R_K2Node_InputKeyEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_C_K2Node_InputKeyEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_C_K2Node_InputKeyEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_C_K2Node_InputKeyEvent_13");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_C_K2Node_InputKeyEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_K_K2Node_InputKeyEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_K_K2Node_InputKeyEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_K_K2Node_InputKeyEvent_12");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_K_K2Node_InputKeyEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Z_K2Node_InputKeyEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_Z_K2Node_InputKeyEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Z_K2Node_InputKeyEvent_11");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Z_K2Node_InputKeyEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Attack_K2Node_InputActionEvent_19
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Attack_K2Node_InputActionEvent_19(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Attack_K2Node_InputActionEvent_19");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Attack_K2Node_InputActionEvent_19_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Attack_K2Node_InputActionEvent_18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Attack_K2Node_InputActionEvent_18(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Attack_K2Node_InputActionEvent_18");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Attack_K2Node_InputActionEvent_18_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_X_K2Node_InputKeyEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_X_K2Node_InputKeyEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_X_K2Node_InputKeyEvent_10");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_X_K2Node_InputKeyEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_L_K2Node_InputKeyEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_L_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_L_K2Node_InputKeyEvent_7");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_L_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Q_K2Node_InputKeyEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_Q_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Q_K2Node_InputKeyEvent_5");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Q_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_One_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_One_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_One_K2Node_InputKeyEvent_4");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_One_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Two_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Two_K2Node_InputKeyEvent_3");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Two_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt+Shift_L_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_Shift_L_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt+Shift_L_K2Node_InputKeyEvent_2");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Shift_L_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnLoaded_949C4F344484F3C2272BA28A79E47301
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::OnLoaded_949C4F344484F3C2272BA28A79E47301(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnLoaded_949C4F344484F3C2272BA28A79E47301");
		
		ABP_SurvivalPlayerCharacter_C_OnLoaded_949C4F344484F3C2272BA28A79E47301_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Three_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Alt_Three_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Alt_Three_K2Node_InputKeyEvent_1");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Alt_Three_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Menu_K2Node_InputActionEvent_17
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_Menu_K2Node_InputActionEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_Menu_K2Node_InputActionEvent_17");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_Menu_K2Node_InputActionEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_16");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_15");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_SCABFaceToggle_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_14");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_13");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_12");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenInventoryMenu_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_11");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenCraftingMenu_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenMapMenu_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_OpenMapMenu_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_OpenMapMenu_K2Node_InputActionEvent_10");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_OpenMapMenu_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_UIOpenChat_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_UIOpenChat_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_UIOpenChat_K2Node_InputActionEvent_9");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_UIOpenChat_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot1_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot1_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot1_K2Node_InputActionEvent_8");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot1_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot2_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot2_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot2_K2Node_InputActionEvent_7");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot2_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot3_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot3_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot3_K2Node_InputActionEvent_6");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot3_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot4_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot4_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot4_K2Node_InputActionEvent_5");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot4_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot5_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot5_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot5_K2Node_InputActionEvent_4");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot5_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot6_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot6_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot6_K2Node_InputActionEvent_3");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot6_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot8_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot8_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot8_K2Node_InputActionEvent_2");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot8_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot7_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::InpActEvt_HotSlot7_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.InpActEvt_HotSlot7_K2Node_InputActionEvent_1");
		
		ABP_SurvivalPlayerCharacter_C_InpActEvt_HotSlot7_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PrototypeBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::PrototypeBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PrototypeBeginPlay");
		
		ABP_SurvivalPlayerCharacter_C_PrototypeBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PrototypeTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::PrototypeTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PrototypeTick");
		
		ABP_SurvivalPlayerCharacter_C_PrototypeTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FireflyLampCheck
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::FireflyLampCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.FireflyLampCheck");
		
		ABP_SurvivalPlayerCharacter_C_FireflyLampCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ProtoGrappleTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick");
		
		ABP_SurvivalPlayerCharacter_C_ProtoGrappleTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoDestroyGrapple
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ProtoDestroyGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoDestroyGrapple");
		
		ABP_SurvivalPlayerCharacter_C_ProtoDestroyGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoAttemptGrapple
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ProtoAttemptGrapple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoAttemptGrapple");
		
		ABP_SurvivalPlayerCharacter_C_ProtoAttemptGrapple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick_Swing
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ProtoGrappleTick_Swing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick_Swing");
		
		ABP_SurvivalPlayerCharacter_C_ProtoGrappleTick_Swing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick_Reel
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ProtoGrappleTick_Reel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoGrappleTick_Reel");
		
		ABP_SurvivalPlayerCharacter_C_ProtoGrappleTick_Reel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoThrownProjectilePathTick
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ProtoThrownProjectilePathTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoThrownProjectilePathTick");
		
		ABP_SurvivalPlayerCharacter_C_ProtoThrownProjectilePathTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoArrowProjectilePathTick
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ProtoArrowProjectilePathTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ProtoArrowProjectilePathTick");
		
		ABP_SurvivalPlayerCharacter_C_ProtoArrowProjectilePathTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.Rain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::Rain(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.Rain");
		
		ABP_SurvivalPlayerCharacter_C_Rain_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_SurvivalPlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathDelegate__DelegateSignature_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamagedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageInfo                                 DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseLODActor*                               DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsKillingBlow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SurvivalPlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamagedDelegate__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamagedDelegate__DelegateSignature_Params params {};
		params.Damage = Damage;
		params.DamageInfo = DamageInfo;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.IsKillingBlow = IsKillingBlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleDeath
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::HandleDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleDeath");
		
		ABP_SurvivalPlayerCharacter_C_HandleDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientHandleDamageEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::ClientHandleDamageEffects(class UClass* DamageType, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientHandleDamageEffects");
		
		ABP_SurvivalPlayerCharacter_C_ClientHandleDamageEffects_Params params {};
		params.DamageType = DamageType;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleDamageTypeAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::HandleDamageTypeAudio(class UClass* DamageType, class UObject* DamageSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleDamageTypeAudio");
		
		ABP_SurvivalPlayerCharacter_C_HandleDamageTypeAudio_Params params {};
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientHandleDeath
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ClientHandleDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientHandleDeath");
		
		ABP_SurvivalPlayerCharacter_C_ClientHandleDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleIncapacitation
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::HandleIncapacitation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleIncapacitation");
		
		ABP_SurvivalPlayerCharacter_C_HandleIncapacitation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleRevive
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::HandleRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleRevive");
		
		ABP_SurvivalPlayerCharacter_C_HandleRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHealthStateChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHealthState                                       NewHealthState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHealthStateChangedDelegate__DelegateSignature(EHealthState NewHealthState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHealthStateChangedDelegate__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_OnHealthStateChangedDelegate__DelegateSignature_Params params {};
		params.NewHealthState = NewHealthState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceiveBeginPlay");
		
		ABP_SurvivalPlayerCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceivePossessed");
		
		ABP_SurvivalPlayerCharacter_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MulticastOnPossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::MulticastOnPossessed(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MulticastOnPossessed");
		
		ABP_SurvivalPlayerCharacter_C_MulticastOnPossessed_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ToggleSCAB_Glow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::ToggleSCAB_Glow(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ToggleSCAB_Glow");
		
		ABP_SurvivalPlayerCharacter_C_ToggleSCAB_Glow_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RequireSCABItemForSCABHUD
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::RequireSCABItemForSCABHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.RequireSCABItemForSCABHUD");
		
		ABP_SurvivalPlayerCharacter_C_RequireSCABItemForSCABHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleSCABVisibilityOnPlayerStart
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::HandleSCABVisibilityOnPlayerStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleSCABVisibilityOnPlayerStart");
		
		ABP_SurvivalPlayerCharacter_C_HandleSCABVisibilityOnPlayerStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UpdateDOF
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::UpdateDOF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UpdateDOF");
		
		ABP_SurvivalPlayerCharacter_C_UpdateDOF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ReceiveTick");
		
		ABP_SurvivalPlayerCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PlayDestroyVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDestroyCharacterVariation                         Variation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::PlayDestroyVisuals(EDestroyCharacterVariation Variation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.PlayDestroyVisuals");
		
		ABP_SurvivalPlayerCharacter_C_PlayDestroyVisuals_Params params {};
		params.Variation = Variation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_OnItemBrokenDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_OnItemBrokenDelegate__DelegateSignature(class ASurvivalCharacter* Owner, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_OnItemBrokenDelegate__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_0_OnItemBrokenDelegate__DelegateSignature_Params params {};
		params.Owner = Owner;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_1_OnEquipmentChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_1_OnEquipmentChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_1_OnEquipmentChanged__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_BndEvt__EquipmentComponent_K2Node_ComponentBoundEvent_1_OnEquipmentChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientOpenMapMenu
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::ClientOpenMapMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ClientOpenMapMenu");
		
		ABP_SurvivalPlayerCharacter_C_ClientOpenMapMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnJumpAnimBegin
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::NotifyOnJumpAnimBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnJumpAnimBegin");
		
		ABP_SurvivalPlayerCharacter_C_NotifyOnJumpAnimBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnLandAnimBegin
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::NotifyOnLandAnimBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnLandAnimBegin");
		
		ABP_SurvivalPlayerCharacter_C_NotifyOnLandAnimBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnHitReactAnimBegin
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::NotifyOnHitReactAnimBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.NotifyOnHitReactAnimBegin");
		
		ABP_SurvivalPlayerCharacter_C_NotifyOnHitReactAnimBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MovementAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OldLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OldVelocity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::MovementAudio(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MovementAudio");
		
		ABP_SurvivalPlayerCharacter_C_MovementAudio_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.OldLocation = OldLocation;
		params.OldVelocity = OldVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UpdateFOVCameraPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::UpdateFOVCameraPlacement(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.UpdateFOVCameraPlacement");
		
		ABP_SurvivalPlayerCharacter_C_UpdateFOVCameraPlacement_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnUIOpenChatPressed
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::OnUIOpenChatPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnUIOpenChatPressed");
		
		ABP_SurvivalPlayerCharacter_C_OnUIOpenChatPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_SurvivalPlayerCharacter_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnLanded");
		
		ABP_SurvivalPlayerCharacter_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleCameraDisplayModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECameraDisplayMode                                 DisplayMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::HandleCameraDisplayModeChanged(ECameraDisplayMode DisplayMode, float BlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.HandleCameraDisplayModeChanged");
		
		ABP_SurvivalPlayerCharacter_C_HandleCameraDisplayModeChanged_Params params {};
		params.DisplayMode = DisplayMode;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.K2_OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.K2_OnMovementModeChanged");
		
		ABP_SurvivalPlayerCharacter_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__CharMovementComponent_K2Node_ComponentBoundEvent_0_UnderwaterChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsUnderwater                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SurvivalPlayerCharacter_C::BndEvt__CharMovementComponent_K2Node_ComponentBoundEvent_0_UnderwaterChangedDelegate__DelegateSignature(bool bIsUnderwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__CharMovementComponent_K2Node_ComponentBoundEvent_0_UnderwaterChangedDelegate__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_BndEvt__CharMovementComponent_K2Node_ComponentBoundEvent_0_UnderwaterChangedDelegate__DelegateSignature_Params params {};
		params.bIsUnderwater = bIsUnderwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.SFXDrown
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::SFXDrown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.SFXDrown");
		
		ABP_SurvivalPlayerCharacter_C_SFXDrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MulticastPlayCharacterSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SoundTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAttached                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SurvivalPlayerCharacter_C::MulticastPlayCharacterSound(const struct FGameplayTag& SoundTag, bool bAttached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.MulticastPlayCharacterSound");
		
		ABP_SurvivalPlayerCharacter_C_MulticastPlayCharacterSound_Params params {};
		params.SoundTag = SoundTag;
		params.bAttached = bAttached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.SFXStarvation
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::SFXStarvation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.SFXStarvation");
		
		ABP_SurvivalPlayerCharacter_C_SFXStarvation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnControllerDisconnected
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::OnControllerDisconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnControllerDisconnected");
		
		ABP_SurvivalPlayerCharacter_C_OnControllerDisconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__BP_SurvivalPlayerCharacter_BuildingPlacementComponent_K2Node_ComponentBoundEvent_0_BuildingDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABuilding*                                   Building                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::BndEvt__BP_SurvivalPlayerCharacter_BuildingPlacementComponent_K2Node_ComponentBoundEvent_0_BuildingDelegate__DelegateSignature(class ABuilding* Building)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.BndEvt__BP_SurvivalPlayerCharacter_BuildingPlacementComponent_K2Node_ComponentBoundEvent_0_BuildingDelegate__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_BndEvt__BP_SurvivalPlayerCharacter_BuildingPlacementComponent_K2Node_ComponentBoundEvent_0_BuildingDelegate__DelegateSignature_Params params {};
		params.Building = Building;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ExecuteUbergraph_BP_SurvivalPlayerCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SurvivalPlayerCharacter_C::ExecuteUbergraph_BP_SurvivalPlayerCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.ExecuteUbergraph_BP_SurvivalPlayerCharacter");
		
		ABP_SurvivalPlayerCharacter_C_ExecuteUbergraph_BP_SurvivalPlayerCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnDebugCommandTriggered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::OnDebugCommandTriggered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnDebugCommandTriggered__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_OnDebugCommandTriggered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnItemEquipped__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_SurvivalPlayerCharacter_C::OnItemEquipped__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C.OnItemEquipped__DelegateSignature");
		
		ABP_SurvivalPlayerCharacter_C_OnItemEquipped__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SurvivalPlayerCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SurvivalPlayerCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivalPlayerCharacter.BP_SurvivalPlayerCharacter_C");
		return ptr;
	}

}


