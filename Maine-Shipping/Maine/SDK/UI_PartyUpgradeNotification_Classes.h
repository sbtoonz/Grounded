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
	 * WidgetBlueprintGeneratedClass UI_PartyUpgradeNotification.UI_PartyUpgradeNotification_C
	 * Size -> 0x0054 (FullSize[0x02F8] - InheritedSize[0x02A4])
	 */
	class UUI_PartyUpgradeNotification_C : public UUI_BaseNotification_C
	{
	public:
		unsigned char                                              UnknownData_IVZX[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ObjectiveComplete;                                       // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ObjectiveChanged;                                        // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          FoundText;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemIcon;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewItemBG;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             NotificationBG;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             PlayerNameBG;                                            // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGameplayTag                                        UpgradeGameplayTag;                                      // 0x02F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTUI_PartyUpgradeNotification_1();
		void GetUpgradeIcon(const struct FGameplayTag& GameplayTag, class UTexture2D** Icon);
		void GetUpgradeName(const struct FGameplayTag& GameplayTag, class FString* Name);
		void GetIcon(class UObject** Image, struct FSlateBrush* IconBrush);
		void GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle);
		void SetPlayerText(class APlayerState* Player, bool IsRecipeUnlock);
		void SetData(const struct FGameplayTag& ItemStackTag, class ASurvivalPlayerState* SurvivalPlayerState);
		struct FLinearColor Get_Text_ShadowColorAndOpacity_1();
		struct FLinearColor Get_PlayerNameBG_BrushColor_1();
		struct FLinearColor Get_NewItemBG_ColorAndOpacity_2();
		struct FLinearColor Get_NewItemBG_ColorAndOpacity_1();
		struct FLinearColor Get_ExclamitoryIcon_ColorAndOpacity_1();
		struct FSlateColor Get_Text_ColorAndOpacity_1();
		struct FLinearColor GetResourceColor();
		void SequenceEvent_1();
		void PlayIntroduction();
		void PlayOutro();
		void ExecuteUbergraph_UI_PartyUpgradeNotification(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
