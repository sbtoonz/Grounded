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
	 * Function BP_EquippedItem.BP_EquippedItem_C.ValidateItemData
	 */
	struct ABP_EquippedItem_C_ValidateItemData_Params
	{
	public:
		TArray<class FText>                                        ValidationErrors;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EquippedItem.BP_EquippedItem_C.IsInteractionEnabled
	 */
	struct ABP_EquippedItem_C_IsInteractionEnabled_Params
	{
	public:
		EInteractionChannel                                        Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I4OH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatedBy;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionState                                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EquippedItem.BP_EquippedItem_C.ReceiveBeginPlay
	 */
	struct ABP_EquippedItem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EquippedItem.BP_EquippedItem_C.PowerStateChanged
	 */
	struct ABP_EquippedItem_C_PowerStateChanged_Params
	{
	public:
		bool                                                       PowerState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EquippedItem.BP_EquippedItem_C.ExecuteUbergraph_BP_EquippedItem
	 */
	struct ABP_EquippedItem_C_ExecuteUbergraph_BP_EquippedItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
