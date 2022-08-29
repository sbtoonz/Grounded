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
	 * 		Name   -> Function UI_ScienceTotal.UI_ScienceTotal_C.GetScienceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ScienceTotal_C::GetScienceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceTotal.UI_ScienceTotal_C.GetScienceColor");
		
		UUI_ScienceTotal_C_GetScienceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceTotal.UI_ScienceTotal_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScienceTotal_C::BindPlayerEvents(class ASurvivalPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceTotal.UI_ScienceTotal_C.BindPlayerEvents");
		
		UUI_ScienceTotal_C_BindPlayerEvents_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceTotal.UI_ScienceTotal_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScienceTotal_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceTotal.UI_ScienceTotal_C.Tick");
		
		UUI_ScienceTotal_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceTotal.UI_ScienceTotal_C.OnScienceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ScienceAdded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalScience                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScienceTotal_C::OnScienceChanged(int32_t ScienceAdded, int32_t TotalScience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceTotal.UI_ScienceTotal_C.OnScienceChanged");
		
		UUI_ScienceTotal_C_OnScienceChanged_Params params {};
		params.ScienceAdded = ScienceAdded;
		params.TotalScience = TotalScience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceTotal.UI_ScienceTotal_C.TriggerAnimation
	 * 		Flags  -> ()
	 */
	void UUI_ScienceTotal_C::TriggerAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceTotal.UI_ScienceTotal_C.TriggerAnimation");
		
		UUI_ScienceTotal_C_TriggerAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceTotal.UI_ScienceTotal_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ScienceTotal_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceTotal.UI_ScienceTotal_C.OnGlobalColorChange");
		
		UUI_ScienceTotal_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceTotal.UI_ScienceTotal_C.ExecuteUbergraph_UI_ScienceTotal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScienceTotal_C::ExecuteUbergraph_UI_ScienceTotal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceTotal.UI_ScienceTotal_C.ExecuteUbergraph_UI_ScienceTotal");
		
		UUI_ScienceTotal_C_ExecuteUbergraph_UI_ScienceTotal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ScienceTotal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScienceTotal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScienceTotal.UI_ScienceTotal_C");
		return ptr;
	}

}


