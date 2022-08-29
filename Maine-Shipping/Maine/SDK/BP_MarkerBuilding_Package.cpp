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
	 * 		Name   -> Function BP_MarkerBuilding.BP_MarkerBuilding_C.GetUseText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText ABP_MarkerBuilding_C::GetUseText(EInteractionChannel Channel, class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MarkerBuilding.BP_MarkerBuilding_C.GetUseText");
		
		ABP_MarkerBuilding_C_GetUseText_Params params {};
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
	 * 		Name   -> Function BP_MarkerBuilding.BP_MarkerBuilding_C.ProcessLoadData
	 * 		Flags  -> ()
	 */
	void ABP_MarkerBuilding_C::ProcessLoadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MarkerBuilding.BP_MarkerBuilding_C.ProcessLoadData");
		
		ABP_MarkerBuilding_C_ProcessLoadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MarkerBuilding.BP_MarkerBuilding_C.ExecuteUbergraph_BP_MarkerBuilding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MarkerBuilding_C::ExecuteUbergraph_BP_MarkerBuilding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MarkerBuilding.BP_MarkerBuilding_C.ExecuteUbergraph_BP_MarkerBuilding");
		
		ABP_MarkerBuilding_C_ExecuteUbergraph_BP_MarkerBuilding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MarkerBuilding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MarkerBuilding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MarkerBuilding.BP_MarkerBuilding_C");
		return ptr;
	}

}


