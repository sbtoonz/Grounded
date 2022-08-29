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
	 * 		Name   -> Function BP_Sky_Sphere_3.BP_Sky_Sphere_2_C.InitializeSkySphere
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_2_C::InitializeSkySphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_3.BP_Sky_Sphere_2_C.InitializeSkySphere");
		
		ABP_Sky_Sphere_2_C_InitializeSkySphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere_3.BP_Sky_Sphere_2_C.UpdateSunDirection
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_2_C::UpdateSunDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_3.BP_Sky_Sphere_2_C.UpdateSunDirection");
		
		ABP_Sky_Sphere_2_C_UpdateSunDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere_3.BP_Sky_Sphere_2_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere_3.BP_Sky_Sphere_2_C.UserConstructionScript");
		
		ABP_Sky_Sphere_2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sky_Sphere_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sky_Sphere_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_Sphere_3.BP_Sky_Sphere_2_C");
		return ptr;
	}

}


