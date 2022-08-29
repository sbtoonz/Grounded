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
	 * Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.SetBrushFromCategory
	 */
	struct UUI_BuildingRadialHeaderButton_C_SetBrushFromCategory_Params
	{
	public:
		struct FGameplayTag                                        CurrentCategory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.GetCategoryColor
	 */
	struct UUI_BuildingRadialHeaderButton_C_GetCategoryColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.SetCategoryBrush
	 */
	struct UUI_BuildingRadialHeaderButton_C_SetCategoryBrush_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuildingRadialHeaderButton.UI_BuildingRadialHeaderButton_C.ExecuteUbergraph_UI_BuildingRadialHeaderButton
	 */
	struct UUI_BuildingRadialHeaderButton_C_ExecuteUbergraph_UI_BuildingRadialHeaderButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
