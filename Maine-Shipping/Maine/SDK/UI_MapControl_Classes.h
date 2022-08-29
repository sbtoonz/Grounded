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
	 * WidgetBlueprintGeneratedClass UI_MapControl.UI_MapControl_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UUI_MapControl_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UUI_HUDActionWidget_C*                               Control;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULocalizedTextBlock*                                 Text;                                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLocString                                          ControlName;                                             // 0x0290(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		class FName                                                ActionName;                                              // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void OnGlobalColorChange();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_MapControl(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
