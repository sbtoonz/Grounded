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
	 * 		Name   -> Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.RedrawScreen
	 * 		Flags  -> ()
	 */
	void ABP_Lab_PowerTerminal_Pond02_C::RedrawScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.RedrawScreen");
		
		ABP_Lab_PowerTerminal_Pond02_C_RedrawScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.OnOpenStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ActorInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lab_PowerTerminal_Pond02_C::OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.OnOpenStateChanged");
		
		ABP_Lab_PowerTerminal_Pond02_C_OnOpenStateChanged_Params params {};
		params.IsOpen = IsOpen;
		params.ActorInstigator = ActorInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.Reroute Unsuccesful
	 * 		Flags  -> ()
	 */
	void ABP_Lab_PowerTerminal_Pond02_C::Reroute_Unsuccesful()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.Reroute Unsuccesful");
		
		ABP_Lab_PowerTerminal_Pond02_C_Reroute_Unsuccesful_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_BreakersReset_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lab_PowerTerminal_Pond02_C::BndEvt__ConditionalToggle_BreakersReset_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_BreakersReset_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Lab_PowerTerminal_Pond02_C_BndEvt__ConditionalToggle_BreakersReset_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_BreakersNeedReset_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lab_PowerTerminal_Pond02_C::BndEvt__ConditionalToggle_BreakersNeedReset_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_BreakersNeedReset_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Lab_PowerTerminal_Pond02_C_BndEvt__ConditionalToggle_BreakersNeedReset_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lab_PowerTerminal_Pond02_C::BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature");
		
		ABP_Lab_PowerTerminal_Pond02_C_BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.ExecuteUbergraph_BP_Lab_PowerTerminal_Pond02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lab_PowerTerminal_Pond02_C::ExecuteUbergraph_BP_Lab_PowerTerminal_Pond02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C.ExecuteUbergraph_BP_Lab_PowerTerminal_Pond02");
		
		ABP_Lab_PowerTerminal_Pond02_C_ExecuteUbergraph_BP_Lab_PowerTerminal_Pond02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lab_PowerTerminal_Pond02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lab_PowerTerminal_Pond02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lab_PowerTerminal_Pond02.BP_Lab_PowerTerminal_Pond02_C");
		return ptr;
	}

}


