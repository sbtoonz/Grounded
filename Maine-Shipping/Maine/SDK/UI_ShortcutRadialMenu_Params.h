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
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetDescColor
	 */
	struct UUI_ShortcutRadialMenu_C_GetDescColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetPageCountForCategory
	 */
	struct UUI_ShortcutRadialMenu_C_GetPageCountForCategory_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetCategoryCount
	 */
	struct UUI_ShortcutRadialMenu_C_GetCategoryCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetCategoryHeader_1
	 */
	struct UUI_ShortcutRadialMenu_C_GetCategoryHeader_1_Params
	{
	public:
		unsigned char                                              Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_970P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_BuildingRadialHeaderButton_C*                    CategoryHeader;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.PopulateShortcutsCategories
	 */
	struct UUI_ShortcutRadialMenu_C_PopulateShortcutsCategories_Params
	{	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.GetRadialBGColor
	 */
	struct UUI_ShortcutRadialMenu_C_GetRadialBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Construct
	 */
	struct UUI_ShortcutRadialMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Populate
	 */
	struct UUI_ShortcutRadialMenu_C_Populate_Params
	{	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.Tick
	 */
	struct UUI_ShortcutRadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.PopulateCategories
	 */
	struct UUI_ShortcutRadialMenu_C_PopulateCategories_Params
	{	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.CreateInitialSlots
	 */
	struct UUI_ShortcutRadialMenu_C_CreateInitialSlots_Params
	{	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.HandleCategoryChange
	 */
	struct UUI_ShortcutRadialMenu_C_HandleCategoryChange_Params
	{
	public:
		int32_t                                                    PreviousCategoryIndex;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C.ExecuteUbergraph_UI_ShortcutRadialMenu
	 */
	struct UUI_ShortcutRadialMenu_C_ExecuteUbergraph_UI_ShortcutRadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
