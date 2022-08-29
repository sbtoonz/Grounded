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
	 * Function UI_RestQuery.UI_RestQuery_C.Construct
	 */
	struct UUI_RestQuery_C_Construct_Params
	{	};

	/**
	 * Function UI_RestQuery.UI_RestQuery_C.EventOnPartyRestChanged
	 */
	struct UUI_RestQuery_C_EventOnPartyRestChanged_Params
	{
	public:
		TArray<class ASurvivalPlayerCharacter*>                    RestingPlayers;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_RestQuery.UI_RestQuery_C.OnGlobalColorChange
	 */
	struct UUI_RestQuery_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RestQuery.UI_RestQuery_C.ExecuteUbergraph_UI_RestQuery
	 */
	struct UUI_RestQuery_C_ExecuteUbergraph_UI_RestQuery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
