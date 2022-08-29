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
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.PropagateRightThumbstickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnalogInputEvent                           InputEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              SpeedMult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventReply                                 ReplyEvent                                                 (Parm, OutParm)
	 */
	void UUI_ModelViewer_C::PropagateRightThumbstickEvent(const struct FAnalogInputEvent& InputEvent, float SpeedMult, struct FEventReply* ReplyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.PropagateRightThumbstickEvent");
		
		UUI_ModelViewer_C_PropagateRightThumbstickEvent_Params params {};
		params.InputEvent = InputEvent;
		params.SpeedMult = SpeedMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReplyEvent != nullptr)
			*ReplyEvent = params.ReplyEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.CreateRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ModelViewer_C::CreateRenderTarget(class UTextureRenderTarget2D** RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.CreateRenderTarget");
		
		UUI_ModelViewer_C_CreateRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderTarget != nullptr)
			*RenderTarget = params.RenderTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_ModelViewer_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.OnAnalogValueChanged");
		
		UUI_ModelViewer_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_ModelViewer_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.OnMouseMove");
		
		UUI_ModelViewer_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ModelViewer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.Construct");
		
		UUI_ModelViewer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ModelViewer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.Tick");
		
		UUI_ModelViewer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_ModelViewer_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.Destruct");
		
		UUI_ModelViewer_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.PickRandomColorOffset
	 * 		Flags  -> ()
	 */
	void UUI_ModelViewer_C::PickRandomColorOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.PickRandomColorOffset");
		
		UUI_ModelViewer_C_PickRandomColorOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.PickFarOffset
	 * 		Flags  -> ()
	 */
	void UUI_ModelViewer_C::PickFarOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.PickFarOffset");
		
		UUI_ModelViewer_C_PickFarOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ModelViewer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.PreConstruct");
		
		UUI_ModelViewer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.SetStartingRotationX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartingRotationX                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ModelViewer_C::SetStartingRotationX(float StartingRotationX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.SetStartingRotationX");
		
		UUI_ModelViewer_C_SetStartingRotationX_Params params {};
		params.StartingRotationX = StartingRotationX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.OnNewModelViewed
	 * 		Flags  -> ()
	 */
	void UUI_ModelViewer_C::OnNewModelViewed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.OnNewModelViewed");
		
		UUI_ModelViewer_C_OnNewModelViewed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ModelViewer.UI_ModelViewer_C.ExecuteUbergraph_UI_ModelViewer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ModelViewer_C::ExecuteUbergraph_UI_ModelViewer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ModelViewer.UI_ModelViewer_C.ExecuteUbergraph_UI_ModelViewer");
		
		UUI_ModelViewer_C_ExecuteUbergraph_UI_ModelViewer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ModelViewer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ModelViewer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ModelViewer.UI_ModelViewer_C");
		return ptr;
	}

}


