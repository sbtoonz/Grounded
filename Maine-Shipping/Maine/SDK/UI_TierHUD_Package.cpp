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
	 * 		Name   -> Function UI_TierHUD.UI_TierHUD_C.SetTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TierHUD_C::SetTier(int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TierHUD.UI_TierHUD_C.SetTier");
		
		UUI_TierHUD_C_SetTier_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TierHUD.UI_TierHUD_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_TierHUD_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TierHUD.UI_TierHUD_C.OnGlobalColorChange");
		
		UUI_TierHUD_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TierHUD.UI_TierHUD_C.ExecuteUbergraph_UI_TierHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TierHUD_C::ExecuteUbergraph_UI_TierHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TierHUD.UI_TierHUD_C.ExecuteUbergraph_UI_TierHUD");
		
		UUI_TierHUD_C_ExecuteUbergraph_UI_TierHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TierHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TierHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TierHUD.UI_TierHUD_C");
		return ptr;
	}

}


