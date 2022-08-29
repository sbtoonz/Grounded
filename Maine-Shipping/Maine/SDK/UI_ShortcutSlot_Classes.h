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
	 * WidgetBlueprintGeneratedClass UI_ShortcutSlot.UI_ShortcutSlot_C
	 * Size -> 0x0011 (FullSize[0x045A] - InheritedSize[0x0449])
	 */
	class UUI_ShortcutSlot_C : public UUI_BaseSlot_C
	{
	public:
		unsigned char                                              UnknownData_DA14[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		ERadialShortcut                                            Shortcut;                                                // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShortcutSet;                                             // 0x0459(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void Construct();
		void SetIconBrush();
		void Destruct();
		void SetShortcut(ERadialShortcut Shortcut);
		void ExecuteUbergraph_UI_ShortcutSlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
