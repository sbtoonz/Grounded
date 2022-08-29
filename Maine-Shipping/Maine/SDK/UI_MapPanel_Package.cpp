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
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.GetWorldSurfaceLocationAtCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPanel_C::GetWorldSurfaceLocationAtCenter(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.GetWorldSurfaceLocationAtCenter");
		
		UUI_MapPanel_C_GetWorldSurfaceLocationAtCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.ToggleResourceWaypoint
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::ToggleResourceWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.ToggleResourceWaypoint");
		
		UUI_MapPanel_C_ToggleResourceWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.AddResourceWaypoint
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::AddResourceWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.AddResourceWaypoint");
		
		UUI_MapPanel_C_AddResourceWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.RemoveResourceWaypoint
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::RemoveResourceWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.RemoveResourceWaypoint");
		
		UUI_MapPanel_C_RemoveResourceWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.TogglePlayerWaypoint
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::TogglePlayerWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.TogglePlayerWaypoint");
		
		UUI_MapPanel_C_TogglePlayerWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.AddPlayerWaypoint
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::AddPlayerWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.AddPlayerWaypoint");
		
		UUI_MapPanel_C_AddPlayerWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.RemovePlayerWaypoint
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::RemovePlayerWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.RemovePlayerWaypoint");
		
		UUI_MapPanel_C_RemovePlayerWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.EnsmallenCrosshair
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::EnsmallenCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.EnsmallenCrosshair");
		
		UUI_MapPanel_C_EnsmallenCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.EmbiggenCrosshair
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::EmbiggenCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.EmbiggenCrosshair");
		
		UUI_MapPanel_C_EmbiggenCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.UpdateZoomDotTints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ZoomLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPanel_C::UpdateZoomDotTints(int32_t ZoomLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.UpdateZoomDotTints");
		
		UUI_MapPanel_C_UpdateZoomDotTints_Params params {};
		params.ZoomLevel = ZoomLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.OnZoomChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ZoomLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPanel_C::OnZoomChange(int32_t ZoomLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.OnZoomChange");
		
		UUI_MapPanel_C_OnZoomChange_Params params {};
		params.ZoomLevel = ZoomLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.OnGlobalColorChange");
		
		UUI_MapPanel_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapPanel_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.OnUsingGamepadChanged");
		
		UUI_MapPanel_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.OnInitialized");
		
		UUI_MapPanel_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.Destruct");
		
		UUI_MapPanel_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.HandleMapEntryFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseMapEntryWidget*                         MapEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMapEntryType                                      EntryType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ViaMouseHover                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapPanel_C::HandleMapEntryFocused(class UBaseMapEntryWidget* MapEntry, EMapEntryType EntryType, bool ViaMouseHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.HandleMapEntryFocused");
		
		UUI_MapPanel_C_HandleMapEntryFocused_Params params {};
		params.MapEntry = MapEntry;
		params.EntryType = EntryType;
		params.ViaMouseHover = ViaMouseHover;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.HandleMapEntryFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ViaMouseHover                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapPanel_C::HandleMapEntryFocusLost(bool ViaMouseHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.HandleMapEntryFocusLost");
		
		UUI_MapPanel_C_HandleMapEntryFocusLost_Params params {};
		params.ViaMouseHover = ViaMouseHover;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.HandleSurveyResourceChanged
	 * 		Flags  -> ()
	 */
	void UUI_MapPanel_C::HandleSurveyResourceChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.HandleSurveyResourceChanged");
		
		UUI_MapPanel_C_HandleSurveyResourceChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.Tick");
		
		UUI_MapPanel_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPanel.UI_MapPanel_C.ExecuteUbergraph_UI_MapPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPanel_C::ExecuteUbergraph_UI_MapPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPanel.UI_MapPanel_C.ExecuteUbergraph_UI_MapPanel");
		
		UUI_MapPanel_C_ExecuteUbergraph_UI_MapPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapPanel.UI_MapPanel_C");
		return ptr;
	}

}


