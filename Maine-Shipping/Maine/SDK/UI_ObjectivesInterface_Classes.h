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
	 * WidgetBlueprintGeneratedClass UI_ObjectivesInterface.UI_ObjectivesInterface_C
	 * Size -> 0x00A8 (FullSize[0x0340] - InheritedSize[0x0298])
	 */
	class UUI_ObjectivesInterface_C : public UObjectiveInterfaceWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    PinObjectiveAnim;                                        // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UInvalidationBox*                                    ActionsInvalidationBox;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BigStapler;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Close;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             CompletedBorder;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CompletedQuestsList;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_4;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_15;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 LocalizedTextBlock_111;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 LocalizedTextBlock_113;                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ObjectiveList;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             OpenBorder;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OpenQuestsList;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaineRichTextBlock*                                 QuestDescription;                                        // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HeaderText_C*                                    QuestsHeader;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HeaderText_C*                                    QuestTitle;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ScreenSpecialBG;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  StickyQuestButton;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  UnstickyQuestButton;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void HandlePinnedStartingState();
		void ToggleSelectedStickyQuest();
		void GetQuestListItemForQuest(class UBaseQuest* BaseQuest, class UUI_QuestListItem_C** QuestListItem);
		void GetQuestContainer(bool Completed, class UPanelWidget** Container);
		void CreateQuestListItemWidget(class UUI_QuestListItem_C** Widget);
		struct FLinearColor GetAccentOne();
		struct FSlateColor GetGlobalDarkener();
		void PopulateAllQuests();
		struct FSlateColor GetBasicText();
		struct FLinearColor GetAccentTwo();
		void RefreshBottomButtons();
		struct FSlateColor GetHeaderColor();
		void PopulateQuestsOfType(bool CompletedQuests);
		void RefreshUI();
		void BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature();
		void OnQuestFocused(class UUI_QuestListItem_C* QuestListItem);
		void SetSelectedQuest(class UUI_QuestListItem_C* SelectedQuest);
		void SelectQuestByIndex(int32_t Index);
		void SelectQuest(class UBaseQuest* Quest);
		void BndEvt__StickyQuestButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature();
		void RefreshQuests();
		void BndEvt__UnstickyQuestButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature();
		void OnGlobalColorChange();
		void Construct();
		void EventLargeFont(bool NewValue);
		void Destruct();
		void NotifyStickiedQuestsChanged();
		void ExecuteUbergraph_UI_ObjectivesInterface(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
