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
	 * WidgetBlueprintGeneratedClass UI_ScannerBraceletLabel.UI_ScannerBraceletLabel_C
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UUI_ScannerBraceletLabel_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ULocalizedTextBlock*                                 SCABSubtitleText;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_ScannerBraceletLabel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
