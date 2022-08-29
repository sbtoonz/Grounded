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
	 * Function UI_RockInteract.UI_RockInteract_C.LocalPlayerWieldingBomb
	 */
	struct UUI_RockInteract_C_LocalPlayerWieldingBomb_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KG1Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.UpdateActionVerb
	 */
	struct UUI_RockInteract_C_UpdateActionVerb_Params
	{
	public:
		int32_t                                                    DamageFlags;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.UpdateTierNugget
	 */
	struct UUI_RockInteract_C_UpdateTierNugget_Params
	{	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.ShowWarning
	 */
	struct UUI_RockInteract_C_ShowWarning_Params
	{
	public:
		class FText                                                WarningText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.GetWarningColor
	 */
	struct UUI_RockInteract_C_GetWarningColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.GetHeaderColor
	 */
	struct UUI_RockInteract_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.BindPlayerEvents
	 */
	struct UUI_RockInteract_C_BindPlayerEvents_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            SurvivalPlayerCharacter;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.PreConstruct
	 */
	struct UUI_RockInteract_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.OnIneffectiveAttack
	 */
	struct UUI_RockInteract_C_OnIneffectiveAttack_Params
	{
	public:
		ECannotDamageReason                                        CannotDamageReason;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X77P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FailedDamageTypeFlags;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.OnGlobalColorChange
	 */
	struct UUI_RockInteract_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.OnInteractWarning
	 */
	struct UUI_RockInteract_C_OnInteractWarning_Params
	{
	public:
		class UObject*                                             Interactable;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                WarningText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.UpdateAttackResolutionChanged
	 */
	struct UUI_RockInteract_C_UpdateAttackResolutionChanged_Params
	{	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.UpdateInteractionTargetChanged
	 */
	struct UUI_RockInteract_C_UpdateInteractionTargetChanged_Params
	{
	public:
		class UObject*                                             NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_RockInteract.UI_RockInteract_C.ExecuteUbergraph_UI_RockInteract
	 */
	struct UUI_RockInteract_C_ExecuteUbergraph_UI_RockInteract_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4033[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
