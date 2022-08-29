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
	 * Function UI_MutationNotification.UI_MutationNotification_C.OnGlobalColorChange
	 */
	struct UUI_MutationNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_MutationNotification.UI_MutationNotification_C.ShowNotification
	 */
	struct UUI_MutationNotification_C_ShowNotification_Params
	{
	public:
		class FName                                                PerkName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PerkTier;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MutationNotification.UI_MutationNotification_C.ExecuteUbergraph_UI_MutationNotification
	 */
	struct UUI_MutationNotification_C_ExecuteUbergraph_UI_MutationNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
