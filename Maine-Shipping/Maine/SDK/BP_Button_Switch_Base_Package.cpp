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
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Button_Switch_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.UserConstructionScript");
		
		ABP_Button_Switch_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ButtonAnimationTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Button_Switch_Base_C::ButtonAnimationTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ButtonAnimationTimeline__FinishedFunc");
		
		ABP_Button_Switch_Base_C_ButtonAnimationTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ButtonAnimationTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Button_Switch_Base_C::ButtonAnimationTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ButtonAnimationTimeline__UpdateFunc");
		
		ABP_Button_Switch_Base_C_ButtonAnimationTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.LightTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Button_Switch_Base_C::LightTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.LightTimeline__FinishedFunc");
		
		ABP_Button_Switch_Base_C_LightTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.LightTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Button_Switch_Base_C::LightTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.LightTimeline__UpdateFunc");
		
		ABP_Button_Switch_Base_C_LightTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.OnOpenStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ActorInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Button_Switch_Base_C::OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.OnOpenStateChanged");
		
		ABP_Button_Switch_Base_C_OnOpenStateChanged_Params params {};
		params.IsOpen = IsOpen;
		params.ActorInstigator = ActorInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ImplementableOnLightTimelineFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETimelineDirection                                 TimelineDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Button_Switch_Base_C::ImplementableOnLightTimelineFinished(ETimelineDirection TimelineDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ImplementableOnLightTimelineFinished");
		
		ABP_Button_Switch_Base_C_ImplementableOnLightTimelineFinished_Params params {};
		params.TimelineDirection = TimelineDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.OnUpdateVisualState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Button_Switch_Base_C::OnUpdateVisualState(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.OnUpdateVisualState");
		
		ABP_Button_Switch_Base_C_OnUpdateVisualState_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ExecuteUbergraph_BP_Button_Switch_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Button_Switch_Base_C::ExecuteUbergraph_BP_Button_Switch_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Button_Switch_Base.BP_Button_Switch_Base_C.ExecuteUbergraph_BP_Button_Switch_Base");
		
		ABP_Button_Switch_Base_C_ExecuteUbergraph_BP_Button_Switch_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Button_Switch_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Button_Switch_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Button_Switch_Base.BP_Button_Switch_Base_C");
		return ptr;
	}

}


