﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass UI_TerminalBG.UI_TerminalBG_C
	 * Size -> 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
	 */
	class UUI_TerminalBG_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              BG;                                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ExpandoNewBottom;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ExpandoTop;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          SelectedItemGrid;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnQuickItemTypeSelected;                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UImage*                                              NewVar_1;                                                // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FLinearColor GetMaterialBColor();
		struct FLinearColor GetAccentThree();
		struct FSlateColor GetSCABBaseColor();
		struct FSlateColor GetGlobalBGDarkener();
		struct FSlateColor GetGlobalBG();
		struct FSlateColor GetAccentTwo();
		struct FSlateColor GetAccentOne();
		struct FSlateColor GetHeaderColor();
		struct FSlateColor GetSubheaderColor();
		void Construct();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_TerminalBG(int32_t EntryPoint);
		void OnQuickItemTypeSelected__DelegateSignature(EHotBarQuickSlotType QuickSlotType, const struct FDataTableRowHandle& ItemRowHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif