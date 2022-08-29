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
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetAccentThree
	 */
	struct UUI_GlobalBackground_C_GetAccentThree_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetSCABBaseColor
	 */
	struct UUI_GlobalBackground_C_GetSCABBaseColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetGlobalBGDarkener
	 */
	struct UUI_GlobalBackground_C_GetGlobalBGDarkener_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetGlobalBG
	 */
	struct UUI_GlobalBackground_C_GetGlobalBG_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetAccentTwo
	 */
	struct UUI_GlobalBackground_C_GetAccentTwo_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetAccentOne
	 */
	struct UUI_GlobalBackground_C_GetAccentOne_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetHeaderColor
	 */
	struct UUI_GlobalBackground_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.GetSubheaderColor
	 */
	struct UUI_GlobalBackground_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.Construct
	 */
	struct UUI_GlobalBackground_C_Construct_Params
	{	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.OnGlobalColorChange
	 */
	struct UUI_GlobalBackground_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.ExecuteUbergraph_UI_GlobalBackground
	 */
	struct UUI_GlobalBackground_C_ExecuteUbergraph_UI_GlobalBackground_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GlobalBackground.UI_GlobalBackground_C.OnQuickItemTypeSelected__DelegateSignature
	 */
	struct UUI_GlobalBackground_C_OnQuickItemTypeSelected__DelegateSignature_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A7R4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
