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
	 * Function UI_RatingGroup.UI_RatingGroup_C.SetLocalizedText
	 */
	struct UUI_RatingGroup_C_SetLocalizedText_Params
	{
	public:
		struct FLocString                                          Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RatingGroup.UI_RatingGroup_C.SetPercentage
	 */
	struct UUI_RatingGroup_C_SetPercentage_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RatingGroup.UI_RatingGroup_C.PreConstruct
	 */
	struct UUI_RatingGroup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RatingGroup.UI_RatingGroup_C.OnGlobalColorChange
	 */
	struct UUI_RatingGroup_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RatingGroup.UI_RatingGroup_C.ExecuteUbergraph_UI_RatingGroup
	 */
	struct UUI_RatingGroup_C_ExecuteUbergraph_UI_RatingGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
