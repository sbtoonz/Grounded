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
	 * WidgetBlueprintGeneratedClass UI_HUD_CommunicationBox.UI_HUD_CommunicationBox_C
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UUI_HUD_CommunicationBox_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		struct FSlateColor GetTextColor();
		struct FLinearColor GetBGColor();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_HUD_CommunicationBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
