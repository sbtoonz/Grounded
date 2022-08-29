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
	 * Function UI_ToolInteract.UI_ToolInteract_C.SetTool
	 */
	struct UUI_ToolInteract_C_SetTool_Params
	{
	public:
		int32_t                                                    RequiredDamageTypeFlags;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAttackResolutionType                                      AttackResolution;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FL90[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_ToolInteract.UI_ToolInteract_C.OnGlobalColorChange
	 */
	struct UUI_ToolInteract_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_ToolInteract.UI_ToolInteract_C.ExecuteUbergraph_UI_ToolInteract
	 */
	struct UUI_ToolInteract_C_ExecuteUbergraph_UI_ToolInteract_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
