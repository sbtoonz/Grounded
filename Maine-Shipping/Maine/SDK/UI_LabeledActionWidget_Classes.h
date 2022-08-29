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
	 * WidgetBlueprintGeneratedClass UI_LabeledActionWidget.UI_LabeledActionWidget_C
	 * Size -> 0x0036 (FullSize[0x02AE] - InheritedSize[0x0278])
	 */
	class UUI_LabeledActionWidget_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ULocalizedTextBlock*                                 ControlText;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               ControlWidget;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                ActionName;                                              // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AxisPositive;                                            // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowMouseKeyboardControls;                               // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowGamepadControls;                                     // 0x029A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F9BJ[0x1];                                   // 0x029B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLocString                                          LocalizedText;                                           // 0x029C(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		EGlobalColor                                               ControlColor;                                            // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGlobalColor                                               LabelColor;                                              // 0x02AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetLargeFont();
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void OnGlobalColorChange();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void EventLargeFonts(bool NewValue);
		void ExecuteUbergraph_UI_LabeledActionWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
