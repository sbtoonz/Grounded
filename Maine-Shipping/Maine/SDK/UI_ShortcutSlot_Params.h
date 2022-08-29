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
	 * Function UI_ShortcutSlot.UI_ShortcutSlot_C.GetNarration
	 */
	struct UUI_ShortcutSlot_C_GetNarration_Params
	{
	public:
		TArray<struct FNarrationChunk>                             Chunks;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bVerbose;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ShortcutSlot.UI_ShortcutSlot_C.Construct
	 */
	struct UUI_ShortcutSlot_C_Construct_Params
	{	};

	/**
	 * Function UI_ShortcutSlot.UI_ShortcutSlot_C.SetIconBrush
	 */
	struct UUI_ShortcutSlot_C_SetIconBrush_Params
	{	};

	/**
	 * Function UI_ShortcutSlot.UI_ShortcutSlot_C.Destruct
	 */
	struct UUI_ShortcutSlot_C_Destruct_Params
	{	};

	/**
	 * Function UI_ShortcutSlot.UI_ShortcutSlot_C.SetShortcut
	 */
	struct UUI_ShortcutSlot_C_SetShortcut_Params
	{
	public:
		ERadialShortcut                                            Shortcut;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ShortcutSlot.UI_ShortcutSlot_C.ExecuteUbergraph_UI_ShortcutSlot
	 */
	struct UUI_ShortcutSlot_C_ExecuteUbergraph_UI_ShortcutSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
