﻿#pragma once

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
	 * Function BP_Aphid.BP_Aphid_C.CheckLootConditionals
	 */
	struct ABP_Aphid_C_CheckLootConditionals_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemDataRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Aphid.BP_Aphid_C.UserConstructionScript
	 */
	struct ABP_Aphid_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif