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
	 * WidgetBlueprintGeneratedClass UI_HotBarQuickSlotPicker.UI_HotBarQuickSlotPicker_C
	 * Size -> 0x00F8 (FullSize[0x03A0] - InheritedSize[0x02A8])
	 */
	class UUI_HotBarQuickSlotPicker_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              AutoBG;                                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 AutofillText;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          CategoryGrid;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Close;                                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Divider2;                                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaineRichTextBlock*                                 ItemDescriptionBlock;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 PinText;                                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          PlayerInventory;                                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Categorys;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Player;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Select;                                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpecificBG;                                              // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FocusRerouter_C*                                 UI_FocusRerouter_BottomRight;                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FocusRerouter_C*                                 UI_FocusRerouter_C_1;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FocusRerouter_C*                                 UI_FocusRerouter_TopLeft;                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FocusRerouter_C*                                 UI_FocusRerouterBottomLeft;                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FocusRerouter_C*                                 UI_FocusRerouterBottomRight;                             // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FocusRerouter_C*                                 UI_FocusRerouterTopRight;                                // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PopupBG_C*                                       UI_PopupBG;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ItemSlot_C*                                      SelectedItemWidget;                                      // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedItemSlot;                                        // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewSelectedItemSlot;                                     // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGridPanel*                                          SelectedItemGrid;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnQuickItemTypeSelected;                                 // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RNQD[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItem*                                               SelectedItem;                                            // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EHotBarQuickSlotType>                               AllowedQuickItemTypes;                                   // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLocString                                          GenericDescriptionString;                                // 0x0390(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		class UWidget* GetDefaultUserFocus();
		void SetStartingFocus(EHotBarQuickSlotType QuickSlotType, const struct FDataTableRowHandle& ItemType);
		void PopulateCategoryGrid();
		bool IsItemSlotInGrid(class UPanelWidget* ItemGrid, class UUI_BaseSlot_C* ItemSlot);
		void SetSelectedSlot(class UGridPanel* ItemGrid, int32_t Index);
		void RefreshBottomButtons();
		struct FSlateColor GetSCABBaseColor();
		struct FSlateColor GetGlobalBGDarkener();
		struct FSlateColor GetGlobalBG();
		struct FSlateColor GetAccentTwo();
		struct FSlateColor GetAccentOne();
		struct FSlateColor GetHeaderColor();
		struct FSlateColor GetSubheaderColor();
		void RefreshAll();
		void RefreshInventory(class UGridPanel* ItemGrid, int32_t NumRows, int32_t NumColumns);
		void ClearInventoryGrid(class UGridPanel* ItemGrid);
		void TransferItem(class AActor* From, class AActor* To, class UItem* Item);
		void ClearSelectedItem();
		void UpdateButtonVisibility(bool IsPlayerInventoryItem, bool ForceHide);
		void GetInventoryItems(class AActor* OwnerActor, TArray<class UItem*>* Items);
		void PopulateInventoryGrid(class UObject* Container, TArray<class UItem*>* OwnerInventoryList, class UGridPanel* ItemGrid, int32_t NumRows, int32_t NumColumns);
		void Construct();
		void OnItemSelected(class UUI_BaseSlot_C* ItemSlot);
		void BndEvt__Deposit_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature();
		void RefreshWidget();
		void OnItemDoubleClick(class UUI_BaseSlot_C* ItemSlot);
		void HandleSelection();
		void Destruct();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_HotBarQuickSlotPicker(int32_t EntryPoint);
		void OnQuickItemTypeSelected__DelegateSignature(EHotBarQuickSlotType QuickSlotType, class UItem* Item);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
