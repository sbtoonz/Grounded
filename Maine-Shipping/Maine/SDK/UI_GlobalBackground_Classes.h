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
	 * WidgetBlueprintGeneratedClass UI_GlobalBackground.UI_GlobalBackground_C
	 * Size -> 0x0038 (FullSize[0x02B0] - InheritedSize[0x0278])
	 */
	class UUI_GlobalBackground_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    BootupAnim;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             BGDarkener;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Pattern;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          SelectedItemGrid;                                        // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnQuickItemTypeSelected;                                 // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
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
		void ExecuteUbergraph_UI_GlobalBackground(int32_t EntryPoint);
		void OnQuickItemTypeSelected__DelegateSignature(EHotBarQuickSlotType QuickSlotType, const struct FDataTableRowHandle& ItemRowHandle);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
