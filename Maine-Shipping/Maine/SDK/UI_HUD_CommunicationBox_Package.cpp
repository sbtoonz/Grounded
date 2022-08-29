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
	 * 		Name   -> Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.GetTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HUD_CommunicationBox_C::GetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.GetTextColor");
		
		UUI_HUD_CommunicationBox_C_GetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HUD_CommunicationBox_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.GetBGColor");
		
		UUI_HUD_CommunicationBox_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HUD_CommunicationBox_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.OnGlobalColorChange");
		
		UUI_HUD_CommunicationBox_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.ExecuteUbergraph_UI_HUD_CommunicationBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_CommunicationBox_C::ExecuteUbergraph_UI_HUD_CommunicationBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C.ExecuteUbergraph_UI_HUD_CommunicationBox");
		
		UUI_HUD_CommunicationBox_C_ExecuteUbergraph_UI_HUD_CommunicationBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_CommunicationBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_CommunicationBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C");
		return ptr;
	}

}


