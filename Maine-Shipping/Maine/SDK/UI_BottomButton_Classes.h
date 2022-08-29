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
	 * WidgetBlueprintGeneratedClass UI_BottomButton.UI_BottomButton_C
	 * Size -> 0x0086 (FullSize[0x02FE] - InheritedSize[0x0278])
	 */
	class UUI_BottomButton_C : public UBottomButtonWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    PressedAnim;                                             // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    UnhoverAnim;                                             // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    NormalHoverAnim;                                         // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              ButtonBG;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ButtonInner;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoverImg;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 LocBottomBtn;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             TextBacking;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               UI_HUDActionWidget;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNormalButtonClicked;                                   // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable
		class FString                                              InputName;                                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       Enabled;                                                 // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J5JC[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          LocalizedButtonText;                                     // 0x02EC(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceControlHintOnly;                                    // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bForceLargeFont;                                         // 0x02FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Set_Format_Text_Param(const class FText& Param0);
		void GetIsActive(bool* bActive);
		void IsChordForAction(const struct FInputChord& Chord, bool* Out);
		void SetTextBacking();
		void SetAbledness();
		void SetLargeFont();
		void SetButtonConfig(const struct FConfirmationButtonConfig& Config);
		void SetLocalizedButtonText(const struct FLocString& String);
		void SetInputName(const class FName& InputName);
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void ShouldShowHintOnly(bool* Result);
		void SetDownState(class UTextBlock** TextElement, class UButton** ButtonInner);
		void SetDisabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner);
		void SetEnabledStyle(class UTextBlock** TextElement, class UButton** ButtonInner);
		void NormalButtonUnhover(class APlayerController* self2);
		void NormalButtonHover(class APlayerController* self2);
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ButtonInner_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void OnSetIsValid(bool bEnabled);
		void OnUsingGamepadChanged(bool bOnUsingGamepadChanged);
		void OnGlobalColorChange();
		void PreConstruct(bool IsDesignTime);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void Construct();
		void EventLargeFonts(bool NewValue);
		void Destruct();
		void EventBackgroundToggle(bool NewValue);
		void ExecuteUbergraph_UI_BottomButton(int32_t EntryPoint);
		void OnNormalButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
