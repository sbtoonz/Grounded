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
	 * WidgetBlueprintGeneratedClass UI_StickiedObjective.UI_StickiedObjective_C
	 * Size -> 0x0050 (FullSize[0x02C8] - InheritedSize[0x0278])
	 */
	class UUI_StickiedObjective_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Show;                                                    // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                        ObjectiveList;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_QuestObjectiveListItem_C*                        UI_QuestObjectiveListItem;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObject*                                             ObjectiveManager;                                        // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsShowingNotification;                                   // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SL4Z[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      QuestUpdateDisplayTime;                                  // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_ObjectiveNotification_C*                         UIObjectiveNotification;                                 // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldShow;                                              // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T9YL[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBaseQuest*>                                  ActiveQuests;                                            // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void EvaluateVisibility();
		struct FLinearColor GetObjectiveFGColor();
		struct FLinearColor GetIconDarkener();
		struct FLinearColor GetShadowColor();
		struct FLinearColor GetObjectiveColor();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void InitializeQuestData();
		void OnObjectiveComplete(class UQuest* QuestData, class UObjective* ObjectiveData);
		void OnObjectiveActivated(class UQuest* QuestData, class UObjective* ObjectiveData);
		void OnQuestStarted(class UQuest* QuestData);
		void OnStickiedQuestsChanged();
		void Destruct();
		void OnBurgleQuestChanged(class UBurgleQuestManagerComponent* Sender);
		void OnObjectiveUpdated_Event_1(class UBurgleQuestInstance* Quest, class UBaseObjective* ObjectiveData);
		void RefreshStickyQuests();
		void OnQuestReplicationUpdate(class UQuest* QuestData);
		void BindPlayerEvent();
		void ExecuteUbergraph_UI_StickiedObjective(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
