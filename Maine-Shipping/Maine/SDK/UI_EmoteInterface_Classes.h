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
	 * WidgetBlueprintGeneratedClass UI_EmoteInterface.UI_EmoteInterface_C
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UUI_EmoteInterface_C : public UUI_RadialMenuInterface_C
	{
	public:
		class UUI_EmoteRadialMenu_C*                               UI_EmoteRadialMenu;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UWidget* GetDefaultUserFocus();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
