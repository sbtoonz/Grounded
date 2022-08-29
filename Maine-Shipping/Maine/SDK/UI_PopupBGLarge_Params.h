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
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetMaterialBColor
	 */
	struct UUI_PopupBGLarge_C_GetMaterialBColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetAccentThree
	 */
	struct UUI_PopupBGLarge_C_GetAccentThree_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetSCABBaseColor
	 */
	struct UUI_PopupBGLarge_C_GetSCABBaseColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetGlobalBGDarkener
	 */
	struct UUI_PopupBGLarge_C_GetGlobalBGDarkener_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetGlobalBG
	 */
	struct UUI_PopupBGLarge_C_GetGlobalBG_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetAccentTwo
	 */
	struct UUI_PopupBGLarge_C_GetAccentTwo_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetAccentOne
	 */
	struct UUI_PopupBGLarge_C_GetAccentOne_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetHeaderColor
	 */
	struct UUI_PopupBGLarge_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.GetSubheaderColor
	 */
	struct UUI_PopupBGLarge_C_GetSubheaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.Construct
	 */
	struct UUI_PopupBGLarge_C_Construct_Params
	{	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.OnGlobalColorChange
	 */
	struct UUI_PopupBGLarge_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.ExecuteUbergraph_UI_PopupBGLarge
	 */
	struct UUI_PopupBGLarge_C_ExecuteUbergraph_UI_PopupBGLarge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CSIO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PopupBGLarge.UI_PopupBGLarge_C.OnQuickItemTypeSelected__DelegateSignature
	 */
	struct UUI_PopupBGLarge_C_OnQuickItemTypeSelected__DelegateSignature_Params
	{
	public:
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P2Y9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
