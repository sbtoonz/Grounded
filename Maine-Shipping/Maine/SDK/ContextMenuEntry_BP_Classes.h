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
	 * WidgetBlueprintGeneratedClass ContextMenuEntry_BP.ContextMenuEntry_BP_C
	 * Size -> 0x0130 (FullSize[0x03C8] - InheritedSize[0x0298])
	 */
	class UContextMenuEntry_BP_C : public UContextMenuEntryWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UGameTextBlock*                                      ButtonText;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDActionWidget_C*                               UI_HUDActionWidget;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Enabled;                                                 // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Hovered;                                                 // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T4NT[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HoveredBtn;                                              // 0x02B8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         UnhoveredBtn;                                            // 0x0340(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* GetToolTip();
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		void UpdateColors();
		void NormalButtonUnhover();
		void NormalButtonHover();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetHovered(bool Hovered);
		void BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void OnSetIsValid(bool bEnabled);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_ContextMenuEntry_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
