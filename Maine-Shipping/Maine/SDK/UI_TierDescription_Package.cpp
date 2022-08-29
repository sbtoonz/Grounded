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
	 * 		Name   -> Function UI_TierDescription.UI_TierDescription_C.SetTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredDamageTypeFlags                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TierDescription_C::SetTool(int32_t RequiredDamageTypeFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TierDescription.UI_TierDescription_C.SetTool");
		
		UUI_TierDescription_C_SetTool_Params params {};
		params.RequiredDamageTypeFlags = RequiredDamageTypeFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TierDescription.UI_TierDescription_C.SetTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TierDescription_C::SetTier(int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TierDescription.UI_TierDescription_C.SetTier");
		
		UUI_TierDescription_C_SetTier_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TierDescription.UI_TierDescription_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_TierDescription_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TierDescription.UI_TierDescription_C.OnGlobalColorChange");
		
		UUI_TierDescription_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TierDescription.UI_TierDescription_C.ExecuteUbergraph_UI_TierDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TierDescription_C::ExecuteUbergraph_UI_TierDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TierDescription.UI_TierDescription_C.ExecuteUbergraph_UI_TierDescription");
		
		UUI_TierDescription_C_ExecuteUbergraph_UI_TierDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TierDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TierDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TierDescription.UI_TierDescription_C");
		return ptr;
	}

}


