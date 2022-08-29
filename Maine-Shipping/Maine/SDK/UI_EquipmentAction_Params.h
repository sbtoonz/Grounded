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
	 * Function UI_EquipmentAction.UI_EquipmentAction_C.Initialize
	 */
	struct UUI_EquipmentAction_C_Initialize_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLocString                                          LocalizedName;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_EquipmentAction.UI_EquipmentAction_C.PreConstruct
	 */
	struct UUI_EquipmentAction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_EquipmentAction.UI_EquipmentAction_C.OnGlobalColorChange
	 */
	struct UUI_EquipmentAction_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_EquipmentAction.UI_EquipmentAction_C.ExecuteUbergraph_UI_EquipmentAction
	 */
	struct UUI_EquipmentAction_C_ExecuteUbergraph_UI_EquipmentAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
