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
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.GetPlayerStateFromComponent
	 */
	struct UBP_TutorialManagerComponent_C_GetPlayerStateFromComponent_Params
	{
	public:
		class UActorComponent*                                     ActorComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day Change
	 */
	struct UBP_TutorialManagerComponent_C_Day_Change_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day 1 Quests
	 */
	struct UBP_TutorialManagerComponent_C_Day_Quests_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day 2 Quests
	 */
	struct UBP_TutorialManagerComponent_C_Day_Quests_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.ReceiveBeginPlay
	 */
	struct UBP_TutorialManagerComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.BindPlayerEvents
	 */
	struct UBP_TutorialManagerComponent_C_BindPlayerEvents_Params
	{
	public:
		class ABP_SurvivalPlayerCharacter_C*                       SurvivalPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.HandleOnItemCrafted
	 */
	struct UBP_TutorialManagerComponent_C_HandleOnItemCrafted_Params
	{
	public:
		class UInventoryComponent*                                 Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ItemHandle;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.HandleOnBuildingComplete
	 */
	struct UBP_TutorialManagerComponent_C_HandleOnBuildingComplete_Params
	{
	public:
		struct FDataTableRowHandle                                 BuildingRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnFoodChanged
	 */
	struct UBP_TutorialManagerComponent_C_OnFoodChanged_Params
	{
	public:
		class USurvivalComponent*                                  Survival_Component;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Old;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      New;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnThirstChanged
	 */
	struct UBP_TutorialManagerComponent_C_OnThirstChanged_Params
	{
	public:
		class USurvivalComponent*                                  Survival_Component;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Old;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      New;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemAdded_Event_1
	 */
	struct UBP_TutorialManagerComponent_C_OnItemAdded_Event_1_Params
	{
	public:
		class UInventoryComponent*                                 InventoryComponentOwner;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ItemHandle;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsNewItem;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KXL0[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalCount;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemSpoiled
	 */
	struct UBP_TutorialManagerComponent_C_OnItemSpoiled_Params
	{
	public:
		struct FDataTableRowHandle                                 OriginalItemHandle;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDataTableRowHandle                                 SpoiledItemHandle;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemBroken
	 */
	struct UBP_TutorialManagerComponent_C_OnItemBroken_Params
	{
	public:
		class ASurvivalCharacter*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnIneffectiveAttack
	 */
	struct UBP_TutorialManagerComponent_C_OnIneffectiveAttack_Params
	{
	public:
		ECannotDamageReason                                        CannotDamageReason;                                      // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0HAR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FailedDamageTypeFlag;                                    // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnHealthChanged
	 */
	struct UBP_TutorialManagerComponent_C_OnHealthChanged_Params
	{
	public:
		class UHealthComponent*                                    Health_Component;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      New_Health;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Old_Health;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnBeginOverlap
	 */
	struct UBP_TutorialManagerComponent_C_OnBeginOverlap_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Overlap;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.PlayStartupTutorials
	 */
	struct UBP_TutorialManagerComponent_C_PlayStartupTutorials_Params
	{
	public:
		class ABP_SurvivalPlayerCharacter_C*                       SurvivalPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnPlayerUseItem
	 */
	struct UBP_TutorialManagerComponent_C_OnPlayerUseItem_Params
	{
	public:
		class ASurvivalCharacter*                                  User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ItemData;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.ExecuteUbergraph_BP_TutorialManagerComponent
	 */
	struct UBP_TutorialManagerComponent_C_ExecuteUbergraph_BP_TutorialManagerComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3X9K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
