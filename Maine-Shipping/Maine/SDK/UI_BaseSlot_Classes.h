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
	 * WidgetBlueprintGeneratedClass UI_BaseSlot.UI_BaseSlot_C
	 * Size -> 0x0171 (FullSize[0x0449] - InheritedSize[0x02D8])
	 */
	class UUI_BaseSlot_C : public UBaseSlotWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ItemUseAnim;                                             // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    IconIncrease2;                                           // 0x02E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    DurabilityLow;                                           // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HotPocket;                                               // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OnDoubleClick;                                           // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    IconNormalize;                                           // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SelectedPulse;                                           // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              AnalyzedStatus;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CanteenBG;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CanteenText;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Count;                                                   // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DoubleClickEvent;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DurabilityFill_C*                                DurabilityElement;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EnhancementLevel;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EnhancementTypeBG;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EquippedBG;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FavoriteIcon;                                            // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_FreshnessTimer_C*                                Freshness;                                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HotkeyBG;                                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HotkeyText;                                              // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoverOutline;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ItemBorder;                                              // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemBtnBG;                                               // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ModType;                                                 // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewItemIcon;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SlotFrame;                                               // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SlotIndex;                                               // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowItemStack;                                           // 0x03BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanShowNewItemIcon;                                      // 0x03BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HandleSelectOnFocus;                                     // 0x03BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowTotalItemCountInInventory;                           // 0x03BF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsDragging;                                              // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6TGR[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwnerActor;                                              // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowingHotKey;                                           // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Hovered;                                                 // 0x03D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisallowDrag;                                            // 0x03D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2S5G[0x5];                                   // 0x03D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSlotChanged;                                           // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFocus;                                                 // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDoublePressed;                                         // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRightPressed;                                          // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bAllowContextMenu;                                       // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAllowContextMenuEquip;                                  // 0x0439(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SSEN[0x6];                                   // 0x043A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    AltDoubleClickAnimation;                                 // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowItemLevelInInventory;                                // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetRowHandleForItem(struct FDataTableRowHandle* Item_Row_Handle);
		void SetHotBarQuickSlotKey(const struct FHotBarQuickSlotItemTypeKey& ItemKey);
		void RefreshItemLevel();
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void SetDoubleClickAnimation(class UWidgetAnimation* NewAnimation);
		void SetEnabledItemState(bool IsEnabledItem);
		void OnRightClickOverridable(bool* bHandled);
		void UpdateCanteenElement();
		void UpdateGlobalColors();
		void CreateDragAndDropElement(class UUI_BaseSlot_C** DragBaseSlot);
		void UpdateSelectionVisuals();
		void UpdateVisuals();
		void HandleBrokenAnim();
		struct FLinearColor GetRepairColor();
		ESlateVisibility GetBrokenVisibility();
		struct FLinearColor GetWarningColor();
		void CanDrag(bool* CanDrag);
		void RestoreVisualItemData();
		void HandleDragCancel(bool ManualCancel);
		void HandleDragBegin(bool FromMouseDrag);
		void HandleDragDrop(class UUI_BaseSlot_C* ItemSlotSource, bool* DropSuccess);
		ESlateVisibility Get_SlotFrame_Visibility_1();
		void HandleDragComplete();
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		ESlateVisibility GetFavoriteVisibility();
		void SetShowHotKey(bool Show);
		void RefreshItemCount();
		void SetIconBrush();
		void SetDataRowHandle(const struct FDataTableRowHandle& DataRowHandle);
		struct FLinearColor GetColorAndOpacity();
		struct FSlateColor GetHotkeyTextColorAndOpacity();
		void UpdateDurabilityWidget();
		struct FLinearColor GetFillColor();
		ESlateVisibility GetFillVisibility();
		class UWidget* GetItemTooltip();
		ESlateVisibility GetNewItemVis();
		struct FLinearColor GetDoubleClickFlashColor();
		void SetHotKey(const class FText& HotkeyText);
		struct FLinearColor GetAttentionColor();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnRightClick();
		void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnHoveredInternal();
		void OnUnhoveredInternal();
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void SetSelected(bool Selected, bool UseEquippedHighlightIfEquipped);
		void Construct();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void PlayItemChangedAnimation();
		void PlayItemSelectAnimation();
		void RefreshColors();
		void Refresh();
		void SetFocused();
		void HideSlotBG();
		void OnGlobalColorChange();
		void OnIsItemNew(bool bIsNewItem);
		void BndEvt__UI_BaseSlot_TooltipAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void ExecuteUbergraph_UI_BaseSlot(int32_t EntryPoint);
		void OnHovered__DelegateSignature(class UUI_BaseSlot_C* Slot);
		void OnRightPressed__DelegateSignature(class UUI_BaseSlot_C* Slot);
		void OnDoublePressed__DelegateSignature(class UUI_BaseSlot_C* Slot);
		void OnPressed__DelegateSignature(class UUI_BaseSlot_C* Slot);
		void OnFocus__DelegateSignature(class UUI_BaseSlot_C* Slot);
		void OnSlotChanged__DelegateSignature(class UUI_BaseSlot_C* Slot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
