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
	 * WidgetBlueprintGeneratedClass UI_NotificationLog.UI_NotificationLog_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UUI_NotificationLog_C : public UNotificationLogBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVerticalBox*                                        LogList;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<float>                                              TemporaryNotificationTimers;                             // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TemporaryNotificationDisplayTime;                        // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRightAligned;                                          // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IK3R[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Notification_C*                                  ToggleNotification;                                      // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddStashNotification(const struct FDataTableRowHandle& ItemRowHandle, int32_t Count);
		void RemoveTemporaryNotificationReference(class UUI_Notification_C* NotificationIn, class UUI_Notification_C** Notification);
		void AddToggleNotification(const class FText& Message, const struct FColor& Color, class UTexture2D* MessageIcon);
		void AddGenericNotification(const class FText& Message, const struct FColor& Color, class UTexture2D* MessageIcon);
		void InsertNotification(class UUI_Notification_C* Notification);
		void FindMatchingPickupNotification(const struct FDataTableRowHandle& Item, class UUI_Notification_C** Notification, int32_t* NotificationIndex);
		void AddPickupNotification(const struct FDataTableRowHandle& Item, int32_t Count);
		void RemoveTemporaryNotification(int32_t Index, class UUI_Notification_C** Notification);
		void CreateNewNotification(bool Temp, class UUI_Notification_C** NewNoticiation);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_NotificationLog(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
