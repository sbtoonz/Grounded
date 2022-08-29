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
	 * 		Name   -> Function BTTask_SetDesiredTargetLocation.BTTask_SetDesiredTargetLocation_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_SetDesiredTargetLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_SetDesiredTargetLocation.BTTask_SetDesiredTargetLocation_C.ReceiveExecuteAI");
		
		UBTTask_SetDesiredTargetLocation_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTTask_SetDesiredTargetLocation.BTTask_SetDesiredTargetLocation_C.ExecuteUbergraph_BTTask_SetDesiredTargetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_SetDesiredTargetLocation_C::ExecuteUbergraph_BTTask_SetDesiredTargetLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_SetDesiredTargetLocation.BTTask_SetDesiredTargetLocation_C.ExecuteUbergraph_BTTask_SetDesiredTargetLocation");
		
		UBTTask_SetDesiredTargetLocation_C_ExecuteUbergraph_BTTask_SetDesiredTargetLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetDesiredTargetLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetDesiredTargetLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_SetDesiredTargetLocation.BTTask_SetDesiredTargetLocation_C");
		return ptr;
	}

}


