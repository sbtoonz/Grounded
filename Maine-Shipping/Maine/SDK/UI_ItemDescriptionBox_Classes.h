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
	 * WidgetBlueprintGeneratedClass UI_ItemDescriptionBox.UI_ItemDescriptionBox_C
	 * Size -> 0x00C0 (FullSize[0x0338] - InheritedSize[0x0278])
	 */
	class UUI_ItemDescriptionBox_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             AnalyzedStatus;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 AnalyzedStatusText;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DamageIcon;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DescBG;                                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DescFG;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaineRichTextBlock*                                 DescriptionRichText;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 EffectsText;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EnhancementLevel;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HeaderBG;                                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RatingGroup_C*                                   ItemRatingContainer;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaineRichTextBlock*                                 MaineRichTextBlock_71;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RatingGroup_C*                                   SpeedRatingContainer;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        StatusEffectList;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RatingGroup_C*                                   StunRatingContainer;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RatingGroup_C*                                   SturdinessRatingContainer;                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TopPanel;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ItemDescHeader_C*                                UI_ItemDescHeader;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_StatusEffectWidget_C*                            UI_StatusEffectDisplay;                                  // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TierDescription_C*                               UI_TierDescription;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 UnanalyzedStatusText;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RatingGroup_C*                                   WeightRatingContainer;                                   // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          TierLocString;                                           // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ClearItemRatingInfo();
		void SetItemRatingInfoArmor(const struct FBaseItemData& ItemData, class UItem* Item);
		void SetItemRatingInfoWeapon(const struct FBaseItemData& ItemData, class UItem* Item);
		void SetEnhancementLevel(class UItem* Item);
		void GetDamageType(const struct FBaseItemData& ItemData, class UItem* Item, class UClass** DamageType);
		void GetItemDamageMultiplier(class UItem* Item, float* Multiplier);
		void SetBuildingRatingInfo(const struct FDataTableRowHandle& BuildingRowHandle);
		void SetLargeText();
		void SetAnalyzerStatus(const struct FDataTableRowHandle& ItemRowHandle);
		void SetDamageType(const struct FBaseItemData& ItemData, class UItem* Item);
		void SetItemRatingInfo(const struct FDataTableRowHandle& ItemRowHandle, class UItem* Item);
		struct FSlateColor GetBasicTextColor();
		struct FSlateColor GetTierTextColor();
		struct FLinearColor GetTierColor();
		struct FLinearColor GetDescBGColor();
		struct FLinearColor GetSEBGColor();
		struct FLinearColor GetHeaderBGColor();
		struct FSlateColor GetTextHeaderColor();
		struct FLinearColor GetDescriptionBGColor();
		struct FLinearColor GetDescriptionFGColor();
		void Construct();
		void SetDescriptionRowHandle(const struct FDataTableRowHandle& ItemRowHandle);
		void SetDescriptionDataForItemRowHandle(const struct FDataTableRowHandle& ItemRowHandle);
		void OnGlobalColorChange();
		void EventOnLargeText(bool NewValue);
		void Destruct();
		void SetDescriptionDataForBuildingRowHandle(const struct FDataTableRowHandle& BuildingHandle);
		void SetDescriptionDataForItem(class UItem* Item);
		void SetDescriptionDataForItemHelper(const struct FDataTableRowHandle& ItemRowHandle, class UItem* Item);
		void ExecuteUbergraph_UI_ItemDescriptionBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
