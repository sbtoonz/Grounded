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
	 * Function UI_EquippedAccessory.UI_EquippedAccessory_C.GetMeterValue
	 */
	struct UUI_EquippedAccessory_C_GetMeterValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedAccessory.UI_EquippedAccessory_C.SetItem
	 */
	struct UUI_EquippedAccessory_C_SetItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedAccessory.UI_EquippedAccessory_C.PreConstruct
	 */
	struct UUI_EquippedAccessory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EquippedAccessory.UI_EquippedAccessory_C.Tick
	 */
	struct UUI_EquippedAccessory_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquippedAccessory.UI_EquippedAccessory_C.OnGlobalColorChange
	 */
	struct UUI_EquippedAccessory_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_EquippedAccessory.UI_EquippedAccessory_C.Construct
	 */
	struct UUI_EquippedAccessory_C_Construct_Params
	{	};

	/**
	 * Function UI_EquippedAccessory.UI_EquippedAccessory_C.ExecuteUbergraph_UI_EquippedAccessory
	 */
	struct UUI_EquippedAccessory_C_ExecuteUbergraph_UI_EquippedAccessory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
