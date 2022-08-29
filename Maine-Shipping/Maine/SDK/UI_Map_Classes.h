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
	 * WidgetBlueprintGeneratedClass UI_Map.UI_Map_C
	 * Size -> 0x00A8 (FullSize[0x03E8] - InheritedSize[0x0340])
	 */
	class UUI_Map_C : public UMapWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NewUnlockAnim;                                           // 0x0348(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_MapControl_C*                                    CenterEntryControl;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ExpandoMapTop;                                           // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             GroupBorder;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      LegendControlsHorizontalBox;                             // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    LegendInvalidationBox;                                   // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MapLegendContainer;                                      // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MapPieceUnlockBG;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MapUnlockBorder;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 NewSectionTitle;                                         // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             OverlaysBorder;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 OverlaysHeader;                                          // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 PlaceHeader;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             PlacesBorder;                                            // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 TeenHeader;                                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  ToggleVisibilityButton;                                  // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MapControl_C*                                    ToggleVisibilityControl;                                 // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  ToggleWaypointButton;                                    // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  ZoomInButton;                                            // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  ZoomOutButton;                                           // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void RefreshToggleMapMarkerButton();
		void RefreshTogglePlayerWaypointButton();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		struct FLinearColor GetResourceEnabledColor();
		struct FLinearColor GetAccentTwo();
		struct FLinearColor GetBaseBGColor();
		struct FLinearColor GetBGColor();
		struct FLinearColor GetWarningColor();
		struct FSlateColor GetHeaderColor();
		void BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature();
		void Refresh();
		void OnGlobalColorChange();
		void BndEvt__CenterOnPlayerButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__ZoomButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature();
		void OnUsingGamepadChanged(bool bOnUsingGamepadChanged);
		void NewPOIDiscovered(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* UnlockerPlayerState);
		void Destruct();
		void BndEvt__ToggleVisibilityButton_K2Node_ComponentBoundEvent_4_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__UI_Map_DeleteWaypointButton_K2Node_ComponentBoundEvent_3_OnNormalButtonClicked__DelegateSignature();
		void RefreshMapMarkerControls(class UMapLegendEntryWidget* Entry);
		void K2_OnLegendEntryFocused(class UMapLegendEntryWidget* Widget);
		void OnInitialized();
		void HandleFocusedEntryChanged(class UMapPanelWidget* Sender, class UBaseMapEntryWidget* MapEntry);
		void ExecuteUbergraph_UI_Map(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
