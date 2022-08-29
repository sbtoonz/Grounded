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
	 * WidgetBlueprintGeneratedClass UI_CraftingRequirements.UI_CraftingRequirements_C
	 * Size -> 0x0082 (FullSize[0x02FA] - InheritedSize[0x0278])
	 */
	class UUI_CraftingRequirements_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UUI_RecipeItemSlot_C*                                Ingredient;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 IngredientsText;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          RequirementPanel;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RequirementsBorder;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RecipeItemSlot_C*                                RequirementSlot;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 RequirementsText;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RecipeItemSlot_C*                                UI_RecipeItemSlot;                                       // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxItemsPerRow;                                          // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowTitleText;                                           // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W9T8[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             HandleRecipeItemSelected;                                // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HandleRecipeItemFocused;                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HandleRecipeItemAltSelected;                             // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsBuilding;                                              // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YA7O[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverrideWidth;                                           // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETextJustify                                               HeaderJustification;                                     // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HideHeaderBG;                                            // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void FocusOnRecipeRequirement(const struct FDataTableRowHandle& RecipeRequirement);
		void GetFocusedRecipeItemSlot(class UUI_RecipeItemSlot_C** ItemRowHandle);
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void GetFocusedRecipeItem(struct FDataTableRowHandle* ItemRowHandle);
		struct FSlateColor GetSubheaderColor();
		void UpdateToolRequirementsListVersion(const struct FDataTableRowHandle& RecipeResult, const struct FDataTableRowHandle& ToolRequirement);
		void UpdateRequirementsListVersion(const struct FDataTableRowHandle& RecipeResult, TArray<struct FRecipeRequirements>* RecipeRequirements);
		void HasItemEquipped(const struct FDataTableRowHandle& Item, bool* HasItem);
		void UpdateItemRequirements(const struct FRecipeData& ItemRecipe);
		void UpdateBuildingRequirements(const struct FBuildingRecipeData& BuildingRecipe);
		void UpdateToolRequirements(const struct FDataTableRowHandle& RecipeResult, const struct FDataTableRowHandle& ToolRequirement);
		void GetItemCount(const struct FDataTableRowHandle& ItemData, int32_t* Count);
		void HasEnoughOfItem(const struct FDataTableRowHandle& ItemData, int32_t ItemCount, bool* HasEnough);
		void PreConstruct(bool IsDesignTime);
		void OnRequirementClicked(const struct FDataTableRowHandle& IngredientRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		void OnRequirementDoubleClicked(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		void OnGlobalColorChange();
		void OnRequirementFocused(const struct FDataTableRowHandle& ItemRowHandle, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		void ExecuteUbergraph_UI_CraftingRequirements(int32_t EntryPoint);
		void HandleRecipeItemAltSelected__DelegateSignature(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		void HandleRecipeItemFocused__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		void HandleRecipeItemSelected__DelegateSignature(const struct FDataTableRowHandle& RecipeItem, class UUI_RecipeItemSlot_C* RecipeItemSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
