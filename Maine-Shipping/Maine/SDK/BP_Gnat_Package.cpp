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
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.CheckLootConditionals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemDataRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	bool ABP_Gnat_C::CheckLootConditionals(const struct FDataTableRowHandle& ItemDataRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.CheckLootConditionals");
		
		ABP_Gnat_C_CheckLootConditionals_Params params {};
		params.ItemDataRowHandle = ItemDataRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Gnat_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.UserConstructionScript");
		
		ABP_Gnat_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.Timeline_wingDeath__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Gnat_C::Timeline_wingDeath__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.Timeline_wingDeath__FinishedFunc");
		
		ABP_Gnat_C_Timeline_wingDeath__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.Timeline_wingDeath__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Gnat_C::Timeline_wingDeath__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.Timeline_wingDeath__UpdateFunc");
		
		ABP_Gnat_C_Timeline_wingDeath__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.Timeline_wingFlap__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Gnat_C::Timeline_wingFlap__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.Timeline_wingFlap__FinishedFunc");
		
		ABP_Gnat_C_Timeline_wingFlap__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.Timeline_wingFlap__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Gnat_C::Timeline_wingFlap__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.Timeline_wingFlap__UpdateFunc");
		
		ABP_Gnat_C_Timeline_wingFlap__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Gnat_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.ReceiveBeginPlay");
		
		ABP_Gnat_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Gnat_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_Gnat_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHealthStateChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHealthState                                       NewHealthState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Gnat_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHealthStateChangedDelegate__DelegateSignature(EHealthState NewHealthState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHealthStateChangedDelegate__DelegateSignature");
		
		ABP_Gnat_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHealthStateChangedDelegate__DelegateSignature_Params params {};
		params.NewHealthState = NewHealthState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.Handle Boop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Gnat_C::Handle_Boop(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.Handle Boop");
		
		ABP_Gnat_C_Handle_Boop_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gnat.BP_Gnat_C.ExecuteUbergraph_BP_Gnat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Gnat_C::ExecuteUbergraph_BP_Gnat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gnat.BP_Gnat_C.ExecuteUbergraph_BP_Gnat");
		
		ABP_Gnat_C_ExecuteUbergraph_BP_Gnat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Gnat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Gnat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gnat.BP_Gnat_C");
		return ptr;
	}

}


