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
	 * Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.GetTitleTextColor
	 */
	struct UUI_HotBarRadialHeaderButton_C_GetTitleTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.GetCategoryColor
	 */
	struct UUI_HotBarRadialHeaderButton_C_GetCategoryColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.SetData
	 */
	struct UUI_HotBarRadialHeaderButton_C_SetData_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PageCount;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CategoryName;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C.ExecuteUbergraph_UI_HotBarRadialHeaderButton
	 */
	struct UUI_HotBarRadialHeaderButton_C_ExecuteUbergraph_UI_HotBarRadialHeaderButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
