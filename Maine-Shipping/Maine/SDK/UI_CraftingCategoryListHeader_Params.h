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
	 * Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Get Crafting Loc String from Subcategory
	 */
	struct UUI_CraftingCategoryListHeader_C_Get_Crafting_Loc_String_from_Subcategory_Params
	{
	public:
		struct FLocString                                          LocString;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Get Building Loc String from Subcategory
	 */
	struct UUI_CraftingCategoryListHeader_C_Get_Building_Loc_String_from_Subcategory_Params
	{
	public:
		struct FLocString                                          String;                                                  // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.Initialize
	 */
	struct UUI_CraftingCategoryListHeader_C_Initialize_Params
	{
	public:
		struct FGameplayTag                                        Subcategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CraftingCategoryListHeader.UI_CraftingCategoryListHeader_C.ExecuteUbergraph_UI_CraftingCategoryListHeader
	 */
	struct UUI_CraftingCategoryListHeader_C_ExecuteUbergraph_UI_CraftingCategoryListHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4POL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
