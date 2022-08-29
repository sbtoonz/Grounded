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
	 * 		Name   -> Function BP_World_Ant_Egg.BP_World_Ant_Egg_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Ant_Egg_C::Interact(EInteractionChannel Channel, class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Ant_Egg.BP_World_Ant_Egg_C.Interact");
		
		ABP_World_Ant_Egg_C_Interact_Params params {};
		params.Channel = Channel;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Ant_Egg.BP_World_Ant_Egg_C.ExecuteUbergraph_BP_World_Ant_Egg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Ant_Egg_C::ExecuteUbergraph_BP_World_Ant_Egg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Ant_Egg.BP_World_Ant_Egg_C.ExecuteUbergraph_BP_World_Ant_Egg");
		
		ABP_World_Ant_Egg_C_ExecuteUbergraph_BP_World_Ant_Egg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_World_Ant_Egg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_World_Ant_Egg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_World_Ant_Egg.BP_World_Ant_Egg_C");
		return ptr;
	}

}


