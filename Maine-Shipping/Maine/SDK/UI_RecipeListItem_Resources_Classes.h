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
	 * WidgetBlueprintGeneratedClass UI_RecipeListItem_Resources.UI_RecipeListItem_Resources_C
	 * Size -> 0x0000 (FullSize[0x0375] - InheritedSize[0x0375])
	 */
	class UUI_RecipeListItem_Resources_C : public UUI_RecipeListItem_Base_C
	{
	public:
		void SetDisabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton);
		void SetEnabledStyle(class UTextBlock** ItemText, class UButton** RecipeButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
