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
	 * Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.GetItemSourceWorldLocation
	 */
	struct ABP_BASE_Hedge_Berry_C_GetItemSourceWorldLocation_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemType;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.IsSourceForItem
	 */
	struct ABP_BASE_Hedge_Berry_C_IsSourceForItem_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemType;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.Handle Death
	 */
	struct ABP_BASE_Hedge_Berry_C_Handle_Death_Params
	{
	public:
		struct FDamageInfo                                         DamageInfo;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_X5KH[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.MulticastHandleDestroy
	 */
	struct ABP_BASE_Hedge_Berry_C_MulticastHandleDestroy_Params
	{	};

	/**
	 * Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.ExecuteUbergraph_BP_BASE_Hedge_Berry
	 */
	struct ABP_BASE_Hedge_Berry_C_ExecuteUbergraph_BP_BASE_Hedge_Berry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
