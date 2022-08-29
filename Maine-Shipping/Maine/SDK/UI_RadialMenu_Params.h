#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.ClearHoverContent
	 */
	struct UUI_RadialMenu_C_ClearHoverContent_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnKeyDown
	 */
	struct UUI_RadialMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetMenuItemByIndex
	 */
	struct UUI_RadialMenu_C_GetMenuItemByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KQ32[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_BaseSlot_C*                                      Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverInvalid
	 */
	struct UUI_RadialMenu_C_HandleHoverInvalid_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleKeyEventChord
	 */
	struct UUI_RadialMenu_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverShortcutSlot
	 */
	struct UUI_RadialMenu_C_HandleHoverShortcutSlot_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverChatSlot
	 */
	struct UUI_RadialMenu_C_HandleHoverChatSlot_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverEmoteSlot
	 */
	struct UUI_RadialMenu_C_HandleHoverEmoteSlot_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverBuildingSlot
	 */
	struct UUI_RadialMenu_C_HandleHoverBuildingSlot_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleHoverItemSlot
	 */
	struct UUI_RadialMenu_C_HandleHoverItemSlot_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleGamepadAnalogSelection
	 */
	struct UUI_RadialMenu_C_HandleGamepadAnalogSelection_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.DeselectAllSlots
	 */
	struct UUI_RadialMenu_C_DeselectAllSlots_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnCategorySelected
	 */
	struct UUI_RadialMenu_C_OnCategorySelected_Params
	{
	public:
		class UUI_RadialHeaderButton_C*                            CategoryButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Page;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.PositionElements
	 */
	struct UUI_RadialMenu_C_PositionElements_Params
	{
	public:
		class UPanelWidget*                                        Panel;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.PositionWedges
	 */
	struct UUI_RadialMenu_C_PositionWedges_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetHeaderText
	 */
	struct UUI_RadialMenu_C_GetHeaderText_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AppendRadialName;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VRUG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetDefaultFocus
	 */
	struct UUI_RadialMenu_C_GetDefaultFocus_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryIcon
	 */
	struct UUI_RadialMenu_C_GetCategoryIcon_Params
	{
	public:
		int32_t                                                    Category;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HMVN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetNextPage
	 */
	struct UUI_RadialMenu_C_GetNextPage_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PageIndex;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetPreviousPage
	 */
	struct UUI_RadialMenu_C_GetPreviousPage_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PageIndex;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.SetPreviousNextVisuals
	 */
	struct UUI_RadialMenu_C_SetPreviousNextVisuals_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.CanPage
	 */
	struct UUI_RadialMenu_C_CanPage_Params
	{
	public:
		bool                                                       CanPage;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MGLX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.SetWedgeSlotHidden
	 */
	struct UUI_RadialMenu_C_SetWedgeSlotHidden_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YOM0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.SetWedgeSlotVisible
	 */
	struct UUI_RadialMenu_C_SetWedgeSlotVisible_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZWX1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetBasicTextColor
	 */
	struct UUI_RadialMenu_C_GetBasicTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetPageControlsColor
	 */
	struct UUI_RadialMenu_C_GetPageControlsColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryHeader
	 */
	struct UUI_RadialMenu_C_GetCategoryHeader_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L9TZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_RadialHeaderButton_C*                            RadialCategoryHeader;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.SetPage
	 */
	struct UUI_RadialMenu_C_SetPage_Params
	{
	public:
		int32_t                                                    NewPageIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EO9V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.AddRadialCategoryButton
	 */
	struct UUI_RadialMenu_C_AddRadialCategoryButton_Params
	{
	public:
		class UUI_RadialHeaderButton_C*                            Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.SelectPage
	 */
	struct UUI_RadialMenu_C_SelectPage_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.SelectCategory
	 */
	struct UUI_RadialMenu_C_SelectCategory_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleCategoryChange
	 */
	struct UUI_RadialMenu_C_HandleCategoryChange_Params
	{
	public:
		int32_t                                                    PreviousCategoryIndex;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ELJK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetPageCountForCategory
	 */
	struct UUI_RadialMenu_C_GetPageCountForCategory_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetCategoryCount
	 */
	struct UUI_RadialMenu_C_GetCategoryCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.CreateInitialSlots
	 */
	struct UUI_RadialMenu_C_CreateInitialSlots_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.RefreshSlot
	 */
	struct UUI_RadialMenu_C_RefreshSlot_Params
	{
	public:
		class UUI_BaseSlot_C*                                      BaseSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.PopulateCategories
	 */
	struct UUI_RadialMenu_C_PopulateCategories_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetDescColor
	 */
	struct UUI_RadialMenu_C_GetDescColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetRadialBGColor
	 */
	struct UUI_RadialMenu_C_GetRadialBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.GetCraftingRequirementsVisibility
	 */
	struct UUI_RadialMenu_C_GetCraftingRequirementsVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AKY5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnMouseWheel
	 */
	struct UUI_RadialMenu_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleUseSelectedRadialSlot
	 */
	struct UUI_RadialMenu_C_HandleUseSelectedRadialSlot_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnAnalogValueChanged
	 */
	struct UUI_RadialMenu_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.Refresh
	 */
	struct UUI_RadialMenu_C_Refresh_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.NextPage
	 */
	struct UUI_RadialMenu_C_NextPage_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.PreviousPage
	 */
	struct UUI_RadialMenu_C_PreviousPage_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.NextCategory
	 */
	struct UUI_RadialMenu_C_NextCategory_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.PreviousCategory
	 */
	struct UUI_RadialMenu_C_PreviousCategory_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.Populate
	 */
	struct UUI_RadialMenu_C_Populate_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.ConfigureRadialSlotPositioning
	 */
	struct UUI_RadialMenu_C_ConfigureRadialSlotPositioning_Params
	{
	public:
		class UPanelSlot*                                          Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.AddSlotToRadial
	 */
	struct UUI_RadialMenu_C_AddSlotToRadial_Params
	{
	public:
		class UUI_BaseSlot_C*                                      BaseSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.Construct
	 */
	struct UUI_RadialMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.Tick
	 */
	struct UUI_RadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnItemHover
	 */
	struct UUI_RadialMenu_C_OnItemHover_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnSlotSelected
	 */
	struct UUI_RadialMenu_C_OnSlotSelected_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnItemPress
	 */
	struct UUI_RadialMenu_C_OnItemPress_Params
	{
	public:
		class UUI_BaseSlot_C*                                      BaseSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnWedgeHover
	 */
	struct UUI_RadialMenu_C_OnWedgeHover_Params
	{
	public:
		class UUI_RadialWedge_C*                                   Wedge;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnWedgePressed
	 */
	struct UUI_RadialMenu_C_OnWedgePressed_Params
	{
	public:
		class UUI_RadialWedge_C*                                   Wedge;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.PreConstruct
	 */
	struct UUI_RadialMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnGlobalColorChange
	 */
	struct UUI_RadialMenu_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__ArrowBtnRight_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_RadialMenu_C_BndEvt__ArrowBtnRight_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__ArrowBtnLeft_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_RadialMenu_C_BndEvt__ArrowBtnLeft_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.SetDefaultFocus
	 */
	struct UUI_RadialMenu_C_SetDefaultFocus_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.OnUsingGamepadChanged
	 */
	struct UUI_RadialMenu_C_OnUsingGamepadChanged_Params
	{
	public:
		bool                                                       bOnUsingGamepadChanged;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_UI_BottomButton_61_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_RadialMenu_C_BndEvt__UI_RadialMenu_UI_BottomButton_61_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_SelectButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_RadialMenu_C_BndEvt__UI_RadialMenu_SelectButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.BndEvt__UI_RadialMenu_NextVariantButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_RadialMenu_C_BndEvt__UI_RadialMenu_NextVariantButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.HandleNextVariant
	 */
	struct UUI_RadialMenu_C_HandleNextVariant_Params
	{	};

	/**
	 * Function UI_RadialMenu.UI_RadialMenu_C.ExecuteUbergraph_UI_RadialMenu
	 */
	struct UUI_RadialMenu_C_ExecuteUbergraph_UI_RadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
