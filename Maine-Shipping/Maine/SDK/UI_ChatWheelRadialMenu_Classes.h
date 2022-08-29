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
	 * WidgetBlueprintGeneratedClass UI_ChatWheelRadialMenu.UI_ChatWheelRadialMenu_C
	 * Size -> 0x0018 (FullSize[0x0478] - InheritedSize[0x0460])
	 */
	class UUI_ChatWheelRadialMenu_C : public UUI_RadialMenu_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<struct FDataTableRowHandle>                         ChatOptionsForCategory;                                  // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FLinearColor GetRadialBGColor();
		void GetCategoryIcon(int32_t Category, class UTexture2D** Texture);
		void SetupChatOptionsForCategory();
		void GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count);
		void PopulateChatCategories();
		void Populate();
		void CreateInitialSlots();
		void PopulateCategories();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_ChatWheelRadialMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
