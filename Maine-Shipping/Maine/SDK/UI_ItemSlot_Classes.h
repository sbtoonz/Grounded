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
	 * WidgetBlueprintGeneratedClass UI_ItemSlot.UI_ItemSlot_C
	 * Size -> 0x0187 (FullSize[0x05D0] - InheritedSize[0x0449])
	 */
	class UUI_ItemSlot_C : public UUI_BaseSlot_C
	{
	public:
		unsigned char                                              UnknownData_HIZS[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UItem*                                               ItemReference;                                           // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             OwningContainer;                                         // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHotBarQuickSlotType                                       QuickSlotType;                                           // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemSlotType                                              ItemSlotType;                                            // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEquipmentSlot                                             EquipmentSlot;                                           // 0x046A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DZ9M[0x5];                                   // 0x046B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FContextEntry                                       ContextEquip;                                            // 0x0470(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextUnequip;                                          // 0x0490(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextConsume;                                          // 0x04B0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextDump;                                             // 0x04D0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextRepair;                                           // 0x04F0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextDrop;                                             // 0x0510(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextInspect;                                          // 0x0530(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextTrash;                                            // 0x0550(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FContextEntry                                       ContextTrashStack;                                       // 0x0570(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FLocString                                          EmptySlotString;                                         // 0x0590(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FContextEntry                                       ContextDropStack;                                        // 0x05A0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FLocString                                          CountFormatString;                                       // 0x05C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetHotBarQuickSlotKey(const struct FHotBarQuickSlotItemTypeKey& ItemKey);
		void GetRowHandleForItem(struct FDataTableRowHandle* Item_Row_Handle);
		void HandleRefreshItemCount();
		void SetModTypeIcon(class UObject* ResourceObject);
		void GetAllowContextMenu(bool* Result);
		void HasItem(bool* Result);
		void DumpItemPower();
		void RepairItem();
		void UseItem();
		void TrashNoPromptHelper(int32_t Quantity);
		void TrashStackNoPrompt();
		void TrashOneNoPrompt();
		void TrashStack();
		void TrashOne();
		void DropStack();
		void DropOne();
		void RefreshItemLevel();
		void OnRightClickOverridable(bool* bHandled);
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void GetItem(class UItem** NewParam);
		void SetProgressRatio(float Value);
		void DragAndDropEquipmentSlotToInventory(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess);
		void UpdateFreshVisuals();
		void DetermineAnalyzeVisibility();
		void HasMatchingRowHandle(class UUI_ItemSlot_C* OtherSlot, bool* Matches);
		void DragAndDropMergeItemStacks(class UUI_ItemSlot_C* SourceItemSlot);
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void ShowContextMenu(bool* bShown);
		void OnContextMenu_Item(struct FGameplayTag* ActionTag);
		void DetermineStackVisibility();
		void ManageTierNugget();
		void DetermineCanteenVisibility();
		void DetermineFillVisibility();
		ESlateVisibility OnItemSet();
		ESlateVisibility GetFavoriteVisibility();
		void VisuallyOverrideItemData(class UUI_ItemSlot_C* OtherItemSlot);
		void UnassignHotBarSlot();
		void DragAndDropHotBarToHotBar(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess);
		void DragAndDropInventoryToHotBar(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess);
		void DragAndDropEquipmentToHotBar(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess);
		void DragAndDropInventoryToEquipmentSlot(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess);
		void CreateDragAndDropElement(class UUI_BaseSlot_C** DragBaseSlot);
		void HandleDragDrop(class UUI_BaseSlot_C* ItemSlotSource, bool* DropSuccess);
		void DragAndDropInventoryToDifferentInventory(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess);
		void DragAndDropInventoryToSameInventory(class UUI_ItemSlot_C* SourceItemSlot, bool* DropSuccess);
		void SetItemQuickSlotType(EHotBarQuickSlotType QuickSlotType);
		struct FLinearColor GetRepairColor();
		ESlateVisibility GetBrokenVisibility();
		void UnbindItemChangedEvent();
		void BindItemChangedEvent();
		void CanDrag(bool* CanDrag);
		void GetSourceEquipment(class UEquipmentComponent** Equipment);
		void GetSourceInventory(class UInventoryComponent** Inventory);
		void SetItemSlotType(EItemSlotType ItemSlotType);
		void SetEquippedVisuals();
		void GetIconBrushFromQuickSlotType(EHotBarQuickSlotType QuickSlotType, struct FSlateBrush* Brush);
		ESlateVisibility GetNewItemVis();
		ESlateVisibility GetFillVisibility();
		struct FLinearColor GetFillColor();
		void SetItem(class UItem* Item);
		void Construct();
		void UpdateDurabilityWidget();
		void Refresh();
		void RefreshItemCount();
		void SetIconBrush();
		void SetHotKey(const class FText& HotkeyText);
		void HandleBrokenAnim();
		void SetDataRowHandle(const struct FDataTableRowHandle& DataRowHandle);
		void UpdateVisuals();
		void UpdateSelectionVisuals();
		void HandleDragCancel(bool ManualCancel);
		void OnHoveredInternal();
		void OnUnhoveredInternal();
		void UpdateCanteenElement();
		void OnContextOptionSelected(const struct FGameplayTag& ActionSelected);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_ItemSlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
