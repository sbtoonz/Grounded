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
	 * BlueprintGeneratedClass UIFunctions.UIFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUIFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetPlayerNameSafe(class APlayerState* State, class UObject* __WorldContext, class FString* Name);
		void FilterRecipeList(class UPanelWidget* Panel, const class FText& FilterText, class UObject* __WorldContext);
		void GetEnhancementDetails(class UItem* Item, class UObject* __WorldContext, int32_t* EnhancementLevel, struct FLocString* EnhancementName, class UObject** EnhancementIcon, class UObject** EnhancementItemBG);
		void Get_Item_Rarity_Color(const struct FGameplayTag& Rarity, class UObject* __WorldContext, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor);
		void Get_Crafting_Item_Count(const struct FDataTableRowHandle& ItemRowHandle, bool IncludeProximityStorage, class UObject* __WorldContext, int32_t* Count);
		void GetCraftingSubcategories(const struct FGameplayTag& Category, class UObject* __WorldContext, TArray<struct FGameplayTag>* Subcategories);
		void GetBuildingSubcategories(const struct FGameplayTag& Category, class UObject* __WorldContext, TArray<struct FGameplayTag>* Subcategories);
		void Get_Localized_Name_for_HotbarQuick_Slot_Type(EHotBarQuickSlotType Type, class UObject* __WorldContext, struct FLocString* LocString);
		void GetIconForRecipe(const struct FDataTableRowHandle& RecipeRowHandle, class UObject* __WorldContext, class UObject** ItemIcon);
		void GetItemIconFromRowHandle(const struct FDataTableRowHandle& ItemRowHandle, class UObject* __WorldContext, class UObject** ItemIcon);
		void GetCraftingCategoryName(const struct FGameplayTag& CategoryTag, class UObject* __WorldContext, class FString* CategoryName);
		void GetTechTreeNodeHandleCost(const struct FDataTableRowHandle& TechTreeNodeHandle, class UObject* __WorldContext, int32_t* Cost);
		void GetTechTreeNodeName(const struct FDataTableRowHandle& TechTreeNodeRowHandle, class UObject* __WorldContext, class FText* RecipeName);
		void GetRecipeName(const struct FDataTableRowHandle& RecipeRowHandle, class UObject* __WorldContext, class FText* RecipeName);
		void GetSortedTechTreeUnlocks(const struct FDataTableRowHandle& TechTreeRowHandle, class UObject* __WorldContext, TArray<struct FDataTableRowHandle>* SortedTechTreeNodes);
		struct FLinearColor GetHudMarkerColor(int32_t Variant, class UObject* __WorldContext);
		void GetHUDMarkerCustomColors(class UObject* __WorldContext, TArray<struct FColor>* HUDMarkerColorOptions);
		void GetHUDMarkerBrushVariant(EHUDMarkerType MarkerType, int32_t Variant, bool GetMapVariant, class UObject* __WorldContext, struct FSlateBrush* Brush);
		void GetHUDMarkerBrushesOfType(EHUDMarkerType MarkerType, class UObject* __WorldContext, TArray<struct FSlateBrush>* Brush_List);
		void DoesKeyMatchAnyAxisMapping(const struct FKey& Key, const class FName& Name, class UObject* __WorldContext, bool* FoundMatch);
		void GetBPWidgetManagerFromContext(class UObject* WorldContext, class UObject* __WorldContext, class UBP_WidgetManager_C** BPWidgetManager);
		void GetWidgetDragManager(class UObject* __WorldContext, class UBP_WidgetDragManager_C** DragManager);
		void GetBPWidgetManager(class UObject* __WorldContext, class UBP_WidgetManager_C** BPWidgetManager);
		void GetHotBar(class UObject* __WorldContext, class UUI_HotBar_C** UIHotBar);
		void HandleImageDelayFill(float DeltaTime, float ActualValue, float* CurrentAnimationDelay, float* CurrentDisplayedValue, float* LastObservedValue, class UImage** ImageFile, bool* ValueTweening, bool AlwaysResetAnimationDelay, bool InvertFillValue, bool DelayOnDrop, bool ForceAlwaysTween, class UObject* __WorldContext);
		void GetGlobalColor(EGlobalColor GlobalColor, class UObject* __WorldContext, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor);
		void GetCraftingCategoryIcon(const struct FGameplayTag& CraftingCategory, class UObject* __WorldContext, struct FSlateBrush* CategoryIcon);
		void BoolToCheckedState(bool Checked, class UObject* __WorldContext, ECheckBoxState* CheckState);
		void GetActionNameFromKey(const struct FKey& Key, class UObject* __WorldContext, class FName* ActionName);
		void ActivateSCABSignal(class UObject* __WorldContext);
		void GetGamepadBrushForInputAction(const class FString& InputAction, class UObject* __WorldContext, struct FSlateBrush* GamepadFaceIcon);
		void WrapWithHTMLTag(const class FString& Source, const class FString& Tag, class UObject* __WorldContext, class FString* WrappedString);
		void DoesKeyMatchAnyActionMapping(const struct FKey& Key, const class FName& Name, class UObject* __WorldContext, bool* FoundMatch);
		void GetAnimationStartPlayTime(class UWidgetAnimation* Animation, bool IsReverse, class UUserWidget* Widget, class UObject* __WorldContext, float* StartTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
