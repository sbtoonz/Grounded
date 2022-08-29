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
	 * WidgetBlueprintGeneratedClass UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class UUI_PlaceBuildingActionWidget_C : public UActionWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             Holder;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		struct FLinearColor GetIconColor();
		struct FLinearColor Get_GamepadHolder_BrushColor();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_PlaceBuildingActionWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
