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
	 * WidgetBlueprintGeneratedClass UI_ObjectiveNotification.UI_ObjectiveNotification_C
	 * Size -> 0x00A8 (FullSize[0x0328] - InheritedSize[0x0280])
	 */
	class UUI_ObjectiveNotification_C : public UObjectiveNotificationWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ObjectiveUpdateComplete;                                 // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ObjectiveUpdateStart;                                    // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BG;                                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              fg;                                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ObjectiveBG;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ObjectiveHB;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ObjectiveList;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ObjectiveSpin;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ObjIcon;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObject*                                             ObjectiveManager;                                        // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      QuestUpdateDisplayTime;                                  // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WNW5[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBaseQuest*>                                  QueuedQuestStartUpdates;                                 // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UBaseQuest*>                                  QueuedQuestCompleteUpdates;                              // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UBaseQuest*>                                  QueuedObjectiveCompleteUpdates;                          // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UBaseQuest*>                                  QueuedObjectiveUpdatedUpdates;                           // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SequenceEvent__ENTRYPOINTUI_ObjectiveNotification_1();
		void NotifyObjectiveUpdated(class UBaseQuest* Quest, class UBaseObjective* Objective);
		void NotifyObjectiveComplete(class UBaseQuest* Quest, class UBaseObjective* Objective);
		void NotifyQuestComplete(class UBaseQuest* Quest);
		void NotifyQuestStarted(class UBaseQuest* Quest);
		void InitializeObjectives(TArray<class UBaseObjective*>* Objectives);
		bool HasQueuedQuestNotifications();
		struct FLinearColor GetObjectiveFGColor();
		struct FLinearColor GetIconDarkener();
		struct FLinearColor GetShadowColor();
		void OnObjectiveUpdateComplete();
		struct FLinearColor GetObjectiveColor();
		void Construct();
		void OnQuestStarted(class UQuest* QuestData);
		void OnQuestComplete(class UQuest* QuestData);
		void OnObjectiveComplete(class UQuest* QuestData, class UObjective* ObjectiveData);
		void InitializeQuestData(class UBaseQuest* Quest);
		void SignalQuestUpdate(class UBaseQuest* Quest);
		void OnGlobalColorChange();
		void ProcessQueuedQuestNotification();
		void OnBurgleQuestStarted(class UBurgleQuestInstance* Quest);
		void OnBurgleQuestComplete(class UBurgleQuestInstance* Quest);
		void OnBurgleObjectiveComplete(class UBurgleQuestInstance* Quest, class UBaseObjective* ObjectiveData);
		void OnBurgleObjectiveUpdated(class UBurgleQuestInstance* Quest, class UBaseObjective* ObjectiveData);
		void ExecuteUbergraph_UI_ObjectiveNotification(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
