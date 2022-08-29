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
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetPlayerDistanceVisibility
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::SetPlayerDistanceVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetPlayerDistanceVisibility");
		
		UUI_PlayerNameplate_C_SetPlayerDistanceVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetScreenEdgeAlpha
	 * 		Flags  -> ()
	 */
	float UUI_PlayerNameplate_C::GetScreenEdgeAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetScreenEdgeAlpha");
		
		UUI_PlayerNameplate_C_GetScreenEdgeAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetLargeFont
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::SetLargeFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetLargeFont");
		
		UUI_PlayerNameplate_C_SetLargeFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetKnockoutTimeleft
	 * 		Flags  -> ()
	 */
	float UUI_PlayerNameplate_C::GetKnockoutTimeleft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetKnockoutTimeleft");
		
		UUI_PlayerNameplate_C_GetKnockoutTimeleft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PlayerNameplate_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetAttentionColor");
		
		UUI_PlayerNameplate_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PlayerNameplate_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.GetWarningColor");
		
		UUI_PlayerNameplate_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateDistance
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::UpdateDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateDistance");
		
		UUI_PlayerNameplate_C_UpdateDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateFade
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::UpdateFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateFade");
		
		UUI_PlayerNameplate_C_UpdateFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetMarkerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              NewMarkerData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerNameplate_C::SetMarkerData(class UHUDMarkerData* NewMarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetMarkerData");
		
		UUI_PlayerNameplate_C_SetMarkerData_Params params {};
		params.NewMarkerData = NewMarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdatePosition
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::UpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdatePosition");
		
		UUI_PlayerNameplate_C_UpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerNameplate_C::SetPlayerName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.SetPlayerName");
		
		UUI_PlayerNameplate_C_SetPlayerName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.Construct");
		
		UUI_PlayerNameplate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerNameplate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.Tick");
		
		UUI_PlayerNameplate_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.HUDMarkerDataChanged
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::HUDMarkerDataChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.HUDMarkerDataChanged");
		
		UUI_PlayerNameplate_C_HUDMarkerDataChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.RefreshNameAndColor
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::RefreshNameAndColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.RefreshNameAndColor");
		
		UUI_PlayerNameplate_C_RefreshNameAndColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnGlobalColorChange");
		
		UUI_PlayerNameplate_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateInfoForMarker
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::UpdateInfoForMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.UpdateInfoForMarker");
		
		UUI_PlayerNameplate_C_UpdateInfoForMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.Destruct");
		
		UUI_PlayerNameplate_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerNameplate_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.EventLargeFonts");
		
		UUI_PlayerNameplate_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.EventPartyDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               New_Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerNameplate_C::EventPartyDistance(bool New_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.EventPartyDistance");
		
		UUI_PlayerNameplate_C_EventPartyDistance_Params params {};
		params.New_Value = New_Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.BindPlayerEvents
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::BindPlayerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.BindPlayerEvents");
		
		UUI_PlayerNameplate_C_BindPlayerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnPlayerInMenuChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlayerBusyInMenu                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PlayerNameplate_C::OnPlayerInMenuChanged(bool bPlayerBusyInMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnPlayerInMenuChanged");
		
		UUI_PlayerNameplate_C_OnPlayerInMenuChanged_Params params {};
		params.bPlayerBusyInMenu = bPlayerBusyInMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnHealthStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHealthState                                       NewHealthState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerNameplate_C::OnHealthStateChanged(EHealthState NewHealthState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.OnHealthStateChanged");
		
		UUI_PlayerNameplate_C_OnHealthStateChanged_Params params {};
		params.NewHealthState = NewHealthState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.HandleVisualsBasedOnScreenLocation
	 * 		Flags  -> ()
	 */
	void UUI_PlayerNameplate_C::HandleVisualsBasedOnScreenLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.HandleVisualsBasedOnScreenLocation");
		
		UUI_PlayerNameplate_C_HandleVisualsBasedOnScreenLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlayerNameplate.UI_PlayerNameplate_C.ExecuteUbergraph_UI_PlayerNameplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlayerNameplate_C::ExecuteUbergraph_UI_PlayerNameplate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlayerNameplate.UI_PlayerNameplate_C.ExecuteUbergraph_UI_PlayerNameplate");
		
		UUI_PlayerNameplate_C_ExecuteUbergraph_UI_PlayerNameplate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PlayerNameplate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlayerNameplate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlayerNameplate.UI_PlayerNameplate_C");
		return ptr;
	}

}


