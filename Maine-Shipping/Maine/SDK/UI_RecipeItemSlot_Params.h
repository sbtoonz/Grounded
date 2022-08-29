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
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetLargeFonts
	 */
	struct UUI_RecipeItemSlot_C_SetLargeFonts_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.HasFocus
	 */
	struct UUI_RecipeItemSlot_C_HasFocus_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHotCraftFillColor
	 */
	struct UUI_RecipeItemSlot_C_GetHotCraftFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHoldToCraft
	 */
	struct UUI_RecipeItemSlot_C_GetHoldToCraft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Get_AnimFore_ColorAndOpacity_1
	 */
	struct UUI_RecipeItemSlot_C_Get_AnimFore_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetHotCraftAnimVis
	 */
	struct UUI_RecipeItemSlot_C_GetHotCraftAnimVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetGlobalSelected
	 */
	struct UUI_RecipeItemSlot_C_GetGlobalSelected_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetHasEnough
	 */
	struct UUI_RecipeItemSlot_C_SetHasEnough_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetCannotHotCraft
	 */
	struct UUI_RecipeItemSlot_C_SetCannotHotCraft_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetCanHotCraft
	 */
	struct UUI_RecipeItemSlot_C_SetCanHotCraft_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetCraftStates
	 */
	struct UUI_RecipeItemSlot_C_GetCraftStates_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.CanHotCraft
	 */
	struct UUI_RecipeItemSlot_C_CanHotCraft_Params
	{
	public:
		bool                                                       CanHotCraft;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNFV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetFillPercentage
	 */
	struct UUI_RecipeItemSlot_C_GetFillPercentage_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetBasicTooltip
	 */
	struct UUI_RecipeItemSlot_C_GetBasicTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetGlobalBGColor
	 */
	struct UUI_RecipeItemSlot_C_GetGlobalBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetSCABOSAccentTwo
	 */
	struct UUI_RecipeItemSlot_C_GetSCABOSAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.GetMissingColor
	 */
	struct UUI_RecipeItemSlot_C_GetMissingColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Setup
	 */
	struct UUI_RecipeItemSlot_C_Setup_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FBaseItemData                                       ItemData;                                                // 0x0010(0x0598)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    HaveCount;                                               // 0x05A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasEnough;                                               // 0x05AC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LEIJ[0x3];                                   // 0x05AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NeedCount;                                               // 0x05B0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YRJ5[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Tick
	 */
	struct UUI_RecipeItemSlot_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.SetSelected
	 */
	struct UUI_RecipeItemSlot_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Construct
	 */
	struct UUI_RecipeItemSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_BndEvt__RecipeListButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.ManageCraftStates
	 */
	struct UUI_RecipeItemSlot_C_ManageCraftStates_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnGlobalColorChange
	 */
	struct UUI_RecipeItemSlot_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnAddedToFocusPath
	 */
	struct UUI_RecipeItemSlot_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnRemovedFromFocusPath
	 */
	struct UUI_RecipeItemSlot_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.EventLargeFonts
	 */
	struct UUI_RecipeItemSlot_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.Destruct
	 */
	struct UUI_RecipeItemSlot_C_Destruct_Params
	{	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.ExecuteUbergraph_UI_RecipeItemSlot
	 */
	struct UUI_RecipeItemSlot_C_ExecuteUbergraph_UI_RecipeItemSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnFocused__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_OnFocused__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnHoldComplete__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_OnHoldComplete__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnMouseDoubleClick__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_OnMouseDoubleClick__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeItemSlot.UI_RecipeItemSlot_C.OnMouseDown__DelegateSignature
	 */
	struct UUI_RecipeItemSlot_C_OnMouseDown__DelegateSignature_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UUI_RecipeItemSlot_C*                                RecipeItemSlot;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
