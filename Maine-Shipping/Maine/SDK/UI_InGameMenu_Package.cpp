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
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_InGameMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.OnPreviewKeyDown");
		
		UUI_InGameMenu_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_InGameMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.OnKeyDown");
		
		UUI_InGameMenu_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_InGameMenu_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.HandleKeyEventChord");
		
		UUI_InGameMenu_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.Get Halloween Stuff
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::Get_Halloween_Stuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.Get Halloween Stuff");
		
		UUI_InGameMenu_C_Get_Halloween_Stuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SCABOSLerpDirectionBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::SCABOSLerpDirectionBack(class UImage* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SCABOSLerpDirectionBack");
		
		UUI_InGameMenu_C_SCABOSLerpDirectionBack_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SCABOSLerpDirectionForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::SCABOSLerpDirectionForward(class UImage* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SCABOSLerpDirectionForward");
		
		UUI_InGameMenu_C_SCABOSLerpDirectionForward_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetMaterialB
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetMaterialB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetMaterialB");
		
		UUI_InGameMenu_C_GetMaterialB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.PreviousMenuTab
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::PreviousMenuTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.PreviousMenuTab");
		
		UUI_InGameMenu_C_PreviousMenuTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.AdvanceMenuTab
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::AdvanceMenuTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.AdvanceMenuTab");
		
		UUI_InGameMenu_C_AdvanceMenuTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetMinuteText
	 * 		Flags  -> ()
	 */
	class FText UUI_InGameMenu_C::GetMinuteText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetMinuteText");
		
		UUI_InGameMenu_C_GetMinuteText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetHourText
	 * 		Flags  -> ()
	 */
	class FText UUI_InGameMenu_C::GetHourText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetHourText");
		
		UUI_InGameMenu_C_GetHourText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetDaysAliveText
	 * 		Flags  -> ()
	 */
	class FText UUI_InGameMenu_C::GetDaysAliveText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetDaysAliveText");
		
		UUI_InGameMenu_C_GetDaysAliveText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetBGColor");
		
		UUI_InGameMenu_C_GetBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetScienceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetScienceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetScienceColor");
		
		UUI_InGameMenu_C_GetScienceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetMaterialColorA
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetMaterialColorA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetMaterialColorA");
		
		UUI_InGameMenu_C_GetMaterialColorA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetSubheaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_InGameMenu_C::GetSubheaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetSubheaderColor");
		
		UUI_InGameMenu_C_GetSubheaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ActivateInGameMenuScreenOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInGameMenuScreenType                              MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::ActivateInGameMenuScreenOfType(EInGameMenuScreenType MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ActivateInGameMenuScreenOfType");
		
		UUI_InGameMenu_C_ActivateInGameMenuScreenOfType_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetLastSelectedInGameMenuScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInGameMenuScreenType                              MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::SetLastSelectedInGameMenuScreen(EInGameMenuScreenType MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetLastSelectedInGameMenuScreen");
		
		UUI_InGameMenu_C_SetLastSelectedInGameMenuScreen_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.RefreshTabColors
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::RefreshTabColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.RefreshTabColors");
		
		UUI_InGameMenu_C_RefreshTabColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBGDarkener
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetSCABOSBGDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBGDarkener");
		
		UUI_InGameMenu_C_GetSCABOSBGDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentThree
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetSCABOSAccentThree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentThree");
		
		UUI_InGameMenu_C_GetSCABOSAccentThree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_InGameMenu_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetHeaderColor");
		
		UUI_InGameMenu_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetBasicTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_InGameMenu_C::GetBasicTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetBasicTextColor");
		
		UUI_InGameMenu_C_GetBasicTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBaseColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetSCABOSBaseColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBaseColor");
		
		UUI_InGameMenu_C_GetSCABOSBaseColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBG
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetSCABOSBG()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSBG");
		
		UUI_InGameMenu_C_GetSCABOSBG_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentOne
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetSCABOSAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentOne");
		
		UUI_InGameMenu_C_GetSCABOSAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_InGameMenu_C::GetSCABOSAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetSCABOSAccentTwo");
		
		UUI_InGameMenu_C_GetSCABOSAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetGamepadVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_InGameMenu_C::GetGamepadVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetGamepadVisibility");
		
		UUI_InGameMenu_C_GetGamepadVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.IsTabSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_InGameMenu_C::IsTabSelected(class UUI_TabButton_C* Tab, bool* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.IsTabSelected");
		
		UUI_InGameMenu_C_IsTabSelected_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selected != nullptr)
			*Selected = params.Selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.GetScienceCountText
	 * 		Flags  -> ()
	 */
	class FText UUI_InGameMenu_C::GetScienceCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.GetScienceCountText");
		
		UUI_InGameMenu_C_GetScienceCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.StopInGameHum
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::StopInGameHum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.StopInGameHum");
		
		UUI_InGameMenu_C_StopInGameHum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetTabCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::SetTabCheckedState(class UUI_TabButton_C* Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetTabCheckedState");
		
		UUI_InGameMenu_C_SetTabCheckedState_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.Construct");
		
		UUI_InGameMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.Close Menu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::Close_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.Close Menu");
		
		UUI_InGameMenu_C_Close_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ObjectivesChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::ObjectivesChanged(class UQuest* QuestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ObjectivesChanged");
		
		UUI_InGameMenu_C_ObjectivesChanged_Params params {};
		params.QuestData = QuestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__InventoryTab_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__InventoryTab_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__InventoryTab_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__InventoryTab_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__DebugItemsTab_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__DebugItemsTab_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__DebugItemsTab_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__DebugItemsTab_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__ObjectivesTab_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__ObjectivesTab_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__ObjectivesTab_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__ObjectivesTab_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__CraftingTab_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.Destruct");
		
		UUI_InGameMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__OptionsTab_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__OptionsTab_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__OptionsTab_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__OptionsTab_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetInventorySubMenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::SetInventorySubMenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetInventorySubMenuActive");
		
		UUI_InGameMenu_C_SetInventorySubMenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetCraftingSubmenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::SetCraftingSubmenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetCraftingSubmenuActive");
		
		UUI_InGameMenu_C_SetCraftingSubmenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetDebugSubmenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::SetDebugSubmenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetDebugSubmenuActive");
		
		UUI_InGameMenu_C_SetDebugSubmenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetObjectivesSubmenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::SetObjectivesSubmenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetObjectivesSubmenuActive");
		
		UUI_InGameMenu_C_SetObjectivesSubmenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.AdvanceTab
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::AdvanceTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.AdvanceTab");
		
		UUI_InGameMenu_C_AdvanceTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.PreviousTab
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::PreviousTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.PreviousTab");
		
		UUI_InGameMenu_C_PreviousTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.Set OptionsSubmenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::Set_OptionsSubmenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.Set OptionsSubmenuActive");
		
		UUI_InGameMenu_C_Set_OptionsSubmenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.RefreshWidget
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::RefreshWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.RefreshWidget");
		
		UUI_InGameMenu_C_RefreshWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__MapTab_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__MapTab_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__MapTab_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__MapTab_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetMapSubmenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::SetMapSubmenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetMapSubmenuActive");
		
		UUI_InGameMenu_C_SetMapSubmenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetKeyItemsSubmenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::SetKeyItemsSubmenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetKeyItemsSubmenuActive");
		
		UUI_InGameMenu_C_SetKeyItemsSubmenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__KeyItemsTab_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__KeyItemsTab_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__KeyItemsTab_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__KeyItemsTab_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.OnClose
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.OnClose");
		
		UUI_InGameMenu_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetTabButtonActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             UITabButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::SetTabButtonActive(class UUI_TabButton_C* UITabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetTabButtonActive");
		
		UUI_InGameMenu_C_SetTabButtonActive_Params params {};
		params.UITabButton = UITabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.OnGlobalColorChange");
		
		UUI_InGameMenu_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleInventorySubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleInventorySubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleInventorySubmenu");
		
		UUI_InGameMenu_C_ToggleInventorySubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleCraftingSubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleCraftingSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleCraftingSubmenu");
		
		UUI_InGameMenu_C_ToggleCraftingSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleMapSubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleMapSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleMapSubmenu");
		
		UUI_InGameMenu_C_ToggleMapSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleObjectivesSubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleObjectivesSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleObjectivesSubmenu");
		
		UUI_InGameMenu_C_ToggleObjectivesSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleKeyItemsSubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleKeyItemsSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleKeyItemsSubmenu");
		
		UUI_InGameMenu_C_ToggleKeyItemsSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleDebugSubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleDebugSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleDebugSubmenu");
		
		UUI_InGameMenu_C_ToggleDebugSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleOptionsSubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleOptionsSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleOptionsSubmenu");
		
		UUI_InGameMenu_C_ToggleOptionsSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__StatusTab_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::BndEvt__StatusTab_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.BndEvt__StatusTab_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature");
		
		UUI_InGameMenu_C_BndEvt__StatusTab_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.SetStatusSubmenuActive
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::SetStatusSubmenuActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.SetStatusSubmenuActive");
		
		UUI_InGameMenu_C_SetStatusSubmenuActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ToggleStatusSubmenu
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::ToggleStatusSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ToggleStatusSubmenu");
		
		UUI_InGameMenu_C_ToggleStatusSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.HandleAudio
	 * 		Flags  -> ()
	 */
	void UUI_InGameMenu_C::HandleAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.HandleAudio");
		
		UUI_InGameMenu_C_HandleAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_InGameMenu.UI_InGameMenu_C.ExecuteUbergraph_UI_InGameMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_InGameMenu_C::ExecuteUbergraph_UI_InGameMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_InGameMenu.UI_InGameMenu_C.ExecuteUbergraph_UI_InGameMenu");
		
		UUI_InGameMenu_C_ExecuteUbergraph_UI_InGameMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_InGameMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_InGameMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InGameMenu.UI_InGameMenu_C");
		return ptr;
	}

}


