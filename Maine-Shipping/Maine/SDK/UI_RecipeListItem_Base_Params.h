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
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.FilterTextMatches
	 */
	struct UUI_RecipeListItem_Base_C_FilterTextMatches_Params
	{
	public:
		class FText                                                FilterText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FOYY[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetLargeFont
	 */
	struct UUI_RecipeListItem_Base_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.HasFocus
	 */
	struct UUI_RecipeListItem_Base_C_HasFocus_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.RefreshIcons
	 */
	struct UUI_RecipeListItem_Base_C_RefreshIcons_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.FocusOnWidget
	 */
	struct UUI_RecipeListItem_Base_C_FocusOnWidget_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Get Crafting Building Icon Visibility
	 */
	struct UUI_RecipeListItem_Base_C_Get_Crafting_Building_Icon_Visibility_Params
	{
	public:
		struct FGameplayTag                                        Crafting_Tag;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetNeedWorkbenchTooltip
	 */
	struct UUI_RecipeListItem_Base_C_GetNeedWorkbenchTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetWorkbenchIcon
	 */
	struct UUI_RecipeListItem_Base_C_GetWorkbenchIcon_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetBuildingRecipe
	 */
	struct UUI_RecipeListItem_Base_C_SetBuildingRecipe_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeRowHandle;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetCraftingRecipe
	 */
	struct UUI_RecipeListItem_Base_C_SetCraftingRecipe_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeRowHandle;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCannotDoTooltip
	 */
	struct UUI_RecipeListItem_Base_C_GetCannotDoTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCanDoVis
	 */
	struct UUI_RecipeListItem_Base_C_GetCanDoVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3WXG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetCannotCraftColor
	 */
	struct UUI_RecipeListItem_Base_C_GetCannotCraftColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetNewItemVis
	 */
	struct UUI_RecipeListItem_Base_C_GetNewItemVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.GetAttentionColor
	 */
	struct UUI_RecipeListItem_Base_C_GetAttentionColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetEnabledStyle
	 */
	struct UUI_RecipeListItem_Base_C_SetEnabledStyle_Params
	{
	public:
		class UTextBlock*                                          ItemText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             RecipeButton;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetDisabledStyle
	 */
	struct UUI_RecipeListItem_Base_C_SetDisabledStyle_Params
	{
	public:
		class UTextBlock*                                          ItemText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             RecipeButton;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Construct
	 */
	struct UUI_RecipeListItem_Base_C_Construct_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_RecipeListItem_Base_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetSelected
	 */
	struct UUI_RecipeListItem_Base_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.SetEnabledState
	 */
	struct UUI_RecipeListItem_Base_C_SetEnabledState_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_RecipeListItem_Base_C_BndEvt__RecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_RecipeListItem_Base_C_BndEvt__RecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnAddedToFocusPath
	 */
	struct UUI_RecipeListItem_Base_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.BndEvt__RecipeButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_RecipeListItem_Base_C_BndEvt__RecipeButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnGlobalColorChange
	 */
	struct UUI_RecipeListItem_Base_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnRemovedFromFocusPath
	 */
	struct UUI_RecipeListItem_Base_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.PlayAnim
	 */
	struct UUI_RecipeListItem_Base_C_PlayAnim_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.Destruct
	 */
	struct UUI_RecipeListItem_Base_C_Destruct_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.EventLargeFonts
	 */
	struct UUI_RecipeListItem_Base_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.ExecuteUbergraph_UI_RecipeListItem_Base
	 */
	struct UUI_RecipeListItem_Base_C_ExecuteUbergraph_UI_RecipeListItem_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJT8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnFocused__DelegateSignature
	 */
	struct UUI_RecipeListItem_Base_C_OnFocused__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           RecipeListItem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnMouseDoubleClick__DelegateSignature
	 */
	struct UUI_RecipeListItem_Base_C_OnMouseDoubleClick__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           RecipeListItem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Base.UI_RecipeListItem_Base_C.OnMouseDown__DelegateSignature
	 */
	struct UUI_RecipeListItem_Base_C_OnMouseDown__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeListItem_Base_C*                           RecipeListItem;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
