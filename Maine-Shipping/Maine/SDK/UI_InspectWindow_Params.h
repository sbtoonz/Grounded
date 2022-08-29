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
	 * Function UI_InspectWindow.UI_InspectWindow_C.HandleKeyEventChord
	 */
	struct UUI_InspectWindow_C_HandleKeyEventChord_Params
	{
	public:
		struct FInputChord                                         InChord;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.OnAnalogValueChanged
	 */
	struct UUI_InspectWindow_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.GetHeaderColor
	 */
	struct UUI_InspectWindow_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.GetExpandoColor
	 */
	struct UUI_InspectWindow_C_GetExpandoColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.GetBGDarkener
	 */
	struct UUI_InspectWindow_C_GetBGDarkener_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.GetAccentTwo
	 */
	struct UUI_InspectWindow_C_GetAccentTwo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.BndEvt__UI_BottomButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 */
	struct UUI_InspectWindow_C_BndEvt__UI_BottomButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.SetInspectionItem
	 */
	struct UUI_InspectWindow_C_SetInspectionItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.Construct
	 */
	struct UUI_InspectWindow_C_Construct_Params
	{	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.Destruct
	 */
	struct UUI_InspectWindow_C_Destruct_Params
	{	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.OnGlobalColorChange
	 */
	struct UUI_InspectWindow_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.EventLargeFonts
	 */
	struct UUI_InspectWindow_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.SetInspectItemFromData
	 */
	struct UUI_InspectWindow_C_SetInspectItemFromData_Params
	{
	public:
		struct FDataTableRowHandle                                 DataTableRowHandle;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_InspectWindow.UI_InspectWindow_C.ExecuteUbergraph_UI_InspectWindow
	 */
	struct UUI_InspectWindow_C_ExecuteUbergraph_UI_InspectWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q07D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
