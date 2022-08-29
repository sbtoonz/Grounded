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
	 * Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.GetScienceColor
	 */
	struct UUI_UpgradeCollectableFoundNotification_C_GetScienceColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.BindPlayerEvents
	 */
	struct UUI_UpgradeCollectableFoundNotification_C_BindPlayerEvents_Params
	{	};

	/**
	 * Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.Construct
	 */
	struct UUI_UpgradeCollectableFoundNotification_C_Construct_Params
	{	};

	/**
	 * Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.OnGlobalColorChange
	 */
	struct UUI_UpgradeCollectableFoundNotification_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.OnCollectableAquired
	 */
	struct UUI_UpgradeCollectableFoundNotification_C_OnCollectableAquired_Params
	{
	public:
		bool                                                       IsPartyCollectable;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AHVY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                AquirerPlayerState;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.EndAnim
	 */
	struct UUI_UpgradeCollectableFoundNotification_C_EndAnim_Params
	{	};

	/**
	 * Function UI_UpgradeCollectableFoundNotification.UI_UpgradeCollectableFoundNotification_C.ExecuteUbergraph_UI_UpgradeCollectableFoundNotification
	 */
	struct UUI_UpgradeCollectableFoundNotification_C_ExecuteUbergraph_UI_UpgradeCollectableFoundNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
