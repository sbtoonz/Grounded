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
	 * WidgetBlueprintGeneratedClass UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C
	 * Size -> 0x0018 (FullSize[0x0330] - InheritedSize[0x0318])
	 */
	class UUI_HUD_DestroyStructure_C : public UHUDDestroyStructureWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             HolderBG;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 SupportTitle;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		float GetRecyleValue();
		void GetCancelFillPercent(float* FillValue);
		void OnGlobalColorChange();
		void UpdateData();
		void Construct();
		void ExecuteUbergraph_UI_HUD_DestroyStructure(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
