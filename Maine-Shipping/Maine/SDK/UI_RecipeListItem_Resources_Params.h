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
	 * Function UI_RecipeListItem_Resources.UI_RecipeListItem_Resources_C.SetDisabledStyle
	 */
	struct UUI_RecipeListItem_Resources_C_SetDisabledStyle_Params
	{
	public:
		class UTextBlock*                                          ItemText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             RecipeButton;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RecipeListItem_Resources.UI_RecipeListItem_Resources_C.SetEnabledStyle
	 */
	struct UUI_RecipeListItem_Resources_C_SetEnabledStyle_Params
	{
	public:
		class UTextBlock*                                          ItemText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             RecipeButton;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
