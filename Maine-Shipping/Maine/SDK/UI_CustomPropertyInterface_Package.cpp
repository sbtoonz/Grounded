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
	 * 		Name   -> Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_CustomPropertyInterface_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.OnKeyDown");
		
		UUI_CustomPropertyInterface_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.BndEvt__UI_CustomPropertyInterface_ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomPropertyInterface_C::BndEvt__UI_CustomPropertyInterface_ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.BndEvt__UI_CustomPropertyInterface_ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CustomPropertyInterface_C_BndEvt__UI_CustomPropertyInterface_ExitButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.BndEvt__UI_CustomPropertyInterface_RefreshDefaultsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CustomPropertyInterface_C::BndEvt__UI_CustomPropertyInterface_RefreshDefaultsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.BndEvt__UI_CustomPropertyInterface_RefreshDefaultsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_CustomPropertyInterface_C_BndEvt__UI_CustomPropertyInterface_RefreshDefaultsButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.ExecuteUbergraph_UI_CustomPropertyInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomPropertyInterface_C::ExecuteUbergraph_UI_CustomPropertyInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CustomPropertyInterface.UI_CustomPropertyInterface_C.ExecuteUbergraph_UI_CustomPropertyInterface");
		
		UUI_CustomPropertyInterface_C_ExecuteUbergraph_UI_CustomPropertyInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomPropertyInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomPropertyInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CustomPropertyInterface.UI_CustomPropertyInterface_C");
		return ptr;
	}

}


