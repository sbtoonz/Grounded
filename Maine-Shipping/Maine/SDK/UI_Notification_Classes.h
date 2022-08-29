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
	 * WidgetBlueprintGeneratedClass UI_Notification.UI_Notification_C
	 * Size -> 0x0056 (FullSize[0x02CE] - InheritedSize[0x0278])
	 */
	class UUI_Notification_C : public UUINotificationBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NotificationIntro;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             BorderBacking;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NotificationItemIcon;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFadeoutComplete;                                       // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsFadingOut;                                             // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q64Z[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 Item;                                                    // 0x02B8(0x0010) Edit, BlueprintVisible, NoDestructor
		int32_t                                                    ItemCount;                                               // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFadingIn;                                              // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DestroyOnFadeOut;                                        // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetStashCount(const struct FDataTableRowHandle& ItemRowHandle, int32_t Count);
		void SetBackgroundVisibility();
		void SetLargeFont();
		void PlayIntroduction();
		void SetItemPickupCount(const struct FDataTableRowHandle& Item, int32_t RecentPickupItemCount, int32_t TotalItemCount);
		void FadeOut();
		void SetText(const class FText& Text, const struct FColor& Color);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnGlobalColorChange();
		void Event_On_Large_Text(bool FontSize);
		void Background_Changed(bool NewValue);
		void Destruct();
		void ExecuteUbergraph_UI_Notification(int32_t EntryPoint);
		void OnFadeoutComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
