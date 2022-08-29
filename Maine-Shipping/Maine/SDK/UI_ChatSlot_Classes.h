﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass UI_ChatSlot.UI_ChatSlot_C
	 * Size -> 0x000F (FullSize[0x0458] - InheritedSize[0x0449])
	 */
	class UUI_ChatSlot_C : public UUI_BaseSlot_C
	{
	public:
		unsigned char                                              UnknownData_GC03[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void Construct();
		void SetIconBrush();
		void SetDataRowHandle(const struct FDataTableRowHandle& DataRowHandle);
		void ExecuteUbergraph_UI_ChatSlot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif