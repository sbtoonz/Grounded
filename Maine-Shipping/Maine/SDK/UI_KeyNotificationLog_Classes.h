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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_KeyNotificationLog.UI_KeyNotificationLog_C
	 * Size -> 0x0078 (FullSize[0x02F0] - InheritedSize[0x0278])
	 */
	class UUI_KeyNotificationLog_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ViewDetailsAnim;                                         // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               HUDActionWidget;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LogList;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      QueueList;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ShortcutHolder;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 ViewDetailsText;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsRightAligned;                                          // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DelegateBound;                                           // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LT48[0x2];                                   // 0x02BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DetailsOpacity;                                          // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShowDetailsTimer;                                        // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6GAU[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_BaseNotification_C*>                      QueuedNotifications;                                     // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    MaxNotificationsToDisplay;                               // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K8YL[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_ObjectiveNotification_C*                         UIObjectiveNotification;                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_NotificationImage_C*                             QueueItemWidget;                                         // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreatePartyUpgradePurchasedNotification(class UUI_PartyUpgradeNotification_C** Widget);
		void CreateBulkRecipesUnlockedNotification(class UUI_BulkRecipeUnlockNotification_C** Widget);
		void AddToIconQueue(class UUI_BaseNotification_C* Widget);
		struct FSlateColor GetHeaderColor();
		void PlayMoreDetailsNotification();
		void InsertNotification(class UUI_BaseNotification_C* Notification);
		void CreateMapPuzzlePieceNotification(class UUI_MapPuzzlePieceNotification_C** Widget);
		void CreateResourceResearchedNotification(class UUI_ResourceResearchedNotification_C** Widget);
		void CreateRecipeNotification(class UUI_RecipeNotification_C** Widget);
		void CreateColorThemeNotification(class UUI_ColorThemeNotification_C** Widget);
		void CreatePointOfInterestNotification(class UUI_PointOfInterestNotificationFriend_C** Widget);
		void CreateTechTreeUnlockNotification(class UUI_TechTreeUnlockedNotification_C** Widget);
		void CreateResourceNotification(class UUI_ResourceNotification_C** Widget);
		void CreateKeyItemNotification(class UUI_KeyItemNotification_C** Widget);
		void CreateAndAddNotification(class UClass* WidgetClass, class UUI_BaseNotification_C** Widget);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BindDelegate();
		void HandleKeyItemNotification(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void PlayMoreDetailsAnimation(const struct FDataTableRowHandle& ReferencedItem);
		void EndMoreDetailsAnimation();
		void UpdateAniumation(float DeltaTime);
		void OnNewRecipe(const struct FDataTableRowHandle& RecipeRowHandle, class ASurvivalPlayerState* AcquirerPlayerState);
		void OnTechTreeUnlocked(const struct FDataTableRowHandle& TechTreeRowHandle, class ASurvivalPlayerState* UnlockerPlayerState);
		void OnGlobalColorChange();
		void OnPointOfInterestDiscovered(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* UnlockerPlayerState);
		void OnNewResourceKnown(const struct FDataTableRowHandle& ItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void OnColorThemeDiscovered(class UClass* Theme, class ASurvivalPlayerState* UnlockerPlayerState);
		void OnResourceResearched(const struct FDataTableRowHandle& ItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void OnUnlockedPuzzlePieceZone(class UMapComponent* Sender, class ASurvivalPlayerState* Unlocker, const struct FDataTableRowHandle& UnlockedPuzzlePieceZone);
		void OnBulkRecipesUnlocked(TArray<struct FDataTableRowHandle> RecipeRowHandles, class ASurvivalPlayerState* AcquirerPlayerState, ERecipeUnlockSource RecipeUnlockSource, const class FString& DisplayName);
		void OnItemStackUpgradePurchased(const struct FGameplayTag& StackTag, class ASurvivalPlayerState* AquirerPlayerState);
		void ExecuteUbergraph_UI_KeyNotificationLog(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
