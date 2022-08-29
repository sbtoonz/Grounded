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
	 * 		Name   -> Function BP_VolumeFog.BP_VolumeFog_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_VolumeFog_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumeFog.BP_VolumeFog_C.UserConstructionScript");
		
		ABP_VolumeFog_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VolumeFog.BP_VolumeFog_C.Update Fog Colors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                AlbedoColorNear                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                AlbedoColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumeFog_C::Update_Fog_Colors(const struct FLinearColor& AlbedoColorNear, const struct FLinearColor& AlbedoColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumeFog.BP_VolumeFog_C.Update Fog Colors");
		
		ABP_VolumeFog_C_Update_Fog_Colors_Params params {};
		params.AlbedoColorNear = AlbedoColorNear;
		params.AlbedoColor = AlbedoColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VolumeFog.BP_VolumeFog_C.ToggleActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VolumeFog_C::ToggleActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumeFog.BP_VolumeFog_C.ToggleActive");
		
		ABP_VolumeFog_C_ToggleActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VolumeFog.BP_VolumeFog_C.ExecuteUbergraph_BP_VolumeFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumeFog_C::ExecuteUbergraph_BP_VolumeFog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumeFog.BP_VolumeFog_C.ExecuteUbergraph_BP_VolumeFog");
		
		ABP_VolumeFog_C_ExecuteUbergraph_BP_VolumeFog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VolumeFog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VolumeFog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VolumeFog.BP_VolumeFog_C");
		return ptr;
	}

}


