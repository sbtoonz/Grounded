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
	 * WidgetBlueprintGeneratedClass UI_ShortcutRadialMenu.UI_ShortcutRadialMenu_C
	 * Size -> 0x0018 (FullSize[0x0478] - InheritedSize[0x0460])
	 */
	class UUI_ShortcutRadialMenu_C : public UUI_RadialMenu_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<ERadialShortcut>                                    Shortcuts;                                               // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FLinearColor GetDescColor();
		void GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count);
		void GetCategoryCount(int32_t* Count);
		void GetCategoryHeader_1(unsigned char Category, class UUI_BuildingRadialHeaderButton_C** CategoryHeader);
		void PopulateShortcutsCategories();
		struct FLinearColor GetRadialBGColor();
		void Construct();
		void Populate();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PopulateCategories();
		void CreateInitialSlots();
		void HandleCategoryChange(int32_t PreviousCategoryIndex);
		void ExecuteUbergraph_UI_ShortcutRadialMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
