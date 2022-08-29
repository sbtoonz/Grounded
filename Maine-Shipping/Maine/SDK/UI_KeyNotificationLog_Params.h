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
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreatePartyUpgradePurchasedNotification
	 */
	struct UUI_KeyNotificationLog_C_CreatePartyUpgradePurchasedNotification_Params
	{
	public:
		class UUI_PartyUpgradeNotification_C*                      Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateBulkRecipesUnlockedNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateBulkRecipesUnlockedNotification_Params
	{
	public:
		class UUI_BulkRecipeUnlockNotification_C*                  Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.AddToIconQueue
	 */
	struct UUI_KeyNotificationLog_C_AddToIconQueue_Params
	{
	public:
		class UUI_BaseNotification_C*                              Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.GetHeaderColor
	 */
	struct UUI_KeyNotificationLog_C_GetHeaderColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.PlayMoreDetailsNotification
	 */
	struct UUI_KeyNotificationLog_C_PlayMoreDetailsNotification_Params
	{	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.InsertNotification
	 */
	struct UUI_KeyNotificationLog_C_InsertNotification_Params
	{
	public:
		class UUI_BaseNotification_C*                              Notification;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateMapPuzzlePieceNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateMapPuzzlePieceNotification_Params
	{
	public:
		class UUI_MapPuzzlePieceNotification_C*                    Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateResourceResearchedNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateResourceResearchedNotification_Params
	{
	public:
		class UUI_ResourceResearchedNotification_C*                Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateRecipeNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateRecipeNotification_Params
	{
	public:
		class UUI_RecipeNotification_C*                            Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateColorThemeNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateColorThemeNotification_Params
	{
	public:
		class UUI_ColorThemeNotification_C*                        Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreatePointOfInterestNotification
	 */
	struct UUI_KeyNotificationLog_C_CreatePointOfInterestNotification_Params
	{
	public:
		class UUI_PointOfInterestNotificationFriend_C*             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateTechTreeUnlockNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateTechTreeUnlockNotification_Params
	{
	public:
		class UUI_TechTreeUnlockedNotification_C*                  Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateResourceNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateResourceNotification_Params
	{
	public:
		class UUI_ResourceNotification_C*                          Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateKeyItemNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateKeyItemNotification_Params
	{
	public:
		class UUI_KeyItemNotification_C*                           Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.CreateAndAddNotification
	 */
	struct UUI_KeyNotificationLog_C_CreateAndAddNotification_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_BaseNotification_C*                              Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.Construct
	 */
	struct UUI_KeyNotificationLog_C_Construct_Params
	{	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.Tick
	 */
	struct UUI_KeyNotificationLog_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.BindDelegate
	 */
	struct UUI_KeyNotificationLog_C_BindDelegate_Params
	{	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.HandleKeyItemNotification
	 */
	struct UUI_KeyNotificationLog_C_HandleKeyItemNotification_Params
	{
	public:
		struct FDataTableRowHandle                                 KeyItemRowHandle;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.PlayMoreDetailsAnimation
	 */
	struct UUI_KeyNotificationLog_C_PlayMoreDetailsAnimation_Params
	{
	public:
		struct FDataTableRowHandle                                 ReferencedItem;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.EndMoreDetailsAnimation
	 */
	struct UUI_KeyNotificationLog_C_EndMoreDetailsAnimation_Params
	{	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.UpdateAniumation
	 */
	struct UUI_KeyNotificationLog_C_UpdateAniumation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnNewRecipe
	 */
	struct UUI_KeyNotificationLog_C_OnNewRecipe_Params
	{
	public:
		struct FDataTableRowHandle                                 RecipeRowHandle;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnTechTreeUnlocked
	 */
	struct UUI_KeyNotificationLog_C_OnTechTreeUnlocked_Params
	{
	public:
		struct FDataTableRowHandle                                 TechTreeRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                UnlockerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnGlobalColorChange
	 */
	struct UUI_KeyNotificationLog_C_OnGlobalColorChange_Params
	{	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnPointOfInterestDiscovered
	 */
	struct UUI_KeyNotificationLog_C_OnPointOfInterestDiscovered_Params
	{
	public:
		class UPointOfInterestDataAsset*                           PointOfInterest;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                UnlockerPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnNewResourceKnown
	 */
	struct UUI_KeyNotificationLog_C_OnNewResourceKnown_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnColorThemeDiscovered
	 */
	struct UUI_KeyNotificationLog_C_OnColorThemeDiscovered_Params
	{
	public:
		class UClass*                                              Theme;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                UnlockerPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnResourceResearched
	 */
	struct UUI_KeyNotificationLog_C_OnResourceResearched_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnUnlockedPuzzlePieceZone
	 */
	struct UUI_KeyNotificationLog_C_OnUnlockedPuzzlePieceZone_Params
	{
	public:
		class UMapComponent*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                Unlocker;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 UnlockedPuzzlePieceZone;                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnBulkRecipesUnlocked
	 */
	struct UUI_KeyNotificationLog_C_OnBulkRecipesUnlocked_Params
	{
	public:
		TArray<struct FDataTableRowHandle>                         RecipeRowHandles;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERecipeUnlockSource                                        RecipeUnlockSource;                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M6WT[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DisplayName;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.OnItemStackUpgradePurchased
	 */
	struct UUI_KeyNotificationLog_C_OnItemStackUpgradePurchased_Params
	{
	public:
		struct FGameplayTag                                        StackTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                AquirerPlayerState;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyNotificationLog.UI_KeyNotificationLog_C.ExecuteUbergraph_UI_KeyNotificationLog
	 */
	struct UUI_KeyNotificationLog_C_ExecuteUbergraph_UI_KeyNotificationLog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UA4H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
