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
	 * Function UI_Interact.UI_Interact_C.GetInteractionTypeBrush
	 */
	struct UUI_Interact_C_GetInteractionTypeBrush_Params
	{
	public:
		EInteractionType                                           InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BIRI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         Brush;                                                   // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetIsVisibleMaster
	 */
	struct UUI_Interact_C_GetIsVisibleMaster_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NVR2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.RefreshItemProcessing
	 */
	struct UUI_Interact_C_RefreshItemProcessing_Params
	{
	public:
		unsigned char                                              UnknownData_P7ZF[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetInteractionInputVisibility
	 */
	struct UUI_Interact_C_GetInteractionInputVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.IsInteractionEnabled
	 */
	struct UUI_Interact_C_IsInteractionEnabled_Params
	{
	public:
		unsigned char                                              UnknownData_MV47[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EInteractionChannel                                        Channel;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       State;                                                   // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.IsMissingIngredientsVisibility
	 */
	struct UUI_Interact_C_IsMissingIngredientsVisibility_Params
	{
	public:
		EInteractionType                                           InteractType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetInteractionOpacities
	 */
	struct UUI_Interact_C_GetInteractionOpacities_Params
	{	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetInteractionSlashDisplay
	 */
	struct UUI_Interact_C_GetInteractionSlashDisplay_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetHoldInteractionVisibility
	 */
	struct UUI_Interact_C_GetHoldInteractionVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetPrimaryInteractionVisibility
	 */
	struct UUI_Interact_C_GetPrimaryInteractionVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetPrimaryInteractionDisplayName
	 */
	struct UUI_Interact_C_GetPrimaryInteractionDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetHoldInteractionDisplayName
	 */
	struct UUI_Interact_C_GetHoldInteractionDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetInteractionDisplayName
	 */
	struct UUI_Interact_C_GetInteractionDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.HoldKeyVis
	 */
	struct UUI_Interact_C_HoldKeyVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.FillCircleEvent
	 */
	struct UUI_Interact_C_FillCircleEvent_Params
	{	};

	/**
	 * Function UI_Interact.UI_Interact_C.InteractionTypeToVisibility
	 */
	struct UUI_Interact_C_InteractionTypeToVisibility_Params
	{
	public:
		EInteractionType                                           InteractType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Visibility;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetDarkener
	 */
	struct UUI_Interact_C_GetDarkener_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.Get_InventoryFull_ColorAndOpacity_1
	 */
	struct UUI_Interact_C_Get_InventoryFull_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetAccentTwo
	 */
	struct UUI_Interact_C_GetAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetBasicTextColor
	 */
	struct UUI_Interact_C_GetBasicTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetInteractableInRange
	 */
	struct UUI_Interact_C_GetInteractableInRange_Params
	{
	public:
		unsigned char                                              UnknownData_5ZUU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetInteractionControlVisibility
	 */
	struct UUI_Interact_C_GetInteractionControlVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.FacebuttonVisibility
	 */
	struct UUI_Interact_C_FacebuttonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetFillColor
	 */
	struct UUI_Interact_C_GetFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.IsAlsoHoldHappening
	 */
	struct UUI_Interact_C_IsAlsoHoldHappening_Params
	{
	public:
		bool                                                       Happening;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.Get_OnlyFill_Visibility_1
	 */
	struct UUI_Interact_C_Get_OnlyFill_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ESWP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.Get_AlsoFill_Visibility_1
	 */
	struct UUI_Interact_C_Get_AlsoFill_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A2ZE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetVisibilityHoldFill
	 */
	struct UUI_Interact_C_GetVisibilityHoldFill_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.KeypressVisbility
	 */
	struct UUI_Interact_C_KeypressVisbility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8XJN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.Get_InputKey_Visibility_1
	 */
	struct UUI_Interact_C_Get_InputKey_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.CanCancelVisibility
	 */
	struct UUI_Interact_C_CanCancelVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.Get_GrabHand_Brush_1
	 */
	struct UUI_Interact_C_Get_GrabHand_Brush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.RefreshBuildingRequirements
	 */
	struct UUI_Interact_C_RefreshBuildingRequirements_Params
	{
	public:
		unsigned char                                              UnknownData_6FMF[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetVisibilityForBuildingRequirements
	 */
	struct UUI_Interact_C_GetVisibilityForBuildingRequirements_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IEE9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Interact.UI_Interact_C.GetInputKeyText
	 */
	struct UUI_Interact_C_GetInputKeyText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.Construct
	 */
	struct UUI_Interact_C_Construct_Params
	{	};

	/**
	 * Function UI_Interact.UI_Interact_C.Tick
	 */
	struct UUI_Interact_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.On Change Interactable
	 */
	struct UUI_Interact_C_On_Change_Interactable_Params
	{	};

	/**
	 * Function UI_Interact.UI_Interact_C.Refresh UI
	 */
	struct UUI_Interact_C_Refresh_UI_Params
	{	};

	/**
	 * Function UI_Interact.UI_Interact_C.BindPlayerEvents
	 */
	struct UUI_Interact_C_BindPlayerEvents_Params
	{
	public:
		class ABP_SurvivalPlayerCharacter_C*                       Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Interact.UI_Interact_C.OnGlobalColorChange
	 */
	struct UUI_Interact_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_Interact.UI_Interact_C.ExecuteUbergraph_UI_Interact
	 */
	struct UUI_Interact_C_ExecuteUbergraph_UI_Interact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_44FL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
