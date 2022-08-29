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
	 * WidgetBlueprintGeneratedClass UI_PointOfInterestNotificationFriend.UI_PointOfInterestNotificationFriend_C
	 * Size -> 0x005D (FullSize[0x0301] - InheritedSize[0x02A4])
	 */
	class UUI_PointOfInterestNotificationFriend_C : public UUI_BaseNotification_C
	{
	public:
		unsigned char                                              UnknownData_45GT[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ObjectiveComplete;                                       // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ObjectiveChanged;                                        // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UGameTextBlock*                                      FoundText;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LocationIcon;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      LocationNameB;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      LocationNameG;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      LocationNameR;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      PlayerNameHorizontalBox;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_3;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPointOfInterestDataAsset*                           PointOfInterestData;                                     // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMapEntryType                                              EntryType;                                               // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTUI_PointOfInterestNotificationFriend_1();
		void GetIcon(class UObject** Image, struct FSlateBrush* IconBrush);
		struct FLinearColor GetItemTextShadowColor();
		struct FLinearColor GetNameBGColor();
		struct FLinearColor GetAttentionSpinColor();
		struct FSlateColor GetTextColor();
		struct FLinearColor GetBGColor();
		void SetData(class UPointOfInterestDataAsset* PointOfInterest, class ASurvivalPlayerState* SurvivalPlayerState);
		void OnLoaded_01F70C494080528415A5329E1CE9E8B6(class UObject* Loaded);
		void SequenceEvent_1();
		void SequenceEvent_2();
		void PlayOutro();
		void PlayIntroduction();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_PointOfInterestNotificationFriend(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
