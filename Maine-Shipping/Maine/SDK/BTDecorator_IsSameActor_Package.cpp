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
	 * 		Name   -> Function BTDecorator_IsSameActor.BTDecorator_IsSameActor_C.PerformConditionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBTDecorator_IsSameActor_C::PerformConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTDecorator_IsSameActor.BTDecorator_IsSameActor_C.PerformConditionCheck");
		
		UBTDecorator_IsSameActor_C_PerformConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsSameActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsSameActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTDecorator_IsSameActor.BTDecorator_IsSameActor_C");
		return ptr;
	}

}


