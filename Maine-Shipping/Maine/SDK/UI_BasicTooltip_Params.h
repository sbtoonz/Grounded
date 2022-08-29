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
	 * Function UI_BasicTooltip.UI_BasicTooltip_C.TooltipHolderVisibility
	 */
	struct UUI_BasicTooltip_C_TooltipHolderVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BasicTooltip.UI_BasicTooltip_C.GetBasicText
	 */
	struct UUI_BasicTooltip_C_GetBasicText_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_BasicTooltip.UI_BasicTooltip_C.GetSCABOSAccentOne
	 */
	struct UUI_BasicTooltip_C_GetSCABOSAccentOne_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BasicTooltip.UI_BasicTooltip_C.Construct
	 */
	struct UUI_BasicTooltip_C_Construct_Params
	{	};

	/**
	 * Function UI_BasicTooltip.UI_BasicTooltip_C.Destruct
	 */
	struct UUI_BasicTooltip_C_Destruct_Params
	{	};

	/**
	 * Function UI_BasicTooltip.UI_BasicTooltip_C.ExecuteUbergraph_UI_BasicTooltip
	 */
	struct UUI_BasicTooltip_C_ExecuteUbergraph_UI_BasicTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K9N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
