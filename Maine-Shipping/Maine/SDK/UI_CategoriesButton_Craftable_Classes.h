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
	 * WidgetBlueprintGeneratedClass UI_CategoriesButton_Craftable.UI_CategoriesButton_Craftable_C
	 * Size -> 0x000C (FullSize[0x0350] - InheritedSize[0x0344])
	 */
	class UUI_CategoriesButton_Craftable_C : public UUI_CategoriesButton_Base_C
	{
	public:
		unsigned char                                              UnknownData_3JKA[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void SetEnabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner);
		void SetDisabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_UI_CategoriesButton_Craftable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
