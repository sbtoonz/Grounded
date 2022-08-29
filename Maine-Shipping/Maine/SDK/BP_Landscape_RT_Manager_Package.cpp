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
	 * 		Name   -> Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.GetObjectUVCoords
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Object_Location                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     UV_Grid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     UV_Segment                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Landscape_RT_Manager_C::GetObjectUVCoords(const struct FVector& Object_Location, struct FVector* UV_Grid, struct FVector* UV_Segment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.GetObjectUVCoords");
		
		ABP_Landscape_RT_Manager_C_GetObjectUVCoords_Params params {};
		params.Object_Location = Object_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UV_Grid != nullptr)
			*UV_Grid = params.UV_Grid;
		if (UV_Segment != nullptr)
			*UV_Segment = params.UV_Segment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ClearRenderTarget
	 * 		Flags  -> ()
	 */
	void ABP_Landscape_RT_Manager_C::ClearRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ClearRenderTarget");
		
		ABP_Landscape_RT_Manager_C_ClearRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.Draw To Render Target
	 * 		Flags  -> ()
	 */
	void ABP_Landscape_RT_Manager_C::Draw_To_Render_Target()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.Draw To Render Target");
		
		ABP_Landscape_RT_Manager_C_Draw_To_Render_Target_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Landscape_RT_Manager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ReceiveBeginPlay");
		
		ABP_Landscape_RT_Manager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Landscape_RT_Manager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ReceiveTick");
		
		ABP_Landscape_RT_Manager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ExecuteUbergraph_BP_Landscape_RT_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Landscape_RT_Manager_C::ExecuteUbergraph_BP_Landscape_RT_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C.ExecuteUbergraph_BP_Landscape_RT_Manager");
		
		ABP_Landscape_RT_Manager_C_ExecuteUbergraph_BP_Landscape_RT_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Landscape_RT_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Landscape_RT_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Landscape_RT_Manager.BP_Landscape_RT_Manager_C");
		return ptr;
	}

}


