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
	 * WidgetBlueprintGeneratedClass UI_HaulingPip.UI_HaulingPip_C
	 * Size -> 0x0120 (FullSize[0x0398] - InheritedSize[0x0278])
	 */
	class UUI_HaulingPip_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              PipImage;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         PipFilled;                                               // 0x0288(0x0088) Edit, BlueprintVisible
		struct FSlateBrush                                         PipEmpty;                                                // 0x0310(0x0088) Edit, BlueprintVisible

	public:
		void SetFilled(bool State);
		void PreConstruct(bool IsDesignTime);
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_HaulingPip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
