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
	 * WidgetBlueprintGeneratedClass UI_TabButton.UI_TabButton_C
	 * Size -> 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
	 */
	class UUI_TabButton_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NewIconAnim;                                             // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    TabFocus;                                                // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    TabHover;                                                // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCheckBox*                                           Button_TabInner;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 LocBtnText;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewItem;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedNugget;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNormalButtonClicked;                                   // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable
		struct FLocString                                          LocalizedText;                                           // 0x02D0(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void SetString(const struct FLocString& LocString);
		void SetIcon(class UTexture2D* Icon);
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		ESlateVisibility GetVisibilityOSimg();
		ESlateVisibility GetVisibilityText();
		struct FLinearColor GetAttentionColor();
		ESlateVisibility GetNuggetVisibility();
		struct FLinearColor GetSelectedColor();
		void RefreshColors();
		void SetCheckedState(ECheckBoxState InCheckedState);
		void TabButtonUnhover(class APlayerController* self2);
		void TabButtonHover(class APlayerController* self2);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_TabInner_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnGlobalColorChange();
		void Construct();
		void ExecuteUbergraph_UI_TabButton(int32_t EntryPoint);
		void OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
