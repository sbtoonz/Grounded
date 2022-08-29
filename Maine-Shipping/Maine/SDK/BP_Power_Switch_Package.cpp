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
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.UserConstructionScript");
		
		ABP_Power_Switch_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.Timeline_0__FinishedFunc");
		
		ABP_Power_Switch_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.Timeline_0__UpdateFunc");
		
		ABP_Power_Switch_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.Timeline - SFX Pitch__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::Timeline_SFX_Pitch__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.Timeline - SFX Pitch__FinishedFunc");
		
		ABP_Power_Switch_C_Timeline_SFX_Pitch__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.Timeline - SFX Pitch__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::Timeline_SFX_Pitch__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.Timeline - SFX Pitch__UpdateFunc");
		
		ABP_Power_Switch_C_Timeline_SFX_Pitch__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.ReceiveBeginPlay");
		
		ABP_Power_Switch_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.OnUpdateVisualState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Power_Switch_C::OnUpdateVisualState(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.OnUpdateVisualState");
		
		ABP_Power_Switch_C_OnUpdateVisualState_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.HandleOpenAudio
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::HandleOpenAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.HandleOpenAudio");
		
		ABP_Power_Switch_C_HandleOpenAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.HandleClosedAudio
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::HandleClosedAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.HandleClosedAudio");
		
		ABP_Power_Switch_C_HandleClosedAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.TimelineFinished
	 * 		Flags  -> ()
	 */
	void ABP_Power_Switch_C::TimelineFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.TimelineFinished");
		
		ABP_Power_Switch_C_TimelineFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Power_Switch.BP_Power_Switch_C.ExecuteUbergraph_BP_Power_Switch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Power_Switch_C::ExecuteUbergraph_BP_Power_Switch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Power_Switch.BP_Power_Switch_C.ExecuteUbergraph_BP_Power_Switch");
		
		ABP_Power_Switch_C_ExecuteUbergraph_BP_Power_Switch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Power_Switch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Power_Switch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Power_Switch.BP_Power_Switch_C");
		return ptr;
	}

}


