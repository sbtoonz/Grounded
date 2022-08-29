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
	 * BlueprintGeneratedClass BP_SurvivalGameInstance.BP_SurvivalGameInstance_C
	 * Size -> 0x01A8 (FullSize[0x0968] - InheritedSize[0x07C0])
	 */
	class UBP_SurvivalGameInstance_C : public USurvivalGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       UseColorblindUITheme;                                    // 0x07C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7QJI[0x7];                                   // 0x07C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_WidgetDragManager_C*                             WidgetDragManager;                                       // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextPlayerColorIndex;                                    // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextPlayerIndex;                                         // 0x07DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseLAN;                                                  // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z5JW[0x3];                                   // 0x07E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ServerTimeOffset;                                        // 0x07E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          AcceptInviteTitle;                                       // 0x07E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          AcceptInviteBody;                                        // 0x07F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FBlueprintSessionResult                             PendingInvite;                                           // 0x0808(0x0108) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_ConfirmationPopUp_C*                             CurrentInviteWindow;                                     // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          JoinGameFailureTitle;                                    // 0x0918(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          SessionFullText;                                         // 0x0928(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          SessionDoesNotExistText;                                 // 0x0938(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          UnknownJoinErrorText;                                    // 0x0948(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FLocString                                          EnterPasswordBody;                                       // 0x0958(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentNightUIThemeInstance(class UGlobalColorTheme_Base_C** Instance);
		void GetCurrentUIThemeInstance(class UGlobalColorTheme_Base_C** Instance);
		void OnFailure_4E51F35E4A9471FE5AD0B7BE74317409(class APlayerController* PlayerController);
		void OnSuccess_4E51F35E4A9471FE5AD0B7BE74317409(class APlayerController* PlayerController);
		void OnFailure_EC380EAC42E15B600864FDA296D727FC();
		void OnSuccess_EC380EAC42E15B600864FDA296D727FC(float TimeOffsetSec, float NetworkDelaySec);
		void ReceiveInit();
		void ReceiveShutdown();
		void LogIntoAnalytics();
		void HandleSetIsSinglePlayer(bool SinglePlayer);
		void OnInviteReceived(const struct FBlueprintSessionResult& Result);
		void HandleAcceptedInvite();
		void HandleDismissInvite();
		void CloseCurrentInviteWindow();
		void HandleJoinGameFailure(EJoinSessionFailureResult Result);
		void AskForInviteGamePassword();
		void OnPasswordEntered(const class FString& UserText);
		void OnCancel();
		void HandleJoinOnlineInvite();
		void HandleAcceptTCUIInvite(const struct FBlueprintSessionResult& Result);
		void ExecuteUbergraph_BP_SurvivalGameInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
