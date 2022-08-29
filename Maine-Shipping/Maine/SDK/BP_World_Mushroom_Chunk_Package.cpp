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
	 * 		Name   -> Function BP_World_Mushroom_Chunk.BP_World_Mushroom_Chunk_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_World_Mushroom_Chunk_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Mushroom_Chunk.BP_World_Mushroom_Chunk_C.ReceiveBeginPlay");
		
		ABP_World_Mushroom_Chunk_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_World_Mushroom_Chunk.BP_World_Mushroom_Chunk_C.ExecuteUbergraph_BP_World_Mushroom_Chunk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_World_Mushroom_Chunk_C::ExecuteUbergraph_BP_World_Mushroom_Chunk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_World_Mushroom_Chunk.BP_World_Mushroom_Chunk_C.ExecuteUbergraph_BP_World_Mushroom_Chunk");
		
		ABP_World_Mushroom_Chunk_C_ExecuteUbergraph_BP_World_Mushroom_Chunk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_World_Mushroom_Chunk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_World_Mushroom_Chunk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_World_Mushroom_Chunk.BP_World_Mushroom_Chunk_C");
		return ptr;
	}

}


