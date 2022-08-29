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
	 * WidgetBlueprintGeneratedClass UI_MapMarker.UI_MapMarker_C
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class UUI_MapMarker_C : public UMapMarkerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              MarkerImage;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FGlobalVariableReference                            Found_Burgle_Global;                                     // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		struct FSlateBrush GetDescriptionWindowIcon();
		void RefreshVisuals();
		void OnGlobalColorChange();
		void SetMarkerColor();
		void ExecuteUbergraph_UI_MapMarker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
