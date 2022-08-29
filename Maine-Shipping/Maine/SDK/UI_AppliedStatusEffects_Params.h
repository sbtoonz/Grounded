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
	 * Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.HasAnyEntries
	 */
	struct UUI_AppliedStatusEffects_C_HasAnyEntries_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_43S1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.CollectAndDisplayStatusEffects
	 */
	struct UUI_AppliedStatusEffects_C_CollectAndDisplayStatusEffects_Params
	{	};

	/**
	 * Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.Construct
	 */
	struct UUI_AppliedStatusEffects_C_Construct_Params
	{	};

	/**
	 * Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.OnEquipmentChanged
	 */
	struct UUI_AppliedStatusEffects_C_OnEquipmentChanged_Params
	{	};

	/**
	 * Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.Destruct
	 */
	struct UUI_AppliedStatusEffects_C_Destruct_Params
	{	};

	/**
	 * Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.OnGlobalColorChange
	 */
	struct UUI_AppliedStatusEffects_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_AppliedStatusEffects.UI_AppliedStatusEffects_C.ExecuteUbergraph_UI_AppliedStatusEffects
	 */
	struct UUI_AppliedStatusEffects_C_ExecuteUbergraph_UI_AppliedStatusEffects_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
