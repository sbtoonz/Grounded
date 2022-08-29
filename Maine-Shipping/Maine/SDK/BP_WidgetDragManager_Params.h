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
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.Init
	 */
	struct UBP_WidgetDragManager_C_Init_Params
	{	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.IsDragging
	 */
	struct UBP_WidgetDragManager_C_IsDragging_Params
	{
	public:
		bool                                                       IsDragging;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragBegin
	 */
	struct UBP_WidgetDragManager_C_OnDragBegin_Params
	{
	public:
		class UUI_BaseSlot_C*                                      Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragCancel
	 */
	struct UBP_WidgetDragManager_C_OnDragCancel_Params
	{
	public:
		class UUI_BaseSlot_C*                                      SlotCanceledFrom;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ManualCancel;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragDrop
	 */
	struct UBP_WidgetDragManager_C_OnDragDrop_Params
	{
	public:
		class UUI_BaseSlot_C*                                      DestinationItemSlot;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.HandleItemSlotFocused
	 */
	struct UBP_WidgetDragManager_C_HandleItemSlotFocused_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.HandleItemSlotUnfocused
	 */
	struct UBP_WidgetDragManager_C_HandleItemSlotUnfocused_Params
	{
	public:
		class UUI_BaseSlot_C*                                      ItemSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.Initialize
	 */
	struct UBP_WidgetDragManager_C_Initialize_Params
	{
	public:
		class UWidgetManager*                                      WidgetManager;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnWindowStackChanged
	 */
	struct UBP_WidgetDragManager_C_OnWindowStackChanged_Params
	{	};

	/**
	 * Function BP_WidgetDragManager.BP_WidgetDragManager_C.ExecuteUbergraph_BP_WidgetDragManager
	 */
	struct UBP_WidgetDragManager_C_ExecuteUbergraph_BP_WidgetDragManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
