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
	 * WidgetBlueprintGeneratedClass UI_InventoryInterface.UI_InventoryInterface_C
	 * Size -> 0x01A0 (FullSize[0x0418] - InheritedSize[0x0278])
	 */
	class UUI_InventoryInterface_C : public UInventoryWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    UnequipWarningAnim;                                      // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InvIntro;                                                // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Actions;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HeaderText_C*                                    BackpackHeader;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Close;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DefragButton_C*                                  DefragButton;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Drop;                                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Equip;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryGearSlot_C*                             GearSlotGlider;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryGearSlot_C*                             GearSlotHead;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryGearSlot_C*                             GearSlotLowerBody;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryGearSlot_C*                             GearSlotStrongHand;                                      // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryGearSlot_C*                             GearSlotUpperBody;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryGearSlot_C*                             GearSlotWeakHand;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GlobalImageBG;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GlobalImageReflection;                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  HotBarAssign;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  HotBarUnassign;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryHotpouch_C*                             Hotpouch;                                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InventoryCount;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          ItemGrid;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Repair;                                                  // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ScreenSpecialBG;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  SelectHint;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HeldScienceCount_C*                              UI_HeldScienceCount;                                     // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryStatusEffects_C*                        UI_InventoryStatusEffects;                               // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ItemDescriptionBox_C*                            UI_ItemDescriptionBox;                                   // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PaperDoll_C*                                     UI_PaperDoll;                                            // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PaperDoll_C*                                     UI_PetPaperDoll;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectDescription_C*                       UI_StatusEffectDescription_C_5;                          // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectTimerGrid_C*                         UI_StatusEffectTimerGrid;                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_UpgradeCollectibleCount_C*                       UI_UpgradeCollectibleCount;                              // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Unequip;                                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UnequipWarningBG;                                        // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            UnequipWarningOverlay;                                   // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      UnequipWarningText;                                      // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            UnequipWarningTextHolder;                                // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  Use;                                                     // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    PreviousSelectedItemSlot;                                // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviousSelectedHotpouchSlot;                            // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_ItemSlot_C*                                      SelectedSlot;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDefragging;                                            // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_USCR[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PaperDollThumbstickRotationSpeedMultiplier;              // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HTexture01;                                              // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HTexture02;                                              // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HTexture03;                                              // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          NormalTexture04;                                         // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          UnequipFailureFromTwoHandedWeaponText;                   // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          UnequipFailureFromGeneralUnequipText;                    // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UEquipmentComponent*                                 SubscribedEquipmentComponent;                            // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_ItemSlot_C*                                      PreviousSelectedSlot;                                    // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSelectedItem(class UItem** Item);
		void IsInventorySlotSelected(bool* Result);
		void IsHotpouchSlotSelected(bool* Result);
		void GetSelectedInventorySlotIndex(int32_t* Index);
		void GetSelectedHotpouchSlotIndex(int32_t* Index);
		void SetDescriptionDataForSelected();
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void GetLocalPlayerEquipment(class UEquipmentComponent** Inventory);
		void GetLocalPlayerInventory(class UInventoryComponent** Inventory);
		void GetHalloween();
		void InitializeGearSlot(class UUI_InventoryGearSlot_C* Slot, class UItem* Item);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void UpdateBottomButtons();
		void OnSplitStack();
		void CanShowContextMenu(bool* Result);
		ESlateVisibility GetStrongHandIconVis();
		ESlateVisibility GetWeakHandIconVis();
		ESlateVisibility GetHeadIconVis();
		ESlateVisibility GetBodyIconVis();
		ESlateVisibility GetLegsIconVis();
		void CanUseItem(class UItem* Item, bool* CanUse);
		void Can_Repair_Selected_Item(bool* CanRepair);
		void ItemHasDurability(bool* HasDurability);
		ESlateVisibility GetRepairVisibility();
		void SetEquipmentText(class UItem* EquippedItem, class UTextBlock* TextWidget, const struct FLocString& NoItemText);
		class FText Get_DaysAliveText_Text_1();
		void IsSelectedHotBarSlotAssigned(bool* IsAssigned);
		void Assign_Selected_Item_to_Hot_Bar_Index(int32_t Index);
		void CanUseSelectedItem(bool* CanUse);
		struct FLinearColor Get_HotPocketBG_ColorAndOpacity_1();
		ESlateVisibility GetHotBarAssignVisibility();
		void UpdateSlotsUsedText();
		void PopulateHotBarQuickSlots();
		struct FLinearColor GetGlobalColorThree();
		struct FSlateColor GetSubheaderColor();
		class UWidget* GetDefragTooltip();
		ESlateVisibility GetDefragVisibility();
		bool IsDefragEnabled();
		struct FLinearColor GetBasicTextColor();
		class UWidget* GetSlotsTooltip();
		struct FLinearColor GetDarkenerColor();
		void GetEquipEnabled(bool* Enabled);
		void RefreshBottomButtons();
		struct FLinearColor GetEnergyColor();
		struct FLinearColor GetHealthColor();
		struct FLinearColor GetFoodColor();
		struct FSlateColor GetHeaderColor();
		struct FLinearColor GetWaterColor();
		struct FLinearColor GetStaminaColor();
		struct FLinearColor GetSCABOSAccentTwo();
		void FindItemSlotMatchingData(class UItem* Item, class UUI_BaseSlot_C** StackableItemSlot);
		void InitializeItemSlot(class UBaseSlotWidget* ItemSlot, class UItem* Item);
		void SetSelectedHotBarSlot(int32_t Slot);
		ESlateVisibility GetUseVisibility();
		ESlateVisibility GetDropVisibility();
		void SetSelectedInventorySlot(int32_t Slot);
		void SetSelectedSlot(class UUI_ItemSlot_C* Slot);
		void PopulateEquipment();
		void GetInventoryItems(TArray<class UItem*> Items);
		void ClearItemGrid();
		void PopulateItemGrid(int32_t RowMax, int32_t ColumnMax);
		void Construct();
		void HandleItemSlotFocused(class UUI_BaseSlot_C* Item_Slot);
		void OnGearSlotSelected_Event(class UUI_BaseSlot_C* Item_Slot);
		void RefreshUI();
		void SetSelectedItemByIndex(int32_t SelectedSlot);
		void BndEvt__Close_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Drop_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Use_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Unequip_K2Node_ComponentBoundEvent_8_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Equip_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature();
		void OnItemDoubleClick_Event(class UUI_BaseSlot_C* ItemSlot);
		void On_Use();
		void On_Equip();
		void On_Drop();
		void OnUnequip();
		void BndEvt__UI_DefragButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature();
		void Defrag();
		void OnHotBarSlotSelected_Event(class UUI_BaseSlot_C* ItemSlot);
		void OnHotBarSlotAssigned(EHotBarQuickSlotType QuickSlotType, class UItem* Item);
		void BndEvt__HotBarAssign_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature();
		void OpenHotBarAssignWindow();
		void OnHotBarSlotDoubleClick(class UUI_BaseSlot_C* ItemSlot);
		void BndEvt__HotBarUnassign_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Repair_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__Inspect_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature();
		void InspectSelectedItem();
		void RepairSelectedItem();
		void OnGlobalColorChange();
		void OnUsingGamepadChanged(bool bOnUsingGamepadChanged);
		void RouteActionByTag(class UBaseSlotWidget* Slot, const struct FGameplayTag& ActionTag);
		void OnInventoryCountChanged(int32_t NumItems, int32_t MaxNumItems);
		void OnInventoryChanged();
		void HandleOnSlotChanged(class UUI_BaseSlot_C* Slot);
		void OnDragDropOnPaperDoll(class UObject* Widget);
		void OnDefragFocused();
		void OnUnequipFailure(EEquipmentChangeFailureFromFullInventoryStimulus Stimulus);
		void Destruct();
		void SetSelectedItemByHotbarIndex(int32_t Index);
		void SetSelectedByIndexHelper(class UGridPanel* Grid, int32_t Index);
		void OnEffectHovered(class UStatusEffect* StatusEffect);
		void OnFocusedStatusEffectDestroyed();
		void OnEffectFocused(class UStatusEffect* StatusEffect);
		void SetStatusEffectToView(class UStatusEffect* StatusEffect);
		void ExecuteUbergraph_UI_InventoryInterface(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
