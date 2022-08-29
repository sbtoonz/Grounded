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
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.Get_NotificationItemIcon_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_NotificationHelper_C::Get_NotificationItemIcon_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.Get_NotificationItemIcon_ColorAndOpacity_1");
		
		UUI_NotificationHelper_C_Get_NotificationItemIcon_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.GetHelperText
	 * 		Flags  -> ()
	 */
	class FText UUI_NotificationHelper_C::GetHelperText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.GetHelperText");
		
		UUI_NotificationHelper_C_GetHelperText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.Get_TextBlock_0_ColorAndOpacity_1
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_NotificationHelper_C::Get_TextBlock_0_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.Get_TextBlock_0_ColorAndOpacity_1");
		
		UUI_NotificationHelper_C_Get_TextBlock_0_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.PlayIntroduction
	 * 		Flags  -> ()
	 */
	void UUI_NotificationHelper_C::PlayIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.PlayIntroduction");
		
		UUI_NotificationHelper_C_PlayIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.SetItemPickupCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationHelper_C::SetItemPickupCount(const struct FDataTableRowHandle& Item, int32_t ItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.SetItemPickupCount");
		
		UUI_NotificationHelper_C_SetItemPickupCount_Params params {};
		params.Item = Item;
		params.ItemCount = ItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.FadeOut
	 * 		Flags  -> ()
	 */
	void UUI_NotificationHelper_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.FadeOut");
		
		UUI_NotificationHelper_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FColor                                      Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationHelper_C::SetText(const class FText& Text, const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.SetText");
		
		UUI_NotificationHelper_C_SetText_Params params {};
		params.Text = Text;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_NotificationHelper_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.Construct");
		
		UUI_NotificationHelper_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationHelper_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.Tick");
		
		UUI_NotificationHelper_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_NotificationHelper_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.OnGlobalColorChange");
		
		UUI_NotificationHelper_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.OnCharacterRespawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationHelper_C::OnCharacterRespawn(class APlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.OnCharacterRespawn");
		
		UUI_NotificationHelper_C_OnCharacterRespawn_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.OnInventoryChanged
	 * 		Flags  -> ()
	 */
	void UUI_NotificationHelper_C::OnInventoryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.OnInventoryChanged");
		
		UUI_NotificationHelper_C_OnInventoryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.ExecuteUbergraph_UI_NotificationHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationHelper_C::ExecuteUbergraph_UI_NotificationHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.ExecuteUbergraph_UI_NotificationHelper");
		
		UUI_NotificationHelper_C_ExecuteUbergraph_UI_NotificationHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationHelper.UI_NotificationHelper_C.OnFadeoutComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_NotificationHelper_C::OnFadeoutComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationHelper.UI_NotificationHelper_C.OnFadeoutComplete__DelegateSignature");
		
		UUI_NotificationHelper_C_OnFadeoutComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NotificationHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NotificationHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NotificationHelper.UI_NotificationHelper_C");
		return ptr;
	}

}


