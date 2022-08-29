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
	 * WidgetBlueprintGeneratedClass UI_HeaderText.UI_HeaderText_C
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class UUI_HeaderText_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 TextBlockBase;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          LocalizedString;                                         // 0x0290(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void SetLocalizedString(const struct FLocString& LocString);
		void SetLargeFont();
		void SetText(const class FText& InText);
		struct FSlateColor GetHeaderColor();
		void OnGlobalColorChange();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void EventLargeFonts(bool NewValue);
		void ExecuteUbergraph_UI_HeaderText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
