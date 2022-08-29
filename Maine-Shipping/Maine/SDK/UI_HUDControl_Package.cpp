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
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.SetAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InputName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPositive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDControl_C::SetAction(const class FName& InputName, bool bPositive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.SetAction");
		
		UUI_HUDControl_C_SetAction_Params params {};
		params.InputName = InputName;
		params.bPositive = bPositive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetIsCancellingInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDControl_C::GetIsCancellingInteract(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetIsCancellingInteract");
		
		UUI_HUDControl_C_GetIsCancellingInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetIsInteracting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDControl_C::GetIsInteracting(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetIsInteracting");
		
		UUI_HUDControl_C_GetIsInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDControl_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetNarration");
		
		UUI_HUDControl_C_GetNarration_Params params {};
		params.bVerbose = bVerbose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chunks != nullptr)
			*Chunks = params.Chunks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.FillEvent
	 * 		Flags  -> ()
	 */
	void UUI_HUDControl_C::FillEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.FillEvent");
		
		UUI_HUDControl_C_FillEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.UpdateAllColors
	 * 		Flags  -> ()
	 */
	void UUI_HUDControl_C::UpdateAllColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.UpdateAllColors");
		
		UUI_HUDControl_C_UpdateAllColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.Set Action Allowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDControl_C::Set_Action_Allowed(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.Set Action Allowed");
		
		UUI_HUDControl_C_Set_Action_Allowed_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetCancelHoldFillPercent
	 * 		Flags  -> ()
	 */
	float UUI_HUDControl_C::GetCancelHoldFillPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetCancelHoldFillPercent");
		
		UUI_HUDControl_C_GetCancelHoldFillPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetBasicColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HUDControl_C::GetBasicColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetBasicColor");
		
		UUI_HUDControl_C_GetBasicColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetSelectedColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HUDControl_C::GetSelectedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetSelectedColor");
		
		UUI_HUDControl_C_GetSelectedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetKeyColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HUDControl_C::GetKeyColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetKeyColor");
		
		UUI_HUDControl_C_GetKeyColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetIconColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HUDControl_C::GetIconColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetIconColor");
		
		UUI_HUDControl_C_GetIconColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetKeyTextVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUDControl_C::GetKeyTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetKeyTextVisibility");
		
		UUI_HUDControl_C_GetKeyTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.GetFaceButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUDControl_C::GetFaceButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.GetFaceButtonVisibility");
		
		UUI_HUDControl_C_GetFaceButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HUDControl_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.OnGlobalColorChange");
		
		UUI_HUDControl_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDControl_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.PreConstruct");
		
		UUI_HUDControl_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.SetDynamicText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_HUDControl_C::SetDynamicText(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.SetDynamicText");
		
		UUI_HUDControl_C_SetDynamicText_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDControl_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.Tick");
		
		UUI_HUDControl_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDControl.UI_HUDControl_C.ExecuteUbergraph_UI_HUDControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDControl_C::ExecuteUbergraph_UI_HUDControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDControl.UI_HUDControl_C.ExecuteUbergraph_UI_HUDControl");
		
		UUI_HUDControl_C_ExecuteUbergraph_UI_HUDControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDControl.UI_HUDControl_C");
		return ptr;
	}

}


