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
	 * 		Name   -> Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.Timeline_0_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_BASE_Mushroom_C::Timeline_0_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.Timeline_0_0__FinishedFunc");
		
		ABP_BASE_Mushroom_C_Timeline_0_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.Timeline_0_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_BASE_Mushroom_C::Timeline_0_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.Timeline_0_0__UpdateFunc");
		
		ABP_BASE_Mushroom_C_Timeline_0_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BASE_Mushroom_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.ReceiveBeginPlay");
		
		ABP_BASE_Mushroom_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BASE_Mushroom_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature");
		
		ABP_BASE_Mushroom_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_OnHandleEffectsEvent__DelegateSignature_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.ExecuteUbergraph_BP_BASE_Mushroom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BASE_Mushroom_C::ExecuteUbergraph_BP_BASE_Mushroom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Mushroom.BP_BASE_Mushroom_C.ExecuteUbergraph_BP_BASE_Mushroom");
		
		ABP_BASE_Mushroom_C_ExecuteUbergraph_BP_BASE_Mushroom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BASE_Mushroom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BASE_Mushroom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BASE_Mushroom.BP_BASE_Mushroom_C");
		return ptr;
	}

}


