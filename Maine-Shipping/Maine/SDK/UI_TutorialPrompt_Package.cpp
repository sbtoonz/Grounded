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
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::NewFunction_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.NewFunction_1");
		
		UUI_TutorialPrompt_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetFontSize
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::GetFontSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetFontSize");
		
		UUI_TutorialPrompt_C_GetFontSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TutorialPrompt_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetNarration");
		
		UUI_TutorialPrompt_C_GetNarration_Params params {};
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
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetTextandIconColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_TutorialPrompt_C::GetTextandIconColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.GetTextandIconColor");
		
		UUI_TutorialPrompt_C_GetTextandIconColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.Construct");
		
		UUI_TutorialPrompt_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.SetTutorialData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TutorialRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_TutorialPrompt_C::SetTutorialData(const struct FDataTableRowHandle& TutorialRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.SetTutorialData");
		
		UUI_TutorialPrompt_C_SetTutorialData_Params params {};
		params.TutorialRowHandle = TutorialRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.PlayShowAnimation
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::PlayShowAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.PlayShowAnimation");
		
		UUI_TutorialPrompt_C_PlayShowAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.PlayHideAnimation
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::PlayHideAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.PlayHideAnimation");
		
		UUI_TutorialPrompt_C_PlayHideAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.QueueTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TutorialRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_TutorialPrompt_C::QueueTutorial(const struct FDataTableRowHandle& TutorialRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.QueueTutorial");
		
		UUI_TutorialPrompt_C_QueueTutorial_Params params {};
		params.TutorialRowHandle = TutorialRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TutorialPrompt_C::BindPlayerEvents(class ASurvivalPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.BindPlayerEvents");
		
		UUI_TutorialPrompt_C_BindPlayerEvents_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.TutorialComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TutorialRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_TutorialPrompt_C::TutorialComplete(const struct FDataTableRowHandle& TutorialRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.TutorialComplete");
		
		UUI_TutorialPrompt_C_TutorialComplete_Params params {};
		params.TutorialRowHandle = TutorialRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.OnTutorialDisplayComplete
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::OnTutorialDisplayComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.OnTutorialDisplayComplete");
		
		UUI_TutorialPrompt_C_OnTutorialDisplayComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.TryDequeueTutorial
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::TryDequeueTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.TryDequeueTutorial");
		
		UUI_TutorialPrompt_C_TryDequeueTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_TutorialPrompt_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.OnGlobalColorChange");
		
		UUI_TutorialPrompt_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TutorialPrompt.UI_TutorialPrompt_C.ExecuteUbergraph_UI_TutorialPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TutorialPrompt_C::ExecuteUbergraph_UI_TutorialPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TutorialPrompt.UI_TutorialPrompt_C.ExecuteUbergraph_UI_TutorialPrompt");
		
		UUI_TutorialPrompt_C_ExecuteUbergraph_UI_TutorialPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TutorialPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TutorialPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TutorialPrompt.UI_TutorialPrompt_C");
		return ptr;
	}

}


