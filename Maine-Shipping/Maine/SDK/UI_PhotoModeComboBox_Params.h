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
	 * Function UI_PhotoModeComboBox.UI_PhotoModeComboBox_C.PreConstruct
	 */
	struct UUI_PhotoModeComboBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PhotoModeComboBox.UI_PhotoModeComboBox_C.OnFocusedHoveredChanged
	 */
	struct UUI_PhotoModeComboBox_C_OnFocusedHoveredChanged_Params
	{
	public:
		bool                                                       FocusedOrHovered;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PhotoModeComboBox.UI_PhotoModeComboBox_C.OnMouseEnter
	 */
	struct UUI_PhotoModeComboBox_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_PhotoModeComboBox.UI_PhotoModeComboBox_C.OnMouseLeave
	 */
	struct UUI_PhotoModeComboBox_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_PhotoModeComboBox.UI_PhotoModeComboBox_C.ExecuteUbergraph_UI_PhotoModeComboBox
	 */
	struct UUI_PhotoModeComboBox_C_ExecuteUbergraph_UI_PhotoModeComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
