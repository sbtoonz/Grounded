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
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.SetLargeFont
	 */
	struct UUI_ItemDescHeader_C_SetLargeFont_Params
	{	};

	/**
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.SetDescHeaderText
	 */
	struct UUI_ItemDescHeader_C_SetDescHeaderText_Params
	{
	public:
		class FString                                              HeaderString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.GetHeaderColor
	 */
	struct UUI_ItemDescHeader_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.Construct
	 */
	struct UUI_ItemDescHeader_C_Construct_Params
	{	};

	/**
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.OnGlobalColorChange
	 */
	struct UUI_ItemDescHeader_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.EventLargeFonts
	 */
	struct UUI_ItemDescHeader_C_EventLargeFonts_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.Destruct
	 */
	struct UUI_ItemDescHeader_C_Destruct_Params
	{	};

	/**
	 * Function UI_ItemDescHeader.UI_ItemDescHeader_C.ExecuteUbergraph_UI_ItemDescHeader
	 */
	struct UUI_ItemDescHeader_C_ExecuteUbergraph_UI_ItemDescHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
