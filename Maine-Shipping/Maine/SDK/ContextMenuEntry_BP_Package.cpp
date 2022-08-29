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
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.GetToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UContextMenuEntry_BP_C::GetToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.GetToolTip");
		
		UContextMenuEntry_BP_C_GetToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContextMenuEntry_BP_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.GetNarration");
		
		UContextMenuEntry_BP_C_GetNarration_Params params {};
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
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.UpdateColors
	 * 		Flags  -> ()
	 */
	void UContextMenuEntry_BP_C::UpdateColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.UpdateColors");
		
		UContextMenuEntry_BP_C_UpdateColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.NormalButtonUnhover
	 * 		Flags  -> ()
	 */
	void UContextMenuEntry_BP_C::NormalButtonUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.NormalButtonUnhover");
		
		UContextMenuEntry_BP_C_NormalButtonUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.NormalButtonHover
	 * 		Flags  -> ()
	 */
	void UContextMenuEntry_BP_C::NormalButtonHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.NormalButtonHover");
		
		UContextMenuEntry_BP_C_NormalButtonHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContextMenuEntry_BP_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.PreConstruct");
		
		UContextMenuEntry_BP_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.Construct
	 * 		Flags  -> ()
	 */
	void UContextMenuEntry_BP_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.Construct");
		
		UContextMenuEntry_BP_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContextMenuEntry_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.Tick");
		
		UContextMenuEntry_BP_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.SetHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContextMenuEntry_BP_C::SetHovered(bool Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.SetHovered");
		
		UContextMenuEntry_BP_C_SetHovered_Params params {};
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UContextMenuEntry_BP_C::BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UContextMenuEntry_BP_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UContextMenuEntry_BP_C::BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UContextMenuEntry_BP_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnSetIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContextMenuEntry_BP_C::OnSetIsValid(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnSetIsValid");
		
		UContextMenuEntry_BP_C_OnSetIsValid_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UContextMenuEntry_BP_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnAddedToFocusPath");
		
		UContextMenuEntry_BP_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UContextMenuEntry_BP_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.OnRemovedFromFocusPath");
		
		UContextMenuEntry_BP_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.ExecuteUbergraph_ContextMenuEntry_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContextMenuEntry_BP_C::ExecuteUbergraph_ContextMenuEntry_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenuEntry_BP.ContextMenuEntry_BP_C.ExecuteUbergraph_ContextMenuEntry_BP");
		
		UContextMenuEntry_BP_C_ExecuteUbergraph_ContextMenuEntry_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextMenuEntry_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextMenuEntry_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuEntry_BP.ContextMenuEntry_BP_C");
		return ptr;
	}

}


