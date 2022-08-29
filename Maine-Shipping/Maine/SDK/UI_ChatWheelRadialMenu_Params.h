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
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetRadialBGColor
	 */
	struct UUI_ChatWheelRadialMenu_C_GetRadialBGColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetCategoryIcon
	 */
	struct UUI_ChatWheelRadialMenu_C_GetCategoryIcon_Params
	{
	public:
		int32_t                                                    Category;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZOEK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.SetupChatOptionsForCategory
	 */
	struct UUI_ChatWheelRadialMenu_C_SetupChatOptionsForCategory_Params
	{	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.GetPageCountForCategory
	 */
	struct UUI_ChatWheelRadialMenu_C_GetPageCountForCategory_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.PopulateChatCategories
	 */
	struct UUI_ChatWheelRadialMenu_C_PopulateChatCategories_Params
	{	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Populate
	 */
	struct UUI_ChatWheelRadialMenu_C_Populate_Params
	{	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.CreateInitialSlots
	 */
	struct UUI_ChatWheelRadialMenu_C_CreateInitialSlots_Params
	{	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.PopulateCategories
	 */
	struct UUI_ChatWheelRadialMenu_C_PopulateCategories_Params
	{	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Tick
	 */
	struct UUI_ChatWheelRadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.Construct
	 */
	struct UUI_ChatWheelRadialMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.OnGlobalColorChange
	 */
	struct UUI_ChatWheelRadialMenu_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C.ExecuteUbergraph_UI_ChatWheelRadialMenu
	 */
	struct UUI_ChatWheelRadialMenu_C_ExecuteUbergraph_UI_ChatWheelRadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
