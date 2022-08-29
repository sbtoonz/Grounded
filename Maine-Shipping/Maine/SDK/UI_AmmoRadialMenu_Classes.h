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
	 * WidgetBlueprintGeneratedClass UI_AmmoRadialMenu.UI_AmmoRadialMenu_C
	 * Size -> 0x0018 (FullSize[0x0478] - InheritedSize[0x0460])
	 */
	class UUI_AmmoRadialMenu_C : public UUI_RadialMenu_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<class UItem*>                                       AmmoTypes;                                               // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetCategoryIcon(int32_t Category, class UTexture2D** Texture);
		void GetPageCountForCategory(int32_t CategoryIndex, int32_t* Count);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void HandleUseSelectedRadialSlot();
		void Populate();
		void ExecuteUbergraph_UI_AmmoRadialMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
