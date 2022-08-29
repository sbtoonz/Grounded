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
	 * WidgetBlueprintGeneratedClass UI_EquippedWeapon.UI_EquippedWeapon_C
	 * Size -> 0x0120 (FullSize[0x03E0] - InheritedSize[0x02C0])
	 */
	class UUI_EquippedWeapon_C : public UHUDWeaponInfoWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ItemWarningAnimation;                                    // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ItemEquippedAnimation;                                   // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BreakAnimation;                                          // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          AmmoCount;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              AmmoCountBG;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              AmmoIcon;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquipmentAction_C*                               AttackAction;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG;                                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 BreakWarningText;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CanteenBG;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            CanteenHolder;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CanteenText;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquipmentAction_C*                               ContextualAction;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ControlHolder;                                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CountBG;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_DurabilityFill_C*                                DurabilityElement;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DurabilityWarning;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EnhancementBG;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EnhancementLevel;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HolderPanel;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InvCount;                                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_EquipmentAction_C*                               ThrowAction;                                             // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TierHUD_C*                                       UI_TierHUD;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WarningCircle;                                           // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WpnBreak;                                                // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DrinkBrush;                                              // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          DrinkText;                                               // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          AmmoSwapString;                                          // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          BlockString;                                             // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          ItemBrokenString;                                        // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetAmmoIcon(const class FName& AmmoRowName);
		void DetermineAttackVisibility();
		void Determine_Canteen_Visibility();
		void GetItemIcon(class UObject** ItemIcon);
		void GetWeaponDamageVisibility();
		void SetUsesAmmoVisibility(class UItem* Item);
		void SetCountText(int32_t Count, class UTextBlock* TextBlock);
		void SetContextualInput(class UItem* Item);
		class FText GetAmmoName();
		class FText GetInvCount();
		struct FLinearColor GetAmmoSwapColor();
		struct FLinearColor GetWarningColor();
		void GetMainHandItem(class UItem** Item);
		struct FLinearColor GetBlockOrDrinkImgColor();
		void GetThrowVisibility();
		struct FLinearColor GetDarkener();
		struct FLinearColor GetDarkColor();
		struct FLinearColor GetDurabilityColor();
		struct FSlateColor GetTextColor();
		struct FLinearColor GetAccentTwo();
		class FText GetItemName();
		struct FSlateColor GetSelectedColor();
		struct FLinearColor GetBaseColor();
		void Construct();
		void SetEquippedItemDurability(float New_Ratio);
		void BindPlayerEvents();
		void OnEquipmentChanged();
		void OnItemBroken(class ASurvivalCharacter* Owner, class UItem* Item);
		void WidgetAnimationEvt_BreakAnimation_K2Node_WidgetAnimationEvent_1();
		void PlayItemEquippedAnimation();
		void PlayNoItemEquippedAnimation();
		void OnGlobalColorChange();
		void OnMainHandChanged(class UItem* ChangedItem);
		void OnItemCountChanged(int32_t ItemCount);
		void OnAmmoCountChanged(int32_t ItemCount);
		void OnItemPowerChanged(class UItem* Item);
		void OnDurabilityChanged(float NewRatio);
		void OnPowerChanged(float NewRatio);
		void EventUpdateCanteen();
		void EvaluateMainHandVIsuals();
		void OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void OnAmmoTypeChanged(const class FName& ItemName);
		void OnEnhancementLevelChanged(int32_t NewEnhancementLevel);
		void RefreshEnhancementVisuals();
		void ExecuteUbergraph_UI_EquippedWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
