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
	 * WidgetBlueprintGeneratedClass UI_HotBarRadialHeaderButton.UI_HotBarRadialHeaderButton_C
	 * Size -> 0x022C (FullSize[0x04E8] - InheritedSize[0x02BC])
	 */
	class UUI_HotBarRadialHeaderButton_C : public UUI_RadialHeaderButton_C
	{
	public:
		unsigned char                                              UnknownData_DELI[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FSlateBrush                                         HotPocketBrush;                                          // 0x02C8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         InventoryRow1Brush;                                      // 0x0350(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         InventoryRow2Brush;                                      // 0x03D8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         InventoryRow3Brush;                                      // 0x0460(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FSlateColor GetTitleTextColor();
		struct FLinearColor GetCategoryColor();
		void SetData(int32_t CategoryIndex, int32_t PageCount, const class FText& CategoryName);
		void ExecuteUbergraph_UI_HotBarRadialHeaderButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
