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
	 * WidgetBlueprintGeneratedClass UI_InGameMenu.UI_InGameMenu_C
	 * Size -> 0x0158 (FullSize[0x0400] - InheritedSize[0x02A8])
	 */
	class UUI_InGameMenu_C : public UInGameMenuWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    SpiderAnim;                                              // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SCABOffsetAnim;                                          // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BrightenAnim;                                            // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_CraftingInterface_C*                             Crafting;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     CraftingTab;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DebugItems_C*                                    DebugItems;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     DebugItemsTab;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             DirtTop;                                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ExpandoTop;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HeaderImage;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryInterface_C*                            Inventory;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     InventoryTab;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DataPage_C*                                      KeyItems;                                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     KeyItemsTab;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Map_C*                                           Map;                                                     // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     MapTab;                                                  // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ObjectivesInterface_C*                           Objectives;                                              // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     ObjectivesTab;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     OSConfigTab;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             PatternBGTOP;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             PatternHeaderTOP;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SCABOSInstance;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              spoder;                                                  // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              spoder2;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusInterface_C*                               Status;                                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TabButton_C*                                     StatusTab;                                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             SubHeader;                                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TabBox;                                                  // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               TabNext;                                                 // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               TabPrevious;                                             // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNarratableWidgetSwitcher*                           Tabs;                                                    // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ClockSmall_C*                                    UI_ClockSmall;                                           // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_GlobalCooldownBar_C*                             UI_GlobalCooldownBar;                                    // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_PopupBGLarge_C*                                  UI_PopupBGLarge;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_OSConfigInterface_C*                             UI_SCABConfig;                                           // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ThreatMode_C*                                    UI_ThreatMode;                                           // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_VitalsWidget_C*                                  UI_VitalsWidget;                                         // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      VersionText;                                             // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Web;                                                     // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_OSConfigInterface_C*                             SCABConfig;                                              // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            SCABOSMaterial;                                          // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LoopAudio;                                               // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void Get_Halloween_Stuff();
		void SCABOSLerpDirectionBack(class UImage* Target);
		void SCABOSLerpDirectionForward(class UImage* Target);
		struct FLinearColor GetMaterialB();
		void PreviousMenuTab();
		void AdvanceMenuTab();
		class FText GetMinuteText();
		class FText GetHourText();
		class FText GetDaysAliveText();
		struct FLinearColor GetBGColor();
		struct FLinearColor GetScienceColor();
		struct FLinearColor GetMaterialColorA();
		struct FSlateColor GetSubheaderColor();
		void ActivateInGameMenuScreenOfType(EInGameMenuScreenType MenuType);
		void SetLastSelectedInGameMenuScreen(EInGameMenuScreenType MenuType);
		void RefreshTabColors();
		struct FLinearColor GetSCABOSBGDarkener();
		struct FLinearColor GetSCABOSAccentThree();
		struct FSlateColor GetHeaderColor();
		struct FSlateColor GetBasicTextColor();
		struct FLinearColor GetSCABOSBaseColor();
		struct FLinearColor GetSCABOSBG();
		struct FLinearColor GetSCABOSAccentOne();
		struct FLinearColor GetSCABOSAccentTwo();
		ESlateVisibility GetGamepadVisibility();
		void IsTabSelected(class UUI_TabButton_C* Tab, bool* Selected);
		class FText GetScienceCountText();
		void StopInGameHum();
		void SetTabCheckedState(class UUI_TabButton_C* Selected);
		void Construct();
		void Close_Menu();
		void ObjectivesChanged(class UQuest* QuestData);
		void BndEvt__InventoryTab_K2Node_ComponentBoundEvent_5_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void BndEvt__DebugItemsTab_K2Node_ComponentBoundEvent_6_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void BndEvt__ObjectivesTab_K2Node_ComponentBoundEvent_7_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void BndEvt__CraftingTab_K2Node_ComponentBoundEvent_9_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void Destruct();
		void BndEvt__OptionsTab_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void SetInventorySubMenuActive();
		void SetCraftingSubmenuActive();
		void SetDebugSubmenuActive();
		void SetObjectivesSubmenuActive();
		void AdvanceTab();
		void PreviousTab();
		void Set_OptionsSubmenuActive();
		void RefreshWidget();
		void BndEvt__MapTab_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void SetMapSubmenuActive();
		void SetKeyItemsSubmenuActive();
		void BndEvt__KeyItemsTab_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void OnClose();
		void SetTabButtonActive(class UUI_TabButton_C* UITabButton);
		void OnGlobalColorChange();
		void ToggleInventorySubmenu();
		void ToggleCraftingSubmenu();
		void ToggleMapSubmenu();
		void ToggleObjectivesSubmenu();
		void ToggleKeyItemsSubmenu();
		void ToggleDebugSubmenu();
		void ToggleOptionsSubmenu();
		void BndEvt__StatusTab_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		void SetStatusSubmenuActive();
		void ToggleStatusSubmenu();
		void HandleAudio();
		void ExecuteUbergraph_UI_InGameMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
