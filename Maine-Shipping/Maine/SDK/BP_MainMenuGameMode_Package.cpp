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
	 * 		Name   -> Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.K2_PostLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MainMenuGameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.K2_PostLogin");
		
		ABP_MainMenuGameMode_C_K2_PostLogin_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MainMenuGameMode_C::ExecuteUbergraph_BP_MainMenuGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode");
		
		ABP_MainMenuGameMode_C_ExecuteUbergraph_BP_MainMenuGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MainMenuGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MainMenuGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenuGameMode.BP_MainMenuGameMode_C");
		return ptr;
	}

}


