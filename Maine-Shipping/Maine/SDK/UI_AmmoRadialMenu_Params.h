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
	 * Function UI_AmmoRadialMenu.UI_AmmoRadialMenu_C.GetCategoryIcon
	 */
	struct UUI_AmmoRadialMenu_C_GetCategoryIcon_Params
	{
	public:
		int32_t                                                    Category;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q0WD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AmmoRadialMenu.UI_AmmoRadialMenu_C.GetPageCountForCategory
	 */
	struct UUI_AmmoRadialMenu_C_GetPageCountForCategory_Params
	{
	public:
		int32_t                                                    CategoryIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AmmoRadialMenu.UI_AmmoRadialMenu_C.Construct
	 */
	struct UUI_AmmoRadialMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_AmmoRadialMenu.UI_AmmoRadialMenu_C.Tick
	 */
	struct UUI_AmmoRadialMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AmmoRadialMenu.UI_AmmoRadialMenu_C.HandleUseSelectedRadialSlot
	 */
	struct UUI_AmmoRadialMenu_C_HandleUseSelectedRadialSlot_Params
	{	};

	/**
	 * Function UI_AmmoRadialMenu.UI_AmmoRadialMenu_C.Populate
	 */
	struct UUI_AmmoRadialMenu_C_Populate_Params
	{	};

	/**
	 * Function UI_AmmoRadialMenu.UI_AmmoRadialMenu_C.ExecuteUbergraph_UI_AmmoRadialMenu
	 */
	struct UUI_AmmoRadialMenu_C_ExecuteUbergraph_UI_AmmoRadialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
