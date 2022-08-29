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
	 * 		Name   -> Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Security_Camera_B_Moving_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.UserConstructionScript");
		
		ABP_Security_Camera_B_Moving_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Security_Camera_B_Moving_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.Timeline_0__FinishedFunc");
		
		ABP_Security_Camera_B_Moving_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Security_Camera_B_Moving_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.Timeline_0__UpdateFunc");
		
		ABP_Security_Camera_B_Moving_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Security_Camera_B_Moving_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.ReceiveBeginPlay");
		
		ABP_Security_Camera_B_Moving_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Security_Camera_B_Moving_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.ReceiveTick");
		
		ABP_Security_Camera_B_Moving_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.ExecuteUbergraph_BP_Security_Camera_B_Moving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Security_Camera_B_Moving_C::ExecuteUbergraph_BP_Security_Camera_B_Moving(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C.ExecuteUbergraph_BP_Security_Camera_B_Moving");
		
		ABP_Security_Camera_B_Moving_C_ExecuteUbergraph_BP_Security_Camera_B_Moving_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Security_Camera_B_Moving_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Security_Camera_B_Moving_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Security_Camera_B_Moving.BP_Security_Camera_B_Moving_C");
		return ptr;
	}

}


