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
	 * BlueprintGeneratedClass BP_Base_PowerTerminal.BP_Base_PowerTerminal_C
	 * Size -> 0x00E0 (FullSize[0x0368] - InheritedSize[0x0288])
	 */
	class ABP_Base_PowerTerminal_C : public ASwitch
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     LeverLoopAudio;                                          // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_BatteryBackUp;                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_SwitchHandle;                                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     PowerSwitchRoot;                                         // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     TerminalSFXLoop;                                         // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_HousePower;                            // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_HousePowerDiverted;                    // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_TerminalInteractable;                  // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_SFX_PItch_Pitch_3192A9C143F03F51F0529E9D4715ADFE; // 0x02E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_SFX_PItch__Direction_3192A9C143F03F51F0529E9D4715ADFE; // 0x02EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R8TR[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_SFX_PItch;                                      // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_HandleRot_Driver_7A987BD94B4A2BFB25735A95CA9056FD; // 0x02F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_HandleRot__Direction_7A987BD94B4A2BFB25735A95CA9056FD; // 0x02FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GVTU[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_HandleRot;                                      // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FLocString                                          InteractionText_Reboot;                                  // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          InteractionText_Login;                                   // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScreenDMI;                                               // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_PowerGridTerminal_C*                             UserWidgetObjectRef;                                     // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InteractionBlocked;                                      // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsReadyForAudio;                                         // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y6JK[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Lever_Down_SFX;                                          // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Lever_Up_SFX;                                            // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          LeverLoopSFX;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ComputerSound;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ScreenPaused;                                            // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5XED[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentlyShownScreenIndex;                               // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RedrawScreen();
		void GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText);
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
		void UserConstructionScript();
		void Timeline_HandleRot__FinishedFunc();
		void Timeline_HandleRot__UpdateFunc();
		void Timeline_SFX_PItch__FinishedFunc();
		void Timeline_SFX_PItch__UpdateFunc();
		void OnOpenStateChanged(bool IsOpen, class AActor* ActorInstigator);
		void EnableScreenDraw();
		void DisableScreenDraw();
		void MakeScreenDMI();
		void HideAllScreens();
		void SetUserWidgetObjectReference();
		void ShowStart();
		void ShowLocked();
		void ShowLockedFlash();
		void ShowUnlocked();
		void ReceiveBeginPlay();
		void ShowWaiting();
		void OnUpdateVisualState(bool IsOpen);
		void HandleOpenAudio();
		void HandleClosedAudio();
		void TimelineFinished();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__ConditionalToggle_BatteryBackUp_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__ConditionalToggle_HousePower_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__ConditionalToggle_HousePowerDiverted_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void ExecuteUbergraph_BP_Base_PowerTerminal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
