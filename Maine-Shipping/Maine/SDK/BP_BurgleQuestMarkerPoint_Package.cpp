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
	 * 		Name   -> Function BP_BurgleQuestMarkerPoint.BP_BurgleQuestMarkerPoint_C.ProcessLoadData
	 * 		Flags  -> ()
	 */
	void ABP_BurgleQuestMarkerPoint_C::ProcessLoadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurgleQuestMarkerPoint.BP_BurgleQuestMarkerPoint_C.ProcessLoadData");
		
		ABP_BurgleQuestMarkerPoint_C_ProcessLoadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BurgleQuestMarkerPoint.BP_BurgleQuestMarkerPoint_C.ExecuteUbergraph_BP_BurgleQuestMarkerPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BurgleQuestMarkerPoint_C::ExecuteUbergraph_BP_BurgleQuestMarkerPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurgleQuestMarkerPoint.BP_BurgleQuestMarkerPoint_C.ExecuteUbergraph_BP_BurgleQuestMarkerPoint");
		
		ABP_BurgleQuestMarkerPoint_C_ExecuteUbergraph_BP_BurgleQuestMarkerPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BurgleQuestMarkerPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BurgleQuestMarkerPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BurgleQuestMarkerPoint.BP_BurgleQuestMarkerPoint_C");
		return ptr;
	}

}


