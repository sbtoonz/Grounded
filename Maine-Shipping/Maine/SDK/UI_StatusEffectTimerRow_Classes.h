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
	 * WidgetBlueprintGeneratedClass UI_StatusEffectTimerRow.UI_StatusEffectTimerRow_C
	 * Size -> 0x0091 (FullSize[0x0309] - InheritedSize[0x0278])
	 */
	class UUI_StatusEffectTimerRow_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NoEffectsPresent;                                        // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizBox;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 NoneText;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectTimer_C*                             UI_StatusEffectPip;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectTimer_C*                             UI_StatusEffectPip_2;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectTimer_C*                             UI_StatusEffectPip_3;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ShowPositiveEffects;                                     // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ON78[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxElements;                                             // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowNegativeEffects;                                     // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowInfiniteEffects;                                     // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JVHU[0x6];                                   // 0x02BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EStatusEffectOriginType>                            StatusEffectOriginType;                                  // 0x02C0(0x0010) Edit, BlueprintVisible
		bool                                                       OnlySpecificEffectOriginType;                            // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EffectAddedToPriorEffect;                                // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WR1X[0x6];                                   // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEffectHovered;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFocusedEffectLost;                                     // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEffectFocused;                                         // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowNoneText;                                            // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void FocusOnChildTimer(bool* FocusAdded);
		void DetermineEffectsToDisplay();
		void OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter);
		void OnStatusEffectAdded(class AActor* Owner, class UStatusEffect* StatusEffect);
		void OnEffectRemoved(class AActor* Owner, class UStatusEffect* StatusEffect);
		void OnEffectAddedOrRemoved();
		void OnSubEffectHovered(class UStatusEffect* Effect);
		void HandleAddStatusEffect(class UStatusEffect* StatusEffect, bool AddedThisFrame);
		void OnSubEffectFocused(class UStatusEffect* Effect);
		void OnGlobalColorChange();
		void Construct();
		void OnStatusEffectRemovalComplete(class UUI_StatusEffectTimer_C* UI_StatusEffectPip);
		void ExecuteUbergraph_UI_StatusEffectTimerRow(int32_t EntryPoint);
		void OnEffectFocused__DelegateSignature(class UStatusEffect* StatusEffect);
		void OnFocusedEffectLost__DelegateSignature();
		void OnEffectHovered__DelegateSignature(class UStatusEffect* StatusEffect);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
