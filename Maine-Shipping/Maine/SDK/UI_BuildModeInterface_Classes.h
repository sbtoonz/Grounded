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
	 * WidgetBlueprintGeneratedClass UI_BuildModeInterface.UI_BuildModeInterface_C
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class UUI_BuildModeInterface_C : public UUI_RadialMenuInterface_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UUI_BuildingRadialMenu_C*                            UI_BuildingRadialMenu;                                   // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UWidget* GetDefaultUserFocus();
		void Construct();
		void RefreshWidget();
		void Destruct();
		void ExecuteUbergraph_UI_BuildModeInterface(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
