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
	 * Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.SetDisabledStyle
	 */
	struct UUI_RecipeListItem_Building_C_SetDisabledStyle_Params
	{
	public:
		class UTextBlock*                                          ItemText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             RecipeButton;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.SetEnabledStyle
	 */
	struct UUI_RecipeListItem_Building_C_SetEnabledStyle_Params
	{
	public:
		class UTextBlock*                                          ItemText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             RecipeButton;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.PreConstruct
	 */
	struct UUI_RecipeListItem_Building_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.Construct
	 */
	struct UUI_RecipeListItem_Building_C_Construct_Params
	{	};

	/**
	 * Function UI_RecipeListItem_Building.UI_RecipeListItem_Building_C.ExecuteUbergraph_UI_RecipeListItem_Building
	 */
	struct UUI_RecipeListItem_Building_C_ExecuteUbergraph_UI_RecipeListItem_Building_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
