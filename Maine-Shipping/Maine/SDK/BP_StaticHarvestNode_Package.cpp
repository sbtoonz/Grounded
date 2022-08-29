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
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsKillingBlow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBaseLODActor*                               DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StaticHarvestNode_C::HandleHit(bool IsKillingBlow, class UBaseLODActor* DamageCauser, class AController* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleHit");
		
		ABP_StaticHarvestNode_C_HandleHit_Params params {};
		params.IsKillingBlow = IsKillingBlow;
		params.DamageCauser = DamageCauser;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.Handle Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_StaticHarvestNode_C::Handle_Death(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.Handle Death");
		
		ABP_StaticHarvestNode_C_Handle_Death_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.UserConstructionScript");
		
		ABP_StaticHarvestNode_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.MulticastDoShake
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::MulticastDoShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.MulticastDoShake");
		
		ABP_StaticHarvestNode_C_MulticastDoShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.MulticastExecuteLootSpawnVisuals
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::MulticastExecuteLootSpawnVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.MulticastExecuteLootSpawnVisuals");
		
		ABP_StaticHarvestNode_C_MulticastExecuteLootSpawnVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleLootSpawn
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::HandleLootSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleLootSpawn");
		
		ABP_StaticHarvestNode_C_HandleLootSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.DelayAndSpawnLoot
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::DelayAndSpawnLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.DelayAndSpawnLoot");
		
		ABP_StaticHarvestNode_C_DelayAndSpawnLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.SetReadyForLootSpawn
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::SetReadyForLootSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.SetReadyForLootSpawn");
		
		ABP_StaticHarvestNode_C_SetReadyForLootSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_StaticHarvestNode_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_StaticHarvestNode_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleLootSpawnVisuals
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::HandleLootSpawnVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandleLootSpawnVisuals");
		
		ABP_StaticHarvestNode_C_HandleLootSpawnVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_StaticHarvestNode_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathDelegate__DelegateSignature(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathDelegate__DelegateSignature");
		
		ABP_StaticHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathDelegate__DelegateSignature_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamagedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageInfo                                 DamageInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseLODActor*                               DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsKillingBlow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StaticHarvestNode_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamagedDelegate__DelegateSignature(float Damage, const struct FDamageInfo& DamageInfo, class AController* InstigatedBy, class UBaseLODActor* DamageCauser, bool IsKillingBlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamagedDelegate__DelegateSignature");
		
		ABP_StaticHarvestNode_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_4_DamagedDelegate__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandlePreDeathToExplosive
	 * 		Flags  -> ()
	 */
	void ABP_StaticHarvestNode_C::HandlePreDeathToExplosive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.HandlePreDeathToExplosive");
		
		ABP_StaticHarvestNode_C_HandlePreDeathToExplosive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.ExecuteUbergraph_BP_StaticHarvestNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StaticHarvestNode_C::ExecuteUbergraph_BP_StaticHarvestNode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticHarvestNode.BP_StaticHarvestNode_C.ExecuteUbergraph_BP_StaticHarvestNode");
		
		ABP_StaticHarvestNode_C_ExecuteUbergraph_BP_StaticHarvestNode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_StaticHarvestNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StaticHarvestNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StaticHarvestNode.BP_StaticHarvestNode_C");
		return ptr;
	}

}


