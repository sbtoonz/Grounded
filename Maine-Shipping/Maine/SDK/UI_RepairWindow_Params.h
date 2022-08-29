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
	 * Function UI_RepairWindow.UI_RepairWindow_C.HandleKeyEventChord
	 */
	struct UUI_RepairWindow_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.SetFillPercentage
	 */
	struct UUI_RepairWindow_C_SetFillPercentage_Params
	{	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.GetDurabilityColor
	 */
	struct UUI_RepairWindow_C_GetDurabilityColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.GetHeaderColor
	 */
	struct UUI_RepairWindow_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.GetAccentTwo
	 */
	struct UUI_RepairWindow_C_GetAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.GetBaseColor
	 */
	struct UUI_RepairWindow_C_GetBaseColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.GetAccentOne
	 */
	struct UUI_RepairWindow_C_GetAccentOne_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.GetGlobalBG
	 */
	struct UUI_RepairWindow_C_GetGlobalBG_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.Initialize
	 */
	struct UUI_RepairWindow_C_Initialize_Params
	{
	public:
		class UItem*                                               SelectedItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.BndEvt__Repair_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_RepairWindow_C_BndEvt__Repair_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_RepairWindow_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.Destruct
	 */
	struct UUI_RepairWindow_C_Destruct_Params
	{	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.RepairItem
	 */
	struct UUI_RepairWindow_C_RepairItem_Params
	{	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.OnGlobalColorChange
	 */
	struct UUI_RepairWindow_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.Construct
	 */
	struct UUI_RepairWindow_C_Construct_Params
	{	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.PreConstruct
	 */
	struct UUI_RepairWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RepairWindow.UI_RepairWindow_C.ExecuteUbergraph_UI_RepairWindow
	 */
	struct UUI_RepairWindow_C_ExecuteUbergraph_UI_RepairWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
