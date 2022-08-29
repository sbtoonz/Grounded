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
	 * WidgetBlueprintGeneratedClass UI_KeyItemNotification.UI_KeyItemNotification_C
	 * Size -> 0x007C (FullSize[0x0320] - InheritedSize[0x02A4])
	 */
	class UUI_KeyItemNotification_C : public UUI_BaseNotification_C
	{
	public:
		unsigned char                                              UnknownData_K3PF[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ObjectiveComplete;                                       // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ObjectiveChanged;                                        // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              AttentionSpin;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FoundText;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        IconSpin;                                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemIcon;                                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemText;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      KeyItemHorizontalBox;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             NotificationBG;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      PlayerNameHorizontalBox;                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpinBG;                                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_RecipeLearnedNotification_C*                     UI_RecipeLearnedNotification;                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0310(0x0010) Edit, BlueprintVisible, NoDestructor

	public:
		void SequenceEvent__ENTRYPOINTUI_KeyItemNotification_1();
		void IsReadyForOutro(bool* IsReady);
		void GetIcon(class UObject** Image, struct FSlateBrush* IconBrush);
		void GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle);
		struct FLinearColor GetItemTextShadowColor();
		struct FLinearColor GetNameBGColor();
		struct FLinearColor GetAttentionSpinColor();
		struct FSlateColor GetTextColor();
		struct FLinearColor GetBGColor();
		void SetData(const struct FDataTableRowHandle& ItemAquired, class ASurvivalPlayerState* SurvivalPlayerState, TArray<struct FDataTableRowHandle>* RecipesLearned);
		void SequenceEvent_1();
		void PlayIntroduction();
		void PlayOutro();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_KeyItemNotification(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
