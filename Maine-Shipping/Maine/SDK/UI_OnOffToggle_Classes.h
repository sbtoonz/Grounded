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
	 * WidgetBlueprintGeneratedClass UI_OnOffToggle.UI_OnOffToggle_C
	 * Size -> 0x0070 (FullSize[0x02F8] - InheritedSize[0x0288])
	 */
	class UUI_OnOffToggle_C : public UOnOffToggleWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    UnhoveredAnim;                                           // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HoveredAnim;                                             // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               ActionWidget;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoveredBar;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Value;                                                   // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          LabelText;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLocString                                          DescriptionText;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFocused;                                               // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsChecked(bool* IsChecked);
		struct FSlateColor GetSubheaderColor();
		struct FLinearColor GetAttentionColor();
		void RefreshColors();
		void UpdateValueText();
		void SetIsChecked(bool IsChecked);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_OnOffToggle(int32_t EntryPoint);
		void OnFocused__DelegateSignature(class UUI_OnOffToggle_C* Toggle);
		void OnCheckStateChanged__DelegateSignature(bool IsChecked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
