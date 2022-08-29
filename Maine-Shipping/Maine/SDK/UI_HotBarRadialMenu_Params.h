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
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetDescColor
	 */
	struct UUI_HotBarRadialMenu_C_GetDescColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetPageCountForCategory
	 */
	struct UUI_HotBarRadialMenu_C_GetPageCountForCategory_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetCategoryCount
	 */
	struct UUI_HotBarRadialMenu_C_GetCategoryCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.GetRadialBGColor
	 */
	struct UUI_HotBarRadialMenu_C_GetRadialBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Construct
	 */
	struct UUI_HotBarRadialMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Populate
	 */
	struct UUI_HotBarRadialMenu_C_Populate_Params
	{	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Tick
	 */
	struct UUI_HotBarRadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.PopulateCategories
	 */
	struct UUI_HotBarRadialMenu_C_PopulateCategories_Params
	{	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.HandleSelectLastItem
	 */
	struct UUI_HotBarRadialMenu_C_HandleSelectLastItem_Params
	{	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.OnInventoryChanged
	 */
	struct UUI_HotBarRadialMenu_C_OnInventoryChanged_Params
	{	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.Destruct
	 */
	struct UUI_HotBarRadialMenu_C_Destruct_Params
	{	};

	/**
	 * Function UI_HotBarRadialMenu.UI_HotBarRadialMenu_C.ExecuteUbergraph_UI_HotBarRadialMenu
	 */
	struct UUI_HotBarRadialMenu_C_ExecuteUbergraph_UI_HotBarRadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2BR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
