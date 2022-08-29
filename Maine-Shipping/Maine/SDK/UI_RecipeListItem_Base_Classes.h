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
	 * WidgetBlueprintGeneratedClass UI_RecipeListItem_Base.UI_RecipeListItem_Base_C
	 * Size -> 0x00FD (FullSize[0x0375] - InheritedSize[0x0278])
	 */
	class UUI_RecipeListItem_Base_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    UnderlineHoverAnim;                                      // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    RecipeSelectInPlace;                                     // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    RecipeHover;                                             // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CantCraftNotSelected;                                    // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CantCraftSelect;                                         // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    RecipeNotSelected;                                       // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    RecipeSelect;                                            // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              CanDo;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemText;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NeedGrinderIcon;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NeedOvenIcon;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NeedWheelIcon;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NeedWorkbenchIcon;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewItemList;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RecipeButton;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedPulse;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedUnderline;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TierDescription_C*                               UI_TierDescription;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Selected;                                                // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Enabled;                                                 // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9GL1[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseDown;                                             // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FDataTableRowHandle                                 Recipe;                                                  // 0x0330(0x0010) Edit, BlueprintVisible, NoDestructor
		class FScriptMulticastDelegate                             OnMouseDoubleClick;                                      // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_InGameMenu_C*                                    UIAnimations;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TreatHoverAsSelect;                                      // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoPressOnFocus;                                        // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_POXC[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFocused;                                               // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Tier;                                                    // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HideNewItemTag;                                          // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void FilterTextMatches(const class FText& FilterText, bool* Result);
		void SetLargeFont();
		void HasFocus(bool* HasFocus);
		void RefreshIcons();
		void FocusOnWidget();
		ESlateVisibility Get_Crafting_Building_Icon_Visibility(const struct FGameplayTag& Crafting_Tag);
		class UWidget* GetNeedWorkbenchTooltip();
		struct FLinearColor GetWorkbenchIcon();
		void SetBuildingRecipe(const struct FDataTableRowHandle& RecipeRowHandle);
		void SetCraftingRecipe(const struct FDataTableRowHandle& RecipeRowHandle);
		class UWidget* GetCannotDoTooltip();
		ESlateVisibility GetCanDoVis();
		struct FLinearColor GetCannotCraftColor();
		ESlateVisibility GetNewItemVis();
		struct FLinearColor GetAttentionColor();
		void SetEnabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton);
		void SetDisabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton);
		void Construct();
		void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SetSelected(bool Selected);
		void SetEnabledState(bool IsEnabled);
		void BndEvt__RecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__RecipeButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void OnGlobalColorChange();
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void PlayAnim(class UWidgetAnimation* Animation);
		void Destruct();
		void EventLargeFonts(bool NewValue);
		void ExecuteUbergraph_UI_RecipeListItem_Base(int32_t EntryPoint);
		void OnFocused__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem);
		void OnMouseDoubleClick__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem);
		void OnMouseDown__DelegateSignature(const struct FDataTableRowHandle& Recipe, class UUI_RecipeListItem_Base_C* RecipeListItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
