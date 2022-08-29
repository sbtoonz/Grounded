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
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.IsInteractionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInteractionState ABP_Trap_Haze_Fungus_C::IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.IsInteractionEnabled");
		
		ABP_Trap_Haze_Fungus_C_IsInteractionEnabled_Params params {};
		params.Channel = Channel;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_VertexAnim__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Trap_Haze_Fungus_C::TL_VertexAnim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_VertexAnim__FinishedFunc");
		
		ABP_Trap_Haze_Fungus_C_TL_VertexAnim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_VertexAnim__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Trap_Haze_Fungus_C::TL_VertexAnim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_VertexAnim__UpdateFunc");
		
		ABP_Trap_Haze_Fungus_C_TL_VertexAnim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_Unshrivel__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Trap_Haze_Fungus_C::TL_Unshrivel__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_Unshrivel__FinishedFunc");
		
		ABP_Trap_Haze_Fungus_C_TL_Unshrivel__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_Unshrivel__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Trap_Haze_Fungus_C::TL_Unshrivel__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.TL_Unshrivel__UpdateFunc");
		
		ABP_Trap_Haze_Fungus_C_TL_Unshrivel__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.OnTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETrapTriggerState                                  TrapTriggerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trap_Haze_Fungus_C::OnTrigger(ETrapTriggerState TrapTriggerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.OnTrigger");
		
		ABP_Trap_Haze_Fungus_C_OnTrigger_Params params {};
		params.TrapTriggerState = TrapTriggerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Trap_Haze_Fungus_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.ReceiveBeginPlay");
		
		ABP_Trap_Haze_Fungus_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.ExecuteUbergraph_BP_Trap_Haze_Fungus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trap_Haze_Fungus_C::ExecuteUbergraph_BP_Trap_Haze_Fungus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C.ExecuteUbergraph_BP_Trap_Haze_Fungus");
		
		ABP_Trap_Haze_Fungus_C_ExecuteUbergraph_BP_Trap_Haze_Fungus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Trap_Haze_Fungus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Trap_Haze_Fungus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trap_Haze_Fungus.BP_Trap_Haze_Fungus_C");
		return ptr;
	}

}


