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
	 * WidgetBlueprintGeneratedClass UI_ItemDescHeader.UI_ItemDescHeader_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UUI_ItemDescHeader_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ULocalizedTextBlock*                                 TextBlockBase;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          LocalizedString;                                         // 0x0288(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void SetLargeFont();
		void SetDescHeaderText(const class FString& HeaderString);
		struct FSlateColor GetHeaderColor();
		void Construct();
		void OnGlobalColorChange();
		void EventLargeFonts(bool NewValue);
		void Destruct();
		void ExecuteUbergraph_UI_ItemDescHeader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
