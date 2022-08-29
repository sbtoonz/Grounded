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
	 * WidgetBlueprintGeneratedClass UI_KnownRecipesUsedIn.UI_KnownRecipesUsedIn_C
	 * Size -> 0x0078 (FullSize[0x02F0] - InheritedSize[0x0278])
	 */
	class UUI_KnownRecipesUsedIn_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ULocalizedTextBlock*                                 LocalizedTextBlock;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            RecipeWrapBox;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RecipeListItem_Craftable_C*                      UI_RecipeListItem_Craftable;                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             UsedInBorder;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FDataTableRowHandle                                 RecipeIngredient;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UUI_RecipeListItem_Base_C*                           SelectedUsedInRecipe;                                    // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_RecipeListItem_Base_C*                           SelectedRecipeIngredient;                                // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             HandleRecipeSelected;                                    // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HandleRecipeFocused;                                     // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             HandleRecipeAltSelected;                                 // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void RefreshUI();
		void FocusOnRecipe(const struct FDataTableRowHandle& Recipe);
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void GetFocusedKnownRecipe(struct FDataTableRowHandle* Recipe);
		void CreateChildHelper(class UClass* WidgetType, class UUI_RecipeListItem_Base_C** NewItem);
		struct FSlateColor GetColorAndOpacity_1();
		void SetIngredient(const struct FDataTableRowHandle& IngredientRowHandle);
		void OnCraftingRecipeClicked(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem);
		void OnGlobalColorChange();
		void OnRecipeListItemFocused(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem);
		void ExecuteUbergraph_UI_KnownRecipesUsedIn(int32_t EntryPoint);
		void HandleRecipeAltSelected__DelegateSignature(const struct FDataTableRowHandle& Recipe);
		void HandleRecipeFocused__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem);
		void HandleRecipeSelected__DelegateSignature(const struct FDataTableRowHandle& Recipe);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
