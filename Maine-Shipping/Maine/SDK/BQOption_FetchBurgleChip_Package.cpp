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
	 * 		Name   -> Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.Get Riddle String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABQOption_FetchBurgleChip_C::Get_Riddle_String(class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.Get Riddle String");
		
		ABQOption_FetchBurgleChip_C_Get_Riddle_String_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.Get Name String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABQOption_FetchBurgleChip_C::Get_Name_String(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.Get Name String");
		
		ABQOption_FetchBurgleChip_C_Get_Name_String_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABQOption_FetchBurgleChip_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.ReceiveBeginPlay");
		
		ABQOption_FetchBurgleChip_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.ExecuteUbergraph_BQOption_FetchBurgleChip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABQOption_FetchBurgleChip_C::ExecuteUbergraph_BQOption_FetchBurgleChip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C.ExecuteUbergraph_BQOption_FetchBurgleChip");
		
		ABQOption_FetchBurgleChip_C_ExecuteUbergraph_BQOption_FetchBurgleChip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABQOption_FetchBurgleChip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABQOption_FetchBurgleChip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQOption_FetchBurgleChip.BQOption_FetchBurgleChip_C");
		return ptr;
	}

}


