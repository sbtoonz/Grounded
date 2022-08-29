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
	 * WidgetBlueprintGeneratedClass UI_BaseNotification.UI_BaseNotification_C
	 * Size -> 0x002C (FullSize[0x02A4] - InheritedSize[0x0278])
	 */
	class UUI_BaseNotification_C : public UGameUserWidget
	{
	public:
		float                                                      TimeLeftToShow;                                          // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          YouDiscoveredString;                                     // 0x027C(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          OtherDiscoveredString;                                   // 0x028C(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       OutroStarted;                                            // 0x029C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I92H[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDisplayTime;                                      // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetIcon(class UObject** Image, struct FSlateBrush* IconBrush);
		void TryPlayOutro();
		void IsReadyForOutro(bool* IsReady);
		void GetTitleTextForPlayer(class APlayerState* Player, class FText* Title);
		void GetAssociatedItemRow(struct FDataTableRowHandle* RowHandle);
		void PlayOutro();
		void HandleNotificationAnimEnd();
		void PlayIntroduction();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
