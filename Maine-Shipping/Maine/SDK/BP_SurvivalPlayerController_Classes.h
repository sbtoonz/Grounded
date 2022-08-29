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
	 * BlueprintGeneratedClass BP_SurvivalPlayerController.BP_SurvivalPlayerController_C
	 * Size -> 0x0028 (FullSize[0x07F8] - InheritedSize[0x07D0])
	 */
	class ABP_SurvivalPlayerController_C : public ASurvivalPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FLocString                                          PhotoModeUnavailableTitle;                               // 0x07D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          PhotoModeUnavailableMPText;                              // 0x07E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void StopLoadingScreenOnClient();
		void HandleGameModeChanged(int32_t GameModeSelection, EGameMode GameMode);
		void InpActEvt_VoiceChat_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_VoiceChat_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Alt_U_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_MainePhoto_ToggleUI_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_MainePhoto_ToggleSettings_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ServerSpawnAsPlayer();
		void IdentityCheck();
		void ServerToggleSpectatorMode();
		void ReceiveBeginPlay();
		void BroadcastGameModeChange(EGameMode GameMode);
		void UpdateSelectedGameMode(EGameMode GameMode);
		void StopLoadingScreen();
		void HandlePhotoModeUnallowedInMP();
		void OnPhotoModeExitedAudio();
		void ExecuteUbergraph_BP_SurvivalPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
