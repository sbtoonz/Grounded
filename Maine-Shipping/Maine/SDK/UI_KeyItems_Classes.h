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
	 * WidgetBlueprintGeneratedClass UI_KeyItems.UI_KeyItems_C
	 * Size -> 0x0088 (FullSize[0x0300] - InheritedSize[0x0278])
	 */
	class UUI_KeyItems_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UUI_BestiaryDetails_C*                               BestiaryDetails;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  CloseButton;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GridBG;                                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  InspectButton;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HeaderText_C*                                    ItemNameHeader;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaineRichTextBlock*                                 KeyItemDesc;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        KeyItemDetails;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        KeyItemList;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          KeyItemScroll;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ModelViewer_C*                                   ModelViewer;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ScreenSpecialBG;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  UseButton;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ItemSlot_C*                                      SelectedItemSlot;                                        // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        Category;                                                // 0x02E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                Subcategories;                                           // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void RefreshBottomButtons();
		void ClearSelectedItem();
		void RefreshUI();
		void SetCategory(const struct FGameplayTag& Category);
		void DisplayItemDetails(class UUI_BaseSlot_C* ItemSlot);
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void Propagate_Right_Thumbstick_Event(const struct FAnalogInputEvent& Input_Event, float SpeedMultiplier, struct FEventReply* EventReply);
		void GoToItemEntry(const struct FDataTableRowHandle& RowHandle);
		void UseItemVisibility();
		void UseSelectedItem();
		ESlateVisibility GetUseButtonVisibility();
		struct FSlateColor GetHeaderColor();
		struct FLinearColor GetAccentTwo();
		struct FSlateColor GetBasicColor();
		void OnKeyItemSelected(class UUI_KeyItemCollection_C* ItemCollection, class UUI_BaseSlot_C* ItemSlot);
		void OnButtonClicked(class UUI_KeyItemCollection_C* ItemCollection, class UUI_BaseSlot_C* ItemSlot);
		void BndEvt__InspectButton_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature();
		void InspectSelectedItem();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__UseButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_KeyItems(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
