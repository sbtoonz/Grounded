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
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.SetPhotoModeTickDelegates
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::SetPhotoModeTickDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.SetPhotoModeTickDelegates");
		
		ABP_NightEmissveBase_C_SetPhotoModeTickDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.Find Time Of Day Manager
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::Find_Time_Of_Day_Manager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.Find Time Of Day Manager");
		
		ABP_NightEmissveBase_C_Find_Time_Of_Day_Manager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.InitializeLightToggle
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::InitializeLightToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.InitializeLightToggle");
		
		ABP_NightEmissveBase_C_InitializeLightToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.Toggle Lamp Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LightCurve                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::Toggle_Lamp_Internal(float LightCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.Toggle Lamp Internal");
		
		ABP_NightEmissveBase_C_Toggle_Lamp_Internal_Params params {};
		params.LightCurve = LightCurve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterLightCone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMeshComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::RegisterLightCone(class UStaticMeshComponent* StaticMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterLightCone");
		
		ABP_NightEmissveBase_C_RegisterLightCone_Params params {};
		params.StaticMeshComponent = StaticMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterSpotlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USpotLightComponent*                         SpotLightComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::RegisterSpotlight(class USpotLightComponent* SpotLightComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterSpotlight");
		
		ABP_NightEmissveBase_C_RegisterSpotlight_Params params {};
		params.SpotLightComponent = SpotLightComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterGlowMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMeshComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::RegisterGlowMesh(class UStaticMeshComponent* StaticMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.RegisterGlowMesh");
		
		ABP_NightEmissveBase_C_RegisterGlowMesh_Params params {};
		params.StaticMeshComponent = StaticMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.ToggleInEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TimeOfDayLighting_C*                     TimeOfDay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LightSwitch                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NightEmissveBase_C::ToggleInEditMode(class ABP_TimeOfDayLighting_C* TimeOfDay, bool LightSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.ToggleInEditMode");
		
		ABP_NightEmissveBase_C_ToggleInEditMode_Params params {};
		params.TimeOfDay = TimeOfDay;
		params.LightSwitch = LightSwitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.UserConstructionScript");
		
		ABP_NightEmissveBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.TL_GardenLamp_OnOff__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::TL_GardenLamp_OnOff__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.TL_GardenLamp_OnOff__FinishedFunc");
		
		ABP_NightEmissveBase_C_TL_GardenLamp_OnOff__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.TL_GardenLamp_OnOff__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::TL_GardenLamp_OnOff__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.TL_GardenLamp_OnOff__UpdateFunc");
		
		ABP_NightEmissveBase_C_TL_GardenLamp_OnOff__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.ReceiveBeginPlay");
		
		ABP_NightEmissveBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.Toggle_GardenLamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::Toggle_GardenLamp(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.Toggle_GardenLamp");
		
		ABP_NightEmissveBase_C_Toggle_GardenLamp_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.ReceiveTick");
		
		ABP_NightEmissveBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.OnPhotoModeExited
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::OnPhotoModeExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.OnPhotoModeExited");
		
		ABP_NightEmissveBase_C_OnPhotoModeExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.UpdatePhotoModeTimeOfDay
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::UpdatePhotoModeTimeOfDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.UpdatePhotoModeTimeOfDay");
		
		ABP_NightEmissveBase_C_UpdatePhotoModeTimeOfDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.PhotoModeEnterEnableTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APhotoPawn*                                  PhotoPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::PhotoModeEnterEnableTick(class APhotoPawn* PhotoPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.PhotoModeEnterEnableTick");
		
		ABP_NightEmissveBase_C_PhotoModeEnterEnableTick_Params params {};
		params.PhotoPawn = PhotoPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.PhotoModeExitDisableTick
	 * 		Flags  -> ()
	 */
	void ABP_NightEmissveBase_C::PhotoModeExitDisableTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.PhotoModeExitDisableTick");
		
		ABP_NightEmissveBase_C_PhotoModeExitDisableTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NightEmissveBase.BP_NightEmissveBase_C.ExecuteUbergraph_BP_NightEmissveBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NightEmissveBase_C::ExecuteUbergraph_BP_NightEmissveBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NightEmissveBase.BP_NightEmissveBase_C.ExecuteUbergraph_BP_NightEmissveBase");
		
		ABP_NightEmissveBase_C_ExecuteUbergraph_BP_NightEmissveBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NightEmissveBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NightEmissveBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NightEmissveBase.BP_NightEmissveBase_C");
		return ptr;
	}

}


