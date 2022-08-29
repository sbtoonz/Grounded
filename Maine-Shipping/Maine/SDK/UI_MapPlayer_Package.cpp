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
	 * 		Name   -> Function UI_MapPlayer.UI_MapPlayer_C.SetForPlayer
	 * 		Flags  -> ()
	 */
	void UUI_MapPlayer_C::SetForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayer.UI_MapPlayer_C.SetForPlayer");
		
		UUI_MapPlayer_C_SetForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayer.UI_MapPlayer_C.GetDescriptionWindowIcon
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_MapPlayer_C::GetDescriptionWindowIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayer.UI_MapPlayer_C.GetDescriptionWindowIcon");
		
		UUI_MapPlayer_C_GetDescriptionWindowIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayer.UI_MapPlayer_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_MapPlayer_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayer.UI_MapPlayer_C.GetAttentionColor");
		
		UUI_MapPlayer_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayer.UI_MapPlayer_C.RefreshVisuals
	 * 		Flags  -> ()
	 */
	void UUI_MapPlayer_C::RefreshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayer.UI_MapPlayer_C.RefreshVisuals");
		
		UUI_MapPlayer_C_RefreshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayer.UI_MapPlayer_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MapPlayer_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayer.UI_MapPlayer_C.OnGlobalColorChange");
		
		UUI_MapPlayer_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayer.UI_MapPlayer_C.SetPlayerRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPlayer_C::SetPlayerRotation(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayer.UI_MapPlayer_C.SetPlayerRotation");
		
		UUI_MapPlayer_C_SetPlayerRotation_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPlayer.UI_MapPlayer_C.ExecuteUbergraph_UI_MapPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPlayer_C::ExecuteUbergraph_UI_MapPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPlayer.UI_MapPlayer_C.ExecuteUbergraph_UI_MapPlayer");
		
		UUI_MapPlayer_C_ExecuteUbergraph_UI_MapPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapPlayer.UI_MapPlayer_C");
		return ptr;
	}

}


