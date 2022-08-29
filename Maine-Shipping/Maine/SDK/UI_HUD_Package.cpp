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
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HandlePetTamed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCreature*                           Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::HandlePetTamed(class ASurvivalCreature* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HandlePetTamed");
		
		UUI_HUD_C_HandlePetTamed_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.UpdateInteractableVisibility
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::UpdateInteractableVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateInteractableVisibility");
		
		UUI_HUD_C_UpdateInteractableVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetDeathBarVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetDeathBarVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetDeathBarVisibility");
		
		UUI_HUD_C_GetDeathBarVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.Get Building Relocate Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::Get_Building_Relocate_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.Get Building Relocate Visibility");
		
		UUI_HUD_C_Get_Building_Relocate_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetBuildingCancelVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetBuildingCancelVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetBuildingCancelVisibility");
		
		UUI_HUD_C_GetBuildingCancelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetIsZiplining
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetIsZiplining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetIsZiplining");
		
		UUI_HUD_C_GetIsZiplining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnShowFarHUDMarkersChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnShowFarHUDMarkersChanged(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnShowFarHUDMarkersChanged");
		
		UUI_HUD_C_OnShowFarHUDMarkersChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPowerItemDepleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPowerItemDepleted(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPowerItemDepleted");
		
		UUI_HUD_C_OnPowerItemDepleted_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetGlidingVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetGlidingVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetGlidingVisibility");
		
		UUI_HUD_C_GetGlidingVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.Get_HUDCanvasPanel_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::Get_HUDCanvasPanel_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.Get_HUDCanvasPanel_Visibility_1");
		
		UUI_HUD_C_Get_HUDCanvasPanel_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetStunVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetStunVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetStunVisibility");
		
		UUI_HUD_C_GetStunVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetStunRatio
	 * 		Flags  -> ()
	 */
	float UUI_HUD_C::GetStunRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetStunRatio");
		
		UUI_HUD_C_GetStunRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetRecycleBuildingVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetRecycleBuildingVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetRecycleBuildingVisibility");
		
		UUI_HUD_C_GetRecycleBuildingVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetSlotsUsedVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetSlotsUsedVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetSlotsUsedVisibility");
		
		UUI_HUD_C_GetSlotsUsedVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetHotBarVisibilty
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetHotBarVisibilty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetHotBarVisibilty");
		
		UUI_HUD_C_GetHotBarVisibilty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetRestWaitingVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetRestWaitingVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetRestWaitingVisibility");
		
		UUI_HUD_C_GetRestWaitingVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetBreathVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetBreathVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetBreathVisibility");
		
		UUI_HUD_C_GetBreathVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetBuildingTargetVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetBuildingTargetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetBuildingTargetVisibility");
		
		UUI_HUD_C_GetBuildingTargetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetCancelVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visiblity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::GetCancelVisibility(ESlateVisibility* Visiblity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetCancelVisibility");
		
		UUI_HUD_C_GetCancelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visiblity != nullptr)
			*Visiblity = params.Visiblity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetBuildingHealthVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetBuildingHealthVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetBuildingHealthVisibility");
		
		UUI_HUD_C_GetBuildingHealthVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetScienceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HUD_C::GetScienceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetScienceColor");
		
		UUI_HUD_C_GetScienceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetFGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HUD_C::GetFGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetFGColor");
		
		UUI_HUD_C_GetFGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_HUD_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetHeaderColor");
		
		UUI_HUD_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetText_1
	 * 		Flags  -> ()
	 */
	class FText UUI_HUD_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetText_1");
		
		UUI_HUD_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetVisibilityRockInteract
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetVisibilityRockInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetVisibilityRockInteract");
		
		UUI_HUD_C_GetVisibilityRockInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetEquippedWeaponCountVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetEquippedWeaponCountVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetEquippedWeaponCountVisibility");
		
		UUI_HUD_C_GetEquippedWeaponCountVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetTorchBurnVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetTorchBurnVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetTorchBurnVisibility");
		
		UUI_HUD_C_GetTorchBurnVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetBlockRatio
	 * 		Flags  -> ()
	 */
	float UUI_HUD_C::GetBlockRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetBlockRatio");
		
		UUI_HUD_C_GetBlockRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.RemoveHUDMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::RemoveHUDMarker(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.RemoveHUDMarker");
		
		UUI_HUD_C_RemoveHUDMarker_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.CreateHUDMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_HUDMarker_C*                             HUDMarker                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::CreateHUDMarker(class UHUDMarkerData* MarkerData, class UUI_HUDMarker_C** HUDMarker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateHUDMarker");
		
		UUI_HUD_C_CreateHUDMarker_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HUDMarker != nullptr)
			*HUDMarker = params.HUDMarker;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetPlaceBuildingVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetPlaceBuildingVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetPlaceBuildingVisibility");
		
		UUI_HUD_C_GetPlaceBuildingVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetTimeText
	 * 		Flags  -> ()
	 */
	class FText UUI_HUD_C::GetTimeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetTimeText");
		
		UUI_HUD_C_GetTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.UpdateStatNotification
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::UpdateStatNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateStatNotification");
		
		UUI_HUD_C_UpdateStatNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetDropHaulVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_HUD_C::GetDropHaulVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetDropHaulVisibility");
		
		UUI_HUD_C_GetDropHaulVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.RegisterNewOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::RegisterNewOwner(class ABP_SurvivalPlayerCharacter_C* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.RegisterNewOwner");
		
		UUI_HUD_C_RegisterNewOwner_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetThirstRatio
	 * 		Flags  -> ()
	 */
	float UUI_HUD_C::GetThirstRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetThirstRatio");
		
		UUI_HUD_C_GetThirstRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetHungerRatio
	 * 		Flags  -> ()
	 */
	float UUI_HUD_C::GetHungerRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetHungerRatio");
		
		UUI_HUD_C_GetHungerRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.DisableChatLog
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::DisableChatLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.DisableChatLog");
		
		UUI_HUD_C_DisableChatLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.EnableChatLog
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::EnableChatLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.EnableChatLog");
		
		UUI_HUD_C_EnableChatLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetEnergyRatio
	 * 		Flags  -> ()
	 */
	float UUI_HUD_C::GetEnergyRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetEnergyRatio");
		
		UUI_HUD_C_GetEnergyRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetStaminaRatio
	 * 		Flags  -> ()
	 */
	float UUI_HUD_C::GetStaminaRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetStaminaRatio");
		
		UUI_HUD_C_GetStaminaRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.RemoveNameplateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::RemoveNameplateWidget(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.RemoveNameplateWidget");
		
		UUI_HUD_C_RemoveNameplateWidget_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.CreateNameplateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_PlayerNameplate_C*                       Nameplate                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::CreateNameplateWidget(class UHUDMarkerData* MarkerData, class UUI_PlayerNameplate_C** Nameplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateNameplateWidget");
		
		UUI_HUD_C_CreateNameplateWidget_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Nameplate != nullptr)
			*Nameplate = params.Nameplate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetHealthRatio
	 * 		Flags  -> ()
	 */
	float UUI_HUD_C::GetHealthRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetHealthRatio");
		
		UUI_HUD_C_GetHealthRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetHideHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HideHud                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::GetHideHUD(bool* HideHud)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetHideHUD");
		
		UUI_HUD_C_GetHideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HideHud != nullptr)
			*HideHud = params.HideHud;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.GetInteractionTarget
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::GetInteractionTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.GetInteractionTarget");
		
		UUI_HUD_C_GetInteractionTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnZiplineModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AZiplineSelectorPawn*                        Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnZiplineModeChanged(class AZiplineSelectorPawn* Selector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnZiplineModeChanged");
		
		UUI_HUD_C_OnZiplineModeChanged_Params params {};
		params.Selector = Selector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnMarkerAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnMarkerAdded(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnMarkerAdded");
		
		UUI_HUD_C_OnMarkerAdded_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnMarkerRemove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnMarkerRemove(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnMarkerRemove");
		
		UUI_HUD_C_OnMarkerRemove_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPlayerMarkerAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPlayerMarkerAdded(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPlayerMarkerAdded");
		
		UUI_HUD_C_OnPlayerMarkerAdded_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPlayerMarkerRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPlayerMarkerRemoved(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPlayerMarkerRemoved");
		
		UUI_HUD_C_OnPlayerMarkerRemoved_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnItemSpoiled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         OriginalItemHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         SpoiledResultItemHandle                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_HUD_C::OnItemSpoiled(const struct FDataTableRowHandle& OriginalItemHandle, const struct FDataTableRowHandle& SpoiledResultItemHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnItemSpoiled");
		
		UUI_HUD_C_OnItemSpoiled_Params params {};
		params.OriginalItemHandle = OriginalItemHandle;
		params.SpoiledResultItemHandle = SpoiledResultItemHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.Construct");
		
		UUI_HUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.SetSCABVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::SetSCABVisible(bool Visible, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.SetSCABVisible");
		
		UUI_HUD_C_SetSCABVisible_Params params {};
		params.Visible = Visible;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* NewPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.BindPlayerEvents");
		
		UUI_HUD_C_BindPlayerEvents_Params params {};
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.BindPlayerStateEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    SurvivalPlayerCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::BindPlayerStateEvents(class ASurvivalPlayerCharacter* SurvivalPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.BindPlayerStateEvents");
		
		UUI_HUD_C_BindPlayerStateEvents_Params params {};
		params.SurvivalPlayerCharacter = SurvivalPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnInteractionTargetChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::OnInteractionTargetChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnInteractionTargetChanged");
		
		UUI_HUD_C_OnInteractionTargetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnBuildingModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPlacingBuilding                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnBuildingModeChanged(bool bIsPlacingBuilding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnBuildingModeChanged");
		
		UUI_HUD_C_OnBuildingModeChanged_Params params {};
		params.bIsPlacingBuilding = bIsPlacingBuilding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnHaulingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsHauling                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnHaulingChanged(bool bIsHauling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnHaulingChanged");
		
		UUI_HUD_C_OnHaulingChanged_Params params {};
		params.bIsHauling = bIsHauling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnBlockChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsBlocking                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnBlockChanged(bool bIsBlocking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnBlockChanged");
		
		UUI_HUD_C_OnBlockChanged_Params params {};
		params.bIsBlocking = bIsBlocking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnOffHandChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnOffHandChanged(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnOffHandChanged");
		
		UUI_HUD_C_OnOffHandChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HUDHitAnim
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::HUDHitAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HUDHitAnim");
		
		UUI_HUD_C_HUDHitAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPossessedPlayerChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPossessedPlayerChange");
		
		UUI_HUD_C_OnPossessedPlayerChange_Params params {};
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HandleGenericMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  MessageIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::HandleGenericMessage(const class FString& Message, class UTexture2D* MessageIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HandleGenericMessage");
		
		UUI_HUD_C_HandleGenericMessage_Params params {};
		params.Message = Message;
		params.MessageIcon = MessageIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnSaveBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESaveGameType                                      SaveGameType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnSaveBegin(ESaveGameType SaveGameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnSaveBegin");
		
		UUI_HUD_C_OnSaveBegin_Params params {};
		params.SaveGameType = SaveGameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.Destruct");
		
		UUI_HUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnGliderChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnGliderChanged(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnGliderChanged");
		
		UUI_HUD_C_OnGliderChanged_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnEnemyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsInteractableTarget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnEnemyChanged(class ASurvivalCharacter* Target, bool bIsInteractableTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnEnemyChanged");
		
		UUI_HUD_C_OnEnemyChanged_Params params {};
		params.Target = Target;
		params.bIsInteractableTarget = bIsInteractableTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HandleToggleMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  MessageIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::HandleToggleMessage(const class FString& Message, class UTexture2D* MessageIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HandleToggleMessage");
		
		UUI_HUD_C_HandleToggleMessage_Params params {};
		params.Message = Message;
		params.MessageIcon = MessageIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.PlayerOnItemPickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         InventoryComponentOwner                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IsNewItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::PlayerOnItemPickup(class UInventoryComponent* InventoryComponentOwner, const struct FDataTableRowHandle& ItemHandle, bool IsNewItem, int32_t Count, int32_t TotalCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.PlayerOnItemPickup");
		
		UUI_HUD_C_PlayerOnItemPickup_Params params {};
		params.InventoryComponentOwner = InventoryComponentOwner;
		params.ItemHandle = ItemHandle;
		params.IsNewItem = IsNewItem;
		params.Count = Count;
		params.TotalCount = TotalCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPointOfInterestDiscovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPointOfInterestDataAsset*                   PointOfInterest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        UnlockerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPointOfInterestDiscovered(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* UnlockerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPointOfInterestDiscovered");
		
		UUI_HUD_C_OnPointOfInterestDiscovered_Params params {};
		params.PointOfInterest = PointOfInterest;
		params.UnlockerPlayerState = UnlockerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnEquipmentChangeFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEquipmentChangeFailureFromFullInventoryStimulus   Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnEquipmentChangeFailure(EEquipmentChangeFailureFromFullInventoryStimulus Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnEquipmentChangeFailure");
		
		UUI_HUD_C_OnEquipmentChangeFailure_Params params {};
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnGliderMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsGliding                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnGliderMovementModeChanged(bool bIsGliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnGliderMovementModeChanged");
		
		UUI_HUD_C_OnGliderMovementModeChanged_Params params {};
		params.bIsGliding = bIsGliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnZiplineMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsZiplining                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnZiplineMovementModeChanged(bool bIsZiplining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnZiplineMovementModeChanged");
		
		UUI_HUD_C_OnZiplineMovementModeChanged_Params params {};
		params.bIsZiplining = bIsZiplining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnFullBreathChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFullBreath                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnFullBreathChanged(bool bFullBreath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnFullBreathChanged");
		
		UUI_HUD_C_OnFullBreathChanged_Params params {};
		params.bFullBreath = bFullBreath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnDeathCountdownChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDeathCountdown                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnDeathCountdownChanged(bool bDeathCountdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnDeathCountdownChanged");
		
		UUI_HUD_C_OnDeathCountdownChanged_Params params {};
		params.bDeathCountdown = bDeathCountdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnConversationNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NodeString                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSpeakerBundle                              Speaker                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EConversationNodeDisplayStyle                      DisplayStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnConversationNode(const class FString& NodeString, const struct FSpeakerBundle& Speaker, EConversationNodeDisplayStyle DisplayStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnConversationNode");
		
		UUI_HUD_C_OnConversationNode_Params params {};
		params.NodeString = NodeString;
		params.Speaker = Speaker;
		params.DisplayStyle = DisplayStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnConversationHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConversationNodeDisplayStyle                      DisplayStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnConversationHide(EConversationNodeDisplayStyle DisplayStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnConversationHide");
		
		UUI_HUD_C_OnConversationHide_Params params {};
		params.DisplayStyle = DisplayStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HandleStaminaVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::HandleStaminaVisibility(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HandleStaminaVisibility");
		
		UUI_HUD_C_HandleStaminaVisibility_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnConversationStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConversationNodeDisplayStyle                      DisplayStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnConversationStart(EConversationNodeDisplayStyle DisplayStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnConversationStart");
		
		UUI_HUD_C_OnConversationStart_Params params {};
		params.DisplayStyle = DisplayStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnConversationEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConversationNodeDisplayStyle                      DisplayStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnConversationEnd(EConversationNodeDisplayStyle DisplayStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnConversationEnd");
		
		UUI_HUD_C_OnConversationEnd_Params params {};
		params.DisplayStyle = DisplayStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnClimbMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsClimbing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnClimbMovementModeChanged(bool bIsClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnClimbMovementModeChanged");
		
		UUI_HUD_C_OnClimbMovementModeChanged_Params params {};
		params.bIsClimbing = bIsClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPerkUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PerkName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Perk_Tier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPerkUnlocked(const class FName& PerkName, int32_t Perk_Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPerkUnlocked");
		
		UUI_HUD_C_OnPerkUnlocked_Params params {};
		params.PerkName = PerkName;
		params.Perk_Tier = Perk_Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnSittingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSitting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnSittingChanged(bool bIsSitting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnSittingChanged");
		
		UUI_HUD_C_OnSittingChanged_Params params {};
		params.bIsSitting = bIsSitting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPetTamed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCreature*                           Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPetTamed(class ASurvivalCreature* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPetTamed");
		
		UUI_HUD_C_OnPetTamed_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPetAquired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalCreature*                           Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPetAquired(class ASurvivalPlayerCharacter* Sender, class ASurvivalCreature* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPetAquired");
		
		UUI_HUD_C_OnPetAquired_Params params {};
		params.Sender = Sender;
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnSizzlingChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSizzling                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnSizzlingChanged(bool bIsSizzling, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnSizzlingChanged");
		
		UUI_HUD_C_OnSizzlingChanged_Params params {};
		params.bIsSizzling = bIsSizzling;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnKeyItemAcquired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         KeyItemRowHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_HUD_C::OnKeyItemAcquired(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnKeyItemAcquired");
		
		UUI_HUD_C_OnKeyItemAcquired_Params params {};
		params.KeyItemRowHandle = KeyItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnEquipmentChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::OnEquipmentChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnEquipmentChanged");
		
		UUI_HUD_C_OnEquipmentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnStatusEffectChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::OnStatusEffectChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnStatusEffectChanged");
		
		UUI_HUD_C_OnStatusEffectChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnCameraDisplayModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECameraDisplayMode                                 DisplayMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnCameraDisplayModeChanged(ECameraDisplayMode DisplayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnCameraDisplayModeChanged");
		
		UUI_HUD_C_OnCameraDisplayModeChanged_Params params {};
		params.DisplayMode = DisplayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HandleHeltmetOverlayAndUI
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::HandleHeltmetOverlayAndUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HandleHeltmetOverlayAndUI");
		
		UUI_HUD_C_HandleHeltmetOverlayAndUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.SetGasMaskOverlayShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Shown                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::SetGasMaskOverlayShown(bool Shown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.SetGasMaskOverlayShown");
		
		UUI_HUD_C_SetGasMaskOverlayShown_Params params {};
		params.Shown = Shown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HUDJumpAnim
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::HUDJumpAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HUDJumpAnim");
		
		UUI_HUD_C_HUDJumpAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.HUDLandAnim
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::HUDLandAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HUDLandAnim");
		
		UUI_HUD_C_HUDLandAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.SetSpyGlassOverlayVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::SetSpyGlassOverlayVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.SetSpyGlassOverlayVisibility");
		
		UUI_HUD_C_SetSpyGlassOverlayVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPlayerWaypointAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPlayerWaypointAdded(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPlayerWaypointAdded");
		
		UUI_HUD_C_OnPlayerWaypointAdded_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnPlayerWaypointRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHUDMarkerData*                              MarkerData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnPlayerWaypointRemoved(class UHUDMarkerData* MarkerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnPlayerWaypointRemoved");
		
		UUI_HUD_C_OnPlayerWaypointRemoved_Params params {};
		params.MarkerData = MarkerData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnBuildingFragileChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABuilding*                                   Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFragile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_C::OnBuildingFragileChanged(class ABuilding* Sender, bool IsFragile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnBuildingFragileChanged");
		
		UUI_HUD_C_OnBuildingFragileChanged_Params params {};
		params.Sender = Sender;
		params.IsFragile = IsFragile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnItemStashed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::OnItemStashed(const struct FDataTableRowHandle& ItemRowHandle, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnItemStashed");
		
		UUI_HUD_C_OnItemStashed_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.OnItemStashFailure
	 * 		Flags  -> ()
	 */
	void UUI_HUD_C::OnItemStashFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnItemStashFailure");
		
		UUI_HUD_C_OnItemStashFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_C::ExecuteUbergraph_UI_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD");
		
		UUI_HUD_C_ExecuteUbergraph_UI_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD.UI_HUD_C");
		return ptr;
	}

}


