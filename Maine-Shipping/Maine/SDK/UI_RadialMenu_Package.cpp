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
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.ClearHoverContent
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::ClearHoverContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.ClearHoverContent");
		
		UUI_RadialMenu_C_ClearHoverContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_RadialMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnKeyDown");
		
		UUI_RadialMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetMenuItemByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              Item                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetMenuItemByIndex(int32_t Index, class UUI_BaseSlot_C** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetMenuItemByIndex");
		
		UUI_RadialMenu_C_GetMenuItemByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverInvalid
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleHoverInvalid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverInvalid");
		
		UUI_RadialMenu_C_HandleHoverInvalid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_RadialMenu_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleKeyEventChord");
		
		UUI_RadialMenu_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverShortcutSlot
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleHoverShortcutSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverShortcutSlot");
		
		UUI_RadialMenu_C_HandleHoverShortcutSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverChatSlot
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleHoverChatSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverChatSlot");
		
		UUI_RadialMenu_C_HandleHoverChatSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverEmoteSlot
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleHoverEmoteSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverEmoteSlot");
		
		UUI_RadialMenu_C_HandleHoverEmoteSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverBuildingSlot
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleHoverBuildingSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverBuildingSlot");
		
		UUI_RadialMenu_C_HandleHoverBuildingSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverItemSlot
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleHoverItemSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverItemSlot");
		
		UUI_RadialMenu_C_HandleHoverItemSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleGamepadAnalogSelection
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleGamepadAnalogSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleGamepadAnalogSelection");
		
		UUI_RadialMenu_C_HandleGamepadAnalogSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.DeselectAllSlots
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::DeselectAllSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.DeselectAllSlots");
		
		UUI_RadialMenu_C_DeselectAllSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnCategorySelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RadialHeaderButton_C*                    CategoryButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::OnCategorySelected(class UUI_RadialHeaderButton_C* CategoryButton, int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnCategorySelected");
		
		UUI_RadialMenu_C_OnCategorySelected_Params params {};
		params.CategoryButton = CategoryButton;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.PositionElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::PositionElements(class UPanelWidget* Panel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.PositionElements");
		
		UUI_RadialMenu_C_PositionElements_Params params {};
		params.Panel = Panel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.PositionWedges
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::PositionWedges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.PositionWedges");
		
		UUI_RadialMenu_C_PositionWedges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetHeaderText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AppendRadialName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUI_RadialMenu_C::GetHeaderText(int32_t Page, bool AppendRadialName, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetHeaderText");
		
		UUI_RadialMenu_C_GetHeaderText_Params params {};
		params.Page = Page;
		params.AppendRadialName = AppendRadialName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetDefaultFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetDefaultFocus(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetDefaultFocus");
		
		UUI_RadialMenu_C_GetDefaultFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetCategoryIcon(int32_t Category, class UTexture2D** Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryIcon");
		
		UUI_RadialMenu_C_GetCategoryIcon_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetNextPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetNextPage(int32_t* CategoryIndex, int32_t* PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetNextPage");
		
		UUI_RadialMenu_C_GetNextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryIndex != nullptr)
			*CategoryIndex = params.CategoryIndex;
		if (PageIndex != nullptr)
			*PageIndex = params.PageIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetPreviousPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetPreviousPage(int32_t* CategoryIndex, int32_t* PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetPreviousPage");
		
		UUI_RadialMenu_C_GetPreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryIndex != nullptr)
			*CategoryIndex = params.CategoryIndex;
		if (PageIndex != nullptr)
			*PageIndex = params.PageIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.SetPreviousNextVisuals
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::SetPreviousNextVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.SetPreviousNextVisuals");
		
		UUI_RadialMenu_C_SetPreviousNextVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.CanPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanPage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RadialMenu_C::CanPage(bool* CanPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.CanPage");
		
		UUI_RadialMenu_C_CanPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPage != nullptr)
			*CanPage = params.CanPage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.SetWedgeSlotHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::SetWedgeSlotHidden(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.SetWedgeSlotHidden");
		
		UUI_RadialMenu_C_SetWedgeSlotHidden_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.SetWedgeSlotVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::SetWedgeSlotVisible(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.SetWedgeSlotVisible");
		
		UUI_RadialMenu_C_SetWedgeSlotVisible_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetBasicTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_RadialMenu_C::GetBasicTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetBasicTextColor");
		
		UUI_RadialMenu_C_GetBasicTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetPageControlsColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RadialMenu_C::GetPageControlsColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetPageControlsColor");
		
		UUI_RadialMenu_C_GetPageControlsColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_RadialHeaderButton_C*                    RadialCategoryHeader                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetCategoryHeader(int32_t Index, class UUI_RadialHeaderButton_C** RadialCategoryHeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryHeader");
		
		UUI_RadialMenu_C_GetCategoryHeader_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadialCategoryHeader != nullptr)
			*RadialCategoryHeader = params.RadialCategoryHeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::SetPage(int32_t NewPageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.SetPage");
		
		UUI_RadialMenu_C_SetPage_Params params {};
		params.NewPageIndex = NewPageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.AddRadialCategoryButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RadialHeaderButton_C*                    Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::AddRadialCategoryButton(class UUI_RadialHeaderButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.AddRadialCategoryButton");
		
		UUI_RadialMenu_C_AddRadialCategoryButton_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.SelectPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::SelectPage(int32_t PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.SelectPage");
		
		UUI_RadialMenu_C_SelectPage_Params params {};
		params.PageIndex = PageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.SelectCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::SelectCategory(int32_t CategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.SelectCategory");
		
		UUI_RadialMenu_C_SelectCategory_Params params {};
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleCategoryChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PreviousCategoryIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::HandleCategoryChange(int32_t PreviousCategoryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleCategoryChange");
		
		UUI_RadialMenu_C_HandleCategoryChange_Params params {};
		params.PreviousCategoryIndex = PreviousCategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetPageCountForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetPageCountForCategory");
		
		UUI_RadialMenu_C_GetPageCountForCategory_Params params {};
		params.CategoryIndex = CategoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::GetCategoryCount(int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryCount");
		
		UUI_RadialMenu_C_GetCategoryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.CreateInitialSlots
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::CreateInitialSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.CreateInitialSlots");
		
		UUI_RadialMenu_C_CreateInitialSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.RefreshSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              BaseSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::RefreshSlot(class UUI_BaseSlot_C* BaseSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.RefreshSlot");
		
		UUI_RadialMenu_C_RefreshSlot_Params params {};
		params.BaseSlot = BaseSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.PopulateCategories
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::PopulateCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.PopulateCategories");
		
		UUI_RadialMenu_C_PopulateCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetDescColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RadialMenu_C::GetDescColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetDescColor");
		
		UUI_RadialMenu_C_GetDescColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetRadialBGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RadialMenu_C::GetRadialBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetRadialBGColor");
		
		UUI_RadialMenu_C_GetRadialBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.GetCraftingRequirementsVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_RadialMenu_C::GetCraftingRequirementsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.GetCraftingRequirementsVisibility");
		
		UUI_RadialMenu_C_GetCraftingRequirementsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_RadialMenu_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnMouseWheel");
		
		UUI_RadialMenu_C_OnMouseWheel_Params params {};
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
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleUseSelectedRadialSlot
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleUseSelectedRadialSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleUseSelectedRadialSlot");
		
		UUI_RadialMenu_C_HandleUseSelectedRadialSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnAnalogValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UUI_RadialMenu_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnAnalogValueChanged");
		
		UUI_RadialMenu_C_OnAnalogValueChanged_Params params {};
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
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.Refresh
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.Refresh");
		
		UUI_RadialMenu_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.NextPage
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.NextPage");
		
		UUI_RadialMenu_C_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.PreviousPage
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::PreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.PreviousPage");
		
		UUI_RadialMenu_C_PreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.NextCategory
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::NextCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.NextCategory");
		
		UUI_RadialMenu_C_NextCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.PreviousCategory
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::PreviousCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.PreviousCategory");
		
		UUI_RadialMenu_C_PreviousCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.Populate
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.Populate");
		
		UUI_RadialMenu_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.ConfigureRadialSlotPositioning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelSlot*                                  Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::ConfigureRadialSlotPositioning(class UPanelSlot* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.ConfigureRadialSlotPositioning");
		
		UUI_RadialMenu_C_ConfigureRadialSlotPositioning_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.AddSlotToRadial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              BaseSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::AddSlotToRadial(class UUI_BaseSlot_C* BaseSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.AddSlotToRadial");
		
		UUI_RadialMenu_C_AddSlotToRadial_Params params {};
		params.BaseSlot = BaseSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.Construct");
		
		UUI_RadialMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.Tick");
		
		UUI_RadialMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnItemHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::OnItemHover(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnItemHover");
		
		UUI_RadialMenu_C_OnItemHover_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnSlotSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RadialMenu_C::OnSlotSelected(class UUI_BaseSlot_C* Slot, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnSlotSelected");
		
		UUI_RadialMenu_C_OnSlotSelected_Params params {};
		params.Slot = Slot;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnItemPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              BaseSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::OnItemPress(class UUI_BaseSlot_C* BaseSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnItemPress");
		
		UUI_RadialMenu_C_OnItemPress_Params params {};
		params.BaseSlot = BaseSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnWedgeHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RadialWedge_C*                           Wedge                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::OnWedgeHover(class UUI_RadialWedge_C* Wedge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnWedgeHover");
		
		UUI_RadialMenu_C_OnWedgeHover_Params params {};
		params.Wedge = Wedge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnWedgePressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RadialWedge_C*                           Wedge                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::OnWedgePressed(class UUI_RadialWedge_C* Wedge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnWedgePressed");
		
		UUI_RadialMenu_C_OnWedgePressed_Params params {};
		params.Wedge = Wedge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RadialMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.PreConstruct");
		
		UUI_RadialMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnGlobalColorChange");
		
		UUI_RadialMenu_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__ArrowBtnRight_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::BndEvt__ArrowBtnRight_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__ArrowBtnRight_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UUI_RadialMenu_C_BndEvt__ArrowBtnRight_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__ArrowBtnLeft_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::BndEvt__ArrowBtnLeft_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__ArrowBtnLeft_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UUI_RadialMenu_C_BndEvt__ArrowBtnLeft_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.SetDefaultFocus
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::SetDefaultFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.SetDefaultFocus");
		
		UUI_RadialMenu_C_SetDefaultFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnUsingGamepadChanged                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RadialMenu_C::OnUsingGamepadChanged(bool bOnUsingGamepadChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.OnUsingGamepadChanged");
		
		UUI_RadialMenu_C_OnUsingGamepadChanged_Params params {};
		params.bOnUsingGamepadChanged = bOnUsingGamepadChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_UI_BottomButton_61_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::BndEvt__UI_RadialMenu_UI_BottomButton_61_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_UI_BottomButton_61_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_RadialMenu_C_BndEvt__UI_RadialMenu_UI_BottomButton_61_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_SelectButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::BndEvt__UI_RadialMenu_SelectButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_SelectButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature");
		
		UUI_RadialMenu_C_BndEvt__UI_RadialMenu_SelectButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_NextVariantButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::BndEvt__UI_RadialMenu_NextVariantButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_NextVariantButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature");
		
		UUI_RadialMenu_C_BndEvt__UI_RadialMenu_NextVariantButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.HandleNextVariant
	 * 		Flags  -> ()
	 */
	void UUI_RadialMenu_C::HandleNextVariant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.HandleNextVariant");
		
		UUI_RadialMenu_C_HandleNextVariant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialMenu.UI_RadialMenu_C.ExecuteUbergraph_UI_RadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialMenu_C::ExecuteUbergraph_UI_RadialMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialMenu.UI_RadialMenu_C.ExecuteUbergraph_UI_RadialMenu");
		
		UUI_RadialMenu_C_ExecuteUbergraph_UI_RadialMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RadialMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RadialMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RadialMenu.UI_RadialMenu_C");
		return ptr;
	}

}


