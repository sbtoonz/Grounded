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
	 * WidgetBlueprintGeneratedClass UI_DefragButton.UI_DefragButton_C
	 * Size -> 0x0060 (FullSize[0x02C8] - InheritedSize[0x0268])
	 */
	class UUI_DefragButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NormalHover;                                             // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    NormalBtnTextAnim;                                       // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             ButtonInner;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DefragIcon;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Hoverborder;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 LocDefrag;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNormalButtonClicked;                                   // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable
		bool                                                       Enabled;                                                 // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5Z1M[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFocused;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FSlateBrush GetDefragIcon();
		void SetDisabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner);
		void SetEnabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner);
		struct FSlateColor GetSCABOSAccentOne();
		ESlateVisibility GetGamepadButtonVisibility();
		void NormalButtonUnhover(class APlayerController* self2);
		void NormalButtonHover(class APlayerController* self2);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetIsValid(bool IsEnabled);
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_UI_DefragButton(int32_t EntryPoint);
		void OnFocused__DelegateSignature();
		void OnNormalButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
