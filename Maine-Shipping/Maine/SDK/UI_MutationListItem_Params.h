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
	 * Function UI_MutationListItem.UI_MutationListItem_C.SetPerk
	 */
	struct UUI_MutationListItem_C_SetPerk_Params
	{
	public:
		struct FPerkData                                           PerkData;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_MutationListItem.UI_MutationListItem_C.OnGlobalColorChange
	 */
	struct UUI_MutationListItem_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MutationListItem.UI_MutationListItem_C.ExecuteUbergraph_UI_MutationListItem
	 */
	struct UUI_MutationListItem_C_ExecuteUbergraph_UI_MutationListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W17V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
