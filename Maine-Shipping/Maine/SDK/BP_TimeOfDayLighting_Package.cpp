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
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetPostProcessMain
	 * 		Flags  -> ()
	 */
	class UPostProcessComponent* ABP_TimeOfDayLighting_C::GetPostProcessMain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetPostProcessMain");
		
		ABP_TimeOfDayLighting_C_GetPostProcessMain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetSunLight
	 * 		Flags  -> ()
	 */
	class UDirectionalLightComponent* ABP_TimeOfDayLighting_C::GetSunLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetSunLight");
		
		ABP_TimeOfDayLighting_C_GetSunLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetPreviousTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BlendTrigger_C*                          PreviousTrigger                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetPreviousTrigger(class ABP_BlendTrigger_C** PreviousTrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetPreviousTrigger");
		
		ABP_TimeOfDayLighting_C_SetPreviousTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PreviousTrigger != nullptr)
			*PreviousTrigger = params.PreviousTrigger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SortTriggerArrayByPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_BlendTrigger_C*>                  BlendTriggerArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABP_BlendTrigger_C*>                  OutBlendTriggerArray                                       (Parm, OutParm)
	 */
	void ABP_TimeOfDayLighting_C::SortTriggerArrayByPriority(TArray<class ABP_BlendTrigger_C*>* BlendTriggerArray, TArray<class ABP_BlendTrigger_C*>* OutBlendTriggerArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SortTriggerArrayByPriority");
		
		ABP_TimeOfDayLighting_C_SortTriggerArrayByPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendTriggerArray != nullptr)
			*BlendTriggerArray = params.BlendTriggerArray;
		if (OutBlendTriggerArray != nullptr)
			*OutBlendTriggerArray = params.OutBlendTriggerArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.RegisterBlendTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BlendTrigger_C*                          BlendTrigger                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Deregister                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TimeOfDayLighting_C::RegisterBlendTrigger(class ABP_BlendTrigger_C* BlendTrigger, bool Deregister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.RegisterBlendTrigger");
		
		ABP_TimeOfDayLighting_C_RegisterBlendTrigger_Params params {};
		params.BlendTrigger = BlendTrigger;
		params.Deregister = Deregister;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Photo Mode Hourly Event Updates
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::Photo_Mode_Hourly_Event_Updates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Photo Mode Hourly Event Updates");
		
		ABP_TimeOfDayLighting_C_Photo_Mode_Hourly_Event_Updates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Get Current Hour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Current_Hour                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::Get_Current_Hour(int32_t* Current_Hour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Get Current Hour");
		
		ABP_TimeOfDayLighting_C_Get_Current_Hour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Current_Hour != nullptr)
			*Current_Hour = params.Current_Hour;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateOakTreeShadow
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateOakTreeShadow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateOakTreeShadow");
		
		ABP_TimeOfDayLighting_C_UpdateOakTreeShadow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdatePostProcess
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdatePostProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdatePostProcess");
		
		ABP_TimeOfDayLighting_C_UpdatePostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateTransitions
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateTransitions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateTransitions");
		
		ABP_TimeOfDayLighting_C_UpdateTransitions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateCollections
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateCollections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateCollections");
		
		ABP_TimeOfDayLighting_C_UpdateCollections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateVolumetricFog
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateVolumetricFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateVolumetricFog");
		
		ABP_TimeOfDayLighting_C_UpdateVolumetricFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSkylight
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateSkylight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSkylight");
		
		ABP_TimeOfDayLighting_C_UpdateSkylight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSky
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateSky()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSky");
		
		ABP_TimeOfDayLighting_C_UpdateSky_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateMoon
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateMoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateMoon");
		
		ABP_TimeOfDayLighting_C_UpdateMoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSun
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UpdateSun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateSun");
		
		ABP_TimeOfDayLighting_C_UpdateSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetNearestWaterBounds
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::GetNearestWaterBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetNearestWaterBounds");
		
		ABP_TimeOfDayLighting_C_GetNearestWaterBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetAllReferences
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::GetAllReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.GetAllReferences");
		
		ABP_TimeOfDayLighting_C_GetAllReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetBlendIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewIntensity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetBlendIntensity(float NewIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetBlendIntensity");
		
		ABP_TimeOfDayLighting_C_SetBlendIntensity_Params params {};
		params.NewIntensity = NewIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UserConstructionScript");
		
		ABP_TimeOfDayLighting_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.TL_HourlyPostProcessTransition__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::TL_HourlyPostProcessTransition__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.TL_HourlyPostProcessTransition__FinishedFunc");
		
		ABP_TimeOfDayLighting_C_TL_HourlyPostProcessTransition__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.TL_HourlyPostProcessTransition__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::TL_HourlyPostProcessTransition__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.TL_HourlyPostProcessTransition__UpdateFunc");
		
		ABP_TimeOfDayLighting_C_TL_HourlyPostProcessTransition__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CausticsFadeIn__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::CausticsFadeIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CausticsFadeIn__FinishedFunc");
		
		ABP_TimeOfDayLighting_C_CausticsFadeIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CausticsFadeIn__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::CausticsFadeIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CausticsFadeIn__UpdateFunc");
		
		ABP_TimeOfDayLighting_C_CausticsFadeIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ReceiveBeginPlay");
		
		ABP_TimeOfDayLighting_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ReceiveTick");
		
		ABP_TimeOfDayLighting_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CubemapSwap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::CubemapSwap(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.CubemapSwap");
		
		ABP_TimeOfDayLighting_C_CubemapSwap_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateHourlyVariables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::UpdateHourlyVariables(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateHourlyVariables");
		
		ABP_TimeOfDayLighting_C_UpdateHourlyVariables_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.DisableFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::DisableFog(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.DisableFog");
		
		ABP_TimeOfDayLighting_C_DisableFog_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateDailyVariables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::UpdateDailyVariables(int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.UpdateDailyVariables");
		
		ABP_TimeOfDayLighting_C_UpdateDailyVariables_Params params {};
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetSunAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetSunAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetSunAngle");
		
		ABP_TimeOfDayLighting_C_SetSunAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ClearArrays
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::ClearArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ClearArrays");
		
		ABP_TimeOfDayLighting_C_ClearArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ToggleDOF
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::ToggleDOF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ToggleDOF");
		
		ABP_TimeOfDayLighting_C_ToggleDOF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetDOFDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFDistance");
		
		ABP_TimeOfDayLighting_C_SetDOFDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetDOFBlur(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFBlur");
		
		ABP_TimeOfDayLighting_C_SetDOFBlur_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFDepthBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Blur                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetDOFDepthBlur(float Blur)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDOFDepthBlur");
		
		ABP_TimeOfDayLighting_C_SetDOFDepthBlur_Params params {};
		params.Blur = Blur;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCalendarComponent*                          Calendar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetHourlyEvents(class UCalendarComponent* Calendar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyEvents");
		
		ABP_TimeOfDayLighting_C_SetHourlyEvents_Params params {};
		params.Calendar = Calendar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyPostProcess
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::SetHourlyPostProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyPostProcess");
		
		ABP_TimeOfDayLighting_C_SetHourlyPostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetSkylightCubemaps
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCalendarComponent*                          Calendar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetSkylightCubemaps(class UCalendarComponent* Calendar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetSkylightCubemaps");
		
		ABP_TimeOfDayLighting_C_SetSkylightCubemaps_Params params {};
		params.Calendar = Calendar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyFogEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCalendarComponent*                          Calendar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetHourlyFogEvents(class UCalendarComponent* Calendar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetHourlyFogEvents");
		
		ABP_TimeOfDayLighting_C_SetHourlyFogEvents_Params params {};
		params.Calendar = Calendar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetCutsceneFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FogMultiplier                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetCutsceneFog(float FogMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetCutsceneFog");
		
		ABP_TimeOfDayLighting_C_SetCutsceneFog_Params params {};
		params.FogMultiplier = FogMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetFoliageViewDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ViewDistanceOverride                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::SetFoliageViewDistance(float ViewDistanceOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetFoliageViewDistance");
		
		ABP_TimeOfDayLighting_C_SetFoliageViewDistance_Params params {};
		params.ViewDistanceOverride = ViewDistanceOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetPondCubemaps
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::SetPondCubemaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetPondCubemaps");
		
		ABP_TimeOfDayLighting_C_SetPondCubemaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDefaultCubemaps
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::SetDefaultCubemaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.SetDefaultCubemaps");
		
		ABP_TimeOfDayLighting_C_SetDefaultCubemaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Set Water Caustic Masks
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::Set_Water_Caustic_Masks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Set Water Caustic Masks");
		
		ABP_TimeOfDayLighting_C_Set_Water_Caustic_Masks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.OnActiveBlendablesChanged
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::OnActiveBlendablesChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.OnActiveBlendablesChanged");
		
		ABP_TimeOfDayLighting_C_OnActiveBlendablesChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Update Hourly Events
	 * 		Flags  -> ()
	 */
	void ABP_TimeOfDayLighting_C::Update_Hourly_Events()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.Update Hourly Events");
		
		ABP_TimeOfDayLighting_C_Update_Hourly_Events_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ExecuteUbergraph_BP_TimeOfDayLighting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDayLighting_C::ExecuteUbergraph_BP_TimeOfDayLighting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDayLighting.BP_TimeOfDayLighting_C.ExecuteUbergraph_BP_TimeOfDayLighting");
		
		ABP_TimeOfDayLighting_C_ExecuteUbergraph_BP_TimeOfDayLighting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TimeOfDayLighting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TimeOfDayLighting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeOfDayLighting.BP_TimeOfDayLighting_C");
		return ptr;
	}

}


