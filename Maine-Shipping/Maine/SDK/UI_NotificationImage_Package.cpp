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
	 * 		Name   -> Function UI_NotificationImage.UI_NotificationImage_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_NotificationImage_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationImage.UI_NotificationImage_C.OnGlobalColorChange");
		
		UUI_NotificationImage_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationImage.UI_NotificationImage_C.ExecuteUbergraph_UI_NotificationImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationImage_C::ExecuteUbergraph_UI_NotificationImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationImage.UI_NotificationImage_C.ExecuteUbergraph_UI_NotificationImage");
		
		UUI_NotificationImage_C_ExecuteUbergraph_UI_NotificationImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NotificationImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NotificationImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NotificationImage.UI_NotificationImage_C");
		return ptr;
	}

}


