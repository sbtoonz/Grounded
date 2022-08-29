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
	 * 		Name   -> Function CompanyIntro.CompanyIntro_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACompanyIntro_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CompanyIntro.CompanyIntro_C.ReceiveBeginPlay");
		
		ACompanyIntro_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CompanyIntro.CompanyIntro_C.ExecuteUbergraph_CompanyIntro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACompanyIntro_C::ExecuteUbergraph_CompanyIntro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CompanyIntro.CompanyIntro_C.ExecuteUbergraph_CompanyIntro");
		
		ACompanyIntro_C_ExecuteUbergraph_CompanyIntro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACompanyIntro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACompanyIntro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CompanyIntro.CompanyIntro_C");
		return ptr;
	}

}


