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
	 * 		Name   -> Function BP_Backpack_Player.BP_Backpack_Player_C.GetShouldShowHUDMarker
	 * 		Flags  -> ()
	 */
	bool ABP_Backpack_Player_C::GetShouldShowHUDMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Backpack_Player.BP_Backpack_Player_C.GetShouldShowHUDMarker");
		
		ABP_Backpack_Player_C_GetShouldShowHUDMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Player.BP_Backpack_Player_C.TestZ
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Player_C::TestZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Backpack_Player.BP_Backpack_Player_C.TestZ");
		
		ABP_Backpack_Player_C_TestZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Player.BP_Backpack_Player_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Player_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Backpack_Player.BP_Backpack_Player_C.ReceiveBeginPlay");
		
		ABP_Backpack_Player_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Player.BP_Backpack_Player_C.ResyncToLastKnownHostPosition
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Player_C::ResyncToLastKnownHostPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Backpack_Player.BP_Backpack_Player_C.ResyncToLastKnownHostPosition");
		
		ABP_Backpack_Player_C_ResyncToLastKnownHostPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Player.BP_Backpack_Player_C.ExecuteUbergraph_BP_Backpack_Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Player_C::ExecuteUbergraph_BP_Backpack_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Backpack_Player.BP_Backpack_Player_C.ExecuteUbergraph_BP_Backpack_Player");
		
		ABP_Backpack_Player_C_ExecuteUbergraph_BP_Backpack_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Backpack_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Backpack_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Backpack_Player.BP_Backpack_Player_C");
		return ptr;
	}

}


