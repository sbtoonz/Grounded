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
	 * WidgetBlueprintGeneratedClass UI_TutorialPrompt.UI_TutorialPrompt_C
	 * Size -> 0x0101 (FullSize[0x0379] - InheritedSize[0x0278])
	 */
	class UUI_TutorialPrompt_C : public UGameUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    HideTutorial;                                            // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowTutorial;                                            // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      ActionControlBox;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ControlsBorder;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             TutorialBorder;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TutorialImage;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             TutorialImageBorder;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TutorialText;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      TimeUntilHide;                                           // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Visible;                                                 // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7CRV[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         QueuedTutorials;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDataTableRowHandle                                 CurrentPlayingTutorialRowHandle;                         // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTutorialData                                       CurrentPlayingTutorialData;                              // 0x02E8(0x0090) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DelayOnNextTutorial;                                     // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void NewFunction_1();
		void GetFontSize();
		void GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose);
		struct FSlateColor GetTextandIconColor();
		void Construct();
		void SetTutorialData(const struct FDataTableRowHandle& TutorialRowHandle);
		void PlayShowAnimation();
		void PlayHideAnimation();
		void QueueTutorial(const struct FDataTableRowHandle& TutorialRowHandle);
		void BindPlayerEvents(class ASurvivalPlayerState* PlayerState);
		void TutorialComplete(const struct FDataTableRowHandle& TutorialRowHandle);
		void OnTutorialDisplayComplete();
		void TryDequeueTutorial();
		void OnGlobalColorChange();
		void ExecuteUbergraph_UI_TutorialPrompt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
