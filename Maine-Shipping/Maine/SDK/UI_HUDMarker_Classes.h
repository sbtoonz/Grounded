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
	 * WidgetBlueprintGeneratedClass UI_HUDMarker.UI_HUDMarker_C
	 * Size -> 0x0468 (FullSize[0x0728] - InheritedSize[0x02C0])
	 */
	class UUI_HUDMarker_C : public UHUDMarkerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    DisplayAnimation;                                        // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    DroppedItemDisplayAnimation;                             // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Default;                                                 // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              MarkerIcon;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         BuildingInProgressBrush;                                 // 0x02E8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         RestingSpotBrush;                                        // 0x0370(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MarkerBuildingBrush;                                     // 0x03F8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         PlayerDeathbagBrush;                                     // 0x0480(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MissionObjectiveBrush;                                   // 0x0508(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         DroppedItemBrush;                                        // 0x0590(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         StarterLocationBrush;                                    // 0x0618(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         RadarLocationBrush;                                      // 0x06A0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FSlateColor GetArrowColor();
		void ShouldTintIcon(bool* ShouldLock);
		void UsesCustomIcon(bool* ShouldLock);
		void EvaluateToggleVisibility();
		void TriggerShowAnimation();
		struct FVector2D GetArrowOffsetAdjustment(bool IsOnScreen);
		void UpdateQuestVisibility();
		struct FSlateColor GetMarkerColor();
		void SetHUDMarkerData(class UHUDMarkerData* MarkerData);
		void GetLifetimeFade(float* NewParam);
		ESlateVisibility GetDistanceVisibility();
		void SetMarkerIcon();
		void Construct();
		void OnHUDMarkerChanged();
		void OnHUDMarkerObjectiveReferenceChanged();
		void OnGlobalColorChange();
		void UpdateColor();
		void Destruct();
		void OnQuestComplete(class UQuest* QuestData);
		void OnShowFarHUDMarkersChanged(bool NewValue);
		void OnPlayerStateAdded(class APlayerState* PlayerState);
		void OnPlayerStateGuidChanged(class ASurvivalPlayerState* PlayerState);
		void OnHUDMarkerToggleStateChanged();
		void HandleStickiedQuestChanged();
		void ExecuteUbergraph_UI_HUDMarker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
