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
	 * Class OnlineManager.OnlineBridgeAchievementAdapterForBridge
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UOnlineBridgeAchievementAdapterForBridge : public UObject
	{
	public:
		unsigned char                                              UnknownData_0AWL[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineCheckTimeSyncCallbackProxy
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UOnlineCheckTimeSyncCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMOV[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		class UOnlineCheckTimeSyncCallbackProxy* OnlineCheckTimeSync(class UObject* WorldContextObject);
		void OnCompletedDelegate__DelegateSignature(float TimeOffsetSec, float NetworkDelaySec);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineConstantCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UOnlineConstantCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNZL[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOnlineConstantCallbackProxy* OnlineSynchronizeConstant(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		class FString OnlineConstantGetString(const class FString& ConstantName, const class FString& DefaultValue);
		int32_t OnlineConstantGetInt(const class FString& ConstantName, int32_t DefaultValue);
		float OnlineConstantGetFloat(const class FString& ConstantName, float DefaultValue);
		bool OnlineConstantGetBool(const class FString& ConstantName, bool DefaultValue);
		bool OnlineConstantCheckOnlineVersion();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineFindFriendSessionsCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UOnlineFindFriendSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CV8L[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		class UOnlineFindFriendSessionsCallbackProxy* OnlineFindFriendSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineFindSessionsCallbackProxy
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UOnlineFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHW2[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (PADDING)

	public:
		class UOnlineFindSessionsCallbackProxy* OnlineFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, const class FString& SessionTypes);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineGetFriendListCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UOnlineGetFriendListCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMN2[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class FString OnlineGetFriendPictureURI(const struct FBlueprintFriendResult& Result, EBlueprintProfilePictureSize PictureSize);
		class UOnlineGetFriendListCallbackProxy* OnlineGetFriendList(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& ListName, const class FName& SubsystemName);
		bool OnlineGetFriendIsPlayingThisGame(const struct FBlueprintFriendResult& Result);
		bool OnlineGetFriendIsPlaying(const struct FBlueprintFriendResult& Result);
		bool OnlineGetFriendIsOnline(const struct FBlueprintFriendResult& Result);
		bool OnlineGetFriendIsJoinable(const struct FBlueprintFriendResult& Result);
		int32_t OnlineGetFriendInviteState(const struct FBlueprintFriendResult& Result);
		class FString OnlineGetFriendDisplayName(const struct FBlueprintFriendResult& Result);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineInviteCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UOnlineInviteCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YBOW[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UOnlineInviteCallbackProxy* OnlineSendInvite(class UObject* WorldContextObject, class APlayerController* InPlayerController, const struct FBlueprintFriendResult& TargetPlayer);
		bool OnlineHasInvitationWaitingLogin(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineLinkAccountCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UOnlineLinkAccountCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4S4H[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class UOnlineLinkAccountCallbackProxy* OnlineUnlinkAccount(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		class UOnlineLinkAccountCallbackProxy* OnlineLinkAccount(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		bool OnlineIsLinked(class APlayerController* InPlayerController);
		bool OnlineIsAccountLinkingEnabled(class APlayerController* InPlayerController);
		class FString OnlineGetLinkedAccountDisplayName(class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineLoginCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UOnlineLoginCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HQC[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOnlineLoginCallbackProxy* OnlineLogin(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		bool OnlineIsLoggedIn(class APlayerController* InPlayerController);
		class FString OnlineGetDisplayName(class APlayerController* InPlayerController, const class FName& InSubsystem);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineLogoutCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UOnlineLogoutCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N39A[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOnlineLogoutCallbackProxy* OnlineLogout(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineManager
	 * Size -> 0x02B8 (FullSize[0x02E8] - InheritedSize[0x0030])
	 */
	class UOnlineManager : public UGameInstanceSubsystem
	{
	public:
		class FName                                                SubsystemToLink;                                         // 0x0030(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDevModeDisplayName;                                   // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceDevModeDisplayName;                                 // 0x0039(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0A5[0x2AE];                                 // 0x003A(0x02AE) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlinePermissionCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UOnlinePermissionCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FF8K[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UOnlinePermissionCallbackProxy* OnlineCheckUserPrivilege(class UObject* WorldContextObject, class APlayerController* InPlayerController, EOnlineUserPrivilege InPrivilegeToCheck, bool bSilently, const class FName& InSubsystemName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlinePermissionToTargetCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UOnlinePermissionToTargetCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWHH[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		bool OnlineCheckUserPermissionToCached(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, EOnlinePermission InPermissionToCheck);
		class UOnlinePermissionToTargetCallbackProxy* OnlineCheckUserPermissionTo(class UObject* WorldContextObject, class APlayerController* InPlayerController, class APlayerState* InTargetPlayerState, EOnlinePermission InPermissionToCheck, const class FName& InSubsystemName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineRefreshFriendListCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UOnlineRefreshFriendListCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK53[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (PADDING)

	public:
		class UOnlineRefreshFriendListCallbackProxy* OnlineRefreshFriendList(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& ListName, const class FName& SubsystemName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineSteamAccountLinkingCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UOnlineSteamAccountLinkingCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENKD[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOnlineSteamAccountLinkingCallbackProxy* OnlineSteamAccountLinking(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineSendTextChatCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UOnlineSendTextChatCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             onSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYLE[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnlineSetTTSEnable(class APlayerController* InPlayerController, bool bEnable);
		class UOnlineSendTextChatCallbackProxy* OnlineSendChatMessage(class UObject* WorldContextObject, class APlayerController* PlayerControllerconst, const class FString& InChatMessage);
		bool OnlineIsTTSEnabled(class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineManager.OnlineVOIPBluePrintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOnlineVOIPBluePrintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool OnlineVoiceSetPlayerVolume(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, float InVolume);
		bool OnlineVoicePlayerIsMuted(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState);
		void OnlineVoiceMutePlayer(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, bool bMute);
		bool OnlineVoiceMicIsEnabled(class APlayerController* InPlayerController);
		bool OnlineVoiceIsPlayerTalking(class APlayerState* TargetPlayerState);
		bool OnlineVoiceIsPlayerIncomingChannelEnabled(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel);
		bool OnlineVoiceIsLocalPlayerTalking(class APlayerController* InPlayerController);
		float OnlineVoiceGetPlayerVolume(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState);
		void OnlineVoiceEnablePlayerIncomingChannel(class APlayerController* InPlayerController, class APlayerState* TargetPlayerState, EOnlineVoiceIncomingChannel IncomingChannel, bool bEnable);
		void OnlineVoiceEnableMic(class APlayerController* InPlayerController, bool bEnable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
