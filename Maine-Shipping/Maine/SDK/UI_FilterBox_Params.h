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
	 * Function UI_FilterBox.UI_FilterBox_C.SetSearchboxStyle
	 */
	struct UUI_FilterBox_C_SetSearchboxStyle_Params
	{	};

	/**
	 * Function UI_FilterBox.UI_FilterBox_C.BndEvt__UI_FilterBox_FilterBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UUI_FilterBox_C_BndEvt__UI_FilterBox_FilterBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_FilterBox.UI_FilterBox_C.OnGlobalColorChange
	 */
	struct UUI_FilterBox_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_FilterBox.UI_FilterBox_C.OnAddedToFocusPath
	 */
	struct UUI_FilterBox_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_FilterBox.UI_FilterBox_C.ExecuteUbergraph_UI_FilterBox
	 */
	struct UUI_FilterBox_C_ExecuteUbergraph_UI_FilterBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G5VM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_FilterBox.UI_FilterBox_C.OnFocused__DelegateSignature
	 */
	struct UUI_FilterBox_C_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function UI_FilterBox.UI_FilterBox_C.OnFilterChanged__DelegateSignature
	 */
	struct UUI_FilterBox_C_OnFilterChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
