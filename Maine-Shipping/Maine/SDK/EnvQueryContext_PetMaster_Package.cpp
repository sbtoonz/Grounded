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
	 * 		Name   -> Function EnvQueryContext_PetMaster.EnvQueryContext_PetMaster_C.ProvideSingleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      QuerierActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ResultingActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnvQueryContext_PetMaster_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnvQueryContext_PetMaster.EnvQueryContext_PetMaster_C.ProvideSingleActor");
		
		UEnvQueryContext_PetMaster_C_ProvideSingleActor_Params params {};
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActor != nullptr)
			*ResultingActor = params.ResultingActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_PetMaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_PetMaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnvQueryContext_PetMaster.EnvQueryContext_PetMaster_C");
		return ptr;
	}

}


