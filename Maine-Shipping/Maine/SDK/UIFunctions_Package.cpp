/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetPlayerNameSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetPlayerNameSafe(class APlayerState* State, class UObject* __WorldContext, class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetPlayerNameSafe");
		
		UUIFunctions_C_GetPlayerNameSafe_Params params {};
		params.State = State;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.FilterRecipeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FilterText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::FilterRecipeList(class UPanelWidget* Panel, const class FText& FilterText, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.FilterRecipeList");
		
		UUIFunctions_C_FilterRecipeList_Params params {};
		params.Panel = Panel;
		params.FilterText = FilterText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetEnhancementDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EnhancementLevel                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLocString                                  EnhancementName                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     EnhancementIcon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     EnhancementItemBG                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetEnhancementDetails(class UItem* Item, class UObject* __WorldContext, int32_t* EnhancementLevel, struct FLocString* EnhancementName, class UObject** EnhancementIcon, class UObject** EnhancementItemBG)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetEnhancementDetails");
		
		UUIFunctions_C_GetEnhancementDetails_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnhancementLevel != nullptr)
			*EnhancementLevel = params.EnhancementLevel;
		if (EnhancementName != nullptr)
			*EnhancementName = params.EnhancementName;
		if (EnhancementIcon != nullptr)
			*EnhancementIcon = params.EnhancementIcon;
		if (EnhancementItemBG != nullptr)
			*EnhancementItemBG = params.EnhancementItemBG;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.Get Item Rarity Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LinearColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UUIFunctions_C::Get_Item_Rarity_Color(const struct FGameplayTag& Rarity, class UObject* __WorldContext, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.Get Item Rarity Color");
		
		UUIFunctions_C_Get_Item_Rarity_Color_Params params {};
		params.Rarity = Rarity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinearColor != nullptr)
			*LinearColor = params.LinearColor;
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.Get Crafting Item Count
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IncludeProximityStorage                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::Get_Crafting_Item_Count(const struct FDataTableRowHandle& ItemRowHandle, bool IncludeProximityStorage, class UObject* __WorldContext, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.Get Crafting Item Count");
		
		UUIFunctions_C_Get_Crafting_Item_Count_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.IncludeProximityStorage = IncludeProximityStorage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetCraftingSubcategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameplayTag>                        Subcategories                                              (Parm, OutParm)
	 */
	void UUIFunctions_C::GetCraftingSubcategories(const struct FGameplayTag& Category, class UObject* __WorldContext, TArray<struct FGameplayTag>* Subcategories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetCraftingSubcategories");
		
		UUIFunctions_C_GetCraftingSubcategories_Params params {};
		params.Category = Category;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Subcategories != nullptr)
			*Subcategories = params.Subcategories;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetBuildingSubcategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameplayTag>                        Subcategories                                              (Parm, OutParm)
	 */
	void UUIFunctions_C::GetBuildingSubcategories(const struct FGameplayTag& Category, class UObject* __WorldContext, TArray<struct FGameplayTag>* Subcategories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetBuildingSubcategories");
		
		UUIFunctions_C_GetBuildingSubcategories_Params params {};
		params.Category = Category;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Subcategories != nullptr)
			*Subcategories = params.Subcategories;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.Get Localized Name for HotbarQuick Slot Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHotBarQuickSlotType                               Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLocString                                  LocString                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::Get_Localized_Name_for_HotbarQuick_Slot_Type(EHotBarQuickSlotType Type, class UObject* __WorldContext, struct FLocString* LocString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.Get Localized Name for HotbarQuick Slot Type");
		
		UUIFunctions_C_Get_Localized_Name_for_HotbarQuick_Slot_Type_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocString != nullptr)
			*LocString = params.LocString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetIconForRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ItemIcon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetIconForRecipe(const struct FDataTableRowHandle& RecipeRowHandle, class UObject* __WorldContext, class UObject** ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetIconForRecipe");
		
		UUIFunctions_C_GetIconForRecipe_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIcon != nullptr)
			*ItemIcon = params.ItemIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetItemIconFromRowHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ItemIcon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetItemIconFromRowHandle(const struct FDataTableRowHandle& ItemRowHandle, class UObject* __WorldContext, class UObject** ItemIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetItemIconFromRowHandle");
		
		UUIFunctions_C_GetItemIconFromRowHandle_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIcon != nullptr)
			*ItemIcon = params.ItemIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetCraftingCategoryName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CategoryTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CategoryName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetCraftingCategoryName(const struct FGameplayTag& CategoryTag, class UObject* __WorldContext, class FString* CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetCraftingCategoryName");
		
		UUIFunctions_C_GetCraftingCategoryName_Params params {};
		params.CategoryTag = CategoryTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryName != nullptr)
			*CategoryName = params.CategoryName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetTechTreeNodeHandleCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TechTreeNodeHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetTechTreeNodeHandleCost(const struct FDataTableRowHandle& TechTreeNodeHandle, class UObject* __WorldContext, int32_t* Cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetTechTreeNodeHandleCost");
		
		UUIFunctions_C_GetTechTreeNodeHandleCost_Params params {};
		params.TechTreeNodeHandle = TechTreeNodeHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cost != nullptr)
			*Cost = params.Cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetTechTreeNodeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TechTreeNodeRowHandle                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RecipeName                                                 (Parm, OutParm)
	 */
	void UUIFunctions_C::GetTechTreeNodeName(const struct FDataTableRowHandle& TechTreeNodeRowHandle, class UObject* __WorldContext, class FText* RecipeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetTechTreeNodeName");
		
		UUIFunctions_C_GetTechTreeNodeName_Params params {};
		params.TechTreeNodeRowHandle = TechTreeNodeRowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecipeName != nullptr)
			*RecipeName = params.RecipeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetRecipeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RecipeRowHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RecipeName                                                 (Parm, OutParm)
	 */
	void UUIFunctions_C::GetRecipeName(const struct FDataTableRowHandle& RecipeRowHandle, class UObject* __WorldContext, class FText* RecipeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetRecipeName");
		
		UUIFunctions_C_GetRecipeName_Params params {};
		params.RecipeRowHandle = RecipeRowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RecipeName != nullptr)
			*RecipeName = params.RecipeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetSortedTechTreeUnlocks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TechTreeRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 SortedTechTreeNodes                                        (Parm, OutParm)
	 */
	void UUIFunctions_C::GetSortedTechTreeUnlocks(const struct FDataTableRowHandle& TechTreeRowHandle, class UObject* __WorldContext, TArray<struct FDataTableRowHandle>* SortedTechTreeNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetSortedTechTreeUnlocks");
		
		UUIFunctions_C_GetSortedTechTreeUnlocks_Params params {};
		params.TechTreeRowHandle = TechTreeRowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SortedTechTreeNodes != nullptr)
			*SortedTechTreeNodes = params.SortedTechTreeNodes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetHudMarkerColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Variant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UUIFunctions_C::GetHudMarkerColor(int32_t Variant, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetHudMarkerColor");
		
		UUIFunctions_C_GetHudMarkerColor_Params params {};
		params.Variant = Variant;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetHUDMarkerCustomColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FColor>                              HUDMarkerColorOptions                                      (Parm, OutParm)
	 */
	void UUIFunctions_C::GetHUDMarkerCustomColors(class UObject* __WorldContext, TArray<struct FColor>* HUDMarkerColorOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetHUDMarkerCustomColors");
		
		UUIFunctions_C_GetHUDMarkerCustomColors_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HUDMarkerColorOptions != nullptr)
			*HUDMarkerColorOptions = params.HUDMarkerColorOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetHUDMarkerBrushVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHUDMarkerType                                     MarkerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Variant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GetMapVariant                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UUIFunctions_C::GetHUDMarkerBrushVariant(EHUDMarkerType MarkerType, int32_t Variant, bool GetMapVariant, class UObject* __WorldContext, struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetHUDMarkerBrushVariant");
		
		UUIFunctions_C_GetHUDMarkerBrushVariant_Params params {};
		params.MarkerType = MarkerType;
		params.Variant = Variant;
		params.GetMapVariant = GetMapVariant;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetHUDMarkerBrushesOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHUDMarkerType                                     MarkerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSlateBrush>                         Brush_List                                                 (Parm, OutParm)
	 */
	void UUIFunctions_C::GetHUDMarkerBrushesOfType(EHUDMarkerType MarkerType, class UObject* __WorldContext, TArray<struct FSlateBrush>* Brush_List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetHUDMarkerBrushesOfType");
		
		UUIFunctions_C_GetHUDMarkerBrushesOfType_Params params {};
		params.MarkerType = MarkerType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush_List != nullptr)
			*Brush_List = params.Brush_List;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.DoesKeyMatchAnyAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FoundMatch                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIFunctions_C::DoesKeyMatchAnyAxisMapping(const struct FKey& Key, const class FName& Name, class UObject* __WorldContext, bool* FoundMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.DoesKeyMatchAnyAxisMapping");
		
		UUIFunctions_C_DoesKeyMatchAnyAxisMapping_Params params {};
		params.Key = Key;
		params.Name = Name;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundMatch != nullptr)
			*FoundMatch = params.FoundMatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetBPWidgetManagerFromContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_WidgetManager_C*                         BPWidgetManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetBPWidgetManagerFromContext(class UObject* WorldContext, class UObject* __WorldContext, class UBP_WidgetManager_C** BPWidgetManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetBPWidgetManagerFromContext");
		
		UUIFunctions_C_GetBPWidgetManagerFromContext_Params params {};
		params.WorldContext = WorldContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BPWidgetManager != nullptr)
			*BPWidgetManager = params.BPWidgetManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetWidgetDragManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_WidgetDragManager_C*                     DragManager                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetWidgetDragManager(class UObject* __WorldContext, class UBP_WidgetDragManager_C** DragManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetWidgetDragManager");
		
		UUIFunctions_C_GetWidgetDragManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DragManager != nullptr)
			*DragManager = params.DragManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetBPWidgetManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_WidgetManager_C*                         BPWidgetManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetBPWidgetManager(class UObject* __WorldContext, class UBP_WidgetManager_C** BPWidgetManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetBPWidgetManager");
		
		UUIFunctions_C_GetBPWidgetManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BPWidgetManager != nullptr)
			*BPWidgetManager = params.BPWidgetManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetHotBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_HotBar_C*                                UIHotBar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetHotBar(class UObject* __WorldContext, class UUI_HotBar_C** UIHotBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetHotBar");
		
		UUIFunctions_C_GetHotBar_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UIHotBar != nullptr)
			*UIHotBar = params.UIHotBar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.HandleImageDelayFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ActualValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentAnimationDelay                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentDisplayedValue                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastObservedValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      ImageFile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValueTweening                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               AlwaysResetAnimationDelay                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InvertFillValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DelayOnDrop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceAlwaysTween                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::HandleImageDelayFill(float DeltaTime, float ActualValue, float* CurrentAnimationDelay, float* CurrentDisplayedValue, float* LastObservedValue, class UImage** ImageFile, bool* ValueTweening, bool AlwaysResetAnimationDelay, bool InvertFillValue, bool DelayOnDrop, bool ForceAlwaysTween, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.HandleImageDelayFill");
		
		UUIFunctions_C_HandleImageDelayFill_Params params {};
		params.DeltaTime = DeltaTime;
		params.ActualValue = ActualValue;
		params.AlwaysResetAnimationDelay = AlwaysResetAnimationDelay;
		params.InvertFillValue = InvertFillValue;
		params.DelayOnDrop = DelayOnDrop;
		params.ForceAlwaysTween = ForceAlwaysTween;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentAnimationDelay != nullptr)
			*CurrentAnimationDelay = params.CurrentAnimationDelay;
		if (CurrentDisplayedValue != nullptr)
			*CurrentDisplayedValue = params.CurrentDisplayedValue;
		if (LastObservedValue != nullptr)
			*LastObservedValue = params.LastObservedValue;
		if (ImageFile != nullptr)
			*ImageFile = params.ImageFile;
		if (ValueTweening != nullptr)
			*ValueTweening = params.ValueTweening;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetGlobalColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGlobalColor                                       GlobalColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                LinearColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UUIFunctions_C::GetGlobalColor(EGlobalColor GlobalColor, class UObject* __WorldContext, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetGlobalColor");
		
		UUIFunctions_C_GetGlobalColor_Params params {};
		params.GlobalColor = GlobalColor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinearColor != nullptr)
			*LinearColor = params.LinearColor;
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetCraftingCategoryIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                CraftingCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 CategoryIcon                                               (Parm, OutParm)
	 */
	void UUIFunctions_C::GetCraftingCategoryIcon(const struct FGameplayTag& CraftingCategory, class UObject* __WorldContext, struct FSlateBrush* CategoryIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetCraftingCategoryIcon");
		
		UUIFunctions_C_GetCraftingCategoryIcon_Params params {};
		params.CraftingCategory = CraftingCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryIcon != nullptr)
			*CategoryIcon = params.CategoryIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.BoolToCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Checked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECheckBoxState                                     CheckState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::BoolToCheckedState(bool Checked, class UObject* __WorldContext, ECheckBoxState* CheckState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.BoolToCheckedState");
		
		UUIFunctions_C_BoolToCheckedState_Params params {};
		params.Checked = Checked;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckState != nullptr)
			*CheckState = params.CheckState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetActionNameFromKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetActionNameFromKey(const struct FKey& Key, class UObject* __WorldContext, class FName* ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetActionNameFromKey");
		
		UUIFunctions_C_GetActionNameFromKey_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionName != nullptr)
			*ActionName = params.ActionName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.ActivateSCABSignal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::ActivateSCABSignal(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.ActivateSCABSignal");
		
		UUIFunctions_C_ActivateSCABSignal_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetGamepadBrushForInputAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputAction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 GamepadFaceIcon                                            (Parm, OutParm)
	 */
	void UUIFunctions_C::GetGamepadBrushForInputAction(const class FString& InputAction, class UObject* __WorldContext, struct FSlateBrush* GamepadFaceIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetGamepadBrushForInputAction");
		
		UUIFunctions_C_GetGamepadBrushForInputAction_Params params {};
		params.InputAction = InputAction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GamepadFaceIcon != nullptr)
			*GamepadFaceIcon = params.GamepadFaceIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.WrapWithHTMLTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      WrappedString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::WrapWithHTMLTag(const class FString& Source, const class FString& Tag, class UObject* __WorldContext, class FString* WrappedString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.WrapWithHTMLTag");
		
		UUIFunctions_C_WrapWithHTMLTag_Params params {};
		params.Source = Source;
		params.Tag = Tag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WrappedString != nullptr)
			*WrappedString = params.WrappedString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.DoesKeyMatchAnyActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FoundMatch                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUIFunctions_C::DoesKeyMatchAnyActionMapping(const struct FKey& Key, const class FName& Name, class UObject* __WorldContext, bool* FoundMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.DoesKeyMatchAnyActionMapping");
		
		UUIFunctions_C_DoesKeyMatchAnyActionMapping_Params params {};
		params.Key = Key;
		params.Name = Name;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundMatch != nullptr)
			*FoundMatch = params.FoundMatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UIFunctions.UIFunctions_C.GetAnimationStartPlayTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsReverse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIFunctions_C::GetAnimationStartPlayTime(class UWidgetAnimation* Animation, bool IsReverse, class UUserWidget* Widget, class UObject* __WorldContext, float* StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIFunctions.UIFunctions_C.GetAnimationStartPlayTime");
		
		UUIFunctions_C_GetAnimationStartPlayTime_Params params {};
		params.Animation = Animation;
		params.IsReverse = IsReverse;
		params.Widget = Widget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTime != nullptr)
			*StartTime = params.StartTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UIFunctions.UIFunctions_C");
		return ptr;
	}

}


