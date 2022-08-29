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
	 * WidgetBlueprintGeneratedClass UI_RadialMenu.UI_RadialMenu_C
	 * Size -> 0x01E8 (FullSize[0x0460] - InheritedSize[0x0278])
	 */
	class UUI_RadialMenu_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    PageNextAnimation;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PagePreviousAnimation;                                   // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    IntroAnimation;                                          // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             AbsorbInputButton;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ArrowBtnLeft;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ArrowBtnRight;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ArrowPointer;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      CategoryBox;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      CategoryControls;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CategoryLeftText;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CategoryPreviewLeft;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CategoryPreviewRight;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CategoryRightText;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CenterDot;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  CloseButton;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GridBG;                                                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GridFG;                                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GridPanner;                                              // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MenuItems;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MenuOverlayItems;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_LabeledActionWidget_C*                           NavigateActionWidget;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               NextRadialControl;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  NextVariantButton;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PreviewRadialLeft;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PreviewRadialRight;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               PreviousRadialControl;                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RadialHotkeys;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RadialSection;                                           // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RadialTitleText;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RadialWedges;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  SelectButton;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      SelectControlsHorizontalBox;                             // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      SelectionName;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             TitleBorder;                                             // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TopLevelPanel;                                           // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CraftingRequirements_C*                          UI_CraftingRequirements;                                 // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_GlobalBackground_C*                              UI_GlobalBackground;                                     // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ModelViewer_C*                                   UI_ModelViewer;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RadialHeaderButton_C*                            UI_RadialHeaderButton_C_1;                               // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ShoppingList_C*                                  UI_ShoppingList;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_VitalsWidget_C*                                  UI_VitalsWidget;                                         // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      VariantCountLabel;                                       // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        VariantsCanvas;                                          // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VitalsBG;                                                // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RadialWedge_C*                                   Wedge1;                                                  // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      MaxIconRadius;                                           // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxItems;                                                // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumSpread;                                           // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQ85[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_BaseSlot_C*                                      SelectedItemSlot;                                        // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              EmptySlotClassType;                                      // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedSlotIndex;                                       // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           AnalogPosition;                                          // 0x040C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          TitleLocString;                                          // 0x0414(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentCategoryIndex;                                    // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentPageIndex;                                        // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x042C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                OpenRadialKey;                                           // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SelectedCategory;                                        // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FLocString>                                  PageLocStrings;                                          // 0x0448(0x0010) Edit, BlueprintVisible
		class UClass*                                              OverlaySlotClassType;                                    // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearHoverContent();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetMenuItemByIndex(int32_t Index, class UUI_BaseSlot_C** Item);
		void HandleHoverInvalid();
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void HandleHoverShortcutSlot();
		void HandleHoverChatSlot();
		void HandleHoverEmoteSlot();
		void HandleHoverBuildingSlot();
		void HandleHoverItemSlot();
		void HandleGamepadAnalogSelection();
		void DeselectAllSlots();
		void OnCategorySelected(class UUI_RadialHeaderButton_C* CategoryButton, int32_t Page);
		void PositionElements(class UPanelWidget* Panel);
		void PositionWedges();
		void GetHeaderText(int32_t Page, bool AppendRadialName, class FText* Text);
		void GetDefaultFocus(class UWidget** Widget);
		void GetCategoryIcon(int32_t Category, class UTexture2D** Texture);
		void GetNextPage(int32_t* CategoryIndex, int32_t* PageIndex);
		void GetPreviousPage(int32_t* CategoryIndex, int32_t* PageIndex);
		void SetPreviousNextVisuals();
		void CanPage(bool* CanPage);
		void SetWedgeSlotHidden(int32_t Index);
		void SetWedgeSlotVisible(int32_t Index);
		struct FSlateColor GetBasicTextColor();
		struct FLinearColor GetPageControlsColor();
		void GetCategoryHeader(int32_t Index, class UUI_RadialHeaderButton_C** RadialCategoryHeader);
		void SetPage(int32_t NewPageIndex);
		void AddRadialCategoryButton(class UUI_RadialHeaderButton_C* Button);
		void SelectPage(int32_t PageIndex);
		void SelectCategory(int32_t CategoryIndex);
		void HandleCategoryChange(int32_t PreviousCategoryIndex);
		void GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count);
		void GetCategoryCount(int32_t* Count);
		void CreateInitialSlots();
		void RefreshSlot(class UUI_BaseSlot_C* BaseSlot);
		void PopulateCategories();
		struct FLinearColor GetDescColor();
		struct FLinearColor GetRadialBGColor();
		ESlateVisibility GetCraftingRequirementsVisibility();
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void HandleUseSelectedRadialSlot();
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void Refresh();
		void NextPage();
		void PreviousPage();
		void NextCategory();
		void PreviousCategory();
		void Populate();
		void ConfigureRadialSlotPositioning(class UPanelSlot* Slot);
		void AddSlotToRadial(class UUI_BaseSlot_C* BaseSlot);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnItemHover(class UUI_BaseSlot_C* ItemSlot);
		void OnSlotSelected(class UUI_BaseSlot_C* Slot, bool Force);
		void OnItemPress(class UUI_BaseSlot_C* BaseSlot);
		void OnWedgeHover(class UUI_RadialWedge_C* Wedge);
		void OnWedgePressed(class UUI_RadialWedge_C* Wedge);
		void PreConstruct(bool IsDesignTime);
		void OnGlobalColorChange();
		void BndEvt__ArrowBtnRight_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ArrowBtnLeft_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void SetDefaultFocus();
		void OnUsingGamepadChanged(bool bOnUsingGamepadChanged);
		void BndEvt__UI_RadialMenu_UI_BottomButton_61_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__UI_RadialMenu_SelectButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__UI_RadialMenu_NextVariantButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature();
		void HandleNextVariant();
		void ExecuteUbergraph_UI_RadialMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
