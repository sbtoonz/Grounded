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
	 * BlueprintGeneratedClass BP_PondLab_Biodome_Terminal.BP_PondLab_Biodome_Terminal_C
	 * Size -> 0x00D0 (FullSize[0x0358] - InheritedSize[0x0288])
	 */
	class ABP_PondLab_Biodome_Terminal_C : public ASwitch
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_DomeOpen;                              // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     TerminalSFXLoop;                                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_Vis_WaitScreen;                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_Vis_UnlockScreen;                      // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_Vis_LoginScreen;                       // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_TerminalInteractable;                  // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UConditionalToggleComponent*                         ConditionalToggle_TerminalOnceOnly;                      // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FDataTableRowHandle>                         RequiredPasswordKeyItems;                                // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLocString                                          InteractionText_Reboot;                                  // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          InteractionText_Login;                                   // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScreenDMI;                                               // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_PondDomeTerminal_C*                              UserWidgetObjectRef;                                     // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InteractionBlocked;                                      // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THPG[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BiodomeOpen;                                             // 0x0320(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              Dome_Door[0x10];                                         // 0x0330(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       ScreenPaused;                                            // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7XG2[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentlyShownScreenIndex;                               // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              HatchDoor[0x10];                                         // 0x0348(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void GetInteractionText(EInteractionChannel Channel, class AActor* InstigatedBy, class FString* OutText);
		EInteractionState IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy);
		void PartyHasAllPasswordPieces(bool* PartyHasAllPasswordPieces);
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
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__ConditionalToggle_Vis_LoginScreen_K2Node_ComponentBoundEvent_0_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void BndEvt__ConditionalToggle_Vis_UnlockScreen_K2Node_ComponentBoundEvent_1_OnConditionalStateChanged__DelegateSignature(bool bIsActive);
		void RedrawScreen();
		void ExecuteUbergraph_BP_PondLab_Biodome_Terminal(int32_t EntryPoint);
		void BiodomeOpen__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
