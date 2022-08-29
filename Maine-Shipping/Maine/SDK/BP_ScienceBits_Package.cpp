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
	 * 		Name   -> Function BP_ScienceBits.BP_ScienceBits_C.TL_ScienceOverlayFade__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ScienceBits_C::TL_ScienceOverlayFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScienceBits.BP_ScienceBits_C.TL_ScienceOverlayFade__FinishedFunc");
		
		ABP_ScienceBits_C_TL_ScienceOverlayFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScienceBits.BP_ScienceBits_C.TL_ScienceOverlayFade__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ScienceBits_C::TL_ScienceOverlayFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScienceBits.BP_ScienceBits_C.TL_ScienceOverlayFade__UpdateFunc");
		
		ABP_ScienceBits_C_TL_ScienceOverlayFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScienceBits.BP_ScienceBits_C.SpawnScienceCollection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               InstigatingPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScienceBits_C::SpawnScienceCollection(class ABP_SurvivalPlayerCharacter_C* InstigatingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScienceBits.BP_ScienceBits_C.SpawnScienceCollection");
		
		ABP_ScienceBits_C_SpawnScienceCollection_Params params {};
		params.InstigatingPlayer = InstigatingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScienceBits.BP_ScienceBits_C.ExecuteUbergraph_BP_ScienceBits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScienceBits_C::ExecuteUbergraph_BP_ScienceBits(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScienceBits.BP_ScienceBits_C.ExecuteUbergraph_BP_ScienceBits");
		
		ABP_ScienceBits_C_ExecuteUbergraph_BP_ScienceBits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ScienceBits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ScienceBits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScienceBits.BP_ScienceBits_C");
		return ptr;
	}

}


