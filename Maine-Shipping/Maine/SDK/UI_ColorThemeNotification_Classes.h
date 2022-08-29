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
	 * WidgetBlueprintGeneratedClass UI_ColorThemeNotification.UI_ColorThemeNotification_C
	 * Size -> 0x0054 (FullSize[0x02F8] - InheritedSize[0x02A4])
	 */
	class UUI_ColorThemeNotification_C : public UUI_BaseNotification_C
	{
	public:
		unsigned char                                              UnknownData_X06C[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    ObjectiveComplete;                                       // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ObjectiveChanged;                                        // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          FoundText;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemText;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      KeyItemHorizontalBox;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             PlayerNameBG;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      PlayerNameHorizontalBox;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              ColorThemeData;                                          // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          ScabIcon;                                                // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTUI_ColorThemeNotification_1();
		void GetIcon(class UObject** Image, struct FSlateBrush* IconBrush);
		struct FLinearColor GetItemTextShadowColor();
		struct FLinearColor GetNameBGColor();
		struct FLinearColor GetAttentionSpinColor();
		struct FSlateColor GetTextColor();
		struct FLinearColor GetBGColor();
		void SetData(class UClass* ColorTheme, class ASurvivalPlayerState* SurvivalPlayerState);
		void SequenceEvent_1();
		void PlayOutro();
		void PlayIntroduction();
		void ExecuteUbergraph_UI_ColorThemeNotification(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
