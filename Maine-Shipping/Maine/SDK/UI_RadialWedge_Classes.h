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
	 * WidgetBlueprintGeneratedClass UI_RadialWedge.UI_RadialWedge_C
	 * Size -> 0x0080 (FullSize[0x02F8] - InheritedSize[0x0278])
	 */
	class UUI_RadialWedge_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    HighlightLoopAnim;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HoverBounds1;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HoverBounds2;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HoverBounds3;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HoverBounds4;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HoverBounds5;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ItemWedge;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedNugget;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WedgeBG;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SlotIndex;                                               // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R1AK[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__PageDotButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__PageDotButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void SetWedgeActive(bool Active);
		void BndEvt__ItemWedge_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void SetVisible(bool IsVisible);
		void SetWedgeBGColor(const struct FLinearColor& Color);
		void Construct();
		void BndEvt__HoverBounds1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__HoverBounds2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__HoverBounds3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__HoverBounds4_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__HoverBounds5_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__HoverBounds1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HoverBounds2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HoverBounds3_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HoverBounds4_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HoverBounds5_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_RadialWedge(int32_t EntryPoint);
		void OnPressed__DelegateSignature(class UUI_RadialWedge_C* Wedge);
		void OnHovered__DelegateSignature(class UUI_RadialWedge_C* Wedge);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
