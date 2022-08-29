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
	 * WidgetBlueprintGeneratedClass UI_NotificationHelper.UI_NotificationHelper_C
	 * Size -> 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
	 */
	class UUI_NotificationHelper_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NotificationIntro;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              NotificationItemIcon;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFadeoutComplete;                                       // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsFadingOut;                                             // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0ZWI[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 Item;                                                    // 0x02B0(0x0010) Edit, BlueprintVisible, NoDestructor
		int32_t                                                    ItemCount;                                               // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFadingIn;                                              // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DestroyOnFadeOut;                                        // 0x02C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36T5[0x2];                                   // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          FormatLocString;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		struct FLinearColor Get_NotificationItemIcon_ColorAndOpacity_1();
		class FText GetHelperText();
		struct FSlateColor Get_TextBlock_0_ColorAndOpacity_1();
		void PlayIntroduction();
		void SetItemPickupCount(const struct FDataTableRowHandle& Item, int32_t ItemCount);
		void FadeOut();
		void SetText(const class FText& Text, const struct FColor& Color);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnGlobalColorChange();
		void OnCharacterRespawn(class APlayerController* Controller);
		void OnInventoryChanged();
		void ExecuteUbergraph_UI_NotificationHelper(int32_t EntryPoint);
		void OnFadeoutComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
