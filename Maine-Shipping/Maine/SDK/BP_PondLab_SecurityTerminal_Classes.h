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
	 * BlueprintGeneratedClass BP_PondLab_SecurityTerminal.BP_PondLab_SecurityTerminal_C
	 * Size -> 0x00F5 (FullSize[0x037D] - InheritedSize[0x0288])
	 */
	class ABP_PondLab_SecurityTerminal_C : public ASwitch
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         CT_DomeTerminalRebooted;                                 // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         CT_UnlockSecurityDoors;                                  // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         CT_BootUpDone;                                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     TerminalSFXLoop;                                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         CT_LowPowerWaitScreen;                                   // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         CT_UnlockedScreen;                                       // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         CT_LoginScreen;                                          // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FLocString                                          InteractionText_Reboot;                                  // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          InteractionText_Login;                                   // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScreenDMI;                                               // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_LANStatusTerminal_C*                             UserWidgetObjectRef;                                     // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InteractionBlocked;                                      // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E1KR[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BiodomeDoor[0x10];                                       // 0x0310(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Hatch[0x10];                                             // 0x0320(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class USoundBase*                                          SecurityComputerSound;                                   // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FirstFloorHatchDoor[0x10];                               // 0x0338(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              TazTDoor[0x10];                                          // 0x0348(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LivingQuartersDoor[0x10];                                // 0x0358(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              StorageRoomDoor[0x10];                                   // 0x0368(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    CurrentlyShownScreenIndex;                               // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ScreenPaused;                                            // 0x037C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RedrawScreen();
		void GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText);
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
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
		void PlayPondBootupSequence();
		void ReceiveBeginPlay();
		void ShowWaiting();
		void BndEvt__ConditionalToggle_UnlockSecurityDoor01_K2Node_ComponentBoundEvent_2_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__CT_DomeTerminalRebooted_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void ShowCompleted();
		void BndEvt__CT_LowPowerWaitScreen_K2Node_ComponentBoundEvent_3_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__CT_UnlockedScreen_K2Node_ComponentBoundEvent_4_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_PondLab_SecurityTerminal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
