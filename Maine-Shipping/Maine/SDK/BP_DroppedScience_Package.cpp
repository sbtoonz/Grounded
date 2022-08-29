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
	 * 		Name   -> Function BP_DroppedScience.BP_DroppedScience_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DroppedScience_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedScience.BP_DroppedScience_C.ReceiveBeginPlay");
		
		ABP_DroppedScience_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedScience.BP_DroppedScience_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedScience_C::CustomEvent_1(class ASurvivalPlayerCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedScience.BP_DroppedScience_C.CustomEvent_1");
		
		ABP_DroppedScience_C_CustomEvent_1_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedScience.BP_DroppedScience_C.ExecuteUbergraph_BP_DroppedScience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedScience_C::ExecuteUbergraph_BP_DroppedScience(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedScience.BP_DroppedScience_C.ExecuteUbergraph_BP_DroppedScience");
		
		ABP_DroppedScience_C_ExecuteUbergraph_BP_DroppedScience_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DroppedScience_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DroppedScience_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroppedScience.BP_DroppedScience_C");
		return ptr;
	}

}


