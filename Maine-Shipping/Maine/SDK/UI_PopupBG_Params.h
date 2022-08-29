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
	 * Function UI_PopupBG.UI_PopupBG_C.SetSubHeaderText
	 */
	struct UUI_PopupBG_C_SetSubHeaderText_Params
	{
	public:
		struct FLocString                                          NewSubHeaderLocalizedText;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.SetHeaderText
	 */
	struct UUI_PopupBG_C_SetHeaderText_Params
	{
	public:
		struct FLocString                                          NewHeaderLocalizedText;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetAccentThree
	 */
	struct UUI_PopupBG_C_GetAccentThree_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetSCABBaseColor
	 */
	struct UUI_PopupBG_C_GetSCABBaseColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetGlobalBGDarkener
	 */
	struct UUI_PopupBG_C_GetGlobalBGDarkener_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetGlobalBG
	 */
	struct UUI_PopupBG_C_GetGlobalBG_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetAccentTwo
	 */
	struct UUI_PopupBG_C_GetAccentTwo_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetAccentOne
	 */
	struct UUI_PopupBG_C_GetAccentOne_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetHeaderColor
	 */
	struct UUI_PopupBG_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.GetSubheaderColor
	 */
	struct UUI_PopupBG_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.Construct
	 */
	struct UUI_PopupBG_C_Construct_Params
	{	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.OnGlobalColorChange
	 */
	struct UUI_PopupBG_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.PreConstruct
	 */
	struct UUI_PopupBG_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.ExecuteUbergraph_UI_PopupBG
	 */
	struct UUI_PopupBG_C_ExecuteUbergraph_UI_PopupBG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PopupBG.UI_PopupBG_C.OnQuickItemTypeSelected__DelegateSignature
	 */
	struct UUI_PopupBG_C_OnQuickItemTypeSelected__DelegateSignature_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UZ3V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
