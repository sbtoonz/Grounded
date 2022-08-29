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
	 * WidgetBlueprintGeneratedClass UI_CategoriesButton_Base.UI_CategoriesButton_Base_C
	 * Size -> 0x00CC (FullSize[0x0344] - InheritedSize[0x0278])
	 */
	class UUI_CategoriesButton_Base_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    BtnSelectIconLoop;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    EmptyCategoryNotSelected;                                // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    EmptyCategorySelected;                                   // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BtnNotSelected;                                          // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BtnSelect;                                               // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BtnHover;                                                // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_CategoryInner;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CategoryIcon;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 CategoryTitle;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoverOutline;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewItem;                                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedArrow;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                NormalButtonText;                                        // 0x02E0(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnNormalButtonClicked;                                   // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable
		bool                                                       Enabled;                                                 // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Selected;                                                // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9T4W[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ActiveCategoryAsset;                                     // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        CraftingCategory;                                        // 0x0318(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MatchingRecipeListButtonClass;                           // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImage*                                              SolidBtn;                                                // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TreatHoverAsSelect;                                      // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasText;                                                 // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BVJB[0x2];                                   // 0x0332(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          CategoryTitleString;                                     // 0x0334(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		struct FLinearColor GetWorkbenchIconColor();
		void GetCategoryIconVisibility(ESlateVisibility* CategoryVisibility);
		struct FLinearColor GetAttentionColor();
		void SetEnabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner);
		void SetDisabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner);
		void NormalButtonUnhover(class APlayerController* self2);
		void NormalButtonHover(class APlayerController* self2);
		void SetSelected(bool Selected);
		void SetIsValid(bool IsEnabled);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void OnGlobalColorChange();
		void Construct();
		void BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_CategoriesButton_Base(int32_t EntryPoint);
		void OnNormalButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
