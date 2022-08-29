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
	 * WidgetBlueprintGeneratedClass UI_RecipeListItem_Craftable.UI_RecipeListItem_Craftable_C
	 * Size -> 0x000B (FullSize[0x0380] - InheritedSize[0x0375])
	 */
	class UUI_RecipeListItem_Craftable_C : public UUI_RecipeListItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_BQHV[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0378(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void SetDisabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton);
		void SetEnabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_RecipeListItem_Craftable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
