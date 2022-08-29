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
	 * Function UI_HeaderText.UI_HeaderText_C.SetLocalizedString
	 */
	struct UUI_HeaderText_C_SetLocalizedString_Params
	{
	public:
		struct FLocString                                          LocString;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.SetLargeFont
	 */
	struct UUI_HeaderText_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.SetText
	 */
	struct UUI_HeaderText_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.GetHeaderColor
	 */
	struct UUI_HeaderText_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.OnGlobalColorChange
	 */
	struct UUI_HeaderText_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.PreConstruct
	 */
	struct UUI_HeaderText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.Construct
	 */
	struct UUI_HeaderText_C_Construct_Params
	{	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.Destruct
	 */
	struct UUI_HeaderText_C_Destruct_Params
	{	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.EventLargeFonts
	 */
	struct UUI_HeaderText_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HeaderText.UI_HeaderText_C.ExecuteUbergraph_UI_HeaderText
	 */
	struct UUI_HeaderText_C_ExecuteUbergraph_UI_HeaderText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
