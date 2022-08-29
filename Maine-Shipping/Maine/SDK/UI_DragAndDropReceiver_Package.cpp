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
	 * 		Name   -> Function UI_DragAndDropReceiver.UI_DragAndDropReceiver_C.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUI_DragAndDropReceiver_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DragAndDropReceiver.UI_DragAndDropReceiver_C.OnDrop");
		
		UUI_DragAndDropReceiver_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DragAndDropReceiver.UI_DragAndDropReceiver_C.OnDropDetected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DragAndDropReceiver_C::OnDropDetected__DelegateSignature(class UObject* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DragAndDropReceiver.UI_DragAndDropReceiver_C.OnDropDetected__DelegateSignature");
		
		UUI_DragAndDropReceiver_C_OnDropDetected__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DragAndDropReceiver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DragAndDropReceiver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DragAndDropReceiver.UI_DragAndDropReceiver_C");
		return ptr;
	}

}


