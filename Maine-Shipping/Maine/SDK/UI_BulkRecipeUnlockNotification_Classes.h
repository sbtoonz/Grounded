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
	 * WidgetBlueprintGeneratedClass UI_BulkRecipeUnlockNotification.UI_BulkRecipeUnlockNotification_C
	 * Size -> 0x00AD (FullSize[0x0351] - InheritedSize[0x02A4])
	 */
	class UUI_BulkRecipeUnlockNotification_C : public UUI_BaseNotification_C
	{
	public:
		unsigned char                                              UnknownData_GSFV[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    OutroAnim;                                               // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    IntroAnim;                                               // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          FoundText;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemIcon;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewItemBG;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             NotificationBG;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RecipeLearnedNotification_C*                     UI_RecipeLearnedNotification;                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          YouResearchLeveledString;                                // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          OtherResearchLeveledString;                              // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          YouPurchasedString;                                      // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          OtherPurchasedString;                                    // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          YouAchievedString;                                       // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          OtherAchievedString;                                     // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		ERecipeUnlockSource                                        Unlock_Source;                                           // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTUI_BulkRecipeUnlockNotification_1();
		void GetIcon(class UObject** Image, struct FSlateBrush* IconBrush);
		void IsReadyForOutro(bool* IsReady);
		void SetPlayerText(class APlayerState* Player, ERecipeUnlockSource RecipeUnlockSource);
		struct FLinearColor Get_Text_ShadowColorAndOpacity_1();
		struct FLinearColor Get_PlayerNameBG_BrushColor_1();
		void SetData(ERecipeUnlockSource UnlockSource, class ASurvivalPlayerState* SurvivalPlayerState, TArray<struct FDataTableRowHandle>* RecipesLearned, const class FString& DisplayName);
		void PlayIntroduction();
		void PlayOutro();
		void OnGlobalColorChange();
		void SequenceEvent_1();
		void Construct();
		void ExecuteUbergraph_UI_BulkRecipeUnlockNotification(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
