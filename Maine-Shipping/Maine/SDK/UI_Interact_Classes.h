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
	 * WidgetBlueprintGeneratedClass UI_Interact.UI_Interact_C
	 * Size -> 0x0E30 (FullSize[0x10A8] - InheritedSize[0x0278])
	 */
	class UUI_Interact_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NormalHold;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InteractionEnter;                                        // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UGameTextBlock*                                      AlternateInteractBlock;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CraftingRequirements_C*                          BuildingRequirements;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DisableAlphaOverlay;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 FullInventoryText;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GrabHand;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 HoldBlock;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HoldFill_C*                                      HoldFill;                                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        InputNugget;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               InputWidget;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      InteractionHolder;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InteractionTextBlock;                                    // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             KeypressHolder;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MissingIngredients;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             OnlyFill;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OriginalItem;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             OriginalItemBG;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ProcessingItem;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 ProcessingItemText;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProcessingProgress;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ProgressItemBG;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      SlashBlock;                                              // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         PickupBrush;                                             // 0x0338(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         EatBrush;                                                // 0x03C0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         DrinkBrush;                                              // 0x0448(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         CookBrush;                                               // 0x04D0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         RestBrush;                                               // 0x0558(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         BuildBrush;                                              // 0x05E0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         LightFireBrush;                                          // 0x0668(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         NoneBrush;                                               // 0x06F0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         DryingBrush;                                             // 0x0778(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class UCurveFloat*                                         HoldCurve;                                               // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         StorageBrush;                                            // 0x0808(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Deathbag;                                                // 0x0890(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      PreviousFillPercentage;                                  // 0x0918(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JG8H[0x4];                                   // 0x091C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          FillSound;                                               // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     FillSoundComponent;                                      // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentFillPercentage;                                   // 0x0930(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PNL8[0x4];                                   // 0x0934(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         CancelBrush;                                             // 0x0938(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         UnableToLightFireBrush;                                  // 0x09C0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ConversationBrush;                                       // 0x0A48(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ReviveBrush;                                             // 0x0AD0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MissingIngredientsBrush;                                 // 0x0B58(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         BusyBrush;                                               // 0x0BE0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ZiplineUse;                                              // 0x0C68(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ZiplineSnap;                                             // 0x0CF0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         SpinningBrush;                                           // 0x0D78(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         AddItemBrush;                                            // 0x0E00(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         MountBrush;                                              // 0x0E88(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         PetBrush;                                                // 0x0F10(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         PetHomeBrush;                                            // 0x0F98(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         SignBrush;                                               // 0x1020(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetInteractionTypeBrush(EInteractionType InteractionType, struct FSlateBrush* Brush);
		void GetIsVisibleMaster(bool* IsVisible);
		void RefreshItemProcessing();
		void GetInteractionInputVisibility(ESlateVisibility* Visibility);
		void IsInteractionEnabled(EInteractionChannel Channel, bool* State);
		void IsMissingIngredientsVisibility(EInteractionType InteractType, ESlateVisibility* Visibility);
		void GetInteractionOpacities();
		void GetInteractionSlashDisplay(ESlateVisibility* Visibility);
		void GetHoldInteractionVisibility(ESlateVisibility* Visibility);
		void GetPrimaryInteractionVisibility(ESlateVisibility* Visibility);
		class FText GetPrimaryInteractionDisplayName();
		class FText GetHoldInteractionDisplayName();
		class FText GetInteractionDisplayName();
		ESlateVisibility HoldKeyVis();
		void FillCircleEvent();
		void InteractionTypeToVisibility(EInteractionType InteractType, ESlateVisibility* Visibility);
		struct FSlateColor GetDarkener();
		struct FSlateColor Get_InventoryFull_ColorAndOpacity_1();
		struct FLinearColor GetAccentTwo();
		struct FSlateColor GetBasicTextColor();
		void GetInteractableInRange();
		ESlateVisibility GetInteractionControlVisibility();
		ESlateVisibility FacebuttonVisibility();
		struct FLinearColor GetFillColor();
		void IsAlsoHoldHappening(bool* Happening);
		ESlateVisibility Get_OnlyFill_Visibility_1();
		ESlateVisibility Get_AlsoFill_Visibility_1();
		ESlateVisibility GetVisibilityHoldFill();
		ESlateVisibility KeypressVisbility();
		ESlateVisibility Get_InputKey_Visibility_1();
		ESlateVisibility CanCancelVisibility();
		struct FSlateBrush Get_GrabHand_Brush_1();
		void RefreshBuildingRequirements();
		ESlateVisibility GetVisibilityForBuildingRequirements();
		class FText GetInputKeyText();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void On_Change_Interactable();
		void Refresh_UI();
		void BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* Player);
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_Interact(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
