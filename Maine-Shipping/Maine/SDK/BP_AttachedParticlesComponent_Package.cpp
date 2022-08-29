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
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttachedParticlesComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.ReceiveTick");
		
		UBP_AttachedParticlesComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.BeginOverlapWeedKiller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttachedParticlesComponent_C::BeginOverlapWeedKiller(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.BeginOverlapWeedKiller");
		
		UBP_AttachedParticlesComponent_C_BeginOverlapWeedKiller_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EndOverlapWeedKiller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttachedParticlesComponent_C::EndOverlapWeedKiller(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EndOverlapWeedKiller");
		
		UBP_AttachedParticlesComponent_C_EndOverlapWeedKiller_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.BeginOverlapLab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttachedParticlesComponent_C::BeginOverlapLab(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.BeginOverlapLab");
		
		UBP_AttachedParticlesComponent_C_BeginOverlapLab_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EndOverlapLab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttachedParticlesComponent_C::EndOverlapLab(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EndOverlapLab");
		
		UBP_AttachedParticlesComponent_C_EndOverlapLab_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.SetupEffects
	 * 		Flags  -> ()
	 */
	void UBP_AttachedParticlesComponent_C::SetupEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.SetupEffects");
		
		UBP_AttachedParticlesComponent_C_SetupEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.SetWaterParticles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InWater                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Water_Large_C*                           OverlappedWaterVolume                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttachedParticlesComponent_C::SetWaterParticles(bool InWater, class ABP_Water_Large_C* OverlappedWaterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.SetWaterParticles");
		
		UBP_AttachedParticlesComponent_C_SetWaterParticles_Params params {};
		params.InWater = InWater;
		params.OverlappedWaterVolume = OverlappedWaterVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EnableWaterParticleOverrride
	 * 		Flags  -> ()
	 */
	void UBP_AttachedParticlesComponent_C::EnableWaterParticleOverrride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.EnableWaterParticleOverrride");
		
		UBP_AttachedParticlesComponent_C_EnableWaterParticleOverrride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.DisableWaterParticleOverride
	 * 		Flags  -> ()
	 */
	void UBP_AttachedParticlesComponent_C::DisableWaterParticleOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.DisableWaterParticleOverride");
		
		UBP_AttachedParticlesComponent_C_DisableWaterParticleOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.ExecuteUbergraph_BP_AttachedParticlesComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AttachedParticlesComponent_C::ExecuteUbergraph_BP_AttachedParticlesComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C.ExecuteUbergraph_BP_AttachedParticlesComponent");
		
		UBP_AttachedParticlesComponent_C_ExecuteUbergraph_BP_AttachedParticlesComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AttachedParticlesComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AttachedParticlesComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttachedParticlesComponent.BP_AttachedParticlesComponent_C");
		return ptr;
	}

}


