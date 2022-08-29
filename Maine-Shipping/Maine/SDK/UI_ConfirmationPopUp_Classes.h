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
	 * WidgetBlueprintGeneratedClass UI_ConfirmationPopUp.UI_ConfirmationPopUp_C
	 * Size -> 0x0070 (FullSize[0x0318] - InheritedSize[0x02A8])
	 */
	class UUI_ConfirmationPopUp_C : public UWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              BGFill;                                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          BodyText;                                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BoxBorder;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             HeaderBorder;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameTextBlock*                                      HeaderText;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  NoButton;                                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  OKButton;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             WayBG;                                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BottomButton_C*                                  YesButton;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnAccept;                                                // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetLargeText();
		class UWidget* GetDefaultUserFocus();
		void SetButtonsOK();
		void SetCustomButtonsTwo(const struct FConfirmationButtonConfig& Button1, const struct FConfirmationButtonConfig& Button2);
		bool HandleKeyEventChord(const struct FInputChord& InChord);
		void SetText(const class FString& TitleText, const class FString& BodyText, bool OkButtonOnly);
		void BndEvt__OKBtn_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature();
		void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature();
		void HandleOkay();
		void HandleBack();
		void BndEvt__OKButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnGlobalColorChange();
		void Construct();
		void EventLargeFonts(bool NewValue);
		void Destruct();
		void ExecuteUbergraph_UI_ConfirmationPopUp(int32_t EntryPoint);
		void OnCancel__DelegateSignature();
		void OnAccept__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
