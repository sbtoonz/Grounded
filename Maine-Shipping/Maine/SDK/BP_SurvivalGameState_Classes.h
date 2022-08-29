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
	 * BlueprintGeneratedClass BP_SurvivalGameState.BP_SurvivalGameState_C
	 * Size -> 0x0118 (FullSize[0x0638] - InheritedSize[0x0520])
	 */
	class ABP_SurvivalGameState_C : public ASurvivalGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBP_TutorialManagerComponent_C*                      BP_TutorialManagerComponent;                             // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_QuestManagerComponent_C*                         BP_QuestManagerComponent;                                // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGlobalColorTheme_Base_C*                            CurrentColorTheme;                                       // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DemoEndHour;                                             // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          EndofEarlyAcessWindow_Title;                             // 0x0544(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          EndofEarlyAcessWindow_Body;                              // 0x0554(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_22GW[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BP_LockedMoonPoolDoor[0x10];                             // 0x0568(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_LockedLabDoors[0x10];                                 // 0x0578(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_PowerBreakerDial01[0x10];                             // 0x0588(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_PowerBreakerDial02[0x10];                             // 0x0598(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_PowerBreakerDial03[0x10];                             // 0x05A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_PowerTerminal[0x10];                                  // 0x05B8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_SecurityTerminal[0x10];                               // 0x05C8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_BiodomeTerminal[0x10];                                // 0x05D8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              PondTriggerVolumes[0x10];                                // 0x05E8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		EGamePackageType                                           IsPublicTest;                                            // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CUJ1[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BP_LockedMoonPoolDoor_1[0x10];                           // 0x0600(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              BP_ControlPanel[0x10];                                   // 0x0610(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FDataTableRowHandle                                 PondQuest;                                               // 0x0620(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FName                                                Key_Item_Row_Handle_Row_Name;                            // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandlePartyKeyItemObtained(const struct FDataTableRowHandle& QuestItem, class ASurvivalPlayerState* AcquirerPlayerState);
		void ReceiveBeginPlay();
		void OnKeyItemObtained(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void MulticastHandleEndOfDemo();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnHourChanged(int32_t NewHour, int32_t NewDay);
		void HandleEndEarlyAccessConent();
		void EndOfEarlyAccessContentConfirmationWindow_Accept();
		void HandlePatchSaveGameRepair(const struct FGameVersion& LoadedVersion, EGamePackageType GamePackageType);
		void BndEvt__BP_SurvivalGameState_PartyComponent_K2Node_ComponentBoundEvent_0_OnKeyItemObtainedDelegate__DelegateSignature(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void ExecuteUbergraph_BP_SurvivalGameState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
