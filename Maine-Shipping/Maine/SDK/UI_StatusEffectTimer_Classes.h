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
	 * WidgetBlueprintGeneratedClass UI_StatusEffectTimer.UI_StatusEffectTimer_C
	 * Size -> 0x00A9 (FullSize[0x0321] - InheritedSize[0x0278])
	 */
	class UUI_StatusEffectTimer_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    RemoveEffect;                                            // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    EffectUpdated;                                           // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    NewEffect;                                               // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BlurBG;                                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CircleBG;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             FocusButton;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_1;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StackText;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              StatusEffectIcon;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TimerBG;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TimerFill;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UStatusEffect*>                               MatchingStatusEffects;                                   // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnStatusEffectComplete;                                  // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       NegativeEffect;                                          // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Focused;                                                 // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B0W9[0x6];                                   // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEffectHovered;                                         // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEffectFocused;                                         // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       BeingRemoved;                                            // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetEffectWithLongestTimer(class UStatusEffect** StatusEffect);
		void UpdateStackText();
		void GetFirstStatusEffect(class UStatusEffect** StatusEffect);
		void TryRemoveEffect(class UStatusEffect* StatusEffect, bool* Removed);
		void TryAddEffect(class UStatusEffect* StatusEffect, bool AddedThisFrame, bool* EffectAdded);
		void OnGlobalColorChange();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Initialize(class UStatusEffect* StatusEffect, bool AddedThisFrame);
		void HandleColorSet();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_StatusEffectTimer_FocusButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void PlayAnim(class UWidgetAnimation* Animation);
		void FocusOn();
		void HandleRemove();
		void OnRemoveEffectComplete();
		void OnTimerReset(class UStatusEffect* StatusEffect);
		void ExecuteUbergraph_UI_StatusEffectTimer(int32_t EntryPoint);
		void OnEffectFocused__DelegateSignature(class UStatusEffect* Effect);
		void OnEffectHovered__DelegateSignature(class UStatusEffect* Effect);
		void OnStatusEffectComplete__DelegateSignature(class UUI_StatusEffectTimer_C* UI_StatusEffectPip);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
