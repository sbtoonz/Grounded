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
	 * WidgetBlueprintGeneratedClass UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C
	 * Size -> 0x000E (FullSize[0x03A8] - InheritedSize[0x039A])
	 */
	class UUI_MapLegendResourceSurveyEntry_C : public UUI_MapLegendEntry_C
	{
	public:
		unsigned char                                              UnknownData_6ZUQ[0x6];                                   // 0x039A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void HandleSelectInput(bool* bHandled);
		void UpdateDisplayName();
		void OnInitialized();
		void Destruct();
		void HandleSurveyedResourceChanged(class UResourceSurveyComponent* Sender, const struct FDataTableRowHandle& ResourceHandle);
		void HandleResourceSurveyVisibleChanged(class ASurvivalPlayerState* Sender, bool bResourceSurveyVisible);
		void ExecuteUbergraph_UI_MapLegendResourceSurveyEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
